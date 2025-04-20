# generated from rosidl_generator_py/resource/_idl.py.em
# with input from raptor_dbw_msgs:msg/WiperFront.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_WiperFront(type):
    """Metaclass of message 'WiperFront'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'OFF': 0,
        'INTERVAL_1': 1,
        'INTERVAL_2': 2,
        'INTERVAL_3': 3,
        'INTERVAL_4': 4,
        'INTERVAL_5': 5,
        'INTERVAL_6': 6,
        'CONSTANT_LOW': 11,
        'CONSTANT_HIGH': 12,
        'WASH_BRIEF': 13,
        'WASH_CONTINUOUS': 14,
        'SNA': 15,
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
                'raptor_dbw_msgs.msg.WiperFront')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__wiper_front
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__wiper_front
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__wiper_front
            cls._TYPE_SUPPORT = module.type_support_msg__msg__wiper_front
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__wiper_front

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'OFF': cls.__constants['OFF'],
            'INTERVAL_1': cls.__constants['INTERVAL_1'],
            'INTERVAL_2': cls.__constants['INTERVAL_2'],
            'INTERVAL_3': cls.__constants['INTERVAL_3'],
            'INTERVAL_4': cls.__constants['INTERVAL_4'],
            'INTERVAL_5': cls.__constants['INTERVAL_5'],
            'INTERVAL_6': cls.__constants['INTERVAL_6'],
            'CONSTANT_LOW': cls.__constants['CONSTANT_LOW'],
            'CONSTANT_HIGH': cls.__constants['CONSTANT_HIGH'],
            'WASH_BRIEF': cls.__constants['WASH_BRIEF'],
            'WASH_CONTINUOUS': cls.__constants['WASH_CONTINUOUS'],
            'SNA': cls.__constants['SNA'],
        }

    @property
    def OFF(self):
        """Message constant 'OFF'."""
        return Metaclass_WiperFront.__constants['OFF']

    @property
    def INTERVAL_1(self):
        """Message constant 'INTERVAL_1'."""
        return Metaclass_WiperFront.__constants['INTERVAL_1']

    @property
    def INTERVAL_2(self):
        """Message constant 'INTERVAL_2'."""
        return Metaclass_WiperFront.__constants['INTERVAL_2']

    @property
    def INTERVAL_3(self):
        """Message constant 'INTERVAL_3'."""
        return Metaclass_WiperFront.__constants['INTERVAL_3']

    @property
    def INTERVAL_4(self):
        """Message constant 'INTERVAL_4'."""
        return Metaclass_WiperFront.__constants['INTERVAL_4']

    @property
    def INTERVAL_5(self):
        """Message constant 'INTERVAL_5'."""
        return Metaclass_WiperFront.__constants['INTERVAL_5']

    @property
    def INTERVAL_6(self):
        """Message constant 'INTERVAL_6'."""
        return Metaclass_WiperFront.__constants['INTERVAL_6']

    @property
    def CONSTANT_LOW(self):
        """Message constant 'CONSTANT_LOW'."""
        return Metaclass_WiperFront.__constants['CONSTANT_LOW']

    @property
    def CONSTANT_HIGH(self):
        """Message constant 'CONSTANT_HIGH'."""
        return Metaclass_WiperFront.__constants['CONSTANT_HIGH']

    @property
    def WASH_BRIEF(self):
        """Message constant 'WASH_BRIEF'."""
        return Metaclass_WiperFront.__constants['WASH_BRIEF']

    @property
    def WASH_CONTINUOUS(self):
        """Message constant 'WASH_CONTINUOUS'."""
        return Metaclass_WiperFront.__constants['WASH_CONTINUOUS']

    @property
    def SNA(self):
        """Message constant 'SNA'."""
        return Metaclass_WiperFront.__constants['SNA']


class WiperFront(metaclass=Metaclass_WiperFront):
    """
    Message class 'WiperFront'.

    Constants:
      OFF
      INTERVAL_1
      INTERVAL_2
      INTERVAL_3
      INTERVAL_4
      INTERVAL_5
      INTERVAL_6
      CONSTANT_LOW
      CONSTANT_HIGH
      WASH_BRIEF
      WASH_CONTINUOUS
      SNA
    """

    __slots__ = [
        '_status',
    ]

    _fields_and_field_types = {
        'status': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.status = kwargs.get('status', int())

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
        if self.status != other.status:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def status(self):
        """Message field 'status'."""
        return self._status

    @status.setter
    def status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'status' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'status' field must be an unsigned integer in [0, 255]"
        self._status = value
