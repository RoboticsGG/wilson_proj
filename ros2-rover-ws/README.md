# ROS2 Rover Workspace

This directory develops ROS2 for use on the Rover (Raspberry Pi 4 setup on rover).

## Directory-Component

### 1.src
Contains a development package and node based on ROS2 for use on the Rover.

### 2.build / install / log
The result after building the package using colcon contains build files.

### 3.install
The result after building the package using colcon contains install file.
```bash
source install/setup.bash
```

### 4.log
The result after building the package using colcon contains logs (error or result reports) generated during the build process.