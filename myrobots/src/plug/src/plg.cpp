//pluginlib 宏，可以注册插件类
#include <pluginlib/class_list_macros.h>
#include <plug/base.h>
#include <plug/plg.h>

//参数1:衍生类 参数2:基类
PLUGINLIB_EXPORT_CLASS(polygon_plugins::Triangle, polygon_base::RegularPolygon)

