// Generated by gencpp from file flexbe_msgs/BehaviorInputAction.msg
// DO NOT EDIT!


#ifndef FLEXBE_MSGS_MESSAGE_BEHAVIORINPUTACTION_H
#define FLEXBE_MSGS_MESSAGE_BEHAVIORINPUTACTION_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <flexbe_msgs/BehaviorInputActionGoal.h>
#include <flexbe_msgs/BehaviorInputActionResult.h>
#include <flexbe_msgs/BehaviorInputActionFeedback.h>

namespace flexbe_msgs
{
template <class ContainerAllocator>
struct BehaviorInputAction_
{
  typedef BehaviorInputAction_<ContainerAllocator> Type;

  BehaviorInputAction_()
    : action_goal()
    , action_result()
    , action_feedback()  {
    }
  BehaviorInputAction_(const ContainerAllocator& _alloc)
    : action_goal(_alloc)
    , action_result(_alloc)
    , action_feedback(_alloc)  {
  (void)_alloc;
    }



   typedef  ::flexbe_msgs::BehaviorInputActionGoal_<ContainerAllocator>  _action_goal_type;
  _action_goal_type action_goal;

   typedef  ::flexbe_msgs::BehaviorInputActionResult_<ContainerAllocator>  _action_result_type;
  _action_result_type action_result;

   typedef  ::flexbe_msgs::BehaviorInputActionFeedback_<ContainerAllocator>  _action_feedback_type;
  _action_feedback_type action_feedback;




