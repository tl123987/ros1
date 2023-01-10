#include"ros/ros.h"
#include"std_msgs/String.h"


int main(int argc,  char** argv) {
    ros::init(argc,argv,"hello");
    ros::NodeHandle nh;
    //全局
    ros::Publisher pub=nh.advertise<std_msgs::String>("/skal",1000);

    //相对
    ros::Publisher pub1=nh.advertise<std_msgs::String>("ksd",1000);

    //私有
    ros::NodeHandle nh("~");
    
    return 0;
}