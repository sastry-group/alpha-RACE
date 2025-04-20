# generated from rosidl_generator_py/resource/_idl.py.em
# with input from raptor_dbw_msgs:msg/AcceleratorPedalReport.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_AcceleratorPedalReport(type):
    """Metaclass of message 'AcceleratorPedalReport'."""

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
                'raptor_dbw_msgs.msg.AcceleratorPedalReport')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__accelerator_pedal_report
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__accelerator_pedal_report
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__accelerator_pedal_report
            cls._TYPE_SUPPORT = module.type_support_msg__msg__accelerator_pedal_report
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__accelerator_pedal_report

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


class AcceleratorPedalReport(metaclass=Metaclass_AcceleratorPedalReport):
    """Message class 'AcceleratorPedalReport'."""

    __slots__ = [
        '_header',
        '_pedal_input',
        '_pedal_output',
        '_enabled',
        '_ignore_driver',
        '_driver_activity',
        '_fault_accel_pedal_system',
        '_fault_ch1',
        '_fault_ch2',
        '_rolling_counter',
        '_torque_actual',
        '_control_type',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'pedal_input': 'float',
        'pedal_output': 'float',
        'enabled': 'boolean',
        'ignore_driver': 'boolean',
        'driver_activity': 'boolean',
        'fault_accel_pedal_system': 'boolean',
        'fault_ch1': 'boolean',
        'fault_ch2': 'boolean',
        'rolling_counter': 'uint8',
        'torque_actual': 'float',
        'control_type': 'raptor_dbw_msgs/ActuatorControlMode',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['raptor_dbw_msgs', 'msg'], 'ActuatorControlMode'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.pedal_input = kwargs.get('pedal_input', float())
        self.pedal_output = kwargs.get('pedal_output', float())
        self.enabled = kwargs.get('enabled', bool())
        self.ignore_driver = kwargs.get('ignore_driver', bool())
        self.driver_activity = kwargs.get('driver_activity', bool())
        self.fault_accel_pedal_system = kwargs.get('fault_accel_pedal_system', bool())
        self.fault_ch1 = kwargs.get('fault_ch1', bool())
        self.fault_ch2 = kwargs.get('fault_ch2', bool())
        self.rolling_counter = kwargs.get('rolling_counter', int())
        self.torque_actual = kwargs.get('torque_actual', float())
        from raptor_dbw_msgs.msg import ActuatorControlMode
        self.control_type = kwargs.get('control_type', ActuatorControlMode())

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
        if self.pedal_input != other.pedal_input:
            return False
        if self.pedal_output != other.pedal_output:
            return False
        if self.enabled != other.enabled:
            return False
        if self.ignore_driver != other.ignore_driver:
            return False
        if self.driver_activity != other.driver_activity:
            return False
        if self.fault_accel_pedal_system != other.fault_accel_pedal_system:
            return False
        if self.fault_ch1 != other.fault_ch1:
            return False
        if self.fault_ch2 != other.fault_ch2:
            return False
        if self.rolling_counter != other.rolling_counter:
            return False
        if self.torque_actual != other.torque_actual:
            return False
        if self.control_type != other.control_type:
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
    def pedal_input(self):
        """Message field 'pedal_input'."""
        return self._pedal_input

    @pedal_input.setter
    def pedal_input(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'pedal_input' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'pedal_input' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._pedal_input = value

    @builtins.property
    def pedal_output(self):
        """Message field 'pedal_output'."""
        return self._pedal_output

    @pedal_output.setter
    def pedal_output(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'pedal_output' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'pedal_output' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._pedal_output = value

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
    def ignore_driver(self):
        """Message field 'ignore_driver'."""
        return self._ignore_driver

    @ignore_driver.setter
    def ignore_driver(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'ignore_driver' field must be of type 'bool'"
        self._ignore_driver = value

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
    def fault_accel_pedal_system(self):
        """Message field 'fault_accel_pedal_system'."""
        return self._fault_accel_pedal_system

    @fault_accel_pedal_system.setter
    def fault_accel_pedal_system(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'fault_accel_pedal_system' field must be of type 'bool'"
        self._fault_accel_pedal_system = value

    @builtins.property
    def fault_ch1(self):
        """Message field 'fault_ch1'."""
        return self._fault_ch1

    @fault_ch1.setter
    def fault_ch1(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'fault_ch1' field must be of type 'bool'"
        self._fault_ch1 = value

    @builtins.property
    def fault_ch2(self):
        """Message field 'fault_ch2'."""
        return self._fault_ch2

    @fault_ch2.setter
    def fault_ch2(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'fault_ch2' field must be of type 'bool'"
        self._fault_ch2 = value

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
    def torque_actual(self):
        """Message field 'torque_actual'."""
        return self._torque_actual

    @torque_actual.setter
    def torque_actual(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'torque_actual' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'torque_actual' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._torque_actual = value

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
