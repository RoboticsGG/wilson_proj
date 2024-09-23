cmake_minimum_required(VERSION 3.8)
project(base_command_package)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

find_package(rosidl_default_generators REQUIRED)

rosidl_generate_interfaces(${PROJECT_NAME}
  "action/Carcontrol.action"
)

# find dependencies
find_package(ament_cmake REQUIRED)
# uncomment the following section in order to fill in
# further dependencies manually.
# find_package(<dependency> REQUIRED)

add_executable(carcontrol_node src/carcontrol_node.cpp)
target_include_directories(carcontrol_node PUBLIC
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
  $<INSTALL_INTERFACE:include>)
target_compile_features(carcontrol_node PUBLIC c_std_99 cxx_std_17)  # Require C99 and C++17

install(TARGETS carcontrol_node
  DESTINATION lib/${PROJECT_NAME})

//--------------------------------------------------------------

add_executable(command_node src/command_node.cpp)
target_include_directories(command_node PUBLIC
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
  $<INSTALL_INTERFACE:include>)
target_compile_features(command_node PUBLIC c_std_99 cxx_std_17)  # Require C99 and C++17

install(TARGETS command_node
  DESTINATION lib/${PROJECT_NAME})

//--------------------------------------------------------------

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
