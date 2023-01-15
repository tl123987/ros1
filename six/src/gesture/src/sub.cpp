#include"ros/ros.h"
#include"tf2_ros/transform_listener.h"
#include"tf2_ros/buffer.h"
#include"geometry_msgs/PointStamped.h"
#include"tf2_geometry_msgs/tf2_geometry_msgs.h"

int main(int argc, char** argv) {
    setlocale(LC_ALL,"");
    ros::init(argc,argv,"static_sub");
    ros::NodeHandle nh;
    //buffer缓存
    tf2_ros::Buffer buffer;
    //监听对象
    tf2_ros::TransformListener listener(buffer);
    //一个坐标点格式,相对于雷达
    geometry_msgs::PointStamped ps;
    ps.header.frame_id="laser";
    ps.header.stamp=ros::Time::now();
    ps.point.x=2.0;
    ps.point.y=3.0;
    ps.point.z=5.0;
    //休眠
    //ros::Duration(2).sleep();
    //转换算法
    ros::Rate rate(10);
    while(ros::ok())
    {
        //ps转化为相对与底盘的坐标
        geometry_msgs::PointStamped ps_out;
        /*
          调用 buffer
          参数1：被转换点
          参数2：目标系坐标系
          返回值：输出的坐标点
          ps:调用时必须包含头文件
          ps:休眠
             抛出异常
        */
    try
    {
        ps_out=buffer.transform(ps,"base_link");
        ROS_INFO("转换后的坐标系：(%.2f,%2.f,%2.f),参考的坐标系：%s",
                      ps_out.point.x,
                      ps_out.point.y,
                      ps_out.point.z,
                      ps_out.header.frame_id.c_str()
                      );
    }
    catch(const std::exception& e)
    {
        ROS_INFO("异常消息：%s",e.what());
    }
    rate.sleep();
    ros::spinOnce();
    
    }
    return 0;
}
