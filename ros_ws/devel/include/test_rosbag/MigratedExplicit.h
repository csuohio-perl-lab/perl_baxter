// Generated by gencpp from file test_rosbag/MigratedExplicit.msg
// DO NOT EDIT!


#ifndef TEST_ROSBAG_MESSAGE_MIGRATEDEXPLICIT_H
#define TEST_ROSBAG_MESSAGE_MIGRATEDEXPLICIT_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>

namespace test_rosbag
{
template <class ContainerAllocator>
struct MigratedExplicit_
{
  typedef MigratedExplicit_<ContainerAllocator> Type;

  MigratedExplicit_()
    : header()
    , field2(0.0)
    , combo_field3()
    , field4(0)  {
    }
  MigratedExplicit_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , field2(0.0)
    , combo_field3(_alloc)
    , field4(0)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef float _field2_type;
  _field2_type field2;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _combo_field3_type;
  _combo_field3_type combo_field3;

   typedef int32_t _field4_type;
  _field4_type field4;




  typedef boost::shared_ptr< ::test_rosbag::MigratedExplicit_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::test_rosbag::MigratedExplicit_<ContainerAllocator> const> ConstPtr;

}; // struct MigratedExplicit_

typedef ::test_rosbag::MigratedExplicit_<std::allocator<void> > MigratedExplicit;

typedef boost::shared_ptr< ::test_rosbag::MigratedExplicit > MigratedExplicitPtr;
typedef boost::shared_ptr< ::test_rosbag::MigratedExplicit const> MigratedExplicitConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::test_rosbag::MigratedExplicit_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::test_rosbag::MigratedExplicit_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace test_rosbag

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'rosgraph_msgs': ['/opt/ros/indigo/share/rosgraph_msgs/cmake/../msg'], 'test_rosbag': ['/home/ai05/ros_ws/src/ros_comm/test/test_rosbag/bag_migration_tests/msg_current'], 'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::test_rosbag::MigratedExplicit_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::test_rosbag::MigratedExplicit_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::test_rosbag::MigratedExplicit_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::test_rosbag::MigratedExplicit_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::test_rosbag::MigratedExplicit_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::test_rosbag::MigratedExplicit_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::test_rosbag::MigratedExplicit_<ContainerAllocator> >
{
  static const char* value()
  {
    return "61091b48e6dd7d581a3c956e639b9ccf";
  }

  static const char* value(const ::test_rosbag::MigratedExplicit_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x61091b48e6dd7d58ULL;
  static const uint64_t static_value2 = 0x1a3c956e639b9ccfULL;
};

template<class ContainerAllocator>
struct DataType< ::test_rosbag::MigratedExplicit_<ContainerAllocator> >
{
  static const char* value()
  {
    return "test_rosbag/MigratedExplicit";
  }

  static const char* value(const ::test_rosbag::MigratedExplicit_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::test_rosbag::MigratedExplicit_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header  header\n\
float32 field2 #58.2\n\
string  combo_field3 #\"aldfkja 17\"\n\
int32   field4 #82\n\
\n\
================================================================================\n\
MSG: std_msgs/Header\n\
# Standard metadata for higher-level stamped data types.\n\
# This is generally used to communicate timestamped data \n\
# in a particular coordinate frame.\n\
# \n\
# sequence ID: consecutively increasing ID \n\
uint32 seq\n\
#Two-integer timestamp that is expressed as:\n\
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n\
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
";
  }

  static const char* value(const ::test_rosbag::MigratedExplicit_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::test_rosbag::MigratedExplicit_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.field2);
      stream.next(m.combo_field3);
      stream.next(m.field4);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct MigratedExplicit_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::test_rosbag::MigratedExplicit_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::test_rosbag::MigratedExplicit_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "field2: ";
    Printer<float>::stream(s, indent + "  ", v.field2);
    s << indent << "combo_field3: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.combo_field3);
    s << indent << "field4: ";
    Printer<int32_t>::stream(s, indent + "  ", v.field4);
  }
};

} // namespace message_operations
} // namespace ros

#endif // TEST_ROSBAG_MESSAGE_MIGRATEDEXPLICIT_H
