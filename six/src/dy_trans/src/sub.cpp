#include"ros/ros.h"
#include"tf2_ros/transform_listener.h"
#include"tf2_ros/buffer.h"
#include"geometry_msgs/PointStamped.h"
#include"tf2_geometry_msgs/tf2_geometry_msgs.h"
#include"geometry_msgs/TransformStamped.h"
/*
   订阅方实现：son1 son2的相对关系 ；计算 son1中某个坐标点在 son2中的坐标值
   流程：
       1头文件
       2编码 初始化 
       3创建订阅对象
       4编写逻辑
       5 spinOnce();

*/


int main(int argc,  char** argv) {
    setlocale(LC_ALL,"");
    ros::init(argc,argv,"tf_sub");
    ros::NodeHandle nh;
    //订阅对象
    tf2_ros::Buffer buffer;
    tf2_ros::TransformListener sub(buffer);
    //逻辑
    //一个坐标点
    geometry_msgs::PointStamped psson1;
    psson1.header.stamp=ros::Time::now();
    psson1.header.frame_id="son1";
    psson1.point.x=1;
    psson1.point.y=2;
    psson1.point.z=3;
    ros::Rate rate(10);
    while(ros::ok())
    {
        try
        {
            //计算相对关系
            geometry_msgs::TransformStamped trans= buffer.lookupTransform("son2","son1",ros::Time(0));
            ROS_INFO("son1相对于son2的关系：父级：%s,子集：%s,偏移量(%.2f,%.2f,%.2f)",
                    trans.header.frame_id.c_str(),
                    trans.child_frame_id.c_str(),
                    trans.transform.translation.x,
                    trans.transform.translation.y,
                    trans.transform.translation.z
                    );
            
            /* 计算son1在son2坐标点*/
            geometry_msgs::PointStamped psson2=buffer.transform(psson1,"son2");
            ROS_INFO("坐标点在son2的值(%.2f,%.2f,%.2f)",
                    psson2.point.x,
                    psson2.point.y,
                    psson2.point.z);

        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
        
    }

    return 0;
}