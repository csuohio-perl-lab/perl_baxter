# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from birl_sim_examples/Go_To_PositionRequest.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import geometry_msgs.msg

class Go_To_PositionRequest(genpy.Message):
  _md5sum = "f192399f711a48924df9a394d37edd67"
  _type = "birl_sim_examples/Go_To_PositionRequest"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """
geometry_msgs/Pose pose


================================================================================
MSG: geometry_msgs/Pose
# A representation of pose in free space, composed of postion and orientation. 
Point position
Quaternion orientation

================================================================================
MSG: geometry_msgs/Point
# This contains the position of a point in free space
float64 x
float64 y
float64 z

================================================================================
MSG: geometry_msgs/Quaternion
# This represents an orientation in free space in quaternion form.

float64 x
float64 y
float64 z
float64 w
"""
  __slots__ = ['pose']
  _slot_types = ['geometry_msgs/Pose']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       pose

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(Go_To_PositionRequest, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.pose is None:
        self.pose = geometry_msgs.msg.Pose()
    else:
      self.pose = geometry_msgs.msg.Pose()

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    :param buff: buffer, ``StringIO``
    """
    try:
      _x = self
      buff.write(_struct_7d.pack(_x.pose.position.x, _x.pose.position.y, _x.pose.position.z, _x.pose.orientation.x, _x.pose.orientation.y, _x.pose.orientation.z, _x.pose.orientation.w))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      if self.pose is None:
        self.pose = geometry_msgs.msg.Pose()
      end = 0
      _x = self
      start = end
      end += 56
      (_x.pose.position.x, _x.pose.position.y, _x.pose.position.z, _x.pose.orientation.x, _x.pose.orientation.y, _x.pose.orientation.z, _x.pose.orientation.w,) = _struct_7d.unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      _x = self
      buff.write(_struct_7d.pack(_x.pose.position.x, _x.pose.position.y, _x.pose.position.z, _x.pose.orientation.x, _x.pose.orientation.y, _x.pose.orientation.z, _x.pose.orientation.w))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    try:
      if self.pose is None:
        self.pose = geometry_msgs.msg.Pose()
      end = 0
      _x = self
      start = end
      end += 56
      (_x.pose.position.x, _x.pose.position.y, _x.pose.position.z, _x.pose.orientation.x, _x.pose.orientation.y, _x.pose.orientation.z, _x.pose.orientation.w,) = _struct_7d.unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
_struct_7d = struct.Struct("<7d")
# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from birl_sim_examples/Go_To_PositionResponse.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import std_msgs.msg

class Go_To_PositionResponse(genpy.Message):
  _md5sum = "eeb01c6a5268e6ac7630671106b59167"
  _type = "birl_sim_examples/Go_To_PositionResponse"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """

std_msgs/Bool ik_flag


std_msgs/Bool action_flag


================================================================================
MSG: std_msgs/Bool
bool data"""
  __slots__ = ['ik_flag','action_flag']
  _slot_types = ['std_msgs/Bool','std_msgs/Bool']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       ik_flag,action_flag

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(Go_To_PositionResponse, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.ik_flag is None:
        self.ik_flag = std_msgs.msg.Bool()
      if self.action_flag is None:
        self.action_flag = std_msgs.msg.Bool()
    else:
      self.ik_flag = std_msgs.msg.Bool()
      self.action_flag = std_msgs.msg.Bool()

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    :param buff: buffer, ``StringIO``
    """
    try:
      _x = self
      buff.write(_struct_2B.pack(_x.ik_flag.data, _x.action_flag.data))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      if self.ik_flag is None:
        self.ik_flag = std_msgs.msg.Bool()
      if self.action_flag is None:
        self.action_flag = std_msgs.msg.Bool()
      end = 0
      _x = self
      start = end
      end += 2
      (_x.ik_flag.data, _x.action_flag.data,) = _struct_2B.unpack(str[start:end])
      self.ik_flag.data = bool(self.ik_flag.data)
      self.action_flag.data = bool(self.action_flag.data)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      _x = self
      buff.write(_struct_2B.pack(_x.ik_flag.data, _x.action_flag.data))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    try:
      if self.ik_flag is None:
        self.ik_flag = std_msgs.msg.Bool()
      if self.action_flag is None:
        self.action_flag = std_msgs.msg.Bool()
      end = 0
      _x = self
      start = end
      end += 2
      (_x.ik_flag.data, _x.action_flag.data,) = _struct_2B.unpack(str[start:end])
      self.ik_flag.data = bool(self.ik_flag.data)
      self.action_flag.data = bool(self.action_flag.data)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
_struct_2B = struct.Struct("<2B")
class Go_To_Position(object):
  _type          = 'birl_sim_examples/Go_To_Position'
  _md5sum = 'd6d31042fd9aa19888cf6a8cca49baf3'
  _request_class  = Go_To_PositionRequest
  _response_class = Go_To_PositionResponse
