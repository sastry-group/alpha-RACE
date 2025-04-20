# generated from rosidl_generator_py/resource/_idl.py.em
# with input from novatel_oem7_msgs:msg/RotationalOffset.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_RotationalOffset(type):
    """Metaclass of message 'RotationalOffset'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'USER': 4,
        'MARK1': 5,
        'MARK2': 6,
        'ALIGN': 8,
        'MARK3': 9,
        'MARK4': 10,
        'RBV': 11,
        'RBM': 12,
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
                'novatel_oem7_msgs.msg.RotationalOffset')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__rotational_offset
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__rotational_offset
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__rotational_offset
            cls._TYPE_SUPPORT = module.type_support_msg__msg__rotational_offset
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__rotational_offset

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'USER': cls.__constants['USER'],
            'MARK1': cls.__constants['MARK1'],
            'MARK2': cls.__constants['MARK2'],
            'ALIGN': cls.__constants['ALIGN'],
            'MARK3': cls.__constants['MARK3'],
            'MARK4': cls.__constants['MARK4'],
            'RBV': cls.__constants['RBV'],
            'RBM': cls.__constants['RBM'],
        }

    @property
    def USER(self):
        """Message constant 'USER'."""
        return Metaclass_RotationalOffset.__constants['USER']

    @property
    def MARK1(self):
        """Message constant 'MARK1'."""
        return Metaclass_RotationalOffset.__constants['MARK1']

    @property
    def MARK2(self):
        """Message constant 'MARK2'."""
        return Metaclass_RotationalOffset.__constants['MARK2']

    @property
    def ALIGN(self):
        """Message constant 'ALIGN'."""
        return Metaclass_RotationalOffset.__constants['ALIGN']

    @property
    def MARK3(self):
        """Message constant 'MARK3'."""
        return Metaclass_RotationalOffset.__constants['MARK3']

    @property
    def MARK4(self):
        """Message constant 'MARK4'."""
        return Metaclass_RotationalOffset.__constants['MARK4']

    @property
    def RBV(self):
        """Message constant 'RBV'."""
        return Metaclass_RotationalOffset.__constants['RBV']

    @property
    def RBM(self):
        """Message constant 'RBM'."""
        return Metaclass_RotationalOffset.__constants['RBM']


class RotationalOffset(metaclass=Metaclass_RotationalOffset):
    """
    Message class 'RotationalOffset'.

    Constants:
      USER
      MARK1
      MARK2
      ALIGN
      MARK3
      MARK4
      RBV
      RBM
    """

    __slots__ = [
        '_offset',
    ]

    _fields_and_field_types = {
        'offset': 'uint32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.offset = kwargs.get('offset', int())

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
        if self.offset != other.offset:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def offset(self):
        """Message field 'offset'."""
        return self._offset

    @offset.setter
    def offset(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'offset' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'offset' field must be an unsigned integer in [0, 4294967295]"
        self._offset = value
