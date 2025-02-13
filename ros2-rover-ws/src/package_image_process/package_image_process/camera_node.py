import pyrealsense2 as rs
import numpy as np
import rclpy
from rclpy.node import Node
from std_msgs.msg import Float32MultiArray
import threading

class CameraNode(Node):
    def __init__(self):
        super().__init__('camera_node')
        self.publisher_ = self.create_publisher(Float32MultiArray, 'camera_data', 10)
        self.camera_thread = threading.Thread(target=self.read_camera_continuously)
        self.camera_thread.daemon = True
        self.camera_thread.start()

    def read_camera_continuously(self):
        pipeline = rs.pipeline()
        config = rs.config()
        config.enable_stream(rs.stream.color, 640, 480, rs.format.bgr8, 15)
        config.enable_stream(rs.stream.depth, 640, 480, rs.format.z16, 15)

        pipeline.start(config)

        try:
            while rclpy.ok():
                frames = pipeline.wait_for_frames(timeout_ms=10000)

                color_frame = frames.get_color_frame()
                depth_frame = frames.get_depth_frame()

                if not color_frame or not depth_frame:
                    continue

                # Process the frames and create message
                color_image = np.asanyarray(color_frame.get_data())
                depth_image = np.asanyarray(depth_frame.get_data())
                
                # Example: Extract some data, could be processed further
                avg_depth = np.mean(depth_image[depth_image > 0])  # Simple average depth for example

                # Create message and publish
                message = Float32MultiArray()
                message.data = [float(avg_depth)]  # You can add more fields here as needed
                self.publisher_.publish(message)

        except Exception as e:
            self.get_logger().error(f"Camera error: {e}")
        finally:
            pipeline.stop()

def main(args=None):
    rclpy.init(args=args)
    camera_node = CameraNode()
    rclpy.spin(camera_node)
    camera_node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
