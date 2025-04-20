# generated from rosidl_generator_py/resource/_idl.py.em
# with input from raptor_dbw_msgs:msg/BrakeCmd.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_BrakeCmd(type):
    """Metaclass of message 'BrakeCmd'."""

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
                'raptor_dbw_msgs.msg.BrakeCmd')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__brake_cmd
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__brake_cmd
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__brake_cmd
            cls._TYPE_SUPPORT = module.type_support_msg__msg__brake_cmd
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__brake_cmd

            from raptor_dbw_msgs.msg import ActuatorControlMode
            if ActuatorControlMode.__class__._TYPE_SUPPORT is None:
                ActuatorControlMode.__class__.__import_type_support__()

            from raptor_dbw_msgs.msg import ParkingBrake
            if ParkingBrake.__class__._TYPE_SUPPORT is None:
                ParkingBrake.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class BrakeCmd(metaclass=Metaclass_BrakeCmd):
    """Message class 'BrakeCmd'."""

    __slots__ = [
        '_pedal_cmd',
        '_enable',
        '_rolling_counter',
        '_torque_cmd',
        '_decel_limit',
        '_control_type',
        '_decel_negative_jerk_limit',
        '_park_brake_cmd',
    ]

    _fields_and_field_types = {
        'pedal_cmd': 'float',
        'enable': 'boolean',
        'rolling_counter': 'uint8',
        'torque_cmd': 'float',
        'decel_limit': 'float',
        'control_type': 'raptor_dbw_msgs/ActuatorControlMode',
        'decel_negative_jerk_limit': 'float',
        'park_brake_cmd': 'raptor_dbw_msgs/ParkingBrake',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['raptor_dbw_msgs', 'msg'], 'ActuatorControlMode'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['raptor_dbw_msgs', 'msg'], 'ParkingBrake'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.pedal_cmd = kwargs.get('pedal_cmd', float())
        self.enable = kwargs.get('enable', bool())
        self.rolling_counter = kwargs.get('rolling_counter', int())
        self.torque_cmd = kwargs.get('torque_cmd', float())
        self.decel_limit = kwargs.get('decel_limit', float())
        from raptor_dbw_msgs.msg import ActuatorControlMode
        self.control_type = kwargs.get('control_type', ActuatorControlMode())
        self.decel_negative_jerk_limit = kwargs.get('decel_negative_jerk_limit', float())
        from raptor_dbw_msgs.msg import ParkingBrake
        self.park_brake_cmd = kwargs.get('park_brake_cmd', ParkingBrake())

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
        if self.enable != other.enable:
            return False
        if self.rolling_counter != other.rolling_counter:
            return False
        if self.torque_cmd != other.torque_cmd:
            return False
        if self.decel_limit != other.decel_limit:
            return False
        if self.control_type != other.control_type:
            return False
        if self.decel_negative_jerk_limit != other.decel_negative_jerk_limit:
            return False
        if self.park_brake_cmd != other.park_brake_cmd:
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
    def decel_limit(self):
        """Message field 'decel_limit'."""
        return self._decel_limit

    @decel_limit.setter
    def decel_limit(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'decel_limit' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'decel_limit' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._decel_limit = value

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
    def decel_negative_jerk_limit(self):
        """Message field 'decel_negative_jerk_limit'."""
        return self._decel_negative_jerk_limit

    @decel_negative_jerk_limit.setter
    def decel_negative_jerk_limit(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'decel_negative_jerk_limit' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'decel_negative_jerk_limit' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._decel_negative_jerk_limit = value

    @builtins.property
    def park_brake_cmd(self):
        """Message field 'park_brake_cmd'."""
        return self._park_brake_cmd

    @park_brake_cmd.setter
    def park_brake_cmd(self, value):
        if __debug__:
            from raptor_dbw_msgs.msg import ParkingBrake
            assert \
                isinstance(value, ParkingBrake), \
                "The 'park_brake_cmd' field must be a sub message of type 'ParkingBrake'"
        self._park_brake_cmd = value
