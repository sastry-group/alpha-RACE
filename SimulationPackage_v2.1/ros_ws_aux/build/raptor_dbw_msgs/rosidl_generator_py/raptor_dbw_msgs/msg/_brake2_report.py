# generated from rosidl_generator_py/resource/_idl.py.em
# with input from raptor_dbw_msgs:msg/Brake2Report.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Brake2Report(type):
    """Metaclass of message 'Brake2Report'."""

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
            module = import_type_support('raptor_dbw_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'raptor_dbw_msgs.msg.Brake2Report')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__brake2_report
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__brake2_report
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__brake2_report
            cls._TYPE_SUPPORT = module.type_support_msg__msg__brake2_report
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__brake2_report

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


class Brake2Report(metaclass=Metaclass_Brake2Report):
    """Message class 'Brake2Report'."""

    __slots__ = [
        '_header',
        '_front_brake_pressure',
        '_rear_brake_pressure',
        '_rolling_counter',
        '_estimated_road_slope',
        '_speed_set_point',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'front_brake_pressure': 'float',
        'rear_brake_pressure': 'float',
        'rolling_counter': 'uint8',
        'estimated_road_slope': 'float',
        'speed_set_point': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.front_brake_pressure = kwargs.get('front_brake_pressure', float())
        self.rear_brake_pressure = kwargs.get('rear_brake_pressure', float())
        self.rolling_counter = kwargs.get('rolling_counter', int())
        self.estimated_road_slope = kwargs.get('estimated_road_slope', float())
        self.speed_set_point = kwargs.get('speed_set_point', float())

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
        if self.front_brake_pressure != other.front_brake_pressure:
            return False
        if self.rear_brake_pressure != other.rear_brake_pressure:
            return False
        if self.rolling_counter != other.rolling_counter:
            return False
        if self.estimated_road_slope != other.estimated_road_slope:
            return False
        if self.speed_set_point != other.speed_set_point:
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
    def front_brake_pressure(self):
        """Message field 'front_brake_pressure'."""
        return self._front_brake_pressure

    @front_brake_pressure.setter
    def front_brake_pressure(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'front_brake_pressure' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'front_brake_pressure' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._front_brake_pressure = value

    @builtins.property
    def rear_brake_pressure(self):
        """Message field 'rear_brake_pressure'."""
        return self._rear_brake_pressure

    @rear_brake_pressure.setter
    def rear_brake_pressure(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'rear_brake_pressure' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'rear_brake_pressure' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._rear_brake_pressure = value

    @builtins.property
    def rolling_counter(self):
        """Message field 'rolling_counter'."""
        return self._rolling_counter

    @rolling_counter.setter
    def rolling_counter(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'rolling_counter' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'rolling_counter' field must be an unsigned integer in [0, 255]"
        self._rolling_counter = value

    @builtins.property
    def estimated_road_slope(self):
        """Message field 'estimated_road_slope'."""
        return self._estimated_road_slope

    @estimated_road_slope.setter
    def estimated_road_slope(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'estimated_road_slope' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'estimated_road_slope' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._estimated_road_slope = value

    @builtins.property
    def speed_set_point(self):
        """Message field 'speed_set_point'."""
        return self._speed_set_point

    @speed_set_point.setter
    def speed_set_point(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'speed_set_point' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'speed_set_point' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._speed_set_point = value
