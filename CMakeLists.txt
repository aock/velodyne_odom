cmake_minimum_required(VERSION 2.8.3)
project(velodyne_odom)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

find_package(catkin REQUIRED COMPONENTS
  roscpp
  std_msgs
  sensor_msgs
  geometry_msgs
  tf
  pcl_conversions
  pcl_ros
)

find_package(Boost REQUIRED COMPONENTS system)

include_directories(include
  ${catkin_INCLUDE_DIRS}
  ${Boost_INCLUDE_DIRS}
)

#######################
##   Action Server   ##
#######################

add_executable(velodyne_odom src/velodyne_odom.cpp)

target_link_libraries(
  velodyne_odom
  ${catkin_LIBRARIES}
)

