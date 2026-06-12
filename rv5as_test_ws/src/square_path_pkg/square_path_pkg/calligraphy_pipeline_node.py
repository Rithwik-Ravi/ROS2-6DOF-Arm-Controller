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

import cv2
import numpy as np
from abc import ABC, abstractmethod

class ToolpathGenerator(ABC):
    @abstractmethod
    def generate(self) -> list:
        pass

class TextCalligraphyStrategy(ToolpathGenerator):
    def __init__(self, text: str, letter_size_mm: float = 8.0):
        self.text = text.upper().strip()
        self.letter_size_m = letter_size_mm / 1000.0
        
        # Single stroke font ported from C#
        self.font = {
            'A': [[(0,1), (0.15,0.4), (0.5,0), (0.85,0.4), (1,1)], [(0.2,0.6), (0.8,0.6)]],
            'B': [[(0,0), (0,1)], [(0,0), (0.6,0), (0.85,0.1), (0.85,0.4), (0.6,0.5), (0,0.5)], [(0,0.5), (0.6,0.5), (0.9,0.6), (0.9,0.9), (0.6,1), (0,1)]],
            'C': [[(1,0.15), (0.7,0), (0.3,0), (0,0.15), (0,0.85), (0.3,1), (0.7,1), (1,0.85)]],
            'D': [[(0,0), (0,1)], [(0,0), (0.5,0), (0.85,0.15), (1,0.5), (0.85,0.85), (0.5,1), (0,1)]],
            'E': [[(1,0), (0.3,0), (0,0.15), (0,0.85), (0.3,1), (1,1)], [(0,0.5), (0.7,0.5)]],
            'F': [[(1,0), (0.3,0), (0,0.15), (0,1)], [(0,0.5), (0.7,0.5)]],
            'G': [[(1,0.15), (0.7,0), (0.3,0), (0,0.15), (0,0.85), (0.3,1), (0.7,1), (1,0.85), (1,0.5), (0.5,0.5)]],
            'H': [[(0,0), (0,1)], [(1,0), (1,1)], [(0,0.5), (1,0.5)]],
            'I': [[(0.5,0), (0.5,1)], [(0.2,0), (0.8,0)], [(0.2,1), (0.8,1)]],
            'J': [[(0.8,0), (0.8,0.75), (0.6,0.95), (0.3,0.95), (0.1,0.75), (0.1,0.5)]],
            'K': [[(0,0), (0,1)], [(0.9,0), (0.1,0.5)], [(0.25,0.45), (0.9,1)]],
            'L': [[(0,0), (0,0.85), (0.15,1), (1,1)]],
            'M': [[(0,1), (0,0), (0.5,0.45), (1,0), (1,1)]],
            'N': [[(0,1), (0,0), (1,1), (1,0)]],
            'O': [[(0.5,0), (0.85,0.1), (1,0.5), (0.85,0.9), (0.5,1), (0.15,0.9), (0,0.5), (0.15,0.1), (0.5,0)]],
            'P': [[(0,1), (0,0), (0.6,0), (0.85,0.1), (0.85,0.4), (0.6,0.5), (0,0.5)]],
            'Q': [[(0.5,0), (0.85,0.1), (1,0.5), (0.85,0.9), (0.5,1), (0.15,0.9), (0,0.5), (0.15,0.1), (0.5,0)], [(0.6,0.7), (1,1)]],
            'R': [[(0,1), (0,0), (0.6,0), (0.85,0.1), (0.85,0.4), (0.6,0.5), (0,0.5)], [(0.4,0.5), (1,1)]],
            'S': [[(0.85,0.15), (0.6,0), (0.3,0), (0.1,0.15), (0.1,0.35), (0.5,0.5), (0.9,0.65), (0.9,0.85), (0.7,1), (0.3,1), (0.15,0.85)]],
            'T': [[(0,0), (1,0)], [(0.5,0), (0.5,1)]],
            'U': [[(0,0), (0,0.75), (0.15,0.95), (0.5,1), (0.85,0.95), (1,0.75), (1,0)]],
            'V': [[(0,0), (0.5,1), (1,0)]],
            'W': [[(0,0), (0.2,1), (0.5,0.4), (0.8,1), (1,0)]],
            'X': [[(0,0), (0.45,0.45), (1,1)], [(1,0), (0.55,0.45), (0,1)]],
            'Y': [[(0,0), (0.5,0.5), (1,0)], [(0.5,0.5), (0.5,1)]],
            'Z': [[(0,0), (1,0), (0,1), (1,1)]],
            ' ': [],
            '0': [[(0.5,0), (0.85,0.1), (1,0.5), (0.85,0.9), (0.5,1), (0.15,0.9), (0,0.5), (0.15,0.1), (0.5,0)]],
            '1': [[(0.3,0.2), (0.5,0), (0.5,1)], [(0.2,1), (0.8,1)]],
            '2': [[(0,0.2), (0.2,0), (0.8,0), (1,0.2), (1,0.4), (0,1), (1,1)]],
            '3': [[(0,0), (1,0), (1,0.5), (0.3,0.5)], [(1,0.5), (1,1), (0,1)]],
            '4': [[(0,0), (0,0.5), (1,0.5)], [(0.75,0), (0.75,1)]],
            '5': [[(1,0), (0,0), (0,0.5), (0.8,0.5), (1,0.7), (0.8,1), (0,1)]],
            '6': [[(1,0), (0,0), (0,1), (1,1), (1,0.5), (0,0.5)]],
            '7': [[(0,0), (1,0), (0.3,1)]],
            '8': [[(0.5,0.5), (0,0.3), (0,0), (1,0), (1,0.3), (0.5,0.5), (0,0.7), (0,1), (1,1), (1,0.7), (0.5,0.5)]],
            '9': [[(1,0.5), (0,0.5), (0,0), (1,0), (1,1), (0,1)]],
            '!': [[(0.5,0), (0.5,0.7)], [(0.5,0.85), (0.5,1.0)]],
            '?': [[(0,0.2), (0.2,0), (0.8,0), (1,0.2), (0.5,0.5), (0.5,0.7)], [(0.5,0.85), (0.5,1.0)]]
        }
        
    def generate(self) -> list:
        if not self.text:
            return []
            
        strokes_uv = []
        words = self.text.split()
        if not words:
            return []
            
        char_u = self.letter_size_m / 0.20 # 20cm canvas span
        char_v = self.letter_size_m / 0.20
        char_space_u = 0.3 * char_u
        line_space_v = 0.6 * char_v
        margin = 0.05
        avail_u = 1.0 - 2 * margin
        avail_v = 1.0 - 2 * margin
        default_word_space_u = 0.8 * char_u
        
        # Calculate widths
        word_widths = []
        for word in words:
            n = sum(1 for c in word if c in self.font)
            word_widths.append(n * char_u + max(0, n - 1) * char_space_u)
            
        lines = []
        curr_line = []
        curr_width = 0
        for i, word in enumerate(words):
            needed = (default_word_space_u + word_widths[i]) if curr_line else word_widths[i]
            if curr_line and curr_width + needed > avail_u:
                lines.append(curr_line)
                curr_line = [i]
                curr_width = word_widths[i]
            else:
                curr_line.append(i)
                curr_width += needed
        if curr_line:
            lines.append(curr_line)
            
        total_h = len(lines) * char_v + (len(lines) - 1) * line_space_v
        start_v = margin + max(0, (avail_v - total_h) / 2.0)
        
        for line_idx, line in enumerate(lines):
            line_v = start_v + line_idx * (char_v + line_space_v)
            line_words_w = sum(word_widths[i] for i in line)
            
            if line_idx < len(lines) - 1 and len(line) > 1:
                actual_word_space = (avail_u - line_words_w) / (len(line) - 1)
                line_start_u = margin
            else:
                actual_word_space = default_word_space_u
                line_width = line_words_w + (len(line) - 1) * default_word_space_u
                line_start_u = margin + (avail_u - line_width) / 2.0
                
            cursor_u = line_start_u
            for wi_idx, wi in enumerate(line):
                word = words[wi]
                for ci, c in enumerate(word):
                    if c not in self.font:
                        cursor_u += char_u + (char_space_u if ci < len(word)-1 else 0)
                        continue
                        
                    for stroke in self.font[c]:
                        stroke_pts = []
                        for pt in stroke:
                            sx, sy = pt
                            u = cursor_u + sx * char_u
                            v = line_v + sy * char_v
                            stroke_pts.append((u, v))
                        if len(stroke_pts) > 1:
                            strokes_uv.append(stroke_pts)
                            
                    cursor_u += char_u
                    if ci < len(word) - 1:
                        cursor_u += char_space_u
                        
                if wi_idx < len(line) - 1:
                    cursor_u += actual_word_space
                    
        return strokes_uv


