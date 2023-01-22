#include"ros/ros.h"
#include"tou/a.h"

namespace a_s{
    void my_a::run()
    {
       ROS_INFO("你好");
    }
}

int  main(int argc,  char** argv) {
    setlocale(LC_ALL,"");
    ros::init(argc,argv,"hello");
    a_s::my_a my_hello;
    my_hello.run();
    return 0;
}