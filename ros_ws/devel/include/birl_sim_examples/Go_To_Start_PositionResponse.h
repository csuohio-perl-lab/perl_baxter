// Generated by gencpp from file birl_sim_examples/Go_To_Start_PositionResponse.msg
// DO NOT EDIT!


#ifndef BIRL_SIM_EXAMPLES_MESSAGE_GO_TO_START_POSITIONRESPONSE_H
#define BIRL_SIM_EXAMPLES_MESSAGE_GO_TO_START_POSITIONRESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Bool.h>

namespace birl_sim_examples
{
template <class ContainerAllocator>
struct Go_To_Start_PositionResponse_
{
  typedef Go_To_Start_PositionResponse_<ContainerAllocator> Type;

  Go_To_Start_PositionResponse_()
    : finish()  {
    }
  Go_To_Start_PositionResponse_(const ContainerAllocator& _alloc)
    : finish(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Bool_<ContainerAllocator>  _finish_type;
  _finish_type finish;




  typedef boost::shared_ptr< ::birl_sim_examples::Go_To_Start_PositionResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::birl_sim_examples::Go_To_Start_PositionResponse_<ContainerAllocator> const> ConstPtr;

}; // struct Go_To_Start_PositionResponse_

typedef ::birl_sim_examples::Go_To_Start_PositionResponse_<std::allocator<void> > Go_To_Start_PositionResponse;

typedef boost::shared_ptr< ::birl_sim_examples::Go_To_Start_PositionResponse > Go_To_Start_PositionResponsePtr;
typedef boost::shared_ptr< ::birl_sim_examples::Go_To_Start_PositionResponse const> Go_To_Start_PositionResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::birl_sim_examples::Go_To_Start_PositionResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::birl_sim_examples::Go_To_Start_PositionResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace birl_sim_examples

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'geometry_msgs': ['/opt/ros/indigo/share/geometry_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::birl_sim_examples::Go_To_Start_PositionResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::birl_sim_examples::Go_To_Start_PositionResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::birl_sim_examples::Go_To_Start_PositionResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::birl_sim_examples::Go_To_Start_PositionResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::birl_sim_examples::Go_To_Start_PositionResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::birl_sim_examples::Go_To_Start_PositionResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::birl_sim_examples::Go_To_Start_PositionResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "eeb183bb5deea34fe20098f7b77a4ffc";
  }

  static const char* value(const ::birl_sim_examples::Go_To_Start_PositionResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xeeb183bb5deea34fULL;
  static const uint64_t static_value2 = 0xe20098f7b77a4ffcULL;
};

template<class ContainerAllocator>
struct DataType< ::birl_sim_examples::Go_To_Start_PositionResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "birl_sim_examples/Go_To_Start_PositionResponse";
  }

  static const char* value(const ::birl_sim_examples::Go_To_Start_PositionResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::birl_sim_examples::Go_To_Start_PositionResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n\
\n\
std_msgs/Bool finish\n\
\n\
\n\
================================================================================\n\
MSG: std_msgs/Bool\n\
bool data\n\
";
  }

  static const char* value(const ::birl_sim_examples::Go_To_Start_PositionResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::birl_sim_examples::Go_To_Start_PositionResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.finish);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Go_To_Start_PositionResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::birl_sim_examples::Go_To_Start_PositionResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::birl_sim_examples::Go_To_Start_PositionResponse_<ContainerAllocator>& v)
  {
    s << indent << "finish: ";
    s << std::endl;
    Printer< ::std_msgs::Bool_<ContainerAllocator> >::stream(s, indent + "  ", v.finish);
  }
};

} // namespace message_operations
} // namespace ros

#endif // BIRL_SIM_EXAMPLES_MESSAGE_GO_TO_START_POSITIONRESPONSE_H
