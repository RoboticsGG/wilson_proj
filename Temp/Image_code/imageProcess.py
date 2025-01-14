import pyrealsense2 as rs
import cv2
import numpy as np

def function_FixCropImage(h, s, v):
    top = [0, 280]
    low = [720, 720]
    left = [0, 0]
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

def filter_white_lines(image):
    white_lower = np.array([0, 0, 200], dtype=np.uint8)
    white_upper = np.array([179, 50, 255], dtype=np.uint8)
    mask_white = cv2.inRange(image, white_lower, white_upper)
    result_white = cv2.bitwise_and(image, image, mask=mask_white)
    gray_white = cv2.cvtColor(result_white, cv2.COLOR_HSV2BGR)
    gray_white = cv2.cvtColor(gray_white, cv2.COLOR_BGR2GRAY)
    return gray_white

def detect_line(image):
    blurred = cv2.GaussianBlur(image, (5, 5), 0)
    edges = cv2.Canny(blurred, 50, 150)
    return edges

#modified using Hough
def find_line_center(edges):
    lines = cv2.HoughLinesP(edges, 1, np.pi / 180, threshold=50, minLineLength=50, maxLineGap=10)
    if lines is not None:
        for line in lines:
            for x1, y1, x2, y2 in line:
                # Filter based on line length and angle
                length = np.sqrt((x2 - x1) ** 2 + (y2 - y1) ** 2)
                angle = np.abs(np.arctan2(y2 - y1, x2 - x1) * 180 / np.pi)
                if length > 100 and (80 < angle < 100 or angle < 10 or angle > 170):
                    cv2.line(edges, (x1, y1), (x2, y2), (0, 255, 0), 2)
                    center_x = (x1 + x2) // 2
                    center_y = (y1 + y2) // 2
                    return center_x, center_y
    return None, None

def control_robot(center_x, image_width):
    if center_x is not None:
        if center_x < image_width // 3:
            print("Turn left")
        elif center_x > 2 * image_width // 3:
            print("Turn right")
        else:
            print("Move forward")
    else:
        print("No line detected")

def read_bag_with_opencv(bag_file_path):
    pipeline = rs.pipeline()
    config = rs.config()
    try:
        print(f"Reading bag file: {bag_file_path}")
        config.enable_device_from_file(bag_file_path)
        config.enable_stream(rs.stream.color, 1280, 720, rs.format.rgb8, 30)
        pipeline.start(config)
        print("Pipeline started successfully.")

        while True:
            try:
                frames = pipeline.wait_for_frames()
            except RuntimeError as e:
                print(f"Error while waiting for frames: {e}")
                break

            color_frame = frames.get_color_frame()
            if not color_frame:
                print("No color frame available, skipping frame.")
                continue

            color_image = np.asarray(color_frame.get_data())
            hsv_img = cv2.cvtColor(color_image, cv2.COLOR_RGB2HSV)
            h, s, v = cv2.split(hsv_img)
            crop_img = function_FixCropImage(h, s, v)

            gray_white = filter_white_lines(crop_img)
            edges = detect_line(gray_white)
            center_x, center_y = find_line_center(edges)

            control_robot(center_x, gray_white.shape[1])

            cv2.imshow('Filtered White Lines', gray_white)
            cv2.imshow('Edges', edges)
            cv2.imshow('Original Image', color_image)

            if cv2.waitKey(1) & 0xFF == ord('q'):
                print("Exiting...")
                break

    except Exception as e:
        print(f"Error reading bag file: {e}")

    finally:
        try:
            pipeline.stop()
        except RuntimeError as stop_error:
            print(f"Pipeline stop error: {stop_error}")
        cv2.destroyAllWindows()

if __name__ == "__main__":
    bag_file_path = r"D:/Playground_Project/ROS2_TestCode/Proj_Sample_Data/first_round.bag"
    read_bag_with_opencv(bag_file_path)