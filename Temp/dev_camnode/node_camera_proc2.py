import pyrealsense2 as rs
import numpy as np
import cv2
import time

class LineDetection:
    def filter_white_lines(self, image):
        blurred = cv2.GaussianBlur(image, (1, 1), 0)
        white_lower = np.array([0, 0, 200], dtype=np.uint8)
        white_upper = np.array([179, 50, 255], dtype=np.uint8)
        mask_white = cv2.inRange(blurred, white_lower, white_upper)
        result_white = cv2.bitwise_and(blurred, blurred, mask=mask_white)
        gray_white = cv2.cvtColor(result_white, cv2.COLOR_HSV2BGR)
        gray_white = cv2.cvtColor(gray_white, cv2.COLOR_BGR2GRAY)
        return gray_white

    def detect_line(self, image):
        edges = cv2.Canny(image, 150, 200)
        return edges

    def find_line_center(self, edges):
        lines = cv2.HoughLinesP(edges, 1, np.pi / 180, threshold=100, minLineLength=50, maxLineGap=10)
        if lines is not None:
            for line in lines:
                for x1, y1, x2, y2 in line:
                    length = np.sqrt((x2 - x1) ** 2 + (y2 - y1) ** 2)
                    angle = np.abs(np.arctan2(y2 - y1, x2 - x1) * 180 / np.pi)
                    if length > 100 and (80 < angle < 100 or angle < 10 or angle > 170):
                        center_x = (x1 + x2) // 2
                        center_y = (y1 + y2) // 2
                        return center_x, center_y
        return None, None

    def contour_find_line(self, edges):
        contours, _ = cv2.findContours(edges, cv2.RETR_TREE, cv2.CHAIN_APPROX_SIMPLE)
        if contours:
            max_contour = max(contours, key=cv2.contourArea)
            x, y, w, h = cv2.boundingRect(max_contour)
            center_x = x + w // 2
            center_y = y + h // 2
            return center_x, center_y
        return None, None

    def control_robot(self, contour_center_x, img_center):
        if contour_center_x is not None:
            if (contour_center_x < img_center) and (img_center - contour_center_x > 42):
                pixel_diff = img_center - contour_center_x
                degree_diff = (180 / 1280) * pixel_diff
                direction = 1  # Left
                return direction, degree_diff
            elif (contour_center_x > img_center) and (contour_center_x - img_center > 42):
                pixel_diff = contour_center_x - img_center
                degree_diff = (180 / 1280) * pixel_diff
                direction = 3  # Right
                return direction, degree_diff
            else:
                degree_diff = 0.00
                direction = 2  # Forward
                return direction, degree_diff
        else:
            print("No line detected")
            return None, None

# Initialize RealSense pipeline
pipeline = rs.pipeline()
config = rs.config()

config.enable_stream(rs.stream.depth, 640, 360, rs.format.z16, 30)
config.enable_stream(rs.stream.color, 640, 360, rs.format.bgr8, 30)

pipeline.start(config)

line_detector = LineDetection()

try:
    while True:
        frames = pipeline.wait_for_frames()
        depth_frame = frames.get_depth_frame()
        color_frame = frames.get_color_frame()

        if not depth_frame or not color_frame:
            continue

        # Convert images to NumPy arrays
        depth_image = np.asanyarray(depth_frame.get_data())
        color_image = np.asanyarray(color_frame.get_data())

        # Depth processing
        depth_sensor = pipeline.get_active_profile().get_device().first_depth_sensor()
        depth_scale = depth_sensor.get_depth_scale()  # Typically 0.001 meters
        depth_scale_cm = depth_scale * 100
        depth_cm = depth_image * depth_scale_cm  # Convert depth to cm

        # Divide depth image into 3 vertical parts
        width = depth_cm.shape[1]
        part_width = width // 3

        left_part = depth_cm[:, :part_width]
        middle_part = depth_cm[:, part_width:2*part_width]
        right_part = depth_cm[:, 2*part_width:]

        def compute_avg_depth(region):
            valid_depths = region[(region > 0) & (region < 150)]
            return np.mean(valid_depths) if valid_depths.size > 0 else 300

        avg_left = compute_avg_depth(left_part)
        avg_middle = compute_avg_depth(middle_part)
        avg_right = compute_avg_depth(right_part)

        print(f"Left: {avg_left:.2f} cm")
        print(f"Middle: {avg_middle:.2f} cm")
        print(f"Right: {avg_right:.2f} cm")

        # Process color image for white line detection
        filtered_white = line_detector.filter_white_lines(color_image)
        edges = line_detector.detect_line(filtered_white)
        line_center_x, line_center_y = line_detector.find_line_center(edges)

        # Draw detected line on color image
        if line_center_x is not None and line_center_y is not None:
            cv2.circle(color_image, (line_center_x, line_center_y), 5, (0, 255, 0), -1)

        # Draw red vertical lines for depth sections
        for img in [depth_image, color_image]:
            cv2.line(img, (part_width, 0), (part_width, img.shape[0]), (0, 0, 255), 2)
            cv2.line(img, (2*part_width, 0), (2*part_width, img.shape[0]), (0, 0, 255), 2)

        # Show images
        cv2.imshow('Intel RealSense Depth', cv2.applyColorMap(cv2.convertScaleAbs(depth_image, alpha=0.03), cv2.COLORMAP_JET))
        cv2.imshow('Intel RealSense Color', color_image)

        time.sleep(1)

        if cv2.waitKey(1) & 0xFF == ord('q'):
            break
finally:
    pipeline.stop()
    cv2.destroyAllWindows()
