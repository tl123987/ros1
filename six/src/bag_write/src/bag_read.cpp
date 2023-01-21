#include"ros/ros.h"
#include "rosbag/bag.h"
#include "rosbag/view.h"
#include "std_msgs/String.h"
#include "std_msgs/Int32.h"

int main(int argc,  char** argv) {
    setlocale(LC_ALL,"");
    ros::init(argc,argv,"bag_read");
    ros::NodeHandle nh;
    rosbag::Bag bag;
    bag.open("./hello.bag",rosbag::BagMode::Read);//当前目录
    for(auto &&m:rosbag::View(bag))
    {
        std::string topic=m.getTopic();
        ros::Time time=m.getTime();
        std_msgs::StringPtr p=m.instantiate<std_msgs::String>();
        ROS_INFO("解析的内容,话题：%s,时间：%.2f,消息：%s",
                 topic.c_str(),
                 time.toSec(),
                 p->data.c_str()
                );
    }
    bag.close();
    return 0;
}