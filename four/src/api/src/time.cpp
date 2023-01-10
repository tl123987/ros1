#include"ros/ros.h"

void cb(const ros::TimerEvent & event)
{
   ROS_INFO("你好哇");
}

int main(int argc, char** argv) {

    setlocale(LC_ALL,"");
    ros::init(argc,argv,"hello");
    ros::NodeHandle nh;
    ros::Time now=ros::Time::now();//被调用执行的那一刻
    ROS_INFO("当前时刻：%.2f",now.toSec());//浮点型
    
    ros::Time start=ros::Time::now();
    ROS_INFO("开始休眠：%2f",start.toSec());
    ros::Duration du(4.5);
    du.sleep();
    ros::Time end=ros::Time::now();
    ROS_INFO("休眠结束：%2f",end.toSec());
    
    ros::Time begin=ros::Time::now();
    ros::Duration du1(5);
    ros::Time stop=begin+du1;
    ROS_INFO("持续时间：%.2f",begin.toSec());
    ROS_INFO("结束时间：%.2f",stop.toSec());

    //定时器
    ros::Timer timer=nh.createTimer(ros::Duration(1),cb);
    ros::spin();

    return 0;
}