cmake_minimum_required(VERSION 3.0.2)
project(position)

## 找到需要的catkin包
find_package(catkin REQUIRED COMPONENTS
  roscpp
  nav_msgs
  geometry_msgs
  visualization_msgs
  tf2
)

## 声明catkin的包
catkin_package()

## 包含头文件目录
include_directories(
  ${catkin_INCLUDE_DIRS}
)

## 编译可执行文件
add_executable(path_publisher src/geom.cpp)
target_link_libraries(path_publisher ${catkin_LIBRARIES})

add_executable(pose_array_publisher src/nva.cpp)
target_link_libraries(pose_array_publisher ${catkin_LIBRARIES})

add_executable(marker_publisher src/vizmarker.cpp)
target_link_libraries(marker_publisher ${catkin_LIBRARIES})

## 安装可执行文件
install(TARGETS path_publisher pose_array_publisher marker_publisher
  RUNTIME DESTINATION ${CATKIN_PACKAGE_BIN_DESTINATION}
)

## 安装launch文件
install(DIRECTORY launch/
  DESTINATION ${CATKIN_PACKAGE_SHARE_DESTINATION}/launch
)