class ImageVectorizationStrategy(ToolpathGenerator):
    def __init__(self, image_path: str, detail_level: int = 20):
        self.image_path = image_path
        self.detail_level = detail_level
        
    def generate(self) -> list:
        img = cv2.imread(self.image_path, cv2.IMREAD_GRAYSCALE)
        if img is None:
            raise Exception(f"Failed to load image: {self.image_path}")
            
        blurred = cv2.GaussianBlur(img, (5, 5), 0)
        edges = cv2.Canny(blurred, 50, 150)
        
        # Find contours
        contours, _ = cv2.findContours(edges, cv2.RETR_LIST, cv2.CHAIN_APPROX_SIMPLE)
        
        epsilon_factor = 0.005 + ((100 - self.detail_level) / 99.0) * 0.015
        
        raw_paths = []
        for cnt in contours:
            epsilon = epsilon_factor * cv2.arcLength(cnt, False)
            approx = cv2.approxPolyDP(cnt, epsilon, False)
            if len(approx) > 1 and cv2.arcLength(approx, False) > 5.0:
                pts = [(pt[0][0], pt[0][1]) for pt in approx]
                raw_paths.append(pts)
                
        if not raw_paths:
            return []
            
        # Optimize Path (Nearest Neighbor TSP)
        optimized = []
        unvisited = list(raw_paths)
        current = unvisited.pop(0)
        optimized.append(current)
        
        while unvisited:
            curr_end = current[-1]
            best_idx = -1
            min_dist = float('inf')
            needs_reverse = False
            
            for i, path in enumerate(unvisited):
                start = path[0]
                end = path[-1]
                
                d_start = (start[0]-curr_end[0])**2 + (start[1]-curr_end[1])**2
                d_end = (end[0]-curr_end[0])**2 + (end[1]-curr_end[1])**2
                
                if d_start < min_dist:
                    min_dist = d_start
                    best_idx = i
                    needs_reverse = False
                if d_end < min_dist:
                    min_dist = d_end
                    best_idx = i
                    needs_reverse = True
                    
            nxt = unvisited.pop(best_idx)
            if needs_reverse:
                nxt.reverse()
            optimized.append(nxt)
            current = nxt
            
        # Scale to 20x20 cm UV bounding box maintaining aspect ratio
        h, w = img.shape
        scale = min(1.0 / w, 1.0 / h) * 0.9  # 5% margin on each side (0.9 scale max)
        
        target_w = w * scale
        target_h = h * scale
        
        start_u = 0.05 + (0.9 - target_w) / 2.0
        start_v = 0.05 + (0.9 - target_h) / 2.0
        
        strokes_uv = []
        for path in optimized:
            stroke = []
            for pt in path:
                u = start_u + pt[0] * scale
                v = start_v + pt[1] * scale
                stroke.append((u, v))
            strokes_uv.append(stroke)
            
        return strokes_uv


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
        
        mode = self.get_parameter('mode').value
        text_val = self.get_parameter('text').value
        image_path_val = self.get_parameter('image_path').value
        
        if mode == 'text':
            self.strategy = TextCalligraphyStrategy(text=text_val, letter_size_mm=25.0)
        elif mode == 'image':
            if not image_path_val:
                self.get_logger().error("An image_path parameter is required for image mode!")
                return
            self.strategy = ImageVectorizationStrategy(image_path=image_path_val)
        else:
            self.get_logger().error(f"Unknown mode '{mode}'. Use 'text' or 'image'.")
            return
            
        self.get_logger().info(f"MoveIt 2 connected. Strategy set to '{mode}'. Calculating calligraphy toolpath...")
        self.execute_calligraphy()

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
            
        # Scale down the trajectory speed manually
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
