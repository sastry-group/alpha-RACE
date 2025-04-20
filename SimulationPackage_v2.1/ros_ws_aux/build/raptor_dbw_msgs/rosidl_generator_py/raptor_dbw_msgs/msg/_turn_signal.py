# generated from rosidl_generator_py/resource/_idl.py.em
# with input from raptor_dbw_msgs:msg/TurnSignal.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_TurnSignal(type):
    """Metaclass of message 'TurnSignal'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'NONE': 0,
        'LEFT': 1,
        'RIGHT': 2,
        'HAZARDS': 3,
        'SNA': 7,
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
                'raptor_dbw_msgs.msg.TurnSignal')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__turn_signal
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__turn_signal
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__turn_signal
            cls._TYPE_SUPPORT = module.type_support_msg__msg__turn_signal
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__turn_signal

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'NONE': cls.__constants['NONE'],
            'LEFT': cls.__constants['LEFT'],
            'RIGHT': cls.__constants['RIGHT'],
            'HAZARDS': cls.__constants['HAZARDS'],
            'SNA': cls.__constants['SNA'],
        }

    @property
    def NONE(self):
        """Message constant 'NONE'."""
        return Metaclass_TurnSignal.__constants['NONE']

    @property
    def LEFT(self):
        """Message constant 'LEFT'."""
        return Metaclass_TurnSignal.__constants['LEFT']

    @property
    def RIGHT(self):
        """Message constant 'RIGHT'."""
        return Metaclass_TurnSignal.__constants['RIGHT']

    @property
    def HAZARDS(self):
        """Message constant 'HAZARDS'."""
        return Metaclass_TurnSignal.__constants['HAZARDS']

    @property
    def SNA(self):
        """Message constant 'SNA'."""
        return Metaclass_TurnSignal.__constants['SNA']


class TurnSignal(metaclass=Metaclass_TurnSignal):
    """
    Message class 'TurnSignal'.

    Constants:
      NONE
      LEFT
      RIGHT
      HAZARDS
      SNA
    """

    __slots__ = [
        '_value',
    ]

    _fields_and_field_types = {
        'value': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.value = kwargs.get('value', int())

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
        if self.value != other.value:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def value(self):
        """Message field 'value'."""
        return self._value

    @value.setter
    def value(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'value' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'value' field must be an unsigned integer in [0, 255]"
        self._value = value
