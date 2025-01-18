import pyrealsense2 as rs
import cv2
import numpy as np
import rclpy
import threading
import time
from rclpy.node import Node
from std_msgs.msg import String

class ImageProcess(Node):
    def __init__(self):
        super().__init__('image_process')
        self.publisher_ = self.create_publisher(String, 'topic_direction', 10)
        self.timer_period = 2
        self.timer = self.create_timer(self.timer_period, self.timer_callback)

        self.bag_file_path = r"/home/curry/rover_sample_data/sec.bag"
        self.latest_data = {"direction": "forward", "degree_diff": "0"}
        self.data_lock = threading.Lock()

        self.bag_processing_thread = threading.Thread(target=self.read_bag_continuously)
        self.bag_processing_thread.daemon = True
        self.bag_processing_thread.start()


    def timer_callback(self):
        # bag_file_path = r"/home/curry/rover_sample_data/sec.bag"
        # direction, degree_diff = ImageProcess.read_bag_with_opencv(bag_file_path)

        with self.data_lock:
            direction = self.latest_data["direction"]
            degree_diff = self.latest_data["degree_diff"]
        #degree_diff_str = str(degree_diff)
        combined_message = f"{direction},{degree_diff}"
        self.get_logger().info(f"Publishing: {combined_message}")

        msg = String()
        msg.data = combined_message
        self.publisher_.publish(msg)

    def fix_crop_image(self, h, s, v):
        top = [0, 280]
        low = [600, 720]
        left = [0, 350]
        right = [900, 1280]

        h[top[0]:top[1], :] = 179
        h[low[0]:low[1], :] = 179
        h[:, left[0]:left[1]] = 179
        h[:, right[0]:right[1]] = 179

        s[top[0]:top[1], :] = 255
        s[low[0]:low[1], :] = 255
        s[:, left[0]:left[1]] = 255
        s[:, right[0]:right[1]] = 255

        v[top[0]:top[1], :] = 0
        v[low[0]:low[1], :] = 0
        v[:, left[0]:left[1]] = 0
        v[:, right[0]:right[1]] = 0
        return cv2.merge([h, s, v])

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

    #modified using Hough
    def find_line_center(self, edges, color_image):
        lines = cv2.HoughLinesP(edges, 1, np.pi / 180, threshold=100, minLineLength=50, maxLineGap=10)
        if lines is not None:
            for line in lines:
                for x1, y1, x2, y2 in line:
                    # Filter based on line length and angle
                    length = np.sqrt((x2 - x1) ** 2 + (y2 - y1) ** 2)
                    angle = np.abs(np.arctan2(y2 - y1, x2 - x1) * 180 / np.pi)
                    if length > 100 and (80 < angle < 100 or angle < 10 or angle > 170):
                        ##cv2.line(color_image, (x1, y1), (x2, y2), (0, 255, 0), 2)
                        center_x = (x1 + x2) // 2
                        center_y = (y1 + y2) // 2
                        ##cv2.circle(color_image, (center_x, center_y), 5, (0, 255, 0), -1)
                        return center_x, center_y
        return None, None

    def contour_find_line(self, edges, color_image):
        contours, _ = cv2.findContours(edges, cv2.RETR_TREE, cv2.CHAIN_APPROX_SIMPLE)
        if contours:
            max_contour = max(contours, key=cv2.contourArea)
            x, y, w, h = cv2.boundingRect(max_contour)
            center_x = x + w // 2
            center_y = y + h // 2
            ##cv2.rectangle(color_image, (x, y), (x + w, y + h), (0, 255, 0), 2)
            ##cv2.circle(color_image, (center_x, center_y), 5, (255, 0, 0), -1)
            return center_x, center_y
        return None, None

    # def refer_point(color_image):
    #     cv2.circle(color_image, (625, 440), 5, (0, 0, 255), -1)
    #     return None

    def control_robot(self, contour_center_x, img_center):
        if contour_center_x is not None:
            if (contour_center_x < img_center) and (img_center - contour_center_x > 42):
                pixel_diff = img_center - contour_center_x
                degree_diff = (180/1280) * pixel_diff
                degree_diff_int = int(degree_diff)
                degree_diff_str = f"{degree_diff_int}" 
                direction = "lf"
                #print("Turn left : ", degree_diff)
                return direction, degree_diff_str
            elif (contour_center_x > img_center) and (contour_center_x - img_center > 42):
                pixel_diff = contour_center_x - img_center
                degree_diff_int = int(degree_diff)
                degree_diff_str = f"{degree_diff_int}" 
                direction = "ri"
                #print("Turn right : ", degree_diff)
                return direction, degree_diff_str
            else:
                degree_diff_str = "0"
                direction = "fw"
                return direction, degree_diff_str
                #print("Move forward")
        else:
            print("No line detected")
            degree_diff_str = "0"
            direction = "fw"
            return direction, degree_diff_str

    def read_bag_continuously(self):
        while rclpy.ok():  # Continue until ROS is shutdown
            pipeline = rs.pipeline()
            config = rs.config()

            try:
                print(f"Reading bag file: {self.bag_file_path}")
                config.enable_device_from_file(self.bag_file_path)
                config.enable_stream(rs.stream.color, 1280, 720, rs.format.rgb8, 30)
                pipeline.start(config)
                print("Pipeline started successfully.")

                while rclpy.ok():  # Process frames until the end of the file
                    try:
                        frames = pipeline.wait_for_frames()
                        color_frame = frames.get_color_frame()
                        if not color_frame:
                            continue

                        color_image = np.asarray(color_frame.get_data())
                        hsv_img = cv2.cvtColor(color_image, cv2.COLOR_RGB2HSV)
                        h, s, v = cv2.split(hsv_img)
                        crop_img = self.fix_crop_image(h, s, v)

                        gray_white = self.filter_white_lines(crop_img)
                        edges = self.detect_line(gray_white)
                        center_x, _ = self.contour_find_line(edges, color_image)

                        direction, degree_diff = self.control_robot(center_x, 625)

                        # Update shared data
                        with self.data_lock:
                            self.latest_data["direction"] = direction
                            self.latest_data["degree_diff"] = degree_diff

                    except RuntimeError:
                        print("End of bag file reached.")
                        break

            except Exception as e:
                self.get_logger().error(f"Error reading bag file: {e}")

            finally:
                try:
                    pipeline.stop()
                except RuntimeError as stop_error:
                    self.get_logger().error(f"Pipeline stop error: {stop_error}")
                cv2.destroyAllWindows()

            # Wait briefly before restarting the pipeline to avoid resource contention
            print("Restarting the pipeline...")
            time.sleep(1)

def main(args=None):
    rclpy.init(args=args)

    image_process = ImageProcess()

    rclpy.spin(image_process)

    image_process.destroy_node()
    rclpy.shutdown()

if __name__ == "__main__":
    main()