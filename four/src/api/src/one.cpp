#include "ros/ros.h"
#include"std_msgs/String.h"
/*
 * Use this version if you are using the NodeHandle API
 *
 * \param argc 参数个数
 * \param argv  参数
 * \param name Name of this node.  节点名称
 * \param options [optional] Options to start the node with (a set of bit flags from \ref ros::init_options)
 * \throws InvalidNodeNameException If the name passed in is not a valid "base" name
 *
 
ROSCPP_DECL void init(int &argc, char **argv, const std::string& name, uint32_t options = 0);
*/
 int main(int argc,  char** argv) 
{
    ros::init(argc,argv,"op",ros::init_options::AnonymousName); //可以启动多个节点
    
    ros::NodeHandle nh;

    ros::Publisher pub=nh.advertise<std_msgs::String>("fang",10,true);//设置为true可以保存发送的最后一条数据
    
    ros::spin();
    return 0;
}