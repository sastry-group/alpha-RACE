# generated from rosidl_generator_py/resource/_idl.py.em
# with input from novatel_oem7_msgs:msg/TranslationOffset.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_TranslationOffset(type):
    """Metaclass of message 'TranslationOffset'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'ANT1': 1,
        'ANT2': 2,
        'EXTERNAL': 3,
        'USER': 4,
        'MARK1': 5,
        'MARK2': 6,
        'GIMBAL': 7,
        'MARK3': 9,
        'MARK4': 10,
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('novatel_oem7_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'novatel_oem7_msgs.msg.TranslationOffset')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__translation_offset
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__translation_offset
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__translation_offset
            cls._TYPE_SUPPORT = module.type_support_msg__msg__translation_offset
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__translation_offset

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'ANT1': cls.__constants['ANT1'],
            'ANT2': cls.__constants['ANT2'],
            'EXTERNAL': cls.__constants['EXTERNAL'],
            'USER': cls.__constants['USER'],
            'MARK1': cls.__constants['MARK1'],
            'MARK2': cls.__constants['MARK2'],
            'GIMBAL': cls.__constants['GIMBAL'],
            'MARK3': cls.__constants['MARK3'],
            'MARK4': cls.__constants['MARK4'],
        }

    @property
    def ANT1(self):
        """Message constant 'ANT1'."""
        return Metaclass_TranslationOffset.__constants['ANT1']

    @property
    def ANT2(self):
        """Message constant 'ANT2'."""
        return Metaclass_TranslationOffset.__constants['ANT2']

    @property
    def EXTERNAL(self):
        """Message constant 'EXTERNAL'."""
        return Metaclass_TranslationOffset.__constants['EXTERNAL']

    @property
    def USER(self):
        """Message constant 'USER'."""
        return Metaclass_TranslationOffset.__constants['USER']

    @property
    def MARK1(self):
        """Message constant 'MARK1'."""
        return Metaclass_TranslationOffset.__constants['MARK1']

    @property
    def MARK2(self):
        """Message constant 'MARK2'."""
        return Metaclass_TranslationOffset.__constants['MARK2']

    @property
    def GIMBAL(self):
        """Message constant 'GIMBAL'."""
        return Metaclass_TranslationOffset.__constants['GIMBAL']

    @property
    def MARK3(self):
        """Message constant 'MARK3'."""
        return Metaclass_TranslationOffset.__constants['MARK3']

    @property
    def MARK4(self):
        """Message constant 'MARK4'."""
        return Metaclass_TranslationOffset.__constants['MARK4']


class TranslationOffset(metaclass=Metaclass_TranslationOffset):
    """
    Message class 'TranslationOffset'.

    Constants:
      ANT1
      ANT2
      EXTERNAL
      USER
      MARK1
      MARK2
      GIMBAL
      MARK3
      MARK4
    """

    __slots__ = [
        '_type',
    ]

    _fields_and_field_types = {
        'type': 'uint32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.type = kwargs.get('type', int())

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
        if self.type != other.type:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property  # noqa: A003
    def type(self):  # noqa: A003
        """Message field 'type'."""
        return self._type

    @type.setter  # noqa: A003
    def type(self, value):  # noqa: A003
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'type' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'type' field must be an unsigned integer in [0, 4294967295]"
        self._type = value
