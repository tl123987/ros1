// Generated by gencpp from file ser/opRequest.msg
// DO NOT EDIT!


#ifndef SER_MESSAGE_OPREQUEST_H
#define SER_MESSAGE_OPREQUEST_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace ser
{
template <class ContainerAllocator>
struct opRequest_
{
  typedef opRequest_<ContainerAllocator> Type;

  opRequest_()
    : num1(0)
    , num2(0)  {
    }
  opRequest_(const ContainerAllocator& _alloc)
    : num1(0)
    , num2(0)  {
  (void)_alloc;
    }



   typedef int32_t _num1_type;
  _num1_type num1;

   typedef int32_t _num2_type;
  _num2_type num2;





  typedef boost::shared_ptr< ::ser::opRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::ser::opRequest_<ContainerAllocator> const> ConstPtr;

}; // struct opRequest_

typedef ::ser::opRequest_<std::allocator<void> > opRequest;

typedef boost::shared_ptr< ::ser::opRequest > opRequestPtr;
typedef boost::shared_ptr< ::ser::opRequest const> opRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::ser::opRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::ser::opRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::ser::opRequest_<ContainerAllocator1> & lhs, const ::ser::opRequest_<ContainerAllocator2> & rhs)
{
  return lhs.num1 == rhs.num1 &&
    lhs.num2 == rhs.num2;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::ser::opRequest_<ContainerAllocator1> & lhs, const ::ser::opRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace ser

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::ser::opRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ser::opRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ser::opRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ser::opRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ser::opRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ser::opRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::ser::opRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "c68f3979e1a90aac7d1c75a1096d1e60";
  }

  static const char* value(const ::ser::opRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xc68f3979e1a90aacULL;
  static const uint64_t static_value2 = 0x7d1c75a1096d1e60ULL;
};

template<class ContainerAllocator>
struct DataType< ::ser::opRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ser/opRequest";
  }

  static const char* value(const ::ser::opRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::ser::opRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# 客户端请求时发送的两个数字\n"
"int32 num1\n"
"int32 num2\n"
;
  }

  static const char* value(const ::ser::opRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::ser::opRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.num1);
      stream.next(m.num2);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct opRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::ser::opRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::ser::opRequest_<ContainerAllocator>& v)
  {
    s << indent << "num1: ";
    Printer<int32_t>::stream(s, indent + "  ", v.num1);
    s << indent << "num2: ";
    Printer<int32_t>::stream(s, indent + "  ", v.num2);
  }
};

} // namespace message_operations
} // namespace ros

#endif // SER_MESSAGE_OPREQUEST_H
