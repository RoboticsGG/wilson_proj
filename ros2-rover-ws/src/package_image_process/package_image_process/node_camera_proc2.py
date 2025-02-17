import cv2
import numpy as np
import rclpy
import threading
import os
import time
from rclpy.node import Node
from std_msgs.msg import Float32MultiArray

class ImageProcess(Node):
    def __init__(self):
        super().__init__('image_process')
        self.publisher_ = self.create_publisher(Float32MultiArray, 'topic_direction', 10)
        self.timer_period = 1
        self.timer = self.create_timer(self.timer_period, self.timer_callback)

        self.latest_data = {"direction": 2, "degree_diff": 0.0}
        self.data_lock = threading.Lock()

        self.camera_thread = threading.Thread(target=self.read_camera_continuously)
        self.camera_thread.daemon = True
        self.camera_thread.start()

    def timer_callback(self):
        with self.data_lock:
            direction = self.latest_data["direction"]
            degree_diff = self.latest_data["degree_diff"]

        degree_diff = round(degree_diff, 2)
        combined_message = Float32MultiArray()
        combined_message.data = [float(direction), float(degree_diff)]

        #self.get_logger().info(f"Publishing: {combined_message.data}")
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
        print(f"contour_center_x : {contour_center_x}, img_center : {img_center}")
        if contour_center_x is not None:
            if (contour_center_x < img_center) and abs(img_center - contour_center_x > 1):
                print("L")
                return 1, (180/640) * abs(img_center - contour_center_x)  # Left
            if (contour_center_x > img_center) and abs(contour_center_x - img_center > 1):
                print("R")
                return 3, (180/640) * abs(contour_center_x - img_center)  # Right
            else:
                print("FW")
                return 2, 0.00  # Forward
        else:
            #self.get_logger().info("No line detected")
            return 2, 0.00

    def get_next_filename(self, base_name="output", extension="avi"):
        counter = 1
        while os.path.exists(f"{base_name}_{counter}.{extension}"):
            counter += 1
        return f"{base_name}_{counter}.{extension}"

    def read_camera_continuously(self):
        cap = cv2.VideoCapture(0)  # Open the camera once
        if not cap.isOpened():
            #self.get_logger().error("Error: Could not open webcam.")
            return

        cap.set(cv2.CAP_PROP_FRAME_WIDTH, 640)
        cap.set(cv2.CAP_PROP_FRAME_HEIGHT, 480)
        cap.set(cv2.CAP_PROP_FPS, 30)

        fourcc = cv2.VideoWriter_fourcc(*'XVID')  # Codec
        output_filename = self.get_next_filename()  # Get unique filename
        out = cv2.VideoWriter(output_filename, fourcc, 20.0, (640, 480))

        try:
            while rclpy.ok():
                ret, frame = cap.read()
                if not ret:
                    continue

                out.write(frame)  # Save raw video
                hsv_img = cv2.cvtColor(frame, cv2.COLOR_BGR2HSV)
                gray_white = self.filter_white_lines(hsv_img)
                edges = self.detect_line(gray_white)
                center_x, _ = self.contour_find_line(edges)
                direction, degree_diff = self.control_robot(center_x, 320)

                with self.data_lock:
                    self.latest_data["direction"] = direction
                    self.latest_data["degree_diff"] = degree_diff

                #self.get_logger().info(f"Direction: {direction}, Degree Diff: {degree_diff}")

                # cv2.imshow("Camera View", frame)
                # if cv2.waitKey(1) & 0xFF == ord('q'):
                #     self.get_logger().info("Exiting camera loop.")
                #     break

        except Exception as e:
            pass
            #self.get_logger().error(f"Camera error: {e}")
        finally:
            cap.release()
            out.release()
            cv2.destroyAllWindows()


def main(args=None):
    rclpy.init(args=args)
    image_process = ImageProcess()
    rclpy.spin(image_process)
    image_process.destroy_node()
    rclpy.shutdown()


if __name__ == "__main__":
    main()

