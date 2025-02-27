import pyrealsense2 as rs
import numpy as np
import cv2

# Set up the pipeline
pipeline = rs.pipeline()
config = rs.config()

# Set the stream parameters
config.enable_stream(rs.stream.color, 424, 240, rs.format.bgr8, 5)
#config.enable_stream(rs.stream.depth, 424, 240, rs.format.z16, 15)

# Start the pipeline
pipeline.start(config)

try:
    while True:
        frames = pipeline.wait_for_frames()
        #frames = pipeline.wait_for_frames(timeout_ms=10000)
        color_frame = frames.get_color_frame()
        #depth_frame = frames.get_depth_frame()

        # if not color_frame or not depth_frame:
        #     continue

        if not color_frame :
            continue

        color_image = np.asanyarray(color_frame.get_data())
        #depth_image = np.asanyarray(depth_frame.get_data())

        # Display images
        cv2.imshow('Color Frame', color_image)
        #cv2.imshow('Depth Frame', depth_image)

        print("OKOKOK")

        if cv2.waitKey(1) & 0xFF == ord('q'):
            break
finally:
    pipeline.stop()
    cv2.destroyAllWindows()
