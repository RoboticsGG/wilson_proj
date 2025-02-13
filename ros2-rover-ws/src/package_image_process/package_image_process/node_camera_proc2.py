import pyrealsense2 as rs
import cv2
import numpy as np
import rclpy
import threading
import time
from rclpy.node import Node
from std_msgs.msg import Float32MultiArray

class ImageProcess(Node):
    def __init__(self):
        super().__init__('image_process')
        self.publisher_ = self.create_publisher(Float32MultiArray, 'topic_direction', 10)
        self.timer_period = 1
        self.timer = self.create_timer(self.timer_period, self.timer_callback)

        self.latest_data = {"direction": 2, "degree_diff": 0.0, "objblock": 0.0}
        self.data_lock = threading.Lock()

        self.camera_thread = threading.Thread(target=self.read_camera_continuously)
        self.camera_thread.daemon = True
        self.camera_thread.start()

    def timer_callback(self):
        with self.data_lock:
            direction = self.latest_data["direction"]
            degree_diff = self.latest_data["degree_diff"]
            objblock = self.latest_data["objblock"]

        degree_diff = round(degree_diff, 2)
        combined_message = Float32MultiArray()
        combined_message.data = [float(direction), float(degree_diff), float(objblock)]

        self.get_logger().info(f"Publishing: {combined_message.data}")
        self.publisher_.publish(combined_message)

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
        return cv2.Canny(image, 150, 200)

    def contour_find_line(self, edges):
        contours, _ = cv2.findContours(edges, cv2.RETR_TREE, cv2.CHAIN_APPROX_SIMPLE)
        if contours:
            max_contour = max(contours, key=cv2.contourArea)
            x, y, w, h = cv2.boundingRect(max_contour)
            return x + w // 2, y + h // 2
        return None, None

    def control_robot(self, contour_center_x, img_center):
        if contour_center_x is not None:
            if (contour_center_x < img_center) and (img_center - contour_center_x > 42):
                return 1, (180/640) * (img_center - contour_center_x)  # Left
            elif (contour_center_x > img_center) and (contour_center_x - img_center > 42):
                return 3, (180/640) * (contour_center_x - img_center)  # Right
            else:
                return 2, 0.00  # Forward
        else:
            self.get_logger().info("No line detected")
            return 2, 0.00

    def check_object_blockage(self, depth_frame):
        depth_image = np.asanyarray(depth_frame.get_data())
        depth_cm = depth_image * 0.1

        width = depth_cm.shape[1]
        part_width = width // 3

        left_part = depth_cm[:, :part_width]
        middle_part = depth_cm[:, part_width:2*part_width]
        right_part = depth_cm[:, 2*part_width:]

        left_avg = np.mean(left_part[left_part > 0])
        middle_avg = np.mean(middle_part[middle_part > 0])
        right_avg = np.mean(right_part[right_part > 0])

        objblock = 1.0 if any(avg < 25 for avg in [left_avg, middle_avg, right_avg]) else 0.0
        return objblock

    def read_camera_continuously(self):
        pipeline = rs.pipeline()
        config = rs.config()
        config.enable_stream(rs.stream.color, 640, 360, rs.format.bgr8, 30)
        config.enable_stream(rs.stream.depth, 640, 360, rs.format.z16, 30)
        pipeline.start(config)
        
        try:
            while rclpy.ok():
                frames = pipeline.wait_for_frames()
                color_frame = frames.get_color_frame()
                depth_frame = frames.get_depth_frame()
                if not color_frame or not depth_frame:
                    continue

                color_image = np.asanyarray(color_frame.get_data())
                hsv_img = cv2.cvtColor(color_image, cv2.COLOR_BGR2HSV)
                gray_white = self.filter_white_lines(hsv_img)
                edges = self.detect_line(gray_white)
                center_x, _ = self.contour_find_line(edges)
                direction, degree_diff = self.control_robot(center_x, 640)
                objblock = self.check_object_blockage(depth_frame)

                with self.data_lock:
                    self.latest_data["direction"] = direction
                    self.latest_data["degree_diff"] = degree_diff
                    self.latest_data["objblock"] = objblock
                
                self.get_logger().info(f"Direction: {direction}, Degree Diff: {degree_diff}, ObjBlock: {objblock}")
                # cv2.imshow('Camera View', color_image)
                # if cv2.waitKey(1) & 0xFF == ord('q'):
                #     break
        except Exception as e:
            self.get_logger().error(f"Camera error: {e}")
        finally:
            pipeline.stop()
            cv2.destroyAllWindows()

def main(args=None):
    rclpy.init(args=args)
    image_process = ImageProcess()
    rclpy.spin(image_process)
    image_process.destroy_node()
    rclpy.shutdown()

if __name__ == "__main__":
    main()
