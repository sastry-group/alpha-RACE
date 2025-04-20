# generated from rosidl_generator_py/resource/_idl.py.em
# with input from raptor_dbw_msgs:msg/GlobalEnableCmd.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_GlobalEnableCmd(type):
    """Metaclass of message 'GlobalEnableCmd'."""

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
                'raptor_dbw_msgs.msg.GlobalEnableCmd')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__global_enable_cmd
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__global_enable_cmd
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__global_enable_cmd
            cls._TYPE_SUPPORT = module.type_support_msg__msg__global_enable_cmd
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__global_enable_cmd

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GlobalEnableCmd(metaclass=Metaclass_GlobalEnableCmd):
    """Message class 'GlobalEnableCmd'."""

    __slots__ = [
        '_global_enable',
        '_enable_joystick_limits',
        '_ecu_build_number',
        '_rolling_counter',
    ]

    _fields_and_field_types = {
        'global_enable': 'boolean',
        'enable_joystick_limits': 'boolean',
        'ecu_build_number': 'uint16',
        'rolling_counter': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.global_enable = kwargs.get('global_enable', bool())
        self.enable_joystick_limits = kwargs.get('enable_joystick_limits', bool())
        self.ecu_build_number = kwargs.get('ecu_build_number', int())
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
        if self.global_enable != other.global_enable:
            return False
        if self.enable_joystick_limits != other.enable_joystick_limits:
            return False
        if self.ecu_build_number != other.ecu_build_number:
            return False
        if self.rolling_counter != other.rolling_counter:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def global_enable(self):
        """Message field 'global_enable'."""
        return self._global_enable

    @global_enable.setter
    def global_enable(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'global_enable' field must be of type 'bool'"
        self._global_enable = value

    @builtins.property
    def enable_joystick_limits(self):
        """Message field 'enable_joystick_limits'."""
        return self._enable_joystick_limits

    @enable_joystick_limits.setter
    def enable_joystick_limits(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'enable_joystick_limits' field must be of type 'bool'"
        self._enable_joystick_limits = value

    @builtins.property
    def ecu_build_number(self):
        """Message field 'ecu_build_number'."""
        return self._ecu_build_number

    @ecu_build_number.setter
    def ecu_build_number(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'ecu_build_number' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'ecu_build_number' field must be an unsigned integer in [0, 65535]"
        self._ecu_build_number = value

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
