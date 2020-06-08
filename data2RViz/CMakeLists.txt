cmake_minimum_required(VERSION 3.5.0)
project(data2rviz)

# Default to C++14
if(NOT CMAKE_CXX_STANDARD)
  set(CMAKE_CXX_STANDARD 14)
endif()

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(rclcpp_lifecycle REQUIRED)
find_package(sensor_msgs REQUIRED)
find_package(std_msgs REQUIRED)

include_directories(
	# assure that generated .h files are found
	${PROJECT_SOURCE_DIR}/src
	${PROJECT_SOURCE_DIR}/src-gen
)

add_executable(Data2RViz src-gen/Data2RVizCompdef/Data2RViz.cpp src/Data2RVizCompdef/Data2RViz_impl.cpp)
ament_target_dependencies(Data2RViz rclcpp rclcpp_lifecycle sensor_msgs std_msgs)


# Start of user code dependencies
# End of user code

install(TARGETS
	Data2RViz
	DESTINATION lib/${PROJECT_NAME}
)
ament_package()
