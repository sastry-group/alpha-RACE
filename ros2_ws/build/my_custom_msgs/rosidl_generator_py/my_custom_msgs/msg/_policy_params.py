# generated from rosidl_generator_py/resource/_idl.py.em
# with input from my_custom_msgs:msg/PolicyParams.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_PolicyParams(type):
    """Metaclass of message 'PolicyParams'."""

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
            module = import_type_support('my_custom_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'my_custom_msgs.msg.PolicyParams')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__policy_params
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__policy_params
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__policy_params
            cls._TYPE_SUPPORT = module.type_support_msg__msg__policy_params
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__policy_params

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class PolicyParams(metaclass=Metaclass_PolicyParams):
    """Message class 'PolicyParams'."""

    __slots__ = [
        '_sf1',
        '_sf2',
        '_speed_factor',
        '_lookahead_factor',
        '_blocking_factor',
    ]

    _fields_and_field_types = {
        'sf1': 'float',
        'sf2': 'float',
        'speed_factor': 'float',
        'lookahead_factor': 'float',
        'blocking_factor': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.sf1 = kwargs.get('sf1', float())
        self.sf2 = kwargs.get('sf2', float())
        self.speed_factor = kwargs.get('speed_factor', float())
        self.lookahead_factor = kwargs.get('lookahead_factor', float())
        self.blocking_factor = kwargs.get('blocking_factor', float())

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
        if self.sf1 != other.sf1:
            return False
        if self.sf2 != other.sf2:
            return False
        if self.speed_factor != other.speed_factor:
            return False
        if self.lookahead_factor != other.lookahead_factor:
            return False
        if self.blocking_factor != other.blocking_factor:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def sf1(self):
        """Message field 'sf1'."""
        return self._sf1

    @sf1.setter
    def sf1(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'sf1' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'sf1' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._sf1 = value

    @builtins.property
    def sf2(self):
        """Message field 'sf2'."""
        return self._sf2

    @sf2.setter
    def sf2(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'sf2' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'sf2' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._sf2 = value

    @builtins.property
    def speed_factor(self):
        """Message field 'speed_factor'."""
        return self._speed_factor

    @speed_factor.setter
    def speed_factor(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'speed_factor' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'speed_factor' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._speed_factor = value

    @builtins.property
    def lookahead_factor(self):
        """Message field 'lookahead_factor'."""
        return self._lookahead_factor

    @lookahead_factor.setter
    def lookahead_factor(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'lookahead_factor' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'lookahead_factor' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._lookahead_factor = value

    @builtins.property
    def blocking_factor(self):
        """Message field 'blocking_factor'."""
        return self._blocking_factor

    @blocking_factor.setter
    def blocking_factor(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'blocking_factor' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'blocking_factor' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._blocking_factor = value
