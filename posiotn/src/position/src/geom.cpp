#include <ros/ros.h>
#include <geometry_msgs/PoseArray.h>
#include <geometry_msgs/Pose.h>
#include <tf2/LinearMath/Quaternion.h>

int main(int argc, char **argv)
{
    ros::init(argc, argv, "pose_array_publisher");
    ros::NodeHandle nh;

    ros::Publisher pose_array_pub = nh.advertise<geometry_msgs ::PoseArray>("pose_array_topic", 10);

    geometry_msgs::PoseArray pose_array;
    pose_array.header.frame_id = "odom";
    // 设置一个旋转，例如绕z轴旋转90度
    tf2::Quaternion q;
    q.setRPY(0, -M_2_PI, M_PI / 2); // RPY = Roll, Pitch, Yaw

    double radius = 6.0;    // Circle radius
    int points_count = 100; // Number of points to create the circle
    for (int i = 0; i <= points_count; ++i)
    {
        double angle = 2 * M_PI * i / points_count;
        geometry_msgs::Pose pose;
        pose.position.x = radius * cos(angle);
        pose.position.y = radius * sin(angle);
        pose.position.z = 0;
        pose.orientation.x = q.x();
        pose.orientation.y = q.y();
        pose.orientation.z = q.z();
        pose.orientation.w = q.w(); // No rotation// 这个为1表示不旋转
        pose_array.poses.push_back(pose);
    }
    ros::Rate loop_rate(1);
    while (ros::ok())
    {
        pose_array.header.stamp = ros::Time::now();
        pose_array_pub.publish(pose_array);
        ros::spinOnce();
        loop_rate.sleep();
    }

    return 0;
}
