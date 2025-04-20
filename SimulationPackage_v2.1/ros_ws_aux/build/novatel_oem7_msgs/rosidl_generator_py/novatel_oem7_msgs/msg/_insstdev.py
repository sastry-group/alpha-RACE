# generated from rosidl_generator_py/resource/_idl.py.em
# with input from novatel_oem7_msgs:msg/INSSTDEV.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_INSSTDEV(type):
    """Metaclass of message 'INSSTDEV'."""

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
                'novatel_oem7_msgs.msg.INSSTDEV')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__insstdev
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__insstdev
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__insstdev
            cls._TYPE_SUPPORT = module.type_support_msg__msg__insstdev
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__insstdev

            from novatel_oem7_msgs.msg import INSExtendedSolutionStatus
            if INSExtendedSolutionStatus.__class__._TYPE_SUPPORT is None:
                INSExtendedSolutionStatus.__class__.__import_type_support__()

            from novatel_oem7_msgs.msg import Oem7Header
            if Oem7Header.__class__._TYPE_SUPPORT is None:
                Oem7Header.__class__.__import_type_support__()

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class INSSTDEV(metaclass=Metaclass_INSSTDEV):
    """Message class 'INSSTDEV'."""

    __slots__ = [
        '_header',
        '_nov_header',
        '_latitude_stdev',
        '_longitude_stdev',
        '_height_stdev',
        '_north_velocity_stdev',
        '_east_velocity_stdev',
        '_up_velocity_stdev',
        '_roll_stdev',
        '_pitch_stdev',
        '_azimuth_stdev',
        '_ext_sol_status',
        '_time_since_last_update',
        '_reserved1',
        '_reserved2',
        '_reserved3',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'nov_header': 'novatel_oem7_msgs/Oem7Header',
        'latitude_stdev': 'float',
        'longitude_stdev': 'float',
        'height_stdev': 'float',
        'north_velocity_stdev': 'float',
        'east_velocity_stdev': 'float',
        'up_velocity_stdev': 'float',
        'roll_stdev': 'float',
        'pitch_stdev': 'float',
        'azimuth_stdev': 'float',
        'ext_sol_status': 'novatel_oem7_msgs/INSExtendedSolutionStatus',
        'time_since_last_update': 'uint16',
        'reserved1': 'uint16',
        'reserved2': 'uint32',
        'reserved3': 'uint32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['novatel_oem7_msgs', 'msg'], 'Oem7Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['novatel_oem7_msgs', 'msg'], 'INSExtendedSolutionStatus'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        from novatel_oem7_msgs.msg import Oem7Header
        self.nov_header = kwargs.get('nov_header', Oem7Header())
        self.latitude_stdev = kwargs.get('latitude_stdev', float())
        self.longitude_stdev = kwargs.get('longitude_stdev', float())
        self.height_stdev = kwargs.get('height_stdev', float())
        self.north_velocity_stdev = kwargs.get('north_velocity_stdev', float())
        self.east_velocity_stdev = kwargs.get('east_velocity_stdev', float())
        self.up_velocity_stdev = kwargs.get('up_velocity_stdev', float())
        self.roll_stdev = kwargs.get('roll_stdev', float())
        self.pitch_stdev = kwargs.get('pitch_stdev', float())
        self.azimuth_stdev = kwargs.get('azimuth_stdev', float())
        from novatel_oem7_msgs.msg import INSExtendedSolutionStatus
        self.ext_sol_status = kwargs.get('ext_sol_status', INSExtendedSolutionStatus())
        self.time_since_last_update = kwargs.get('time_since_last_update', int())
        self.reserved1 = kwargs.get('reserved1', int())
        self.reserved2 = kwargs.get('reserved2', int())
        self.reserved3 = kwargs.get('reserved3', int())

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
        if self.header != other.header:
            return False
        if self.nov_header != other.nov_header:
            return False
        if self.latitude_stdev != other.latitude_stdev:
            return False
        if self.longitude_stdev != other.longitude_stdev:
            return False
        if self.height_stdev != other.height_stdev:
            return False
        if self.north_velocity_stdev != other.north_velocity_stdev:
            return False
        if self.east_velocity_stdev != other.east_velocity_stdev:
            return False
        if self.up_velocity_stdev != other.up_velocity_stdev:
            return False
        if self.roll_stdev != other.roll_stdev:
            return False
        if self.pitch_stdev != other.pitch_stdev:
            return False
        if self.azimuth_stdev != other.azimuth_stdev:
            return False
        if self.ext_sol_status != other.ext_sol_status:
            return False
        if self.time_since_last_update != other.time_since_last_update:
            return False
        if self.reserved1 != other.reserved1:
            return False
        if self.reserved2 != other.reserved2:
            return False
        if self.reserved3 != other.reserved3:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def header(self):
        """Message field 'header'."""
        return self._header

    @header.setter
    def header(self, value):
        if __debug__:
            from std_msgs.msg import Header
            assert \
                isinstance(value, Header), \
                "The 'header' field must be a sub message of type 'Header'"
        self._header = value

    @builtins.property
    def nov_header(self):
        """Message field 'nov_header'."""
        return self._nov_header

    @nov_header.setter
    def nov_header(self, value):
        if __debug__:
            from novatel_oem7_msgs.msg import Oem7Header
            assert \
                isinstance(value, Oem7Header), \
                "The 'nov_header' field must be a sub message of type 'Oem7Header'"
        self._nov_header = value

    @builtins.property
    def latitude_stdev(self):
        """Message field 'latitude_stdev'."""
        return self._latitude_stdev

    @latitude_stdev.setter
    def latitude_stdev(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'latitude_stdev' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'latitude_stdev' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._latitude_stdev = value

    @builtins.property
    def longitude_stdev(self):
        """Message field 'longitude_stdev'."""
        return self._longitude_stdev

    @longitude_stdev.setter
    def longitude_stdev(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'longitude_stdev' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'longitude_stdev' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._longitude_stdev = value

    @builtins.property
    def height_stdev(self):
        """Message field 'height_stdev'."""
        return self._height_stdev

    @height_stdev.setter
    def height_stdev(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'height_stdev' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'height_stdev' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._height_stdev = value

    @builtins.property
    def north_velocity_stdev(self):
        """Message field 'north_velocity_stdev'."""
        return self._north_velocity_stdev

    @north_velocity_stdev.setter
    def north_velocity_stdev(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'north_velocity_stdev' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'north_velocity_stdev' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._north_velocity_stdev = value

    @builtins.property
    def east_velocity_stdev(self):
        """Message field 'east_velocity_stdev'."""
        return self._east_velocity_stdev

    @east_velocity_stdev.setter
    def east_velocity_stdev(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'east_velocity_stdev' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'east_velocity_stdev' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._east_velocity_stdev = value

    @builtins.property
    def up_velocity_stdev(self):
        """Message field 'up_velocity_stdev'."""
        return self._up_velocity_stdev

    @up_velocity_stdev.setter
    def up_velocity_stdev(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'up_velocity_stdev' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'up_velocity_stdev' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._up_velocity_stdev = value

    @builtins.property
    def roll_stdev(self):
        """Message field 'roll_stdev'."""
        return self._roll_stdev

    @roll_stdev.setter
    def roll_stdev(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'roll_stdev' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'roll_stdev' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._roll_stdev = value

    @builtins.property
    def pitch_stdev(self):
        """Message field 'pitch_stdev'."""
        return self._pitch_stdev

    @pitch_stdev.setter
    def pitch_stdev(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'pitch_stdev' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'pitch_stdev' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._pitch_stdev = value

    @builtins.property
    def azimuth_stdev(self):
        """Message field 'azimuth_stdev'."""
        return self._azimuth_stdev

    @azimuth_stdev.setter
    def azimuth_stdev(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'azimuth_stdev' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'azimuth_stdev' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._azimuth_stdev = value

    @builtins.property
    def ext_sol_status(self):
        """Message field 'ext_sol_status'."""
        return self._ext_sol_status

    @ext_sol_status.setter
    def ext_sol_status(self, value):
        if __debug__:
            from novatel_oem7_msgs.msg import INSExtendedSolutionStatus
            assert \
                isinstance(value, INSExtendedSolutionStatus), \
                "The 'ext_sol_status' field must be a sub message of type 'INSExtendedSolutionStatus'"
        self._ext_sol_status = value

    @builtins.property
    def time_since_last_update(self):
        """Message field 'time_since_last_update'."""
        return self._time_since_last_update

    @time_since_last_update.setter
    def time_since_last_update(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'time_since_last_update' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'time_since_last_update' field must be an unsigned integer in [0, 65535]"
        self._time_since_last_update = value

    @builtins.property
    def reserved1(self):
        """Message field 'reserved1'."""
        return self._reserved1

    @reserved1.setter
    def reserved1(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'reserved1' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'reserved1' field must be an unsigned integer in [0, 65535]"
        self._reserved1 = value

    @builtins.property
    def reserved2(self):
        """Message field 'reserved2'."""
        return self._reserved2

    @reserved2.setter
    def reserved2(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'reserved2' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'reserved2' field must be an unsigned integer in [0, 4294967295]"
        self._reserved2 = value

    @builtins.property
    def reserved3(self):
        """Message field 'reserved3'."""
        return self._reserved3

    @reserved3.setter
    def reserved3(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'reserved3' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'reserved3' field must be an unsigned integer in [0, 4294967295]"
        self._reserved3 = value
