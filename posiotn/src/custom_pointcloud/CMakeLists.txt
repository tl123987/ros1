cmake_minimum_required(VERSION 3.0.2)
project(custom_pointcloud)

## Compile as C++11, supported in ROS Kinetic and newer
# add_compile_options(-std=c++11)

## Find catkin macros and libraries
## if COMPONENTS list like find_package(catkin REQUIRED COMPONENTS xyz)
## is used, also find other catkin packages
find_package(catkin REQUIRED COMPONENTS
  pcl_conversions
  pcl_ros
  roscpp
  rospy
  sensor_msgs
)


catkin_package(
#  INCLUDE_DIRS include
#  LIBRARIES custom_pointcloud
#  CATKIN_DEPENDS pcl_conversions pcl_ros roscpp rospy sensor_msgs
#  DEPENDS system_lib
)


find_package(catkin REQUIRED COMPONENTS
  roscpp
  rospy
  std_msgs
  sensor_msgs
  pcl_ros
  pcl_conversions
)

include_directories(
  ${catkin_INCLUDE_DIRS}
)

add_executable(custom_pointcloud_publisher src/generate_pointcloud.cpp)
target_link_libraries(custom_pointcloud_publisher ${catkin_LIBRARIES} ${PCL_LIBRARIES})
