// Generated by gencpp from file example_smach/AddFourIntsRequest.msg
// DO NOT EDIT!


#ifndef EXAMPLE_SMACH_MESSAGE_ADDFOURINTSREQUEST_H
#define EXAMPLE_SMACH_MESSAGE_ADDFOURINTSREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace example_smach
{
template <class ContainerAllocator>
struct AddFourIntsRequest_
{
  typedef AddFourIntsRequest_<ContainerAllocator> Type;

  AddFourIntsRequest_()
    : a(0)
    , b(0)
    , c(0)
    , d(0)  {
    }
  AddFourIntsRequest_(const ContainerAllocator& _alloc)
    : a(0)
    , b(0)
    , c(0)
    , d(0)  {
  (void)_alloc;
    }



   typedef int64_t _a_type;
  _a_type a;

   typedef int64_t _b_type;
  _b_type b;

   typedef int64_t _c_type;
  _c_type c;

   typedef int64_t _d_type;
  _d_type d;




  typedef boost::shared_ptr< ::example_smach::AddFourIntsRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::example_smach::AddFourIntsRequest_<ContainerAllocator> const> ConstPtr;

}; // struct AddFourIntsRequest_

typedef ::example_smach::AddFourIntsRequest_<std::allocator<void> > AddFourIntsRequest;

typedef boost::shared_ptr< ::example_smach::AddFourIntsRequest > AddFourIntsRequestPtr;
typedef boost::shared_ptr< ::example_smach::AddFourIntsRequest const> AddFourIntsRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::example_smach::AddFourIntsRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::example_smach::AddFourIntsRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace example_smach

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg'], 'example_smach': ['/home/ai05/ros_ws/src/birl_baxter_examples/example_smach/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::example_smach::AddFourIntsRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::example_smach::AddFourIntsRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::example_smach::AddFourIntsRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::example_smach::AddFourIntsRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::example_smach::AddFourIntsRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::example_smach::AddFourIntsRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::example_smach::AddFourIntsRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "216a3d82929321b0f6641b16908de5c6";
  }

  static const char* value(const ::example_smach::AddFourIntsRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x216a3d82929321b0ULL;
  static const uint64_t static_value2 = 0xf6641b16908de5c6ULL;
};

template<class ContainerAllocator>
struct DataType< ::example_smach::AddFourIntsRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "example_smach/AddFourIntsRequest";
  }

  static const char* value(const ::example_smach::AddFourIntsRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::example_smach::AddFourIntsRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int64 a\n\
int64 b\n\
int64 c\n\
int64 d\n\
";
  }

  static const char* value(const ::example_smach::AddFourIntsRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::example_smach::AddFourIntsRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.a);
      stream.next(m.b);
      stream.next(m.c);
      stream.next(m.d);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct AddFourIntsRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::example_smach::AddFourIntsRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::example_smach::AddFourIntsRequest_<ContainerAllocator>& v)
  {
    s << indent << "a: ";
    Printer<int64_t>::stream(s, indent + "  ", v.a);
    s << indent << "b: ";
    Printer<int64_t>::stream(s, indent + "  ", v.b);
    s << indent << "c: ";
    Printer<int64_t>::stream(s, indent + "  ", v.c);
    s << indent << "d: ";
    Printer<int64_t>::stream(s, indent + "  ", v.d);
  }
};

} // namespace message_operations
} // namespace ros

#endif // EXAMPLE_SMACH_MESSAGE_ADDFOURINTSREQUEST_H
