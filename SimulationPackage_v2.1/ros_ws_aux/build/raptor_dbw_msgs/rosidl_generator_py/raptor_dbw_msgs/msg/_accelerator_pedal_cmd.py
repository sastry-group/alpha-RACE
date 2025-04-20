# generated from rosidl_generator_py/resource/_idl.py.em
# with input from raptor_dbw_msgs:msg/AcceleratorPedalCmd.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_AcceleratorPedalCmd(type):
    """Metaclass of message 'AcceleratorPedalCmd'."""

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
                'raptor_dbw_msgs.msg.AcceleratorPedalCmd')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__accelerator_pedal_cmd
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__accelerator_pedal_cmd
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__accelerator_pedal_cmd
            cls._TYPE_SUPPORT = module.type_support_msg__msg__accelerator_pedal_cmd
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__accelerator_pedal_cmd

            from raptor_dbw_msgs.msg import ActuatorControlMode
            if ActuatorControlMode.__class__._TYPE_SUPPORT is None:
                ActuatorControlMode.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class AcceleratorPedalCmd(metaclass=Metaclass_AcceleratorPedalCmd):
    """Message class 'AcceleratorPedalCmd'."""

    __slots__ = [
        '_pedal_cmd',
        '_torque_cmd',
        '_speed_cmd',
        '_enable',
        '_ignore',
        '_rolling_counter',
        '_road_slope',
        '_control_type',
        '_accel_limit',
        '_accel_positive_jerk_limit',
    ]

    _fields_and_field_types = {
        'pedal_cmd': 'float',
        'torque_cmd': 'float',
        'speed_cmd': 'float',
        'enable': 'boolean',
        'ignore': 'boolean',
        'rolling_counter': 'uint8',
        'road_slope': 'float',
        'control_type': 'raptor_dbw_msgs/ActuatorControlMode',
        'accel_limit': 'float',
        'accel_positive_jerk_limit': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['raptor_dbw_msgs', 'msg'], 'ActuatorControlMode'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.pedal_cmd = kwargs.get('pedal_cmd', float())
        self.torque_cmd = kwargs.get('torque_cmd', float())
        self.speed_cmd = kwargs.get('speed_cmd', float())
        self.enable = kwargs.get('enable', bool())
        self.ignore = kwargs.get('ignore', bool())
        self.rolling_counter = kwargs.get('rolling_counter', int())
        self.road_slope = kwargs.get('road_slope', float())
        from raptor_dbw_msgs.msg import ActuatorControlMode
        self.control_type = kwargs.get('control_type', ActuatorControlMode())
        self.accel_limit = kwargs.get('accel_limit', float())
        self.accel_positive_jerk_limit = kwargs.get('accel_positive_jerk_limit', float())

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
        if self.pedal_cmd != other.pedal_cmd:
            return False
        if self.torque_cmd != other.torque_cmd:
            return False
        if self.speed_cmd != other.speed_cmd:
            return False
        if self.enable != other.enable:
            return False
        if self.ignore != other.ignore:
            return False
        if self.rolling_counter != other.rolling_counter:
            return False
        if self.road_slope != other.road_slope:
            return False
        if self.control_type != other.control_type:
            return False
        if self.accel_limit != other.accel_limit:
            return False
        if self.accel_positive_jerk_limit != other.accel_positive_jerk_limit:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def pedal_cmd(self):
        """Message field 'pedal_cmd'."""
        return self._pedal_cmd

    @pedal_cmd.setter
    def pedal_cmd(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'pedal_cmd' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'pedal_cmd' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._pedal_cmd = value

    @builtins.property
    def torque_cmd(self):
        """Message field 'torque_cmd'."""
        return self._torque_cmd

    @torque_cmd.setter
    def torque_cmd(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'torque_cmd' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'torque_cmd' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._torque_cmd = value

    @builtins.property
    def speed_cmd(self):
        """Message field 'speed_cmd'."""
        return self._speed_cmd

    @speed_cmd.setter
    def speed_cmd(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'speed_cmd' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'speed_cmd' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._speed_cmd = value

    @builtins.property
    def enable(self):
        """Message field 'enable'."""
        return self._enable

    @enable.setter
    def enable(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'enable' field must be of type 'bool'"
        self._enable = value

    @builtins.property
    def ignore(self):
        """Message field 'ignore'."""
        return self._ignore

    @ignore.setter
    def ignore(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'ignore' field must be of type 'bool'"
        self._ignore = value

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
    def road_slope(self):
        """Message field 'road_slope'."""
        return self._road_slope

    @road_slope.setter
    def road_slope(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'road_slope' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'road_slope' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._road_slope = value

    @builtins.property
    def control_type(self):
        """Message field 'control_type'."""
        return self._control_type

    @control_type.setter
    def control_type(self, value):
        if __debug__:
            from raptor_dbw_msgs.msg import ActuatorControlMode
            assert \
                isinstance(value, ActuatorControlMode), \
                "The 'control_type' field must be a sub message of type 'ActuatorControlMode'"
        self._control_type = value

    @builtins.property
    def accel_limit(self):
        """Message field 'accel_limit'."""
        return self._accel_limit

    @accel_limit.setter
    def accel_limit(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'accel_limit' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'accel_limit' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._accel_limit = value

    @builtins.property
    def accel_positive_jerk_limit(self):
        """Message field 'accel_positive_jerk_limit'."""
        return self._accel_positive_jerk_limit

    @accel_positive_jerk_limit.setter
    def accel_positive_jerk_limit(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'accel_positive_jerk_limit' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'accel_positive_jerk_limit' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._accel_positive_jerk_limit = value
