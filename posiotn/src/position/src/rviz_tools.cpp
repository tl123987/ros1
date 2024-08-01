
#include "ros_viz_tools/ros_viz_tools.h"
#include <random>

static std::default_random_engine e;
std::uniform_int_distribution<int> randRGB(0, 255);

using ros_viz_tools::ColorMap;
using ros_viz_tools::RosVizTools;

int main(int argc, char **argv)
{
    ROS_INFO("demo_node starts.");
    ros::init(argc, argv, "demo_node1");
    ros::NodeHandle n;
    std::string topic = "demo_marker1";
    ros_viz_tools::RosVizTools markers(n, topic);
    std::string frame_id = "ros_viz_tools";
    std::string ns;

    ros::Rate r(1);
    while (ros::ok())
    {
        geometry_msgs::Pose pose;
        markers.clear();

        ns = "cylinder";
        geometry_msgs::Vector3 scale;
        scale.x = 0.5;
        scale.y = 0.5;
        scale.z = 1.0;
        pose.position.x = -2.0;
        pose.position.y = -2.0;
        pose.position.z = -2.0;
        pose.orientation = tf2::toMsg(tf2::Quaternion(0 * M_PI / 180, 45 * M_PI / 180, 45 * M_PI / 180));

        visualization_msgs::Marker marker_cylinder = RosVizTools::newCylinder(scale, pose, ns, 0, ros_viz_tools::WHITE, frame_id);
        markers.append(marker_cylinder);

        // Sphere List
        ns = "sphere_list";
        visualization_msgs::Marker marker_spherelist = RosVizTools::newSphereList(1.0, ns, 0, ros_viz_tools::LIME_GREEN, frame_id);
        for (int i = 0; i < 10; ++i)
        {
            geometry_msgs::Point p;
            p.x = i;
            p.y = pow(p.x, 2.0);
            p.z = 3.5;
            marker_spherelist.points.push_back(p);
            std_msgs::ColorRGBA color = ros_viz_tools::newColorRGBA(randRGB(e), randRGB(e), randRGB(e));
            marker_spherelist.colors.push_back(color);
        }
        markers.append(marker_spherelist);
        // publish
        markers.publish();
        r.sleep();
    }
}
