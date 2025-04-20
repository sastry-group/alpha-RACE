# generated from rosidl_generator_py/resource/_idl.py.em
# with input from autonoma_msgs:msg/VehicleInputs.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_VehicleInputs(type):
    """Metaclass of message 'VehicleInputs'."""

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
                'autonoma_msgs.msg.VehicleInputs')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__vehicle_inputs
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__vehicle_inputs
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__vehicle_inputs
            cls._TYPE_SUPPORT = module.type_support_msg__msg__vehicle_inputs
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__vehicle_inputs

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


class VehicleInputs(metaclass=Metaclass_VehicleInputs):
    """Message class 'VehicleInputs'."""

    __slots__ = [
        '_header',
        '_throttle_cmd',
        '_throttle_cmd_count',
        '_brake_cmd',
        '_brake_cmd_count',
        '_steering_cmd',
        '_steering_cmd_count',
        '_gear_cmd',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'throttle_cmd': 'float',
        'throttle_cmd_count': 'uint8',
        'brake_cmd': 'float',
        'brake_cmd_count': 'uint8',
        'steering_cmd': 'float',
        'steering_cmd_count': 'uint8',
        'gear_cmd': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.throttle_cmd = kwargs.get('throttle_cmd', float())
        self.throttle_cmd_count = kwargs.get('throttle_cmd_count', int())
        self.brake_cmd = kwargs.get('brake_cmd', float())
        self.brake_cmd_count = kwargs.get('brake_cmd_count', int())
        self.steering_cmd = kwargs.get('steering_cmd', float())
        self.steering_cmd_count = kwargs.get('steering_cmd_count', int())
        self.gear_cmd = kwargs.get('gear_cmd', int())

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
        if self.throttle_cmd != other.throttle_cmd:
            return False
        if self.throttle_cmd_count != other.throttle_cmd_count:
            return False
        if self.brake_cmd != other.brake_cmd:
            return False
        if self.brake_cmd_count != other.brake_cmd_count:
            return False
        if self.steering_cmd != other.steering_cmd:
            return False
        if self.steering_cmd_count != other.steering_cmd_count:
            return False
        if self.gear_cmd != other.gear_cmd:
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
    def throttle_cmd(self):
        """Message field 'throttle_cmd'."""
        return self._throttle_cmd

    @throttle_cmd.setter
    def throttle_cmd(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'throttle_cmd' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'throttle_cmd' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._throttle_cmd = value

    @builtins.property
    def throttle_cmd_count(self):
        """Message field 'throttle_cmd_count'."""
        return self._throttle_cmd_count

    @throttle_cmd_count.setter
    def throttle_cmd_count(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'throttle_cmd_count' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'throttle_cmd_count' field must be an unsigned integer in [0, 255]"
        self._throttle_cmd_count = value

    @builtins.property
    def brake_cmd(self):
        """Message field 'brake_cmd'."""
        return self._brake_cmd

    @brake_cmd.setter
    def brake_cmd(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'brake_cmd' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'brake_cmd' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._brake_cmd = value

    @builtins.property
    def brake_cmd_count(self):
        """Message field 'brake_cmd_count'."""
        return self._brake_cmd_count

    @brake_cmd_count.setter
    def brake_cmd_count(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'brake_cmd_count' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'brake_cmd_count' field must be an unsigned integer in [0, 255]"
        self._brake_cmd_count = value

    @builtins.property
    def steering_cmd(self):
        """Message field 'steering_cmd'."""
        return self._steering_cmd

    @steering_cmd.setter
    def steering_cmd(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'steering_cmd' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'steering_cmd' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._steering_cmd = value

    @builtins.property
    def steering_cmd_count(self):
        """Message field 'steering_cmd_count'."""
        return self._steering_cmd_count

    @steering_cmd_count.setter
    def steering_cmd_count(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'steering_cmd_count' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'steering_cmd_count' field must be an unsigned integer in [0, 255]"
        self._steering_cmd_count = value

    @builtins.property
    def gear_cmd(self):
        """Message field 'gear_cmd'."""
        return self._gear_cmd

    @gear_cmd.setter
    def gear_cmd(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'gear_cmd' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'gear_cmd' field must be an unsigned integer in [0, 255]"
        self._gear_cmd = value
