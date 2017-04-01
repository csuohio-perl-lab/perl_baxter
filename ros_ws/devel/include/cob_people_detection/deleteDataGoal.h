// Generated by gencpp from file cob_people_detection/deleteDataGoal.msg
// DO NOT EDIT!


#ifndef COB_PEOPLE_DETECTION_MESSAGE_DELETEDATAGOAL_H
#define COB_PEOPLE_DETECTION_MESSAGE_DELETEDATAGOAL_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace cob_people_detection
{
template <class ContainerAllocator>
struct deleteDataGoal_
{
  typedef deleteDataGoal_<ContainerAllocator> Type;

  deleteDataGoal_()
    : delete_mode(0)
    , delete_index(0)
    , label()  {
    }
  deleteDataGoal_(const ContainerAllocator& _alloc)
    : delete_mode(0)
    , delete_index(0)
    , label(_alloc)  {
  (void)_alloc;
    }



   typedef int32_t _delete_mode_type;
  _delete_mode_type delete_mode;

   typedef int32_t _delete_index_type;
  _delete_index_type delete_index;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _label_type;
  _label_type label;




  typedef boost::shared_ptr< ::cob_people_detection::deleteDataGoal_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::cob_people_detection::deleteDataGoal_<ContainerAllocator> const> ConstPtr;

}; // struct deleteDataGoal_

typedef ::cob_people_detection::deleteDataGoal_<std::allocator<void> > deleteDataGoal;

typedef boost::shared_ptr< ::cob_people_detection::deleteDataGoal > deleteDataGoalPtr;
typedef boost::shared_ptr< ::cob_people_detection::deleteDataGoal const> deleteDataGoalConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::cob_people_detection::deleteDataGoal_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::cob_people_detection::deleteDataGoal_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace cob_people_detection

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'stereo_msgs': ['/opt/ros/indigo/share/stereo_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/indigo/share/actionlib_msgs/cmake/../msg'], 'sensor_msgs': ['/opt/ros/indigo/share/sensor_msgs/cmake/../msg'], 'cob_perception_msgs': ['/opt/ros/indigo/share/cob_perception_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/indigo/share/geometry_msgs/cmake/../msg'], 'cob_people_detection': ['/home/ai05/ros_ws/devel/share/cob_people_detection/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::cob_people_detection::deleteDataGoal_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::cob_people_detection::deleteDataGoal_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::cob_people_detection::deleteDataGoal_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::cob_people_detection::deleteDataGoal_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::cob_people_detection::deleteDataGoal_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::cob_people_detection::deleteDataGoal_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::cob_people_detection::deleteDataGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "699fefe29c3cb75fdf58d155b2fb38f5";
  }

  static const char* value(const ::cob_people_detection::deleteDataGoal_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x699fefe29c3cb75fULL;
  static const uint64_t static_value2 = 0xdf58d155b2fb38f5ULL;
};

template<class ContainerAllocator>
struct DataType< ::cob_people_detection::deleteDataGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "cob_people_detection/deleteDataGoal";
  }

  static const char* value(const ::cob_people_detection::deleteDataGoal_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::cob_people_detection::deleteDataGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
# Deletes specific data in the training database\n\
#\n\
# goal message\n\
int32 delete_mode			# delete database entries in one of the following ways: 1=one entry given the delete_index, 2=all entries labeled with label\n\
int32 delete_index			# the database entry with this index number shall be deleted\n\
string label				# all database entries carrying this label are to be deleted\n\
";
  }

  static const char* value(const ::cob_people_detection::deleteDataGoal_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::cob_people_detection::deleteDataGoal_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.delete_mode);
      stream.next(m.delete_index);
      stream.next(m.label);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct deleteDataGoal_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::cob_people_detection::deleteDataGoal_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::cob_people_detection::deleteDataGoal_<ContainerAllocator>& v)
  {
    s << indent << "delete_mode: ";
    Printer<int32_t>::stream(s, indent + "  ", v.delete_mode);
    s << indent << "delete_index: ";
    Printer<int32_t>::stream(s, indent + "  ", v.delete_index);
    s << indent << "label: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.label);
  }
};

} // namespace message_operations
} // namespace ros

#endif // COB_PEOPLE_DETECTION_MESSAGE_DELETEDATAGOAL_H
