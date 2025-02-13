import pyrealsense2 as rs

# Configure depth camera
pipeline = rs.pipeline()
config = rs.config()
config.enable_stream(rs.stream.depth, 640, 480, rs.format.z16, 30)

# Start pipeline
pipeline.start(config)

try:
    while True:
        frames = pipeline.wait_for_frames()
        depth_frame = frames.get_depth_frame()
        if not depth_frame:
            continue
        
        # Save depth data as .dep file
        depth_data = depth_frame.get_data()
        with open("frame.dep", "wb") as f:
            f.write(depth_data)

finally:
    pipeline.stop()
