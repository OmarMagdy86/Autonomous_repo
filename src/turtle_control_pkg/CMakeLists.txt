cmake_minimum_required(VERSION 3.8)
project(turtle_control_pkg)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(ament_cmake_python REQUIRED)
find_package(geometry_msgs REQUIRED)
find_package(rosidl_default_generators REQUIRED)

# Install the Python executable scripts
install(PROGRAMS
  turtle_control_pkg/turtle_control.py
  turtle_control_pkg/simple_publisher.py
  turtle_control_pkg/simple_subscriber.py
  turtle_control_pkg/client_example.py
  turtle_control_pkg/server_example.py
  turtle_control_pkg/fibonacci_action_server.py
  turtle_control_pkg/fibonacci_action_client.py
  DESTINATION lib/${PROJECT_NAME}
)

# ⬇️ CRITICAL UPDATE: Install the 'launch', 'worlds', and 'rviz' directories
# This allows the launch file to find your SDF world and Rviz configs.
install(DIRECTORY
  launch
  worlds
  rviz 
  DESTINATION share/${PROJECT_NAME}
)

rosidl_generate_interfaces(${PROJECT_NAME}
  "msg/Num.msg"
  "srv/AddThreeInts.srv"
  "action/Fibonacci.action"
  DEPENDENCIES geometry_msgs
)

if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  set(ament_cmake_copyright_FOUND TRUE)
  set(ament_cmake_cpplint_FOUND TRUE)
  ament_lint_auto_find_test_dependencies()
endif()

ament_package()