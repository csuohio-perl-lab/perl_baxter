// Generated by gencpp from file test_rospy/TransitiveMsg2.msg
// DO NOT EDIT!


#ifndef TEST_ROSPY_MESSAGE_TRANSITIVEMSG2_H
#define TEST_ROSPY_MESSAGE_TRANSITIVEMSG2_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <test_rosmaster/Composite.h>

namespace test_rospy
{
template <class ContainerAllocator>
struct TransitiveMsg2_
{
  typedef TransitiveMsg2_<ContainerAllocator> Type;

  TransitiveMsg2_()
    : data()  {
    }
  TransitiveMsg2_(const ContainerAllocator& _alloc)
    : data(_alloc)  {
  (void)_alloc;
    }



   typedef  ::test_rosmaster::Composite_<ContainerAllocator>  _data_type;
  _data_type data;




  typedef boost::shared_ptr< ::test_rospy::TransitiveMsg2_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::test_rospy::TransitiveMsg2_<ContainerAllocator> const> ConstPtr;

}; // struct TransitiveMsg2_

typedef ::test_rospy::TransitiveMsg2_<std::allocator<void> > TransitiveMsg2;

typedef boost::shared_ptr< ::test_rospy::TransitiveMsg2 > TransitiveMsg2Ptr;
typedef boost::shared_ptr< ::test_rospy::TransitiveMsg2 const> TransitiveMsg2ConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::test_rospy::TransitiveMsg2_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::test_rospy::TransitiveMsg2_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace test_rospy

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'test_rospy': ['/home/ai05/ros_ws/src/ros_comm/test/test_rospy/msg'], 'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg'], 'test_rosmaster': ['/home/ai05/ros_ws/src/ros_comm/test/test_rosmaster/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::test_rospy::TransitiveMsg2_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::test_rospy::TransitiveMsg2_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::test_rospy::TransitiveMsg2_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::test_rospy::TransitiveMsg2_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::test_rospy::TransitiveMsg2_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::test_rospy::TransitiveMsg2_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::test_rospy::TransitiveMsg2_<ContainerAllocator> >
{
  static const char* value()
  {
    return "eb1fa3c8b51b0e31f74e89c2eecc441e";
  }

  static const char* value(const ::test_rospy::TransitiveMsg2_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xeb1fa3c8b51b0e31ULL;
  static const uint64_t static_value2 = 0xf74e89c2eecc441eULL;
};

template<class ContainerAllocator>
struct DataType< ::test_rospy::TransitiveMsg2_<ContainerAllocator> >
{
  static const char* value()
  {
    return "test_rospy/TransitiveMsg2";
  }

  static const char* value(const ::test_rospy::TransitiveMsg2_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::test_rospy::TransitiveMsg2_<ContainerAllocator> >
{
  static const char* value()
  {
    return "test_rosmaster/Composite data\n\
\n\
================================================================================\n\
MSG: test_rosmaster/Composite\n\
# composite message. required for testing import calculation in generators\n\
CompositeA a\n\
CompositeB b\n\
\n\
================================================================================\n\
MSG: test_rosmaster/CompositeA\n\
# This represents an orientation in free space in quaternion form.\n\
\n\
float64 x\n\
float64 y\n\
float64 z\n\
float64 w\n\
\n\
================================================================================\n\
MSG: test_rosmaster/CompositeB\n\
# copy of geometry_msgs/Point for testing\n\
float64 x\n\
float64 y\n\
float64 z\n\
";
  }

  static const char* value(const ::test_rospy::TransitiveMsg2_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::test_rospy::TransitiveMsg2_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.data);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct TransitiveMsg2_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::test_rospy::TransitiveMsg2_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::test_rospy::TransitiveMsg2_<ContainerAllocator>& v)
  {
    s << indent << "data: ";
    s << std::endl;
    Printer< ::test_rosmaster::Composite_<ContainerAllocator> >::stream(s, indent + "  ", v.data);
  }
};

} // namespace message_operations
} // namespace ros

#endif // TEST_ROSPY_MESSAGE_TRANSITIVEMSG2_H
