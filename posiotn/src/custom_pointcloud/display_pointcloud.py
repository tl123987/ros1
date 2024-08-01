#!/usr/bin/env python

import rospy
from sensor_msgs.msg import PointCloud2
import sensor_msgs.point_cloud2 as pc2

def callback(data):
    rospy.loginfo("Received PointCloud with %d points", data.width * data.height)

def listener():
    rospy.init_node('pointcloud_listener', anonymous=True)
    rospy.Subscriber("custom_pointcloud", PointCloud2, callback)
    rospy.spin()

if __name__ == '__main__':
    listener()
