# Robotic Rover Software Based-on ROS2

The prototype software used to control a wheeled robot that operates autonomously through remote commands, commonly referred to as a rover, is designed to navigate to predetermined coordinates automatically.

## Directory-Component

### 1.mros-mbed
Containing a package and node based on micro-ROS (mros2) for use on the Nucleo-F767ZI.

### 2.ros2-base-ws
Containing a package and node based on ROS2 for use on the Base Computer, used to send commands to and receive responses from the Rover.

### 3.ros2-rover
Containing a package and node based on ROS2 for use on the Raspberry Pi 4 on the Rover, used to send commands to and receive responses from the Base Computer.

### 4.mros2_command
Collects commands used to build mros2-mbed.

### 5.mros2-host-examples-main
Example code for micro-ROS (mros2).

### 6.Temp
Just contains temporary files like notes or other unimportant items.