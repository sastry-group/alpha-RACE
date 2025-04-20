# generated from rosidl_generator_py/resource/_idl.py.em
# with input from raptor_dbw_msgs:msg/Gear.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Gear(type):
    """Metaclass of message 'Gear'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'NONE': 0,
        'PARK': 1,
        'REVERSE': 2,
        'NEUTRAL': 3,
        'DRIVE': 4,
        'LOW': 5,
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
                'raptor_dbw_msgs.msg.Gear')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__gear
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__gear
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__gear
            cls._TYPE_SUPPORT = module.type_support_msg__msg__gear
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__gear

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'NONE': cls.__constants['NONE'],
            'PARK': cls.__constants['PARK'],
            'REVERSE': cls.__constants['REVERSE'],
            'NEUTRAL': cls.__constants['NEUTRAL'],
            'DRIVE': cls.__constants['DRIVE'],
            'LOW': cls.__constants['LOW'],
        }

    @property
    def NONE(self):
        """Message constant 'NONE'."""
        return Metaclass_Gear.__constants['NONE']

    @property
    def PARK(self):
        """Message constant 'PARK'."""
        return Metaclass_Gear.__constants['PARK']

    @property
    def REVERSE(self):
        """Message constant 'REVERSE'."""
        return Metaclass_Gear.__constants['REVERSE']

    @property
    def NEUTRAL(self):
        """Message constant 'NEUTRAL'."""
        return Metaclass_Gear.__constants['NEUTRAL']

    @property
    def DRIVE(self):
        """Message constant 'DRIVE'."""
        return Metaclass_Gear.__constants['DRIVE']

    @property
    def LOW(self):
        """Message constant 'LOW'."""
        return Metaclass_Gear.__constants['LOW']


class Gear(metaclass=Metaclass_Gear):
    """
    Message class 'Gear'.

    Constants:
      NONE
      PARK
      REVERSE
      NEUTRAL
      DRIVE
      LOW
    """

    __slots__ = [
        '_gear',
    ]

    _fields_and_field_types = {
        'gear': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.gear = kwargs.get('gear', int())

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
        if self.gear != other.gear:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def gear(self):
        """Message field 'gear'."""
        return self._gear

    @gear.setter
    def gear(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'gear' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'gear' field must be an unsigned integer in [0, 255]"
        self._gear = value
