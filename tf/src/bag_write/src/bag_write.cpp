#include"ros/ros.h"
#include"rosbag/bag.h"
#include"std_msgs/String.h"

int main(int argc,char** argv) {
    setlocale(LC_ALL,"");
    ros::init(argc,argv,"bag_write");
    ros::NodeHandle nh;
    //创建rosbag对象
    rosbag::Bag bag;
    //打开文件流
    bag.open("./hello.bag",rosbag::BagMode::Write);
    //写数据
    std_msgs::String mgs;
    mgs.data="hello xxx";
    bag.write("/chatter",ros::Time::now(),mgs);
    bag.close();
    return 0;
}