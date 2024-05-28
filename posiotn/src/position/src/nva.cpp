#include <ros/ros.h>
#include <nav_msgs/Path.h>
#include <geometry_msgs/PoseStamped.h>
#include <cmath>

ros::Publisher path_pub;
nav_msgs::Path path;

void timerCallback(const ros::TimerEvent &)
{
    path.header.stamp = ros::Time::now();
    path_pub.publish(path);
}

int main(int argc, char **argv)
{
    ros::init(argc, argv, "path_publisher");
    ros::NodeHandle nh;

    path_pub = nh.advertise<nav_msgs::Path>("path_topic", 10);

    // 初始化 Path
    path.header.frame_id = "odom";
    double radius = 2.0;    // Circle radius
    int points_count = 100; // Number of points to create the circle
    for (int i = 0; i <= points_count; ++i)
    {
        double angle = 2 * M_PI * i / points_count;
        geometry_msgs::PoseStamped pose_stamped;
        pose_stamped.header.frame_id = "map";
        pose_stamped.pose.position.x = radius * cos(angle);
        pose_stamped.pose.position.y = radius * sin(angle);
        pose_stamped.pose.position.z = 0;
        pose_stamped.pose.orientation.x = 0.0;
        pose_stamped.pose.orientation.y = 0.0;
        pose_stamped.pose.orientation.z = 0.0;
        pose_stamped.pose.orientation.w = 1.0; // No rotation
        path.poses.push_back(pose_stamped);
    }

    // 创建定时器
    ros::Timer timer = nh.createTimer(ros::Duration(1.0), timerCallback);

    ros::spin();

    return 0;
}
