#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from rclpy.action import ActionClient
from geometry_msgs.msg import Pose
from moveit_msgs.srv import GetCartesianPath
from moveit_msgs.action import ExecuteTrajectory
from tf2_ros.buffer import Buffer
from tf2_ros.transform_listener import TransformListener
import time

class SquarePathNode(Node):
    def __init__(self):
        super().__init__('square_path_node')
        self.cartesian_client = self.create_client(GetCartesianPath, '/compute_cartesian_path')
        self.execute_client = ActionClient(self, ExecuteTrajectory, '/execute_trajectory')
        
        self.tf_buffer = Buffer()
        self.tf_listener = TransformListener(self.tf_buffer, self)
        
        while not self.cartesian_client.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('Waiting for MoveIt 2 Cartesian Path service...')
            
        self.get_logger().info('MoveIt 2 connected. Calculating safe trajectory from P3...')
        self.execute_square_path()

    def execute_square_path(self):
        self.get_logger().info('Waiting for TF from rv5as_base to rv5as_default_tcp...')
        start_pose = Pose()
        timeout_sec = 5.0
        start_time = time.time()
        
        while time.time() - start_time < timeout_sec:
            rclpy.spin_once(self, timeout_sec=0.1)
            try:
                # Fetch exact current orientation and position from TF
                trans = self.tf_buffer.lookup_transform('rv5as_base', 'rv5as_default_tcp', rclpy.time.Time())
                start_pose.position.x = trans.transform.translation.x
                start_pose.position.y = trans.transform.translation.y
                start_pose.position.z = trans.transform.translation.z
                start_pose.orientation = trans.transform.rotation
                self.get_logger().info(f'Fetched Current Pose: X={start_pose.position.x:.3f}, Y={start_pose.position.y:.3f}, Z={start_pose.position.z:.3f}')
                break
            except Exception as e:
                pass
        else:
            self.get_logger().error('Failed to get TF for robot pose! Is the driver running?')
            return

        # We keep Z and Orientation strictly locked to the current state.
        # We only move in XY plane forming a 10cm square from the CURRENT position.
        cx = start_pose.position.x
        cy = start_pose.position.y
        cz = start_pose.position.z

        # 10cm Square Waypoints in XY Plane starting from current position
        corners = [
            (cx, cy),           # P3 (Start)
            (cx + 0.1, cy),     # Corner 2
            (cx + 0.1, cy + 0.1),# Corner 3
            (cx, cy + 0.1),     # Corner 4
            (cx, cy)            # Back to P3
        ]

        # Plan and execute leg by leg to guarantee a full stop at corners (no blending)
        for i in range(len(corners) - 1):
            start_xy = corners[i]
            end_xy = corners[i+1]
            
            req = GetCartesianPath.Request()
            req.group_name = 'rv5as' # Assista Planning Group
            req.header.frame_id = 'rv5as_base' # Correct frame instead of 'base_link'
            
            waypoint = Pose()
            waypoint.position.x = end_xy[0]
            waypoint.position.y = end_xy[1]
            waypoint.position.z = cz # Strict Z constraint
            waypoint.orientation = start_pose.orientation
            
            req.waypoints.append(waypoint)
            req.max_step = 0.01  # 1 cm planning resolution
            
            self.get_logger().info(f'Planning path to Corner {i+2} ({end_xy[0]:.3f}, {end_xy[1]:.3f})...')
            
            future = self.cartesian_client.call_async(req)
            rclpy.spin_until_future_complete(self, future)
            res = future.result()
            
            if res.fraction < 1.0:
                self.get_logger().error(f'Failed to plan path safely. Only computed {res.fraction*100}%')
                return
                
            # Scale down the trajectory speed manually (since Request fields are unsupported in early Humble)
            scale = 0.05
            for point in res.solution.joint_trajectory.points:
                total_nanosec = point.time_from_start.sec * 1e9 + point.time_from_start.nanosec
                scaled_nanosec = total_nanosec / scale
                point.time_from_start.sec = int(scaled_nanosec // 1e9)
                point.time_from_start.nanosec = int(scaled_nanosec % 1e9)
                if point.velocities:
                    point.velocities = [v * scale for v in point.velocities]
                if point.accelerations:
                    point.accelerations = [a * scale * scale for a in point.accelerations]
                
            self.get_logger().info(f'Executing path to Corner {i+2}...')
            goal_msg = ExecuteTrajectory.Goal()
            goal_msg.trajectory = res.solution
            
            self.execute_client.wait_for_server()
            send_goal_future = self.execute_client.send_goal_async(goal_msg)
            rclpy.spin_until_future_complete(self, send_goal_future)
            goal_handle = send_goal_future.result()
            
            if not goal_handle.accepted:
                self.get_logger().error('Trajectory rejected by controller!')
                return
                
            result_future = goal_handle.get_result_async()
            rclpy.spin_until_future_complete(self, result_future)
            self.get_logger().info(f'Reached Corner {i+2}.')
            time.sleep(1.0) # 1 second pause to verify strict no-blend stop
            
        self.get_logger().info('Square path complete! Safely returned to anchor P3.')

def main(args=None):
    rclpy.init(args=args)
    node = SquarePathNode()
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
