#include"ros/ros.h"
/*
设置乌龟背景色
rosparam list

*/
int main(int argc,  char** argv) {

    ros::init(argc,argv,"ahha");

    //第一种
    ros::NodeHandle nh("turtlesim");
    nh.setParam("background_b",255);
    nh.setParam("background_g",255);
    nh.setParam("background_r",255);
    //第二种
/*     ros::NodeHandle nh;
    nh.setParam("/turtlesim/background_b",255);
    nh.setParam("/turtlesim/background_g",255);
    nh.setParam("/turtlesim/background_r",255); */
   //第三种
/*     ros::param::set("/turtlesim/background_b",255);
    ros::param::set("/turtlesim/background_g",255);
    ros::param::set("/turtlesim/background_r",255); */
    return 0;
}
