# generated from rosidl_generator_py/resource/_idl.py.em
# with input from npc_controller_msgs:msg/CtReport.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_CtReport(type):
    """Metaclass of message 'CtReport'."""

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
                'npc_controller_msgs.msg.CtReport')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__ct_report
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__ct_report
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__ct_report
            cls._TYPE_SUPPORT = module.type_support_msg__msg__ct_report
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__ct_report

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


class CtReport(metaclass=Metaclass_CtReport):
    """Message class 'CtReport'."""

    __slots__ = [
        '_stamp',
        '_track_flag_ack',
        '_veh_flag_ack',
        '_ct_state',
        '_target_speed',
        '_rolling_counter',
    ]

    _fields_and_field_types = {
        'stamp': 'builtin_interfaces/Time',
        'track_flag_ack': 'uint8',
        'veh_flag_ack': 'uint8',
        'ct_state': 'uint8',
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
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from builtin_interfaces.msg import Time
        self.stamp = kwargs.get('stamp', Time())
        self.track_flag_ack = kwargs.get('track_flag_ack', int())
        self.veh_flag_ack = kwargs.get('veh_flag_ack', int())
        self.ct_state = kwargs.get('ct_state', int())
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
        if self.track_flag_ack != other.track_flag_ack:
            return False
        if self.veh_flag_ack != other.veh_flag_ack:
            return False
        if self.ct_state != other.ct_state:
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
    def track_flag_ack(self):
        """Message field 'track_flag_ack'."""
        return self._track_flag_ack

    @track_flag_ack.setter
    def track_flag_ack(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'track_flag_ack' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'track_flag_ack' field must be an unsigned integer in [0, 255]"
        self._track_flag_ack = value

    @builtins.property
    def veh_flag_ack(self):
        """Message field 'veh_flag_ack'."""
        return self._veh_flag_ack

    @veh_flag_ack.setter
    def veh_flag_ack(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'veh_flag_ack' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'veh_flag_ack' field must be an unsigned integer in [0, 255]"
        self._veh_flag_ack = value

    @builtins.property
    def ct_state(self):
        """Message field 'ct_state'."""
        return self._ct_state

    @ct_state.setter
    def ct_state(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'ct_state' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'ct_state' field must be an unsigned integer in [0, 255]"
        self._ct_state = value

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
