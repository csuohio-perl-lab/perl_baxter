// Generated by gencpp from file test_rospy/ConstantsMultiplexRequest.msg
// DO NOT EDIT!


#ifndef TEST_ROSPY_MESSAGE_CONSTANTSMULTIPLEXREQUEST_H
#define TEST_ROSPY_MESSAGE_CONSTANTSMULTIPLEXREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace test_rospy
{
template <class ContainerAllocator>
struct ConstantsMultiplexRequest_
{
  typedef ConstantsMultiplexRequest_<ContainerAllocator> Type;

  ConstantsMultiplexRequest_()
    : selection(0)  {
    }
  ConstantsMultiplexRequest_(const ContainerAllocator& _alloc)
    : selection(0)  {
  (void)_alloc;
    }



   typedef int8_t _selection_type;
  _selection_type selection;


    enum { BYTE_X = 0 };
     enum { BYTE_Y = 15 };
     enum { BYTE_Z = 5 };
     enum { INT32_X = 0 };
     enum { INT32_Y = -12345678 };
     enum { INT32_Z = 12345678 };
     enum { UINT32_X = 0u };
     enum { UINT32_Y = 12345678u };
     enum { UINT32_Z = 1u };
     static const float FLOAT32_X;
     static const float FLOAT32_Y;
     static const float FLOAT32_Z;
     enum { SELECT_X = 1 };
     enum { SELECT_Y = 2 };
     enum { SELECT_Z = 3 };
 

  typedef boost::shared_ptr< ::test_rospy::ConstantsMultiplexRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::test_rospy::ConstantsMultiplexRequest_<ContainerAllocator> const> ConstPtr;

}; // struct ConstantsMultiplexRequest_

typedef ::test_rospy::ConstantsMultiplexRequest_<std::allocator<void> > ConstantsMultiplexRequest;

typedef boost::shared_ptr< ::test_rospy::ConstantsMultiplexRequest > ConstantsMultiplexRequestPtr;
typedef boost::shared_ptr< ::test_rospy::ConstantsMultiplexRequest const> ConstantsMultiplexRequestConstPtr;

// constants requiring out of line definition

   

   

   

   

   

   

   

   

   

   
   template<typename ContainerAllocator> const float
      ConstantsMultiplexRequest_<ContainerAllocator>::FLOAT32_X =
        
          0.0
        
        ;
   

   
   template<typename ContainerAllocator> const float
      ConstantsMultiplexRequest_<ContainerAllocator>::FLOAT32_Y =
        
          -3.14159
        
        ;
   

   
   template<typename ContainerAllocator> const float
      ConstantsMultiplexRequest_<ContainerAllocator>::FLOAT32_Z =
        
          12345.78
        
        ;
   

   

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::test_rospy::ConstantsMultiplexRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::test_rospy::ConstantsMultiplexRequest_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::test_rospy::ConstantsMultiplexRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::test_rospy::ConstantsMultiplexRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::test_rospy::ConstantsMultiplexRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::test_rospy::ConstantsMultiplexRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::test_rospy::ConstantsMultiplexRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::test_rospy::ConstantsMultiplexRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::test_rospy::ConstantsMultiplexRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "3e3b2ecf5f3e7d25830bd97a7fd13b17";
  }

  static const char* value(const ::test_rospy::ConstantsMultiplexRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x3e3b2ecf5f3e7d25ULL;
  static const uint64_t static_value2 = 0x830bd97a7fd13b17ULL;
};

template<class ContainerAllocator>
struct DataType< ::test_rospy::ConstantsMultiplexRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "test_rospy/ConstantsMultiplexRequest";
  }

  static const char* value(const ::test_rospy::ConstantsMultiplexRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::test_rospy::ConstantsMultiplexRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "byte BYTE_X=0\n\
byte BYTE_Y=15\n\
byte BYTE_Z=5\n\
int32 INT32_X=0\n\
int32 INT32_Y=-12345678\n\
int32 INT32_Z=12345678\n\
uint32 UINT32_X=0\n\
uint32 UINT32_Y=12345678\n\
uint32 UINT32_Z=1\n\
float32 FLOAT32_X=0.0\n\
float32 FLOAT32_Y=-3.14159\n\
float32 FLOAT32_Z=12345.78\n\
byte SELECT_X=1\n\
byte SELECT_Y=2\n\
byte SELECT_Z=3\n\
byte selection\n\
";
  }

  static const char* value(const ::test_rospy::ConstantsMultiplexRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::test_rospy::ConstantsMultiplexRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.selection);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ConstantsMultiplexRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::test_rospy::ConstantsMultiplexRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::test_rospy::ConstantsMultiplexRequest_<ContainerAllocator>& v)
  {
    s << indent << "selection: ";
    Printer<int8_t>::stream(s, indent + "  ", v.selection);
  }
};

} // namespace message_operations
} // namespace ros

#endif // TEST_ROSPY_MESSAGE_CONSTANTSMULTIPLEXREQUEST_H
