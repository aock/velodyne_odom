#include <ros/ros.h>

int main(int argc, char** argv)
{
    ros::init(argc, argv, "velodyne_odom");
    ros::NodeHandle nh("~");
    ros::NodeHandle n;

    ROS_INFO("Started Velodyne Odometry estimation");

}
