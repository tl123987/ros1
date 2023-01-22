#include"ros/ros.h"
#include"turtlesim/Pose.h"
#include"tf2_ros/transform_broadcaster.h"
#include"geometry_msgs/TransformStamped.h"
#include"tf2/LinearMath/Quaternion.h"

/*
   两个乌龟的相对关系
   订阅乌龟位姿信息 相对于窗体 坐标 发布
   准备：
      话题 ：turtle1/pose
      消息格式:turtlesim/Pose
*/
std::string turtle_name;
void dopose(const turtlesim::Pose::ConstPtr& pose)
{
    static tf2_ros::TransformBroadcaster pub;
    geometry_msgs::TransformStamped ts;
    ts.header.frame_id="world";
    ts.header.stamp=ros::Time::now();
    ts.child_frame_id=turtle_name;
    ts.transform.translation.x=pose->x;
    ts.transform.translation.y=pose->y;
    ts.transform.translation.z=0;
    /*坐标系四元素
     乌龟位姿 偏航 没有翻滚 俯仰
     欧拉角：0，0，theta

    */
    tf2::Quaternion qtn;
    qtn.setRPY(0,0,pose->theta);
    ts.transform.rotation.x=qtn.getX();
    ts.transform.rotation.y=qtn.getY();
    ts.transform.rotation.z=qtn.getZ();
    ts.transform.rotation.w=qtn.getW();
    //发布
    pub.sendTransform(ts);
}

int main(int argc, char** argv) {
    
    setlocale(LC_ALL,"");
    //初始化
    ros::init(argc,argv,"dy_pub");
    ros::NodeHandle nh;
    //动态传参
    if(argc!=2)
    {
        ROS_INFO("请传入一个参数");
        return 1;
    }else
    {
        turtle_name=argv[1];
    }

    //创建订阅对象，处理函数
    ros::Subscriber sub=nh.subscribe(turtle_name+"/pose",100,dopose);
    ros::spin();
    return 0;
}