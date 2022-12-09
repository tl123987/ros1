#include"ros/ros.h"
#include"geometry_msgs/Twist.h"
/*
话题 /turtlel/cmd_vel
消息 geometry_msgs/Twist


*/
int main(int argc, char** argv) 
{
    ros::init(argc,argv,"my_cput");
    ros::NodeHandle nh;
    ros::Publisher pub=nh.advertise<geometry_msgs::Twist>("turtle1/cmd_vel",100);
    ros::Rate rate(10);
    //消息发布
    geometry_msgs::Twist twist;
    twist.linear.x=1;
    twist.linear.y=0;
    twist.linear.z=0;
    twist.angular.x=0;
    twist.angular.y=0;
    twist.angular.z=1;

    while (ros::ok)
    {
        pub.publish(twist);
        rate.sleep();
        ros::spinOnce();
        /* code */
    }
    
    return 0;
}