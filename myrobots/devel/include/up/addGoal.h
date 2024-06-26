// Generated by gencpp from file up/addGoal.msg
// DO NOT EDIT!


#ifndef UP_MESSAGE_ADDGOAL_H
#define UP_MESSAGE_ADDGOAL_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace up
{
template <class ContainerAllocator>
struct addGoal_
{
  typedef addGoal_<ContainerAllocator> Type;

  addGoal_()
    : num(0)  {
    }
  addGoal_(const ContainerAllocator& _alloc)
    : num(0)  {
  (void)_alloc;
    }



   typedef int32_t _num_type;
  _num_type num;





  typedef boost::shared_ptr< ::up::addGoal_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::up::addGoal_<ContainerAllocator> const> ConstPtr;

}; // struct addGoal_

typedef ::up::addGoal_<std::allocator<void> > addGoal;

typedef boost::shared_ptr< ::up::addGoal > addGoalPtr;
typedef boost::shared_ptr< ::up::addGoal const> addGoalConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::up::addGoal_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::up::addGoal_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::up::addGoal_<ContainerAllocator1> & lhs, const ::up::addGoal_<ContainerAllocator2> & rhs)
{
  return lhs.num == rhs.num;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::up::addGoal_<ContainerAllocator1> & lhs, const ::up::addGoal_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace up

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::up::addGoal_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::up::addGoal_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::up::addGoal_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::up::addGoal_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::up::addGoal_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::up::addGoal_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::up::addGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "54b3c80efd6fae6e6ffff8a4b9facd69";
  }

  static const char* value(const ::up::addGoal_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x54b3c80efd6fae6eULL;
  static const uint64_t static_value2 = 0x6ffff8a4b9facd69ULL;
};

template<class ContainerAllocator>
struct DataType< ::up::addGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "up/addGoal";
  }

  static const char* value(const ::up::addGoal_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::up::addGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n"
"#目标值\n"
"int32 num\n"
;
  }

  static const char* value(const ::up::addGoal_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::up::addGoal_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.num);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct addGoal_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::up::addGoal_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::up::addGoal_<ContainerAllocator>& v)
  {
    s << indent << "num: ";
    Printer<int32_t>::stream(s, indent + "  ", v.num);
  }
};

} // namespace message_operations
} // namespace ros

#endif // UP_MESSAGE_ADDGOAL_H
