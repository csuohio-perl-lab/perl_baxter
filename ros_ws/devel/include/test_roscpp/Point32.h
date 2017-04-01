// Generated by gencpp from file test_roscpp/Point32.msg
// DO NOT EDIT!


#ifndef TEST_ROSCPP_MESSAGE_POINT32_H
#define TEST_ROSCPP_MESSAGE_POINT32_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace test_roscpp
{
template <class ContainerAllocator>
struct Point32_
{
  typedef Point32_<ContainerAllocator> Type;

  Point32_()
    : x(0.0)
    , y(0.0)
    , z(0.0)  {
    }
  Point32_(const ContainerAllocator& _alloc)
    : x(0.0)
    , y(0.0)
    , z(0.0)  {
  (void)_alloc;
    }



   typedef float _x_type;
  _x_type x;

   typedef float _y_type;
  _y_type y;

   typedef float _z_type;
  _z_type z;




  typedef boost::shared_ptr< ::test_roscpp::Point32_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::test_roscpp::Point32_<ContainerAllocator> const> ConstPtr;

}; // struct Point32_

typedef ::test_roscpp::Point32_<std::allocator<void> > Point32;

typedef boost::shared_ptr< ::test_roscpp::Point32 > Point32Ptr;
typedef boost::shared_ptr< ::test_roscpp::Point32 const> Point32ConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::test_roscpp::Point32_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::test_roscpp::Point32_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace test_roscpp

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'rosgraph_msgs': ['/opt/ros/indigo/share/rosgraph_msgs/cmake/../msg'], 'test_roscpp': ['/home/ai05/ros_ws/src/ros_comm/test/test_roscpp/test/msg', '/home/ai05/ros_ws/src/ros_comm/test/test_roscpp/test_serialization/msg', '/home/ai05/ros_ws/src/ros_comm/test/test_roscpp/perf/msg', '/home/ai05/ros_ws/src/ros_comm/test/test_roscpp/perf_serialization/msg'], 'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::test_roscpp::Point32_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::test_roscpp::Point32_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::test_roscpp::Point32_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::test_roscpp::Point32_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::test_roscpp::Point32_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::test_roscpp::Point32_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::test_roscpp::Point32_<ContainerAllocator> >
{
  static const char* value()
  {
    return "cc153912f1453b708d221682bc23d9ac";
  }

  static const char* value(const ::test_roscpp::Point32_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xcc153912f1453b70ULL;
  static const uint64_t static_value2 = 0x8d221682bc23d9acULL;
};

template<class ContainerAllocator>
struct DataType< ::test_roscpp::Point32_<ContainerAllocator> >
{
  static const char* value()
  {
    return "test_roscpp/Point32";
  }

  static const char* value(const ::test_roscpp::Point32_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::test_roscpp::Point32_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float32 x\n\
float32 y\n\
float32 z\n\
";
  }

  static const char* value(const ::test_roscpp::Point32_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::test_roscpp::Point32_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.x);
      stream.next(m.y);
      stream.next(m.z);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Point32_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::test_roscpp::Point32_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::test_roscpp::Point32_<ContainerAllocator>& v)
  {
    s << indent << "x: ";
    Printer<float>::stream(s, indent + "  ", v.x);
    s << indent << "y: ";
    Printer<float>::stream(s, indent + "  ", v.y);
    s << indent << "z: ";
    Printer<float>::stream(s, indent + "  ", v.z);
  }
};

} // namespace message_operations
} // namespace ros

#endif // TEST_ROSCPP_MESSAGE_POINT32_H
