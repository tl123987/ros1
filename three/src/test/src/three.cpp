#include"ros/ros.h"
#include"turtlesim/Spawn.h"

/*
服务端生成乌龟
话题：/spawn
消息：turtleism/Spawn
*/
int main(int argc, char** argv) {
    setlocale(LC_ALL,"");//编码中文
    ros::init(argc,argv,"turtlesim");
    ros::NodeHandle nh;
    ros::ServiceClient client=nh.serviceClient<turtlesim::Spawn>("/spawn");
    turtlesim::Spawn spawn;
    spawn.request.x=1;
    spawn.request.y=4;
    spawn.request.theta=1.57;
    spawn.request.name="tuure1";
    client.waitForExistence();
    bool flag=client.call(spawn);
    if(flag)
    {
        ROS_INFO("生成成功");
    }else
    {
        ROS_INFO("请求失败");
    }
    
   
    
    return 0;
}