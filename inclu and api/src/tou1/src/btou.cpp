#include"ros/ros.h"
#include"tou1/b.h"


int  main(int argc,  char** argv) {
    setlocale(LC_ALL,"");
    ros::init(argc,argv,"hello");
    a_s::my_a my_hello;
    my_hello.run();
    return 0;
}