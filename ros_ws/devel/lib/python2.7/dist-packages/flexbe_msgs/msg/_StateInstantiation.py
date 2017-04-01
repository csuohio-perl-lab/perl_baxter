# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from flexbe_msgs/StateInstantiation.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import flexbe_msgs.msg

class StateInstantiation(genpy.Message):
  _md5sum = "1c6026e288cfff7ab6c8308ee1db66f1"
  _type = "flexbe_msgs/StateInstantiation"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """# Describes a single instantiation of a state

# Path of this state inside the behavior
# Last segment of the path is the name of this state
# e.g. "/Inner_Statemachine/This_State"
string state_path

# Specifies the class implementing this state
# Use one of the provided CLASS constants if this is not a primitive state
# e.g. "CalculationState"
string CLASS_STATEMACHINE 	= :STATEMACHINE
string CLASS_CONCURRENCY 	= :CONCURRENCY
string CLASS_PRIORITY 		= :PRIORITY
string CLASS_BEHAVIOR 		= :BEHAVIOR
string state_class



# Only relevant for state machine, priority, and concurrency
# Name of the initial state / state to be monitored
string initial_state_name
# Input and output keys (can be remapped below)
string[] input_keys
string[] output_keys

# Only relevant for concurrency
# Outcome conditions
string[] cond_outcome
OutcomeCondition[] cond_transition

# Only relevant for behavior
# Name of the class implementing this state
string behavior_class

# Only relevant for primitive state
# List of parameter names and values of this state
# Order of names and values has to match
string[] parameter_names
string[] parameter_values



# Position of this state in the editor [x,y]
float32[2] position

# Outcomes of this state
# Defines the order of the lists: transitions, autonomy
string[] outcomes
# Transition targets (state names or container outcomes) of the outcomes
string[] transitions
# Required autonomy level of the outcomes
int8[] autonomy

# Userdata of this state
# Merges own input_keys and output_keys, no duplicates
string[] userdata_keys
# Remapping of the corresponding own key (= key used by container)
string[] userdata_remapping
================================================================================
MSG: flexbe_msgs/OutcomeCondition
# Defines a conjunction of required state outcomes in order to return a concurrency outcome
string[] state_name
string[] state_outcome"""
  # Pseudo-constants
  CLASS_STATEMACHINE = ':STATEMACHINE'
  CLASS_CONCURRENCY = ':CONCURRENCY'
  CLASS_PRIORITY = ':PRIORITY'
  CLASS_BEHAVIOR = ':BEHAVIOR'

  __slots__ = ['state_path','state_class','initial_state_name','input_keys','output_keys','cond_outcome','cond_transition','behavior_class','parameter_names','parameter_values','position','outcomes','transitions','autonomy','userdata_keys','userdata_remapping']
  _slot_types = ['string','string','string','string[]','string[]','string[]','flexbe_msgs/OutcomeCondition[]','string','string[]','string[]','float32[2]','string[]','string[]','int8[]','string[]','string[]']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       state_path,state_class,initial_state_name,input_keys,output_keys,cond_outcome,cond_transition,behavior_class,parameter_names,parameter_values,position,outcomes,transitions,autonomy,userdata_keys,userdata_remapping

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(StateInstantiation, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.state_path is None:
        self.state_path = ''
      if self.state_class is None:
        self.state_class = ''
      if self.initial_state_name is None:
        self.initial_state_name = ''
      if self.input_keys is None:
        self.input_keys = []
      if self.output_keys is None:
        self.output_keys = []
      if self.cond_outcome is None:
        self.cond_outcome = []
      if self.cond_transition is None:
        self.cond_transition = []
      if self.behavior_class is None:
        self.behavior_class = ''
      if self.parameter_names is None:
        self.parameter_names = []
      if self.parameter_values is None:
        self.parameter_values = []
      if self.position is None:
        self.position = [0.,0.]
      if self.outcomes is None:
        self.outcomes = []
      if self.transitions is None:
        self.transitions = []
      if self.autonomy is None:
        self.autonomy = []
      if self.userdata_keys is None:
        self.userdata_keys = []
      if self.userdata_remapping is None:
        self.userdata_remapping = []
    else:
      self.state_path = ''
      self.state_class = ''
      self.initial_state_name = ''
      self.input_keys = []
      self.output_keys = []
      self.cond_outcome = []
      self.cond_transition = []
      self.behavior_class = ''
      self.parameter_names = []
      self.parameter_values = []
      self.position = [0.,0.]
      self.outcomes = []
      self.transitions = []
      self.autonomy = []
      self.userdata_keys = []
      self.userdata_remapping = []

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
      _x = self.state_path
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      if python3:
        buff.write(struct.pack('<I%sB'%length, length, *_x))
      else:
        buff.write(struct.pack('<I%ss'%length, length, _x))
      _x = self.state_class
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      if python3:
        buff.write(struct.pack('<I%sB'%length, length, *_x))
      else:
        buff.write(struct.pack('<I%ss'%length, length, _x))
      _x = self.initial_state_name
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      if python3:
        buff.write(struct.pack('<I%sB'%length, length, *_x))
      else:
        buff.write(struct.pack('<I%ss'%length, length, _x))
      length = len(self.input_keys)
      buff.write(_struct_I.pack(length))
      for val1 in self.input_keys:
        length = len(val1)
        if python3 or type(val1) == unicode:
          val1 = val1.encode('utf-8')
          length = len(val1)
        if python3:
          buff.write(struct.pack('<I%sB'%length, length, *val1))
        else:
          buff.write(struct.pack('<I%ss'%length, length, val1))
      length = len(self.output_keys)
      buff.write(_struct_I.pack(length))
      for val1 in self.output_keys:
        length = len(val1)
        if python3 or type(val1) == unicode:
          val1 = val1.encode('utf-8')
          length = len(val1)
        if python3:
          buff.write(struct.pack('<I%sB'%length, length, *val1))
        else:
          buff.write(struct.pack('<I%ss'%length, length, val1))
      length = len(self.cond_outcome)
      buff.write(_struct_I.pack(length))
      for val1 in self.cond_outcome:
        length = len(val1)
        if python3 or type(val1) == unicode:
          val1 = val1.encode('utf-8')
          length = len(val1)
        if python3:
          buff.write(struct.pack('<I%sB'%length, length, *val1))
        else:
          buff.write(struct.pack('<I%ss'%length, length, val1))
      length = len(self.cond_transition)
      buff.write(_struct_I.pack(length))
      for val1 in self.cond_transition:
        length = len(val1.state_name)
        buff.write(_struct_I.pack(length))
        for val2 in val1.state_name:
          length = len(val2)
          if python3 or type(val2) == unicode:
            val2 = val2.encode('utf-8')
            length = len(val2)
          if python3:
            buff.write(struct.pack('<I%sB'%length, length, *val2))
          else:
            buff.write(struct.pack('<I%ss'%length, length, val2))
        length = len(val1.state_outcome)
        buff.write(_struct_I.pack(length))
        for val2 in val1.state_outcome:
          length = len(val2)
          if python3 or type(val2) == unicode:
            val2 = val2.encode('utf-8')
            length = len(val2)
          if python3:
            buff.write(struct.pack('<I%sB'%length, length, *val2))
          else:
            buff.write(struct.pack('<I%ss'%length, length, val2))
      _x = self.behavior_class
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      if python3:
        buff.write(struct.pack('<I%sB'%length, length, *_x))
      else:
        buff.write(struct.pack('<I%ss'%length, length, _x))
      length = len(self.parameter_names)
      buff.write(_struct_I.pack(length))
      for val1 in self.parameter_names:
        length = len(val1)
        if python3 or type(val1) == unicode:
          val1 = val1.encode('utf-8')
          length = len(val1)
        if python3:
          buff.write(struct.pack('<I%sB'%length, length, *val1))
        else:
          buff.write(struct.pack('<I%ss'%length, length, val1))
      length = len(self.parameter_values)
      buff.write(_struct_I.pack(length))
      for val1 in self.parameter_values:
        length = len(val1)
        if python3 or type(val1) == unicode:
          val1 = val1.encode('utf-8')
          length = len(val1)
        if python3:
          buff.write(struct.pack('<I%sB'%length, length, *val1))
        else:
          buff.write(struct.pack('<I%ss'%length, length, val1))
      buff.write(_struct_2f.pack(*self.position))
      length = len(self.outcomes)
      buff.write(_struct_I.pack(length))
      for val1 in self.outcomes:
        length = len(val1)
        if python3 or type(val1) == unicode:
          val1 = val1.encode('utf-8')
          length = len(val1)
        if python3:
          buff.write(struct.pack('<I%sB'%length, length, *val1))
        else:
          buff.write(struct.pack('<I%ss'%length, length, val1))
      length = len(self.transitions)
      buff.write(_struct_I.pack(length))
      for val1 in self.transitions:
        length = len(val1)
        if python3 or type(val1) == unicode:
          val1 = val1.encode('utf-8')
          length = len(val1)
        if python3:
          buff.write(struct.pack('<I%sB'%length, length, *val1))
        else:
          buff.write(struct.pack('<I%ss'%length, length, val1))
      length = len(self.autonomy)
      buff.write(_struct_I.pack(length))
      pattern = '<%sb'%length
      buff.write(struct.pack(pattern, *self.autonomy))
      length = len(self.userdata_keys)
      buff.write(_struct_I.pack(length))
      for val1 in self.userdata_keys:
        length = len(val1)
        if python3 or type(val1) == unicode:
          val1 = val1.encode('utf-8')
          length = len(val1)
        if python3:
          buff.write(struct.pack('<I%sB'%length, length, *val1))
        else:
          buff.write(struct.pack('<I%ss'%length, length, val1))
      length = len(self.userdata_remapping)
      buff.write(_struct_I.pack(length))
      for val1 in self.userdata_remapping:
        length = len(val1)
        if python3 or type(val1) == unicode:
          val1 = val1.encode('utf-8')
          length = len(val1)
        if python3:
          buff.write(struct.pack('<I%sB'%length, length, *val1))
        else:
          buff.write(struct.pack('<I%ss'%length, length, val1))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      if self.cond_transition is None:
        self.cond_transition = None
      end = 0
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.state_path = str[start:end].decode('utf-8')
      else:
        self.state_path = str[start:end]
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.state_class = str[start:end].decode('utf-8')
      else:
        self.state_class = str[start:end]
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.initial_state_name = str[start:end].decode('utf-8')
      else:
        self.initial_state_name = str[start:end]
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.input_keys = []
      for i in range(0, length):
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          val1 = str[start:end].decode('utf-8')
        else:
          val1 = str[start:end]
        self.input_keys.append(val1)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.output_keys = []
      for i in range(0, length):
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          val1 = str[start:end].decode('utf-8')
        else:
          val1 = str[start:end]
        self.output_keys.append(val1)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.cond_outcome = []
      for i in range(0, length):
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          val1 = str[start:end].decode('utf-8')
        else:
          val1 = str[start:end]
        self.cond_outcome.append(val1)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.cond_transition = []
      for i in range(0, length):
        val1 = flexbe_msgs.msg.OutcomeCondition()
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        val1.state_name = []
        for i in range(0, length):
          start = end
          end += 4
          (length,) = _struct_I.unpack(str[start:end])
          start = end
          end += length
          if python3:
            val2 = str[start:end].decode('utf-8')
          else:
            val2 = str[start:end]
          val1.state_name.append(val2)
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        val1.state_outcome = []
        for i in range(0, length):
          start = end
          end += 4
          (length,) = _struct_I.unpack(str[start:end])
          start = end
          end += length
          if python3:
            val2 = str[start:end].decode('utf-8')
          else:
            val2 = str[start:end]
          val1.state_outcome.append(val2)
        self.cond_transition.append(val1)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.behavior_class = str[start:end].decode('utf-8')
      else:
        self.behavior_class = str[start:end]
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.parameter_names = []
      for i in range(0, length):
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          val1 = str[start:end].decode('utf-8')
        else:
          val1 = str[start:end]
        self.parameter_names.append(val1)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.parameter_values = []
      for i in range(0, length):
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          val1 = str[start:end].decode('utf-8')
        else:
          val1 = str[start:end]
        self.parameter_values.append(val1)
      start = end
      end += 8
      self.position = _struct_2f.unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.outcomes = []
      for i in range(0, length):
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          val1 = str[start:end].decode('utf-8')
        else:
          val1 = str[start:end]
        self.outcomes.append(val1)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.transitions = []
      for i in range(0, length):
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          val1 = str[start:end].decode('utf-8')
        else:
          val1 = str[start:end]
        self.transitions.append(val1)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%sb'%length
      start = end
      end += struct.calcsize(pattern)
      self.autonomy = struct.unpack(pattern, str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.userdata_keys = []
      for i in range(0, length):
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          val1 = str[start:end].decode('utf-8')
        else:
          val1 = str[start:end]
        self.userdata_keys.append(val1)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.userdata_remapping = []
      for i in range(0, length):
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          val1 = str[start:end].decode('utf-8')
        else:
          val1 = str[start:end]
        self.userdata_remapping.append(val1)
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
      _x = self.state_path
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      if python3:
        buff.write(struct.pack('<I%sB'%length, length, *_x))
      else:
        buff.write(struct.pack('<I%ss'%length, length, _x))
      _x = self.state_class
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      if python3:
        buff.write(struct.pack('<I%sB'%length, length, *_x))
      else:
        buff.write(struct.pack('<I%ss'%length, length, _x))
      _x = self.initial_state_name
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      if python3:
        buff.write(struct.pack('<I%sB'%length, length, *_x))
      else:
        buff.write(struct.pack('<I%ss'%length, length, _x))
      length = len(self.input_keys)
      buff.write(_struct_I.pack(length))
      for val1 in self.input_keys:
        length = len(val1)
        if python3 or type(val1) == unicode:
          val1 = val1.encode('utf-8')
          length = len(val1)
        if python3:
          buff.write(struct.pack('<I%sB'%length, length, *val1))
        else:
          buff.write(struct.pack('<I%ss'%length, length, val1))
      length = len(self.output_keys)
      buff.write(_struct_I.pack(length))
      for val1 in self.output_keys:
        length = len(val1)
        if python3 or type(val1) == unicode:
          val1 = val1.encode('utf-8')
          length = len(val1)
        if python3:
          buff.write(struct.pack('<I%sB'%length, length, *val1))
        else:
          buff.write(struct.pack('<I%ss'%length, length, val1))
      length = len(self.cond_outcome)
      buff.write(_struct_I.pack(length))
      for val1 in self.cond_outcome:
        length = len(val1)
        if python3 or type(val1) == unicode:
          val1 = val1.encode('utf-8')
          length = len(val1)
        if python3:
          buff.write(struct.pack('<I%sB'%length, length, *val1))
        else:
          buff.write(struct.pack('<I%ss'%length, length, val1))
      length = len(self.cond_transition)
      buff.write(_struct_I.pack(length))
      for val1 in self.cond_transition:
        length = len(val1.state_name)
        buff.write(_struct_I.pack(length))
        for val2 in val1.state_name:
          length = len(val2)
          if python3 or type(val2) == unicode:
            val2 = val2.encode('utf-8')
            length = len(val2)
          if python3:
            buff.write(struct.pack('<I%sB'%length, length, *val2))
          else:
            buff.write(struct.pack('<I%ss'%length, length, val2))
        length = len(val1.state_outcome)
        buff.write(_struct_I.pack(length))
        for val2 in val1.state_outcome:
          length = len(val2)
          if python3 or type(val2) == unicode:
            val2 = val2.encode('utf-8')
            length = len(val2)
          if python3:
            buff.write(struct.pack('<I%sB'%length, length, *val2))
          else:
            buff.write(struct.pack('<I%ss'%length, length, val2))
      _x = self.behavior_class
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      if python3:
        buff.write(struct.pack('<I%sB'%length, length, *_x))
      else:
        buff.write(struct.pack('<I%ss'%length, length, _x))
      length = len(self.parameter_names)
      buff.write(_struct_I.pack(length))
      for val1 in self.parameter_names:
        length = len(val1)
        if python3 or type(val1) == unicode:
          val1 = val1.encode('utf-8')
          length = len(val1)
        if python3:
          buff.write(struct.pack('<I%sB'%length, length, *val1))
        else:
          buff.write(struct.pack('<I%ss'%length, length, val1))
      length = len(self.parameter_values)
      buff.write(_struct_I.pack(length))
      for val1 in self.parameter_values:
        length = len(val1)
        if python3 or type(val1) == unicode:
          val1 = val1.encode('utf-8')
          length = len(val1)
        if python3:
          buff.write(struct.pack('<I%sB'%length, length, *val1))
        else:
          buff.write(struct.pack('<I%ss'%length, length, val1))
      buff.write(self.position.tostring())
      length = len(self.outcomes)
      buff.write(_struct_I.pack(length))
      for val1 in self.outcomes:
        length = len(val1)
        if python3 or type(val1) == unicode:
          val1 = val1.encode('utf-8')
          length = len(val1)
        if python3:
          buff.write(struct.pack('<I%sB'%length, length, *val1))
        else:
          buff.write(struct.pack('<I%ss'%length, length, val1))
      length = len(self.transitions)
      buff.write(_struct_I.pack(length))
      for val1 in self.transitions:
        length = len(val1)
        if python3 or type(val1) == unicode:
          val1 = val1.encode('utf-8')
          length = len(val1)
        if python3:
          buff.write(struct.pack('<I%sB'%length, length, *val1))
        else:
          buff.write(struct.pack('<I%ss'%length, length, val1))
      length = len(self.autonomy)
      buff.write(_struct_I.pack(length))
      pattern = '<%sb'%length
      buff.write(self.autonomy.tostring())
      length = len(self.userdata_keys)
      buff.write(_struct_I.pack(length))
      for val1 in self.userdata_keys:
        length = len(val1)
        if python3 or type(val1) == unicode:
          val1 = val1.encode('utf-8')
          length = len(val1)
        if python3:
          buff.write(struct.pack('<I%sB'%length, length, *val1))
        else:
          buff.write(struct.pack('<I%ss'%length, length, val1))
      length = len(self.userdata_remapping)
      buff.write(_struct_I.pack(length))
      for val1 in self.userdata_remapping:
        length = len(val1)
        if python3 or type(val1) == unicode:
          val1 = val1.encode('utf-8')
          length = len(val1)
        if python3:
          buff.write(struct.pack('<I%sB'%length, length, *val1))
        else:
          buff.write(struct.pack('<I%ss'%length, length, val1))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    try:
      if self.cond_transition is None:
        self.cond_transition = None
      end = 0
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.state_path = str[start:end].decode('utf-8')
      else:
        self.state_path = str[start:end]
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.state_class = str[start:end].decode('utf-8')
      else:
        self.state_class = str[start:end]
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.initial_state_name = str[start:end].decode('utf-8')
      else:
        self.initial_state_name = str[start:end]
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.input_keys = []
      for i in range(0, length):
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          val1 = str[start:end].decode('utf-8')
        else:
          val1 = str[start:end]
        self.input_keys.append(val1)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.output_keys = []
      for i in range(0, length):
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          val1 = str[start:end].decode('utf-8')
        else:
          val1 = str[start:end]
        self.output_keys.append(val1)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.cond_outcome = []
      for i in range(0, length):
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          val1 = str[start:end].decode('utf-8')
        else:
          val1 = str[start:end]
        self.cond_outcome.append(val1)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.cond_transition = []
      for i in range(0, length):
        val1 = flexbe_msgs.msg.OutcomeCondition()
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        val1.state_name = []
        for i in range(0, length):
          start = end
          end += 4
          (length,) = _struct_I.unpack(str[start:end])
          start = end
          end += length
          if python3:
            val2 = str[start:end].decode('utf-8')
          else:
            val2 = str[start:end]
          val1.state_name.append(val2)
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        val1.state_outcome = []
        for i in range(0, length):
          start = end
          end += 4
          (length,) = _struct_I.unpack(str[start:end])
          start = end
          end += length
          if python3:
            val2 = str[start:end].decode('utf-8')
          else:
            val2 = str[start:end]
          val1.state_outcome.append(val2)
        self.cond_transition.append(val1)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.behavior_class = str[start:end].decode('utf-8')
      else:
        self.behavior_class = str[start:end]
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.parameter_names = []
      for i in range(0, length):
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          val1 = str[start:end].decode('utf-8')
        else:
          val1 = str[start:end]
        self.parameter_names.append(val1)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.parameter_values = []
      for i in range(0, length):
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          val1 = str[start:end].decode('utf-8')
        else:
          val1 = str[start:end]
        self.parameter_values.append(val1)
      start = end
      end += 8
      self.position = numpy.frombuffer(str[start:end], dtype=numpy.float32, count=2)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.outcomes = []
      for i in range(0, length):
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          val1 = str[start:end].decode('utf-8')
        else:
          val1 = str[start:end]
        self.outcomes.append(val1)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.transitions = []
      for i in range(0, length):
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          val1 = str[start:end].decode('utf-8')
        else:
          val1 = str[start:end]
        self.transitions.append(val1)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%sb'%length
      start = end
      end += struct.calcsize(pattern)
      self.autonomy = numpy.frombuffer(str[start:end], dtype=numpy.int8, count=length)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.userdata_keys = []
      for i in range(0, length):
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          val1 = str[start:end].decode('utf-8')
        else:
          val1 = str[start:end]
        self.userdata_keys.append(val1)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.userdata_remapping = []
      for i in range(0, length):
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          val1 = str[start:end].decode('utf-8')
        else:
          val1 = str[start:end]
        self.userdata_remapping.append(val1)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
_struct_2f = struct.Struct("<2f")
