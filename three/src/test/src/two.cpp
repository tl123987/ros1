#include"ros/ros.h"
#include"turtlesim/Pose.h"

void dpose(const turtlesim::Pose::ConstPtr &pose)
{
    ROS_INFO("乌龟位姿信息:x=%.2f,y=%.2f,theta=%.2f,lv=%.2f,av=%.2f",
             pose->x,pose->y,pose->theta,pose->linear_velocity,pose->angular_velocity);
}


 int main(int argc,  char** argv) {

    setlocale(LC_ALL,"");//编码中文
    ros::init(argc,argv,"turtlesim");
    ros::NodeHandle nh;
    ros::Subscriber sub=nh.subscribe("/turtle1/pose",100,dpose);
    ros::spin();

    return 0;
}