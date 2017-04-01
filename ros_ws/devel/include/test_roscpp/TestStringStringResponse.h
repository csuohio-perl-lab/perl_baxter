// Generated by gencpp from file test_roscpp/TestStringStringResponse.msg
// DO NOT EDIT!


#ifndef TEST_ROSCPP_MESSAGE_TESTSTRINGSTRINGRESPONSE_H
#define TEST_ROSCPP_MESSAGE_TESTSTRINGSTRINGRESPONSE_H


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
struct TestStringStringResponse_
{
  typedef TestStringStringResponse_<ContainerAllocator> Type;

  TestStringStringResponse_()
    : str()  {
    }
  TestStringStringResponse_(const ContainerAllocator& _alloc)
    : str(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _str_type;
  _str_type str;




  typedef boost::shared_ptr< ::test_roscpp::TestStringStringResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::test_roscpp::TestStringStringResponse_<ContainerAllocator> const> ConstPtr;

}; // struct TestStringStringResponse_

typedef ::test_roscpp::TestStringStringResponse_<std::allocator<void> > TestStringStringResponse;

typedef boost::shared_ptr< ::test_roscpp::TestStringStringResponse > TestStringStringResponsePtr;
typedef boost::shared_ptr< ::test_roscpp::TestStringStringResponse const> TestStringStringResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::test_roscpp::TestStringStringResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::test_roscpp::TestStringStringResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace test_roscpp

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'rosgraph_msgs': ['/opt/ros/indigo/share/rosgraph_msgs/cmake/../msg'], 'test_roscpp': ['/home/ai05/ros_ws/src/ros_comm/test/test_roscpp/test/msg', '/home/ai05/ros_ws/src/ros_comm/test/test_roscpp/test_serialization/msg', '/home/ai05/ros_ws/src/ros_comm/test/test_roscpp/perf/msg', '/home/ai05/ros_ws/src/ros_comm/test/test_roscpp/perf_serialization/msg'], 'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::test_roscpp::TestStringStringResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::test_roscpp::TestStringStringResponse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::test_roscpp::TestStringStringResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::test_roscpp::TestStringStringResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::test_roscpp::TestStringStringResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::test_roscpp::TestStringStringResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::test_roscpp::TestStringStringResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "994972b6e03928b2476860ce6c4c8e17";
  }

  static const char* value(const ::test_roscpp::TestStringStringResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x994972b6e03928b2ULL;
  static const uint64_t static_value2 = 0x476860ce6c4c8e17ULL;
};

template<class ContainerAllocator>
struct DataType< ::test_roscpp::TestStringStringResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "test_roscpp/TestStringStringResponse";
  }

  static const char* value(const ::test_roscpp::TestStringStringResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::test_roscpp::TestStringStringResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string str\n\
\n\
";
  }

  static const char* value(const ::test_roscpp::TestStringStringResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::test_roscpp::TestStringStringResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.str);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct TestStringStringResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::test_roscpp::TestStringStringResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::test_roscpp::TestStringStringResponse_<ContainerAllocator>& v)
  {
    s << indent << "str: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.str);
  }
};

} // namespace message_operations
} // namespace ros

#endif // TEST_ROSCPP_MESSAGE_TESTSTRINGSTRINGRESPONSE_H
