cmake_minimum_required(VERSION 3.8)
project(package_rover_control)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(action_interfaces REQUIRED)
find_package(rclcpp REQUIRED)
find_package(rclcpp_action REQUIRED)
find_package(rclcpp_components REQUIRED)
find_package(std_srvs)

# uncomment the following section in order to fill in
# further dependencies manually.
# find_package(<dependency> REQUIRED)

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

# add_executable(node_motor_control src/node_motor_control.cpp)

# target_compile_features(node_motor_control PUBLIC c_std_99 cxx_std_17)  # Require C99 and C++17

ament_package()
