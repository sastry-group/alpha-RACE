# generated from rosidl_generator_py/resource/_idl.py.em
# with input from npc_controller_msgs:msg/RcToCt.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_RcToCt(type):
    """Metaclass of message 'RcToCt'."""

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
            module = import_type_support('npc_controller_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'npc_controller_msgs.msg.RcToCt')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__rc_to_ct
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__rc_to_ct
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__rc_to_ct
            cls._TYPE_SUPPORT = module.type_support_msg__msg__rc_to_ct
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__rc_to_ct

            from builtin_interfaces.msg import Time
            if Time.__class__._TYPE_SUPPORT is None:
                Time.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class RcToCt(metaclass=Metaclass_RcToCt):
    """Message class 'RcToCt'."""

    __slots__ = [
        '_stamp',
        '_track_flag',
        '_veh_flag',
        '_veh_rank',
        '_lap_count',
        '_lap_distance',
        '_target_speed',
        '_rolling_counter',
    ]

    _fields_and_field_types = {
        'stamp': 'builtin_interfaces/Time',
        'track_flag': 'uint8',
        'veh_flag': 'uint8',
        'veh_rank': 'uint8',
        'lap_count': 'uint8',
        'lap_distance': 'uint8',
        'target_speed': 'uint8',
        'rolling_counter': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Time'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from builtin_interfaces.msg import Time
        self.stamp = kwargs.get('stamp', Time())
        self.track_flag = kwargs.get('track_flag', int())
        self.veh_flag = kwargs.get('veh_flag', int())
        self.veh_rank = kwargs.get('veh_rank', int())
        self.lap_count = kwargs.get('lap_count', int())
        self.lap_distance = kwargs.get('lap_distance', int())
        self.target_speed = kwargs.get('target_speed', int())
        self.rolling_counter = kwargs.get('rolling_counter', int())

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
        if self.stamp != other.stamp:
            return False
        if self.track_flag != other.track_flag:
            return False
        if self.veh_flag != other.veh_flag:
            return False
        if self.veh_rank != other.veh_rank:
            return False
        if self.lap_count != other.lap_count:
            return False
        if self.lap_distance != other.lap_distance:
            return False
        if self.target_speed != other.target_speed:
            return False
        if self.rolling_counter != other.rolling_counter:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def stamp(self):
        """Message field 'stamp'."""
        return self._stamp

    @stamp.setter
    def stamp(self, value):
        if __debug__:
            from builtin_interfaces.msg import Time
            assert \
                isinstance(value, Time), \
                "The 'stamp' field must be a sub message of type 'Time'"
        self._stamp = value

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
                isinstance(value, int), \
                "The 'lap_distance' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'lap_distance' field must be an unsigned integer in [0, 255]"
        self._lap_distance = value

    @builtins.property
    def target_speed(self):
        """Message field 'target_speed'."""
        return self._target_speed

    @target_speed.setter
    def target_speed(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'target_speed' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'target_speed' field must be an unsigned integer in [0, 255]"
        self._target_speed = value

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
