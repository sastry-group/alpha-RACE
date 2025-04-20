# generated from rosidl_generator_py/resource/_idl.py.em
# with input from novatel_oem7_msgs:msg/Rotation.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Rotation(type):
    """Metaclass of message 'Rotation'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('novatel_oem7_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'novatel_oem7_msgs.msg.Rotation')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__rotation
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__rotation
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__rotation
            cls._TYPE_SUPPORT = module.type_support_msg__msg__rotation
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__rotation

            from novatel_oem7_msgs.msg import INSFrame
            if INSFrame.__class__._TYPE_SUPPORT is None:
                INSFrame.__class__.__import_type_support__()

            from novatel_oem7_msgs.msg import INSSourceStatus
            if INSSourceStatus.__class__._TYPE_SUPPORT is None:
                INSSourceStatus.__class__.__import_type_support__()

            from novatel_oem7_msgs.msg import RotationalOffset
            if RotationalOffset.__class__._TYPE_SUPPORT is None:
                RotationalOffset.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Rotation(metaclass=Metaclass_Rotation):
    """Message class 'Rotation'."""

    __slots__ = [
        '_rotation',
        '_frame',
        '_x_rotation',
        '_y_rotation',
        '_z_rotation',
        '_x_rotation_stdev',
        '_y_rotation_stdev',
        '_z_rotation_stdev',
        '_rotation_source',
    ]

    _fields_and_field_types = {
        'rotation': 'novatel_oem7_msgs/RotationalOffset',
        'frame': 'novatel_oem7_msgs/INSFrame',
        'x_rotation': 'float',
        'y_rotation': 'float',
        'z_rotation': 'float',
        'x_rotation_stdev': 'float',
        'y_rotation_stdev': 'float',
        'z_rotation_stdev': 'float',
        'rotation_source': 'novatel_oem7_msgs/INSSourceStatus',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['novatel_oem7_msgs', 'msg'], 'RotationalOffset'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['novatel_oem7_msgs', 'msg'], 'INSFrame'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['novatel_oem7_msgs', 'msg'], 'INSSourceStatus'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from novatel_oem7_msgs.msg import RotationalOffset
        self.rotation = kwargs.get('rotation', RotationalOffset())
        from novatel_oem7_msgs.msg import INSFrame
        self.frame = kwargs.get('frame', INSFrame())
        self.x_rotation = kwargs.get('x_rotation', float())
        self.y_rotation = kwargs.get('y_rotation', float())
        self.z_rotation = kwargs.get('z_rotation', float())
        self.x_rotation_stdev = kwargs.get('x_rotation_stdev', float())
        self.y_rotation_stdev = kwargs.get('y_rotation_stdev', float())
        self.z_rotation_stdev = kwargs.get('z_rotation_stdev', float())
        from novatel_oem7_msgs.msg import INSSourceStatus
        self.rotation_source = kwargs.get('rotation_source', INSSourceStatus())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.rotation != other.rotation:
            return False
        if self.frame != other.frame:
            return False
        if self.x_rotation != other.x_rotation:
            return False
        if self.y_rotation != other.y_rotation:
            return False
        if self.z_rotation != other.z_rotation:
            return False
        if self.x_rotation_stdev != other.x_rotation_stdev:
            return False
        if self.y_rotation_stdev != other.y_rotation_stdev:
            return False
        if self.z_rotation_stdev != other.z_rotation_stdev:
            return False
        if self.rotation_source != other.rotation_source:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def rotation(self):
        """Message field 'rotation'."""
        return self._rotation

    @rotation.setter
    def rotation(self, value):
        if __debug__:
            from novatel_oem7_msgs.msg import RotationalOffset
            assert \
                isinstance(value, RotationalOffset), \
                "The 'rotation' field must be a sub message of type 'RotationalOffset'"
        self._rotation = value

    @builtins.property
    def frame(self):
        """Message field 'frame'."""
        return self._frame

    @frame.setter
    def frame(self, value):
        if __debug__:
            from novatel_oem7_msgs.msg import INSFrame
            assert \
                isinstance(value, INSFrame), \
                "The 'frame' field must be a sub message of type 'INSFrame'"
        self._frame = value

    @builtins.property
    def x_rotation(self):
        """Message field 'x_rotation'."""
        return self._x_rotation

    @x_rotation.setter
    def x_rotation(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'x_rotation' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'x_rotation' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._x_rotation = value

    @builtins.property
    def y_rotation(self):
        """Message field 'y_rotation'."""
        return self._y_rotation

    @y_rotation.setter
    def y_rotation(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'y_rotation' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'y_rotation' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._y_rotation = value

    @builtins.property
    def z_rotation(self):
        """Message field 'z_rotation'."""
        return self._z_rotation

    @z_rotation.setter
    def z_rotation(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'z_rotation' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'z_rotation' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._z_rotation = value

    @builtins.property
    def x_rotation_stdev(self):
        """Message field 'x_rotation_stdev'."""
        return self._x_rotation_stdev

    @x_rotation_stdev.setter
    def x_rotation_stdev(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'x_rotation_stdev' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'x_rotation_stdev' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._x_rotation_stdev = value

    @builtins.property
    def y_rotation_stdev(self):
        """Message field 'y_rotation_stdev'."""
        return self._y_rotation_stdev

    @y_rotation_stdev.setter
    def y_rotation_stdev(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'y_rotation_stdev' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'y_rotation_stdev' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._y_rotation_stdev = value

    @builtins.property
    def z_rotation_stdev(self):
        """Message field 'z_rotation_stdev'."""
        return self._z_rotation_stdev

    @z_rotation_stdev.setter
    def z_rotation_stdev(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'z_rotation_stdev' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'z_rotation_stdev' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._z_rotation_stdev = value

    @builtins.property
    def rotation_source(self):
        """Message field 'rotation_source'."""
        return self._rotation_source

    @rotation_source.setter
    def rotation_source(self, value):
        if __debug__:
            from novatel_oem7_msgs.msg import INSSourceStatus
            assert \
                isinstance(value, INSSourceStatus), \
                "The 'rotation_source' field must be a sub message of type 'INSSourceStatus'"
        self._rotation_source = value
