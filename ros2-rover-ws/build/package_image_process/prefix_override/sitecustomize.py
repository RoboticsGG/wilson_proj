import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/curry/wilson_proj/ros2-rover-ws/install/package_image_process'
