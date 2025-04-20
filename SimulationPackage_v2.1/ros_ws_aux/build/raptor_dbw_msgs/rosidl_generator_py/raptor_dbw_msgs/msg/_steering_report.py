# generated from rosidl_generator_py/resource/_idl.py.em
# with input from raptor_dbw_msgs:msg/SteeringReport.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SteeringReport(type):
    """Metaclass of message 'SteeringReport'."""

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
                'raptor_dbw_msgs.msg.SteeringReport')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__steering_report
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__steering_report
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__steering_report
            cls._TYPE_SUPPORT = module.type_support_msg__msg__steering_report
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__steering_report

            from raptor_dbw_msgs.msg import ActuatorControlMode
            if ActuatorControlMode.__class__._TYPE_SUPPORT is None:
                ActuatorControlMode.__class__.__import_type_support__()

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


class SteeringReport(metaclass=Metaclass_SteeringReport):
    """Message class 'SteeringReport'."""

    __slots__ = [
        '_header',
        '_steering_wheel_angle',
        '_steering_wheel_angle_cmd',
        '_steering_wheel_torque',
        '_enabled',
        '_driver_activity',
        '_fault_steering_system',
        '_overheat_prevention_mode',
        '_rolling_counter',
        '_control_type',
        '_steering_overheat_warning',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'steering_wheel_angle': 'float',
        'steering_wheel_angle_cmd': 'float',
        'steering_wheel_torque': 'float',
        'enabled': 'boolean',
        'driver_activity': 'boolean',
        'fault_steering_system': 'boolean',
        'overheat_prevention_mode': 'boolean',
        'rolling_counter': 'uint8',
        'control_type': 'raptor_dbw_msgs/ActuatorControlMode',
        'steering_overheat_warning': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['raptor_dbw_msgs', 'msg'], 'ActuatorControlMode'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.steering_wheel_angle = kwargs.get('steering_wheel_angle', float())
        self.steering_wheel_angle_cmd = kwargs.get('steering_wheel_angle_cmd', float())
        self.steering_wheel_torque = kwargs.get('steering_wheel_torque', float())
        self.enabled = kwargs.get('enabled', bool())
        self.driver_activity = kwargs.get('driver_activity', bool())
        self.fault_steering_system = kwargs.get('fault_steering_system', bool())
        self.overheat_prevention_mode = kwargs.get('overheat_prevention_mode', bool())
        self.rolling_counter = kwargs.get('rolling_counter', int())
        from raptor_dbw_msgs.msg import ActuatorControlMode
        self.control_type = kwargs.get('control_type', ActuatorControlMode())
        self.steering_overheat_warning = kwargs.get('steering_overheat_warning', bool())

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
        if self.steering_wheel_angle != other.steering_wheel_angle:
            return False
        if self.steering_wheel_angle_cmd != other.steering_wheel_angle_cmd:
            return False
        if self.steering_wheel_torque != other.steering_wheel_torque:
            return False
        if self.enabled != other.enabled:
            return False
        if self.driver_activity != other.driver_activity:
            return False
        if self.fault_steering_system != other.fault_steering_system:
            return False
        if self.overheat_prevention_mode != other.overheat_prevention_mode:
            return False
        if self.rolling_counter != other.rolling_counter:
            return False
        if self.control_type != other.control_type:
            return False
        if self.steering_overheat_warning != other.steering_overheat_warning:
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
    def steering_wheel_angle(self):
        """Message field 'steering_wheel_angle'."""
        return self._steering_wheel_angle

    @steering_wheel_angle.setter
    def steering_wheel_angle(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'steering_wheel_angle' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'steering_wheel_angle' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._steering_wheel_angle = value

    @builtins.property
    def steering_wheel_angle_cmd(self):
        """Message field 'steering_wheel_angle_cmd'."""
        return self._steering_wheel_angle_cmd

    @steering_wheel_angle_cmd.setter
    def steering_wheel_angle_cmd(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'steering_wheel_angle_cmd' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'steering_wheel_angle_cmd' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._steering_wheel_angle_cmd = value

    @builtins.property
    def steering_wheel_torque(self):
        """Message field 'steering_wheel_torque'."""
        return self._steering_wheel_torque

    @steering_wheel_torque.setter
    def steering_wheel_torque(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'steering_wheel_torque' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'steering_wheel_torque' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._steering_wheel_torque = value

    @builtins.property
    def enabled(self):
        """Message field 'enabled'."""
        return self._enabled

    @enabled.setter
    def enabled(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'enabled' field must be of type 'bool'"
        self._enabled = value

    @builtins.property
    def driver_activity(self):
        """Message field 'driver_activity'."""
        return self._driver_activity

    @driver_activity.setter
    def driver_activity(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'driver_activity' field must be of type 'bool'"
        self._driver_activity = value

    @builtins.property
    def fault_steering_system(self):
        """Message field 'fault_steering_system'."""
        return self._fault_steering_system

    @fault_steering_system.setter
    def fault_steering_system(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'fault_steering_system' field must be of type 'bool'"
        self._fault_steering_system = value

    @builtins.property
    def overheat_prevention_mode(self):
        """Message field 'overheat_prevention_mode'."""
        return self._overheat_prevention_mode

    @overheat_prevention_mode.setter
    def overheat_prevention_mode(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'overheat_prevention_mode' field must be of type 'bool'"
        self._overheat_prevention_mode = value

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
    def steering_overheat_warning(self):
        """Message field 'steering_overheat_warning'."""
        return self._steering_overheat_warning

    @steering_overheat_warning.setter
    def steering_overheat_warning(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'steering_overheat_warning' field must be of type 'bool'"
        self._steering_overheat_warning = value