  typedef boost::shared_ptr< ::flexbe_msgs::BehaviorInputAction_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::flexbe_msgs::BehaviorInputAction_<ContainerAllocator> const> ConstPtr;

}; // struct BehaviorInputAction_

typedef ::flexbe_msgs::BehaviorInputAction_<std::allocator<void> > BehaviorInputAction;

typedef boost::shared_ptr< ::flexbe_msgs::BehaviorInputAction > BehaviorInputActionPtr;
typedef boost::shared_ptr< ::flexbe_msgs::BehaviorInputAction const> BehaviorInputActionConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::flexbe_msgs::BehaviorInputAction_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::flexbe_msgs::BehaviorInputAction_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::flexbe_msgs::BehaviorInputAction_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::flexbe_msgs::BehaviorInputAction_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::flexbe_msgs::BehaviorInputAction_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::flexbe_msgs::BehaviorInputAction_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::flexbe_msgs::BehaviorInputAction_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::flexbe_msgs::BehaviorInputAction_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::flexbe_msgs::BehaviorInputAction_<ContainerAllocator> >
{
  static const char* value()
  {
    return "da5f1a9fbafffe8dfff69ff5a208dd99";
  }

  static const char* value(const ::flexbe_msgs::BehaviorInputAction_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xda5f1a9fbafffe8dULL;
  static const uint64_t static_value2 = 0xfff69ff5a208dd99ULL;
};

template<class ContainerAllocator>
struct DataType< ::flexbe_msgs::BehaviorInputAction_<ContainerAllocator> >
{
  static const char* value()
  {
    return "flexbe_msgs/BehaviorInputAction";
  }

  static const char* value(const ::flexbe_msgs::BehaviorInputAction_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::flexbe_msgs::BehaviorInputAction_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
\n\
BehaviorInputActionGoal action_goal\n\
BehaviorInputActionResult action_result\n\
BehaviorInputActionFeedback action_feedback\n\
\n\
================================================================================\n\
MSG: flexbe_msgs/BehaviorInputActionGoal\n\
# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
\n\
Header header\n\
actionlib_msgs/GoalID goal_id\n\
BehaviorInputGoal goal\n\
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
\n\
================================================================================\n\
MSG: actionlib_msgs/GoalID\n\
# The stamp should store the time at which this goal was requested.\n\
# It is used by an action server when it tries to preempt all\n\
# goals that were requested before a certain time\n\
time stamp\n\
\n\
# The id provides a way to associate feedback and\n\
# result message with specific goal requests. The id\n\
# specified must be unique.\n\
string id\n\
\n\
\n\
================================================================================\n\
MSG: flexbe_msgs/BehaviorInputGoal\n\
# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
# Available request types\n\
\n\
uint8 POINT_LOCATION 	    = 0\n\
uint8 SELECTED_OBJECT_ID    = 1\n\
uint8 WAYPOINT_GOAL_POSE    = 2\n\
uint8 GHOST_JOINT_STATES    = 3\n\
uint8 FOOTSTEP_PLAN_HEADER  = 4\n\
\n\
\n\
# Choose one of the available request types above\n\
uint8 request_type\n\
\n\
# Request message displayed to the operator\n\
# Provide context information, i.e. for which purpose the data is required.\n\
# The operator will be told which type of data to provide indepently from this message.\n\
string msg\n\
\n\
\n\
================================================================================\n\
MSG: flexbe_msgs/BehaviorInputActionResult\n\
# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
\n\
Header header\n\
actionlib_msgs/GoalStatus status\n\
BehaviorInputResult result\n\
\n\
================================================================================\n\
MSG: actionlib_msgs/GoalStatus\n\
GoalID goal_id\n\
uint8 status\n\
uint8 PENDING         = 0   # The goal has yet to be processed by the action server\n\
uint8 ACTIVE          = 1   # The goal is currently being processed by the action server\n\
uint8 PREEMPTED       = 2   # The goal received a cancel request after it started executing\n\
                            #   and has since completed its execution (Terminal State)\n\
uint8 SUCCEEDED       = 3   # The goal was achieved successfully by the action server (Terminal State)\n\
uint8 ABORTED         = 4   # The goal was aborted during execution by the action server due\n\
                            #    to some failure (Terminal State)\n\
uint8 REJECTED        = 5   # The goal was rejected by the action server without being processed,\n\
                            #    because the goal was unattainable or invalid (Terminal State)\n\
uint8 PREEMPTING      = 6   # The goal received a cancel request after it started executing\n\
                            #    and has not yet completed execution\n\
uint8 RECALLING       = 7   # The goal received a cancel request before it started executing,\n\
                            #    but the action server has not yet confirmed that the goal is canceled\n\
uint8 RECALLED        = 8   # The goal received a cancel request before it started executing\n\
                            #    and was successfully cancelled (Terminal State)\n\
uint8 LOST            = 9   # An action client can determine that a goal is LOST. This should not be\n\
                            #    sent over the wire by an action server\n\
\n\
#Allow for the user to associate a string with GoalStatus for debugging\n\
string text\n\
\n\
\n\
================================================================================\n\
MSG: flexbe_msgs/BehaviorInputResult\n\
# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
\n\
uint8 RESULT_OK 		= 0\n\
uint8 RESULT_FAILED		= 1\n\
uint8 RESULT_ABORTED	= 2\n\
\n\
# Indicates if the request has been successful\n\
uint8 result_code\n\
\n\
# Serialized data which was requested\n\
# In case of result_code != RESULT_OK, this field will contain unserialized data regarding the reason of failure instead.\n\
string data\n\
\n\
\n\
================================================================================\n\
MSG: flexbe_msgs/BehaviorInputActionFeedback\n\
# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
\n\
Header header\n\
actionlib_msgs/GoalStatus status\n\
BehaviorInputFeedback feedback\n\
\n\
================================================================================\n\
MSG: flexbe_msgs/BehaviorInputFeedback\n\
# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
\n\
\n\
\n\
";
  }

  static const char* value(const ::flexbe_msgs::BehaviorInputAction_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::flexbe_msgs::BehaviorInputAction_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.action_goal);
      stream.next(m.action_result);
      stream.next(m.action_feedback);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct BehaviorInputAction_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::flexbe_msgs::BehaviorInputAction_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::flexbe_msgs::BehaviorInputAction_<ContainerAllocator>& v)
  {
    s << indent << "action_goal: ";
    s << std::endl;
    Printer< ::flexbe_msgs::BehaviorInputActionGoal_<ContainerAllocator> >::stream(s, indent + "  ", v.action_goal);
    s << indent << "action_result: ";
    s << std::endl;
    Printer< ::flexbe_msgs::BehaviorInputActionResult_<ContainerAllocator> >::stream(s, indent + "  ", v.action_result);
    s << indent << "action_feedback: ";
    s << std::endl;
    Printer< ::flexbe_msgs::BehaviorInputActionFeedback_<ContainerAllocator> >::stream(s, indent + "  ", v.action_feedback);
  }
};

} // namespace message_operations
} // namespace ros

#endif // FLEXBE_MSGS_MESSAGE_BEHAVIORINPUTACTION_H
