# generated from rosidl_generator_py/resource/_idl.py.em
# with input from novatel_oem7_msgs:msg/BESTVEL.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_BESTVEL(type):
    """Metaclass of message 'BESTVEL'."""

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
                'novatel_oem7_msgs.msg.BESTVEL')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__bestvel
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__bestvel
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__bestvel
            cls._TYPE_SUPPORT = module.type_support_msg__msg__bestvel
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__bestvel

            from novatel_oem7_msgs.msg import Oem7Header
            if Oem7Header.__class__._TYPE_SUPPORT is None:
                Oem7Header.__class__.__import_type_support__()

            from novatel_oem7_msgs.msg import PositionOrVelocityType
            if PositionOrVelocityType.__class__._TYPE_SUPPORT is None:
                PositionOrVelocityType.__class__.__import_type_support__()

            from novatel_oem7_msgs.msg import SolutionStatus
            if SolutionStatus.__class__._TYPE_SUPPORT is None:
                SolutionStatus.__class__.__import_type_support__()

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


class BESTVEL(metaclass=Metaclass_BESTVEL):
    """Message class 'BESTVEL'."""

    __slots__ = [
        '_header',
        '_nov_header',
        '_sol_status',
        '_vel_type',
        '_latency',
        '_diff_age',
        '_hor_speed',
        '_trk_gnd',
        '_ver_speed',
        '_reserved',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'nov_header': 'novatel_oem7_msgs/Oem7Header',
        'sol_status': 'novatel_oem7_msgs/SolutionStatus',
        'vel_type': 'novatel_oem7_msgs/PositionOrVelocityType',
        'latency': 'float',
        'diff_age': 'float',
        'hor_speed': 'double',
        'trk_gnd': 'double',
        'ver_speed': 'double',
        'reserved': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['novatel_oem7_msgs', 'msg'], 'Oem7Header'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['novatel_oem7_msgs', 'msg'], 'SolutionStatus'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['novatel_oem7_msgs', 'msg'], 'PositionOrVelocityType'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        from novatel_oem7_msgs.msg import Oem7Header
        self.nov_header = kwargs.get('nov_header', Oem7Header())
        from novatel_oem7_msgs.msg import SolutionStatus
        self.sol_status = kwargs.get('sol_status', SolutionStatus())
        from novatel_oem7_msgs.msg import PositionOrVelocityType
        self.vel_type = kwargs.get('vel_type', PositionOrVelocityType())
        self.latency = kwargs.get('latency', float())
        self.diff_age = kwargs.get('diff_age', float())
        self.hor_speed = kwargs.get('hor_speed', float())
        self.trk_gnd = kwargs.get('trk_gnd', float())
        self.ver_speed = kwargs.get('ver_speed', float())
        self.reserved = kwargs.get('reserved', float())

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
        if self.sol_status != other.sol_status:
            return False
        if self.vel_type != other.vel_type:
            return False
        if self.latency != other.latency:
            return False
        if self.diff_age != other.diff_age:
            return False
        if self.hor_speed != other.hor_speed:
            return False
        if self.trk_gnd != other.trk_gnd:
            return False
        if self.ver_speed != other.ver_speed:
            return False
        if self.reserved != other.reserved:
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
    def sol_status(self):
        """Message field 'sol_status'."""
        return self._sol_status

    @sol_status.setter
    def sol_status(self, value):
        if __debug__:
            from novatel_oem7_msgs.msg import SolutionStatus
            assert \
                isinstance(value, SolutionStatus), \
                "The 'sol_status' field must be a sub message of type 'SolutionStatus'"
        self._sol_status = value

    @builtins.property
    def vel_type(self):
        """Message field 'vel_type'."""
        return self._vel_type

    @vel_type.setter
    def vel_type(self, value):
        if __debug__:
            from novatel_oem7_msgs.msg import PositionOrVelocityType
            assert \
                isinstance(value, PositionOrVelocityType), \
                "The 'vel_type' field must be a sub message of type 'PositionOrVelocityType'"
        self._vel_type = value

    @builtins.property
    def latency(self):
        """Message field 'latency'."""
        return self._latency

    @latency.setter
    def latency(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'latency' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'latency' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._latency = value

    @builtins.property
    def diff_age(self):
        """Message field 'diff_age'."""
        return self._diff_age

    @diff_age.setter
    def diff_age(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'diff_age' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'diff_age' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._diff_age = value

    @builtins.property
    def hor_speed(self):
        """Message field 'hor_speed'."""
        return self._hor_speed

    @hor_speed.setter
    def hor_speed(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'hor_speed' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'hor_speed' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._hor_speed = value

    @builtins.property
    def trk_gnd(self):
        """Message field 'trk_gnd'."""
        return self._trk_gnd

    @trk_gnd.setter
    def trk_gnd(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'trk_gnd' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'trk_gnd' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._trk_gnd = value

    @builtins.property
    def ver_speed(self):
        """Message field 'ver_speed'."""
        return self._ver_speed

    @ver_speed.setter
    def ver_speed(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'ver_speed' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'ver_speed' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._ver_speed = value

    @builtins.property
    def reserved(self):
        """Message field 'reserved'."""
        return self._reserved

    @reserved.setter
    def reserved(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'reserved' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'reserved' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._reserved = value
