// Generated by gencpp from file flexbe_msgs/BehaviorRequest.msg
// DO NOT EDIT!


#ifndef FLEXBE_MSGS_MESSAGE_BEHAVIORREQUEST_H
#define FLEXBE_MSGS_MESSAGE_BEHAVIORREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <flexbe_msgs/Container.h>

namespace flexbe_msgs
{
template <class ContainerAllocator>
struct BehaviorRequest_
{
  typedef BehaviorRequest_<ContainerAllocator> Type;

  BehaviorRequest_()
    : behavior_name()
    , autonomy_level(0)
    , arg_keys()
    , arg_values()
    , structure()  {
    }
  BehaviorRequest_(const ContainerAllocator& _alloc)
    : behavior_name(_alloc)
    , autonomy_level(0)
    , arg_keys(_alloc)
    , arg_values(_alloc)
    , structure(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _behavior_name_type;
  _behavior_name_type behavior_name;

   typedef uint8_t _autonomy_level_type;
  _autonomy_level_type autonomy_level;

   typedef std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > , typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::other >  _arg_keys_type;
  _arg_keys_type arg_keys;

   typedef std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > , typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::other >  _arg_values_type;
  _arg_values_type arg_values;

   typedef std::vector< ::flexbe_msgs::Container_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::flexbe_msgs::Container_<ContainerAllocator> >::other >  _structure_type;
  _structure_type structure;




  typedef boost::shared_ptr< ::flexbe_msgs::BehaviorRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::flexbe_msgs::BehaviorRequest_<ContainerAllocator> const> ConstPtr;

}; // struct BehaviorRequest_

typedef ::flexbe_msgs::BehaviorRequest_<std::allocator<void> > BehaviorRequest;

typedef boost::shared_ptr< ::flexbe_msgs::BehaviorRequest > BehaviorRequestPtr;
typedef boost::shared_ptr< ::flexbe_msgs::BehaviorRequest const> BehaviorRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::flexbe_msgs::BehaviorRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::flexbe_msgs::BehaviorRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace flexbe_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/indigo/share/actionlib_msgs/cmake/../msg'], 'flexbe_msgs': ['/home/ai05/ros_ws/src/birl_baxter_executive/flexbe_behavior_engine/flexbe_msgs/msg', '/home/ai05/ros_ws/devel/share/flexbe_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::flexbe_msgs::BehaviorRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::flexbe_msgs::BehaviorRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::flexbe_msgs::BehaviorRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::flexbe_msgs::BehaviorRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::flexbe_msgs::BehaviorRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::flexbe_msgs::BehaviorRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::flexbe_msgs::BehaviorRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "0b55949502d4c602376ee00a64d0d294";
  }

  static const char* value(const ::flexbe_msgs::BehaviorRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x0b55949502d4c602ULL;
  static const uint64_t static_value2 = 0x376ee00a64d0d294ULL;
};

template<class ContainerAllocator>
struct DataType< ::flexbe_msgs::BehaviorRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "flexbe_msgs/BehaviorRequest";
  }

  static const char* value(const ::flexbe_msgs::BehaviorRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::flexbe_msgs::BehaviorRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string behavior_name\n\
\n\
uint8 autonomy_level\n\
string[] arg_keys\n\
string[] arg_values\n\
\n\
Container[] structure\n\
================================================================================\n\
MSG: flexbe_msgs/Container\n\
string path\n\
string[] children\n\
string[] outcomes\n\
string[] transitions\n\
byte[] autonomy\n\
";
  }

  static const char* value(const ::flexbe_msgs::BehaviorRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::flexbe_msgs::BehaviorRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.behavior_name);
      stream.next(m.autonomy_level);
      stream.next(m.arg_keys);
      stream.next(m.arg_values);
      stream.next(m.structure);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct BehaviorRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::flexbe_msgs::BehaviorRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::flexbe_msgs::BehaviorRequest_<ContainerAllocator>& v)
  {
    s << indent << "behavior_name: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.behavior_name);
    s << indent << "autonomy_level: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.autonomy_level);
    s << indent << "arg_keys[]" << std::endl;
    for (size_t i = 0; i < v.arg_keys.size(); ++i)
    {
      s << indent << "  arg_keys[" << i << "]: ";
      Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.arg_keys[i]);
    }
    s << indent << "arg_values[]" << std::endl;
    for (size_t i = 0; i < v.arg_values.size(); ++i)
    {
      s << indent << "  arg_values[" << i << "]: ";
      Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.arg_values[i]);
    }
    s << indent << "structure[]" << std::endl;
    for (size_t i = 0; i < v.structure.size(); ++i)
    {
      s << indent << "  structure[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::flexbe_msgs::Container_<ContainerAllocator> >::stream(s, indent + "    ", v.structure[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // FLEXBE_MSGS_MESSAGE_BEHAVIORREQUEST_H
