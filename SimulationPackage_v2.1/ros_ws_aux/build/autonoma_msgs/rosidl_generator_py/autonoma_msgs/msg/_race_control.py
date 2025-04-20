# generated from rosidl_generator_py/resource/_idl.py.em
# with input from autonoma_msgs:msg/RaceControl.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_RaceControl(type):
    """Metaclass of message 'RaceControl'."""

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
            module = import_type_support('autonoma_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'autonoma_msgs.msg.RaceControl')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__race_control
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__race_control
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__race_control
            cls._TYPE_SUPPORT = module.type_support_msg__msg__race_control
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__race_control

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


class RaceControl(metaclass=Metaclass_RaceControl):
    """Message class 'RaceControl'."""

    __slots__ = [
        '_header',
        '_base_to_car_heartbeat',
        '_track_flag',
        '_veh_flag',
        '_veh_rank',
        '_sys_state',
        '_lap_count',
        '_lap_distance',
        '_round_target_speed',
        '_laps',
        '_lap_time',
        '_time_stamp',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'base_to_car_heartbeat': 'uint8',
        'track_flag': 'uint8',
        'veh_flag': 'uint8',
        'veh_rank': 'uint8',
        'sys_state': 'uint8',
        'lap_count': 'uint8',
        'lap_distance': 'float',
        'round_target_speed': 'uint8',
        'laps': 'uint8',
        'lap_time': 'float',
        'time_stamp': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
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
        self.base_to_car_heartbeat = kwargs.get('base_to_car_heartbeat', int())
        self.track_flag = kwargs.get('track_flag', int())
        self.veh_flag = kwargs.get('veh_flag', int())
        self.veh_rank = kwargs.get('veh_rank', int())
        self.sys_state = kwargs.get('sys_state', int())
        self.lap_count = kwargs.get('lap_count', int())
        self.lap_distance = kwargs.get('lap_distance', float())
        self.round_target_speed = kwargs.get('round_target_speed', int())
        self.laps = kwargs.get('laps', int())
        self.lap_time = kwargs.get('lap_time', float())
        self.time_stamp = kwargs.get('time_stamp', float())

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
        if self.base_to_car_heartbeat != other.base_to_car_heartbeat:
            return False
        if self.track_flag != other.track_flag:
            return False
        if self.veh_flag != other.veh_flag:
            return False
        if self.veh_rank != other.veh_rank:
            return False
        if self.sys_state != other.sys_state:
            return False
        if self.lap_count != other.lap_count:
            return False
        if self.lap_distance != other.lap_distance:
            return False
        if self.round_target_speed != other.round_target_speed:
            return False
        if self.laps != other.laps:
            return False
        if self.lap_time != other.lap_time:
            return False
        if self.time_stamp != other.time_stamp:
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
    def base_to_car_heartbeat(self):
        """Message field 'base_to_car_heartbeat'."""
        return self._base_to_car_heartbeat

    @base_to_car_heartbeat.setter
    def base_to_car_heartbeat(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'base_to_car_heartbeat' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'base_to_car_heartbeat' field must be an unsigned integer in [0, 255]"
        self._base_to_car_heartbeat = value

    @builtins.property
    def track_flag(self):
        """Message field 'track_flag'."""
        return self._track_flag

    @track_flag.setter
    def track_flag(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'track_flag' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'track_flag' field must be an unsigned integer in [0, 255]"
        self._track_flag = value

    @builtins.property
    def veh_flag(self):
        """Message field 'veh_flag'."""
        return self._veh_flag

    @veh_flag.setter
    def veh_flag(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'veh_flag' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'veh_flag' field must be an unsigned integer in [0, 255]"
        self._veh_flag = value

    @builtins.property
    def veh_rank(self):
        """Message field 'veh_rank'."""
        return self._veh_rank

    @veh_rank.setter
    def veh_rank(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'veh_rank' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'veh_rank' field must be an unsigned integer in [0, 255]"
        self._veh_rank = value

    @builtins.property
    def sys_state(self):
        """Message field 'sys_state'."""
        return self._sys_state

    @sys_state.setter
    def sys_state(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'sys_state' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'sys_state' field must be an unsigned integer in [0, 255]"
        self._sys_state = value

    @builtins.property
    def lap_count(self):
        """Message field 'lap_count'."""
        return self._lap_count

    @lap_count.setter
    def lap_count(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'lap_count' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'lap_count' field must be an unsigned integer in [0, 255]"
        self._lap_count = value

    @builtins.property
    def lap_distance(self):
        """Message field 'lap_distance'."""
        return self._lap_distance

    @lap_distance.setter
    def lap_distance(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'lap_distance' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'lap_distance' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._lap_distance = value

    @builtins.property
    def round_target_speed(self):
        """Message field 'round_target_speed'."""
        return self._round_target_speed

    @round_target_speed.setter
    def round_target_speed(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'round_target_speed' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'round_target_speed' field must be an unsigned integer in [0, 255]"
        self._round_target_speed = value

    @builtins.property
    def laps(self):
        """Message field 'laps'."""
        return self._laps

    @laps.setter
    def laps(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'laps' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'laps' field must be an unsigned integer in [0, 255]"
        self._laps = value

    @builtins.property
    def lap_time(self):
        """Message field 'lap_time'."""
        return self._lap_time

    @lap_time.setter
    def lap_time(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'lap_time' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'lap_time' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._lap_time = value

    @builtins.property
    def time_stamp(self):
        """Message field 'time_stamp'."""
        return self._time_stamp

    @time_stamp.setter
    def time_stamp(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'time_stamp' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'time_stamp' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._time_stamp = value
