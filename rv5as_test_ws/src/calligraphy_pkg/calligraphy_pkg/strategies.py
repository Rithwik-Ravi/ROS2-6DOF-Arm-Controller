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
            
        # Blur slightly to remove noise
        blurred = cv2.medianBlur(img, 5)
        
        # Adaptive Thresholding handles varied lighting and captures line art much better
        # block_size must be odd. Base it on detail_level (e.g. detail_level=1 -> block 51, detail_level=100 -> block 5)
        block_size = int(51 - (self.detail_level / 100.0) * 46)
        if block_size % 2 == 0:
            block_size += 1
            
        edges = cv2.adaptiveThreshold(blurred, 255, cv2.ADAPTIVE_THRESH_GAUSSIAN_C, cv2.THRESH_BINARY_INV, block_size, 5)
        
        # Morphological Closing to merge double-lines and remove small noise
        kernel_size = 2 + int((100 - self.detail_level) / 33)
        kernel = np.ones((kernel_size, kernel_size), np.uint8)
        edges = cv2.morphologyEx(edges, cv2.MORPH_CLOSE, kernel)
        
        # Find contours using RETR_TREE to understand hierarchy
        contours, hierarchy = cv2.findContours(edges, cv2.RETR_TREE, cv2.CHAIN_APPROX_SIMPLE)
        
        epsilon_factor = 0.005 + ((100 - self.detail_level) / 99.0) * 0.02
        min_arc_length = 20.0 + ((100 - self.detail_level) / 99.0) * 80.0
        
        raw_paths = []
        if hierarchy is not None:
            hierarchy = hierarchy[0]
            for i, cnt in enumerate(contours):
                # Ignore small noise and redundant inner contours of thick lines
                # If it has a parent AND has a child, it's often the inner loop of a thick outline. We can skip it.
                if hierarchy[i][3] != -1 and hierarchy[i][2] != -1:
                    continue
                    
                epsilon = epsilon_factor * cv2.arcLength(cnt, True)
                approx = cv2.approxPolyDP(cnt, epsilon, True)
                if len(approx) > 2 and cv2.arcLength(approx, True) > min_arc_length:
                    pts = [(pt[0][0], pt[0][1]) for pt in approx]
                    pts.append(pts[0]) # Close the loop
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
