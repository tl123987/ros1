#include <ros/ros.h>
#include <visualization_msgs/Marker.h>
#include <cmath>

int main(int argc, char **argv)
{
    ros::init(argc, argv, "circle_publisher");
    ros::NodeHandle nh;

    ros::Publisher marker_pub = nh.advertise<visualization_msgs::Marker>("circle_marker", 10);

    visualization_msgs::Marker marker;
    marker.header.frame_id = "odom";
    marker.header.stamp = ros::Time::now();
    marker.ns = "circle";
    marker.id = 0;
    marker.type = visualization_msgs::Marker::LINE_STRIP;
    marker.action = visualization_msgs::Marker::ADD;
    marker.scale.x = 0.1; // Line width
    marker.color.a = 1.0; // Alpha
    marker.color.r = 1.0; // Red

    double radius = 1.0;    // Circle radius
    int points_count = 100; // Number of points to create the circle
    for (int i = 0; i <= points_count; ++i)
    {
        double angle = 2 * M_PI * i / points_count;
        geometry_msgs::Point p;
        p.x = radius * cos(angle);
        p.y = radius * sin(angle);
        p.z = 0;
        marker.points.push_back(p);
    }

    ros::Rate r(1);
    while (ros::ok())
    {
        marker.header.stamp = ros::Time::now();
        marker_pub.publish(marker);
        r.sleep();
    }

    return 0;
}
