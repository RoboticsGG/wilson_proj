cmake_minimum_required(VERSION 3.8)
project(package_test)

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
find_package(rclcpp REQUIRED)
find_package(std_msgs REQUIRED)
find_package(msgs_rovercon REQUIRED)
find_package(msgs_mainrocon REQUIRED)
# uncomment the following section in order to fill in
# further dependencies manually.
# find_package(<dependency> REQUIRED)

add_executable(node_client_act src/node_client_act.cpp)

add_executable(node_pub_d src/node_pub_d.cpp)
ament_target_dependencies(node_pub_d rclcpp std_msgs)

add_executable(sub_node src/sub_node.cpp)
ament_target_dependencies(sub_node rclcpp std_msgs)

add_executable(echoreply_node src/echoreply_node.cpp)
ament_target_dependencies(echoreply_node rclcpp std_msgs)

add_executable(node_rov_datasub src/sub_msgs_RC.cpp)
ament_target_dependencies(node_rov_datasub rclcpp std_msgs msgs_rovercon msgs_mainrocon)

target_include_directories(node_client_act PUBLIC
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
  $<INSTALL_INTERFACE:include>)
target_compile_features(node_client_act PUBLIC c_std_99 cxx_std_17)  # Require C99 and C++17

target_include_directories(node_pub_d PUBLIC
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
  $<INSTALL_INTERFACE:include>)

target_include_directories(sub_node PUBLIC
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
  $<INSTALL_INTERFACE:include>)

target_include_directories(echoreply_node PUBLIC
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
  $<INSTALL_INTERFACE:include>)

target_include_directories(node_rov_datasub PUBLIC
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
  $<INSTALL_INTERFACE:include>)

install(TARGETS node_client_act
  DESTINATION lib/${PROJECT_NAME})

install(TARGETS node_pub_d
  DESTINATION lib/${PROJECT_NAME})

install(TARGETS sub_node
  DESTINATION lib/${PROJECT_NAME})

install(TARGETS echoreply_node
  DESTINATION lib/${PROJECT_NAME})

install(TARGETS node_rov_datasub
  DESTINATION lib/${PROJECT_NAME})


if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  # the following line skips the linter which checks for copyrights
  # comment the line when a copyright and license is added to all source files
  set(ament_cmake_copyright_FOUND TRUE)
  # the following line skips cpplint (only works in a git repo)
  # comment the line when this package is in a git repo and when
  # a copyright and license is added to all source files
  set(ament_cmake_cpplint_FOUND TRUE)
  ament_lint_auto_find_test_dependencies()
endif()

ament_package()
