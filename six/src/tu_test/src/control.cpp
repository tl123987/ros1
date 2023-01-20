#include"ros/ros.h"
#include"tf2_ros/transform_listener.h"
#include"tf2_ros/buffer.h"
#include"geometry_msgs/PointStamped.h"
#include"tf2_geometry_msgs/tf2_geometry_msgs.h"
#include"geometry_msgs/TransformStamped.h"
#include"geometry_msgs/Twist.h"
/*
   订阅方实现：turtle1 turele2的相对关系 ；计算 turtle1中某个坐标点在 turtle2中的坐标值
   流程：
       1头文件
       2编码 初始化 
       3创建订阅对象
       4编写逻辑
       5 spinOnce();

*/


int main(int argc,  char** argv) {
    setlocale(LC_ALL,"");
    ros::init(argc,argv,"turtle_sub");
    ros::NodeHandle nh;
    //发布对象
    tf2_ros::Buffer buffer;
    tf2_ros::TransformListener sub(buffer);

    ros::Publisher pub=nh.advertise<geometry_msgs::Twist>("/turtle2/cmd_vel",100);
    ros::Rate rate(10);
    while(ros::ok())
    {
        try
        {
            //计算相对关系，编写速度关系
            geometry_msgs::TransformStamped trans= buffer.lookupTransform("turtle2","turtle1",ros::Time(0));
/*             ROS_INFO("turtle1相对于turtle2的关系：父级：%s,子集：%s,偏移量(%.2f,%.2f,%.2f)",
                    trans.header.frame_id.c_str(),
                    trans.child_frame_id.c_str(),
                    trans.transform.translation.x,
                    trans.transform.translation.y,
                    trans.transform.translation.z
                    ); */
            geometry_msgs::Twist twist;
            //消息格式
            twist.linear.x=0.5*sqrt(pow(trans.transform.translation.x,2)
                                    +pow(trans.transform.translation.y,2));
            twist.angular.z=4*atan2(trans.transform.translation.y,
                                    trans.transform.translation.x);
            pub.publish(twist);

        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
        
    }

    return 0;
}