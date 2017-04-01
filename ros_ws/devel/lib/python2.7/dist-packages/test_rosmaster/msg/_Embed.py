# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from test_rosmaster/Embed.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import genpy
import test_rosmaster.msg

class Embed(genpy.Message):
  _md5sum = "6dec891298f3675c2d964c161d28efaa"
  _type = "test_rosmaster/Embed"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """#for rostopic tests
Simple simple
Arrays arrays

================================================================================
MSG: test_rosmaster/Simple
# for rostopic tests
byte b
int16 int16
int32 int32
int64 int64
char c
uint16 uint16
uint32 uint32
uint64 uint64
string str

================================================================================
MSG: test_rosmaster/Arrays
#for rostopic tests
int8[] int8_arr
uint8[] uint8_arr
int32[] int32_arr
uint32[] uint32_arr
string[] string_arr
time[] time_arr
"""
  __slots__ = ['simple','arrays']
  _slot_types = ['test_rosmaster/Simple','test_rosmaster/Arrays']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       simple,arrays

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(Embed, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.simple is None:
        self.simple = test_rosmaster.msg.Simple()
      if self.arrays is None:
        self.arrays = test_rosmaster.msg.Arrays()
    else:
      self.simple = test_rosmaster.msg.Simple()
      self.arrays = test_rosmaster.msg.Arrays()

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
      buff.write(_struct_bhiqBHIQ.pack(_x.simple.b, _x.simple.int16, _x.simple.int32, _x.simple.int64, _x.simple.c, _x.simple.uint16, _x.simple.uint32, _x.simple.uint64))
      _x = self.simple.str
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      if python3:
        buff.write(struct.pack('<I%sB'%length, length, *_x))
      else:
        buff.write(struct.pack('<I%ss'%length, length, _x))
      length = len(self.arrays.int8_arr)
      buff.write(_struct_I.pack(length))
      pattern = '<%sb'%length
      buff.write(struct.pack(pattern, *self.arrays.int8_arr))
      _x = self.arrays.uint8_arr
      length = len(_x)
      # - if encoded as a list instead, serialize as bytes instead of string
      if type(_x) in [list, tuple]:
        buff.write(struct.pack('<I%sB'%length, length, *_x))
      else:
        buff.write(struct.pack('<I%ss'%length, length, _x))
      length = len(self.arrays.int32_arr)
      buff.write(_struct_I.pack(length))
      pattern = '<%si'%length
      buff.write(struct.pack(pattern, *self.arrays.int32_arr))
      length = len(self.arrays.uint32_arr)
      buff.write(_struct_I.pack(length))
      pattern = '<%sI'%length
      buff.write(struct.pack(pattern, *self.arrays.uint32_arr))
      length = len(self.arrays.string_arr)
      buff.write(_struct_I.pack(length))
      for val1 in self.arrays.string_arr:
        length = len(val1)
        if python3 or type(val1) == unicode:
          val1 = val1.encode('utf-8')
          length = len(val1)
        if python3:
          buff.write(struct.pack('<I%sB'%length, length, *val1))
        else:
          buff.write(struct.pack('<I%ss'%length, length, val1))
      length = len(self.arrays.time_arr)
      buff.write(_struct_I.pack(length))
      for val1 in self.arrays.time_arr:
        _x = val1
        buff.write(_struct_2I.pack(_x.secs, _x.nsecs))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      if self.simple is None:
        self.simple = test_rosmaster.msg.Simple()
      if self.arrays is None:
        self.arrays = test_rosmaster.msg.Arrays()
      end = 0
      _x = self
      start = end
      end += 30
      (_x.simple.b, _x.simple.int16, _x.simple.int32, _x.simple.int64, _x.simple.c, _x.simple.uint16, _x.simple.uint32, _x.simple.uint64,) = _struct_bhiqBHIQ.unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.simple.str = str[start:end].decode('utf-8')
      else:
        self.simple.str = str[start:end]
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%sb'%length
      start = end
      end += struct.calcsize(pattern)
      self.arrays.int8_arr = struct.unpack(pattern, str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      self.arrays.uint8_arr = str[start:end]
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%si'%length
      start = end
      end += struct.calcsize(pattern)
      self.arrays.int32_arr = struct.unpack(pattern, str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%sI'%length
      start = end
      end += struct.calcsize(pattern)
      self.arrays.uint32_arr = struct.unpack(pattern, str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.arrays.string_arr = []
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
        self.arrays.string_arr.append(val1)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.arrays.time_arr = []
      for i in range(0, length):
        val1 = genpy.Time()
        _x = val1
        start = end
        end += 8
        (_x.secs, _x.nsecs,) = _struct_2I.unpack(str[start:end])
        self.arrays.time_arr.append(val1)
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
      buff.write(_struct_bhiqBHIQ.pack(_x.simple.b, _x.simple.int16, _x.simple.int32, _x.simple.int64, _x.simple.c, _x.simple.uint16, _x.simple.uint32, _x.simple.uint64))
      _x = self.simple.str
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      if python3:
        buff.write(struct.pack('<I%sB'%length, length, *_x))
      else:
        buff.write(struct.pack('<I%ss'%length, length, _x))
      length = len(self.arrays.int8_arr)
      buff.write(_struct_I.pack(length))
      pattern = '<%sb'%length
      buff.write(self.arrays.int8_arr.tostring())
      _x = self.arrays.uint8_arr
      length = len(_x)
      # - if encoded as a list instead, serialize as bytes instead of string
      if type(_x) in [list, tuple]:
        buff.write(struct.pack('<I%sB'%length, length, *_x))
      else:
        buff.write(struct.pack('<I%ss'%length, length, _x))
      length = len(self.arrays.int32_arr)
      buff.write(_struct_I.pack(length))
      pattern = '<%si'%length
      buff.write(self.arrays.int32_arr.tostring())
      length = len(self.arrays.uint32_arr)
      buff.write(_struct_I.pack(length))
      pattern = '<%sI'%length
      buff.write(self.arrays.uint32_arr.tostring())
      length = len(self.arrays.string_arr)
      buff.write(_struct_I.pack(length))
      for val1 in self.arrays.string_arr:
        length = len(val1)
        if python3 or type(val1) == unicode:
          val1 = val1.encode('utf-8')
          length = len(val1)
        if python3:
          buff.write(struct.pack('<I%sB'%length, length, *val1))
        else:
          buff.write(struct.pack('<I%ss'%length, length, val1))
      length = len(self.arrays.time_arr)
      buff.write(_struct_I.pack(length))
      for val1 in self.arrays.time_arr:
        _x = val1
        buff.write(_struct_2I.pack(_x.secs, _x.nsecs))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    try:
      if self.simple is None:
        self.simple = test_rosmaster.msg.Simple()
      if self.arrays is None:
        self.arrays = test_rosmaster.msg.Arrays()
      end = 0
      _x = self
      start = end
      end += 30
      (_x.simple.b, _x.simple.int16, _x.simple.int32, _x.simple.int64, _x.simple.c, _x.simple.uint16, _x.simple.uint32, _x.simple.uint64,) = _struct_bhiqBHIQ.unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.simple.str = str[start:end].decode('utf-8')
      else:
        self.simple.str = str[start:end]
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%sb'%length
      start = end
      end += struct.calcsize(pattern)
      self.arrays.int8_arr = numpy.frombuffer(str[start:end], dtype=numpy.int8, count=length)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      self.arrays.uint8_arr = str[start:end]
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%si'%length
      start = end
      end += struct.calcsize(pattern)
      self.arrays.int32_arr = numpy.frombuffer(str[start:end], dtype=numpy.int32, count=length)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%sI'%length
      start = end
      end += struct.calcsize(pattern)
      self.arrays.uint32_arr = numpy.frombuffer(str[start:end], dtype=numpy.uint32, count=length)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.arrays.string_arr = []
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
        self.arrays.string_arr.append(val1)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.arrays.time_arr = []
      for i in range(0, length):
        val1 = genpy.Time()
        _x = val1
        start = end
        end += 8
        (_x.secs, _x.nsecs,) = _struct_2I.unpack(str[start:end])
        self.arrays.time_arr.append(val1)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
_struct_bhiqBHIQ = struct.Struct("<bhiqBHIQ")
_struct_2I = struct.Struct("<2I")
