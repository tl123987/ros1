#include"ros/ros.h"
#include"tf2_ros/static_transform_broadcaster.h"
#include"geometry_msgs/TransformStamped.h"
#include"tf2/LinearMath/Quaternion.h"
//发布静态坐标
int main(int argc,  char** argv) {
    setlocale(LC_ALL,""),
    ros::init(argc,argv,"pub");
    ros::NodeHandle nh;
    tf2_ros::StaticTransformBroadcaster pub;//静态发布器
    //坐标点
    geometry_msgs::TransformStamped tfs;
    tfs.header.stamp=ros::Time::now();
    tfs.header.frame_id="base_link";//主参考系
    tfs.child_frame_id="laser";//被参考系
    tfs.transform.translation.x=0.2;//被参考系偏移量
    tfs.transform.translation.y=0;
    tfs.transform.translation.z=0.5;

    tf2::Quaternion qtn;//创建四元素对象
    //欧拉角
    qtn.setRPY(0,0,0);//单位弧度
    tfs.transform.rotation.x=qtn.getX();
    tfs.transform.rotation.y=qtn.getY();
    tfs.transform.rotation.z=qtn.getZ();
    tfs.transform.rotation.w=qtn.getW();
    pub.sendTransform(tfs);
    ros::spin();
    return 0;
}