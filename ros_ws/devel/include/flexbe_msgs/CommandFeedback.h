// Generated by gencpp from file flexbe_msgs/CommandFeedback.msg
// DO NOT EDIT!


#ifndef FLEXBE_MSGS_MESSAGE_COMMANDFEEDBACK_H
#define FLEXBE_MSGS_MESSAGE_COMMANDFEEDBACK_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace flexbe_msgs
{
template <class ContainerAllocator>
struct CommandFeedback_
{
  typedef CommandFeedback_<ContainerAllocator> Type;

  CommandFeedback_()
    : command()
    , args()  {
    }
  CommandFeedback_(const ContainerAllocator& _alloc)
    : command(_alloc)
    , args(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _command_type;
  _command_type command;

   typedef std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > , typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::other >  _args_type;
  _args_type args;




  typedef boost::shared_ptr< ::flexbe_msgs::CommandFeedback_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::flexbe_msgs::CommandFeedback_<ContainerAllocator> const> ConstPtr;

}; // struct CommandFeedback_

typedef ::flexbe_msgs::CommandFeedback_<std::allocator<void> > CommandFeedback;

typedef boost::shared_ptr< ::flexbe_msgs::CommandFeedback > CommandFeedbackPtr;
typedef boost::shared_ptr< ::flexbe_msgs::CommandFeedback const> CommandFeedbackConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::flexbe_msgs::CommandFeedback_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::flexbe_msgs::CommandFeedback_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::flexbe_msgs::CommandFeedback_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::flexbe_msgs::CommandFeedback_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::flexbe_msgs::CommandFeedback_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::flexbe_msgs::CommandFeedback_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::flexbe_msgs::CommandFeedback_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::flexbe_msgs::CommandFeedback_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::flexbe_msgs::CommandFeedback_<ContainerAllocator> >
{
  static const char* value()
  {
    return "0c984ea7f8fc562a9c04a778877e1a03";
  }

  static const char* value(const ::flexbe_msgs::CommandFeedback_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x0c984ea7f8fc562aULL;
  static const uint64_t static_value2 = 0x9c04a778877e1a03ULL;
};

template<class ContainerAllocator>
struct DataType< ::flexbe_msgs::CommandFeedback_<ContainerAllocator> >
{
  static const char* value()
  {
    return "flexbe_msgs/CommandFeedback";
  }

  static const char* value(const ::flexbe_msgs::CommandFeedback_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::flexbe_msgs::CommandFeedback_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string command\n\
string[] args\n\
";
  }

  static const char* value(const ::flexbe_msgs::CommandFeedback_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::flexbe_msgs::CommandFeedback_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.command);
      stream.next(m.args);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct CommandFeedback_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::flexbe_msgs::CommandFeedback_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::flexbe_msgs::CommandFeedback_<ContainerAllocator>& v)
  {
    s << indent << "command: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.command);
    s << indent << "args[]" << std::endl;
    for (size_t i = 0; i < v.args.size(); ++i)
    {
      s << indent << "  args[" << i << "]: ";
      Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.args[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // FLEXBE_MSGS_MESSAGE_COMMANDFEEDBACK_H
