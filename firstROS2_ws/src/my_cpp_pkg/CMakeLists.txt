cmake_minimum_required(VERSION 3.8)
project(my_cpp_pkg) #project(PROJECT_NAME)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(example_interfaces REQUIRED)

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

#=================================
#this following line is added to create an executable
#add_executable(<name_of_exe> <address towards cpp file starting from CMakeLists.txt file's level)
add_executable(cpp_node1 src/first_cpp_node.cpp)
add_executable(cpp_publisher1 src/cpp_publisher.cpp)
add_executable(cpp_subscriber1 src/cpp_subscriber.cpp)
#the following line links the builder, ament, with the dependencies,libraries needed
#ament_target_dependencies(<name_of_exe> <dependency>)
#<dependency> refer to the '#find dependencies' section, starting from line 8
ament_target_dependencies(cpp_node1 rclcpp)
ament_target_dependencies(cpp_publisher1 rclcpp example_interfaces)
ament_target_dependencies(cpp_subscriber1 rclcpp example_interfaces)
#this will install the executable created to the folder specified
#install(TARGET <name_of_exe> DESTINATION <address>)
#<address> counts from ros_workspace_folder/install, ends with folder name storing exe
install(TARGETS cpp_node1 cpp_publisher1 cpp_subscriber1
  DESTINATION lib/${PROJECT_NAME}
)
ament_package()
