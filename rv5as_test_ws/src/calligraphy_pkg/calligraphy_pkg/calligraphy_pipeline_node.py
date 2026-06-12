#!/usr/bin/env python3
import math
import time
import rclpy
from rclpy.node import Node
from rclpy.action import ActionClient
from geometry_msgs.msg import Pose
from moveit_msgs.srv import GetCartesianPath
from moveit_msgs.action import ExecuteTrajectory
from tf2_ros.buffer import Buffer
from tf2_ros.transform_listener import TransformListener

from calligraphy_pkg.strategies import TextCalligraphyStrategy, ImageVectorizationStrategy


class CalligraphyPipelineNode(Node):
    def __init__(self):
        super().__init__('calligraphy_pipeline_node')
        self.cartesian_client = self.create_client(GetCartesianPath, '/compute_cartesian_path')
        self.execute_client = ActionClient(self, ExecuteTrajectory, '/execute_trajectory')
        
        self.tf_buffer = Buffer()
        self.tf_listener = TransformListener(self.tf_buffer, self)
        
        while not self.cartesian_client.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('Waiting for MoveIt 2 Cartesian Path service...')
            
        # Declare and read parameters
        self.declare_parameter('mode', 'text')
        self.declare_parameter('text', 'HELLO ROS2')
        self.declare_parameter('image_path', '')
        self.declare_parameter('speed_scale', 0.2)
        self.declare_parameter('letter_size', 8.0)
        self.declare_parameter('detail_level', 20)
        
        mode = self.get_parameter('mode').value
        text_val = self.get_parameter('text').value
        image_path_val = self.get_parameter('image_path').value
        self.speed_scale = self.get_parameter('speed_scale').value
        letter_size_val = self.get_parameter('letter_size').value
        detail_level_val = self.get_parameter('detail_level').value
        
        if mode == 'text':
            self.strategy = TextCalligraphyStrategy(text=text_val, letter_size_mm=letter_size_val)
        elif mode == 'image':
            if not image_path_val:
                self.get_logger().error("An image_path parameter is required for image mode!")
                return
            self.strategy = ImageVectorizationStrategy(image_path=image_path_val, detail_level=detail_level_val)
        elif mode == 'home':
            self.get_logger().info("Mode set to 'home'. Returning robot to safe home position.")
            self.execute_home()
            return
        else:
            self.get_logger().error(f"Unknown mode '{mode}'. Use 'text', 'image', or 'home'.")
            return
            
        self.get_logger().info(f"MoveIt 2 connected. Strategy set to '{mode}'. Calculating calligraphy toolpath...")
        self.execute_calligraphy()

    def execute_home(self):
        self.get_logger().info('Waiting for TF from rv5as_base to rv5as_default_tcp...')
        timeout_sec = 5.0
        start_time = time.time()
        start_pose = Pose()
        
        while time.time() - start_time < timeout_sec:
            rclpy.spin_once(self, timeout_sec=0.1)
            try:
                trans = self.tf_buffer.lookup_transform('rv5as_base', 'rv5as_default_tcp', rclpy.time.Time())
                start_pose.position.x = trans.transform.translation.x
                start_pose.position.y = trans.transform.translation.y
                start_pose.position.z = trans.transform.translation.z
                start_pose.orientation = trans.transform.rotation
                break
            except Exception as e:
                pass
        else:
            self.get_logger().error('Failed to get TF for robot pose!')
            return
            
        req_home = GetCartesianPath.Request()
        req_home.group_name = 'rv5as'
        req_home.header.frame_id = 'rv5as_base'
        req_home.max_step = 0.01
        
        # Step 1: Move up to safe Z
        wp1 = Pose()
        wp1.position.x = start_pose.position.x
        wp1.position.y = start_pose.position.y
        wp1.position.z = 0.40
        wp1.orientation = start_pose.orientation
        
        # Step 2: Move to safe XY Home
        wp2 = Pose()
        wp2.position.x = 0.40
        wp2.position.y = 0.0
        wp2.position.z = 0.40
        wp2.orientation = start_pose.orientation
        
        req_home.waypoints = [wp1, wp2]
        self.get_logger().info('Lifting pen and moving to Home (0.4, 0.0, 0.4)...')
        if self.plan_and_execute(req_home):
            self.get_logger().info('Returned to home successfully.')
        else:
            self.get_logger().error('Failed to return to home.')

    def execute_calligraphy(self):
        self.get_logger().info('Waiting for TF from rv5as_base to rv5as_default_tcp...')
        timeout_sec = 5.0
        start_time = time.time()
        start_pose = Pose()
        
        while time.time() - start_time < timeout_sec:
            rclpy.spin_once(self, timeout_sec=0.1)
            try:
                trans = self.tf_buffer.lookup_transform('rv5as_base', 'rv5as_default_tcp', rclpy.time.Time())
                start_pose.position.x = trans.transform.translation.x
                start_pose.position.y = trans.transform.translation.y
                start_pose.position.z = trans.transform.translation.z
                start_pose.orientation = trans.transform.rotation
                break
            except Exception as e:
                pass
        else:
            self.get_logger().error('Failed to get TF for robot pose!')
            return

        cx = start_pose.position.x
        cy = start_pose.position.y
        draw_z = start_pose.position.z
        transit_z = draw_z + 0.015 # 1.5 cm Pen Up altitude
        
        if not hasattr(self, 'strategy'):
            return
            
        strokes_uv = self.strategy.generate()
        if not strokes_uv:
            self.get_logger().warning("No strokes generated by strategy.")
            return
            
        self.get_logger().info(f"Generated {len(strokes_uv)} strokes. Beginning execution.")
        
        # 20cm x 20cm Canvas mapping (U, V -> X, Y)
        canvas_size = 0.20
        def uv_to_world(u, v):
            x = cx - (canvas_size / 2.0) + (u * canvas_size)
            y = cy - (canvas_size / 2.0) + (v * canvas_size)
            return x, y

        # Initial lift to transit altitude to avoid dragging pen
        req_lift = GetCartesianPath.Request()
        req_lift.group_name = 'rv5as'
        req_lift.header.frame_id = 'rv5as_base'
        req_lift.max_step = 0.01
        
        wp_lift = Pose()
        wp_lift.position.x = cx
        wp_lift.position.y = cy
        wp_lift.position.z = transit_z
        wp_lift.orientation = start_pose.orientation
        req_lift.waypoints = [wp_lift]
        
        self.get_logger().info('Lifting pen to transit altitude...')
        if not self.plan_and_execute(req_lift):
            return

        for i, stroke in enumerate(strokes_uv):
            if len(stroke) < 2:
                continue
                
            self.get_logger().info(f"Drawing Stroke {i+1}/{len(strokes_uv)}...")
            
            # Request 1: Move XY to start of stroke at Transit Z, then drop to Draw Z
            req_start = GetCartesianPath.Request()
            req_start.group_name = 'rv5as'
            req_start.header.frame_id = 'rv5as_base'
            req_start.max_step = 0.01
            
            x_start, y_start = uv_to_world(stroke[0][0], stroke[0][1])
            
            wp_transit = Pose()
            wp_transit.position.x = x_start
            wp_transit.position.y = y_start
            wp_transit.position.z = transit_z
            wp_transit.orientation = start_pose.orientation
            
            wp_down = Pose()
            wp_down.position.x = x_start
            wp_down.position.y = y_start
            wp_down.position.z = draw_z
            wp_down.orientation = start_pose.orientation
            
            req_start.waypoints = [wp_transit, wp_down]
            if not self.plan_and_execute(req_start):
                return
                
            # Request 2: Draw the stroke
            req_draw = GetCartesianPath.Request()
            req_draw.group_name = 'rv5as'
            req_draw.header.frame_id = 'rv5as_base'
            req_draw.max_step = 0.005 # finer resolution for curves
            
            for pt in stroke[1:]:
                wp = Pose()
                x, y = uv_to_world(pt[0], pt[1])
                wp.position.x = x
                wp.position.y = y
                wp.position.z = draw_z
                wp.orientation = start_pose.orientation
                req_draw.waypoints.append(wp)
                
            if not self.plan_and_execute(req_draw):
                return
                
            # Request 3: Lift pen straight up to Transit Z
            req_up = GetCartesianPath.Request()
            req_up.group_name = 'rv5as'
            req_up.header.frame_id = 'rv5as_base'
            req_up.max_step = 0.01
            
            wp_up = Pose()
            x_end, y_end = uv_to_world(stroke[-1][0], stroke[-1][1])
            wp_up.position.x = x_end
            wp_up.position.y = y_end
            wp_up.position.z = transit_z
            wp_up.orientation = start_pose.orientation
            
            req_up.waypoints = [wp_up]
            if not self.plan_and_execute(req_up):
                return
                
        self.get_logger().info('Calligraphy drawing complete!')

    def plan_and_execute(self, req: GetCartesianPath.Request) -> bool:
        future = self.cartesian_client.call_async(req)
        rclpy.spin_until_future_complete(self, future)
        res = future.result()
        
        if res.fraction < 0.99:
            self.get_logger().error(f'Failed to plan path safely. Only computed {res.fraction*100}%')
            return False
            
        # Scale down the trajectory speed manually for smoothness
        scale = self.speed_scale
        if scale <= 0.0 or scale > 1.0:
            scale = 0.2
            
        for point in res.solution.joint_trajectory.points:
            total_nanosec = point.time_from_start.sec * 1e9 + point.time_from_start.nanosec
            scaled_nanosec = total_nanosec / scale
            point.time_from_start.sec = int(scaled_nanosec // 1e9)
            point.time_from_start.nanosec = int(scaled_nanosec % 1e9)
            if point.velocities:
                point.velocities = [v * scale for v in point.velocities]
            if point.accelerations:
                point.accelerations = [a * scale * scale for a in point.accelerations]
                
        goal_msg = ExecuteTrajectory.Goal()
        goal_msg.trajectory = res.solution
        
        self.execute_client.wait_for_server()
        send_goal_future = self.execute_client.send_goal_async(goal_msg)
        rclpy.spin_until_future_complete(self, send_goal_future)
        goal_handle = send_goal_future.result()
        
        if not goal_handle.accepted:
            self.get_logger().error('Trajectory rejected by controller!')
            return False
            
        result_future = goal_handle.get_result_async()
        rclpy.spin_until_future_complete(self, result_future)
        return True

def main(args=None):
    rclpy.init(args=args)
    node = CalligraphyPipelineNode()
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
