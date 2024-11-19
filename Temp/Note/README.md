# Develop Package 101
## Action Package
1. Create .action file in proj/ros2-ws/src/action_interfaces/action/ in form:
```
# Request
type variable_name
---
# Result
type variable_name
---
# Feedback
type variable_name
```

2. Navigate to proj/ros2-ws/src and use the following command:
```bash
colcon build --packages-select action_interfaces
```
3. Refer new action using command:
```bash
source install/setup.bash
```
***
### You must repeat steps 2 and 3 whenever you modify the .action file, and then proceed to step 8.
***

4. Navigate to proj/ros2-ws/src and create a package using:
```bash
ros2 pkg create --build-type ament_cmake --license Apache-2.0 --node-name my_node my_package
```
* Define the node and package names by modifying my_node and my_package.  
* You will see your node in my_package/src. If you need to add a node, simply create a .cpp file in the /src directory of my_package.

6. modify the CMakeList.txt file 
* Primarily update at find_package, ament_target_dependencies, and rclcpp_components_register_node.
* Define Action  
  * Example
```
find_package(rosidl_default_generators REQUIRED)
rosidl_generate_interfaces(${PROJECT_NAME}
  "action/name.action"
)
```

7. modify the package.xml file adding the following text:
```xml
  <buildtool_depend>rosidl_default_generators</buildtool_depend>

  <depend>rclcpp</depend>
  <depend>rclcpp_action</depend>
  <depend>action_msgs</depend>

  <member_of_group>rosidl_interface_packages</member_of_group>
```
8. Build Package using
```bash
colcon build --packages-select my_package
```
9. refer my_package using
```bash
source install/setup.bash
```