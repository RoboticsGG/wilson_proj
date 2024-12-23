cmake_minimum_required(VERSION 3.8)
project(package_rover_control)

# Default to C99
if(NOT CMAKE_C_STANDARD)
  set(CMAKE_C_STANDARD 99)
endif()

# Default to C++14
if(NOT CMAKE_CXX_STANDARD)
  set(CMAKE_CXX_STANDARD 14)
endif()

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(action_interfaces REQUIRED)
find_package(rclcpp REQUIRED)
find_package(rclcpp_action REQUIRED)
find_package(rclcpp_components REQUIRED)
find_package(std_msgs REQUIRED)
find_package(std_srvs)

# uncomment the following section in order to fill in
# further dependencies manually.
# find_package(<dependency> REQUIRED)

#---------------------------node_carcontrol---------------------------------------
add_library(motorcontrol SHARED
  src/node_motor_control.cpp)

target_include_directories(motorcontrol PRIVATE
$<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
$<INSTALL_INTERFACE:include>)
  
target_compile_definitions(motorcontrol
  PRIVATE "CARCONTROL_CPP_BUILDING_DLL")
  
ament_target_dependencies(motorcontrol
  "action_interfaces"
  "rclcpp"
  "rclcpp_action"
  "rclcpp_components")

install(TARGETS
  motorcontrol
  ARCHIVE DESTINATION lib
  LIBRARY DESTINATION lib
  RUNTIME DESTINATION bin
)
rclcpp_components_register_node(motorcontrol PLUGIN "motorcontrol_cpp::MotorControlActionServer" EXECUTABLE node_motor_control)
#---------------------------node_carcontrol---------------------------------------

#---------------------------node_rover_control---------------------------------------
add_executable(node_rovercontrol src/node_rover_control.cpp)
ament_target_dependencies(node_rovercontrol rclcpp std_msgs)

target_include_directories(node_rovercontrol PUBLIC
$<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
$<INSTALL_INTERFACE:include>)
target_compile_features(node_rovercontrol PUBLIC c_std_99 cxx_std_17)

install(TARGETS node_rovercontrol
  DESTINATION lib/${PROJECT_NAME})
#---------------------------node_rover_control---------------------------------------

add_executable(pub_node src/pub_node.cpp)
ament_target_dependencies(pub_node rclcpp std_msgs)

add_executable(sub_node src/sub_node.cpp)
ament_target_dependencies(sub_node rclcpp std_msgs)

add_executable(echoreply_node src/echoreply_node.cpp)
ament_target_dependencies(echoreply_node rclcpp std_msgs)

target_include_directories(pub_node PUBLIC
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
  $<INSTALL_INTERFACE:include>)

target_include_directories(sub_node PUBLIC
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
  $<INSTALL_INTERFACE:include>)

target_include_directories(echoreply_node PUBLIC
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
  $<INSTALL_INTERFACE:include>)

install(TARGETS pub_node
  DESTINATION lib/${PROJECT_NAME})

install(TARGETS sub_node
  DESTINATION lib/${PROJECT_NAME})

install(TARGETS echoreply_node
  DESTINATION lib/${PROJECT_NAME})

# add_executable(node_motor_control src/node_motor_control.cpp)

# target_compile_features(node_motor_control PUBLIC c_std_99 cxx_std_17)  # Require C99 and C++17

ament_package()
