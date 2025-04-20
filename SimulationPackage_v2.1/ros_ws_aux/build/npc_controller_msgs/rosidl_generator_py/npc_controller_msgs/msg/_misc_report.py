# generated from rosidl_generator_py/resource/_idl.py.em
# with input from npc_controller_msgs:msg/MiscReport.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_MiscReport(type):
    """Metaclass of message 'MiscReport'."""

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
                'npc_controller_msgs.msg.MiscReport')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__misc_report
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__misc_report
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__misc_report
            cls._TYPE_SUPPORT = module.type_support_msg__msg__misc_report
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__misc_report

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


class MiscReport(metaclass=Metaclass_MiscReport):
    """Message class 'MiscReport'."""

    __slots__ = [
        '_stamp',
        '_battery_voltage',
        '_off_grid_power_connection',
        '_safety_switch_state',
        '_mode_switch_state',
        '_sys_state',
    ]

    _fields_and_field_types = {
        'stamp': 'builtin_interfaces/Time',
        'battery_voltage': 'float',
        'off_grid_power_connection': 'boolean',
        'safety_switch_state': 'uint8',
        'mode_switch_state': 'boolean',
        'sys_state': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Time'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from builtin_interfaces.msg import Time
        self.stamp = kwargs.get('stamp', Time())
        self.battery_voltage = kwargs.get('battery_voltage', float())
        self.off_grid_power_connection = kwargs.get('off_grid_power_connection', bool())
        self.safety_switch_state = kwargs.get('safety_switch_state', int())
        self.mode_switch_state = kwargs.get('mode_switch_state', bool())
        self.sys_state = kwargs.get('sys_state', int())

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
        if self.battery_voltage != other.battery_voltage:
            return False
        if self.off_grid_power_connection != other.off_grid_power_connection:
            return False
        if self.safety_switch_state != other.safety_switch_state:
            return False
        if self.mode_switch_state != other.mode_switch_state:
            return False
        if self.sys_state != other.sys_state:
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
    def battery_voltage(self):
        """Message field 'battery_voltage'."""
        return self._battery_voltage

    @battery_voltage.setter
    def battery_voltage(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'battery_voltage' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'battery_voltage' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._battery_voltage = value

    @builtins.property
    def off_grid_power_connection(self):
        """Message field 'off_grid_power_connection'."""
        return self._off_grid_power_connection

    @off_grid_power_connection.setter
    def off_grid_power_connection(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'off_grid_power_connection' field must be of type 'bool'"
        self._off_grid_power_connection = value

    @builtins.property
    def safety_switch_state(self):
        """Message field 'safety_switch_state'."""
        return self._safety_switch_state

    @safety_switch_state.setter
    def safety_switch_state(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'safety_switch_state' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'safety_switch_state' field must be an unsigned integer in [0, 255]"
        self._safety_switch_state = value

    @builtins.property
    def mode_switch_state(self):
        """Message field 'mode_switch_state'."""
        return self._mode_switch_state

    @mode_switch_state.setter
    def mode_switch_state(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'mode_switch_state' field must be of type 'bool'"
        self._mode_switch_state = value

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
