# generated from rosidl_generator_py/resource/_idl.py.em
# with input from can_msgs:msg/Frame.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

# Member 'data'
import numpy  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Frame(type):
    """Metaclass of message 'Frame'."""

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
            module = import_type_support('can_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'can_msgs.msg.Frame')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__frame
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__frame
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__frame
            cls._TYPE_SUPPORT = module.type_support_msg__msg__frame
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__frame

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


class Frame(metaclass=Metaclass_Frame):
    """Message class 'Frame'."""

    __slots__ = [
        '_header',
        '_id',
        '_is_rtr',
        '_is_extended',
        '_is_error',
        '_dlc',
        '_data',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'id': 'uint32',
        'is_rtr': 'boolean',
        'is_extended': 'boolean',
        'is_error': 'boolean',
        'dlc': 'uint8',
        'data': 'uint8[8]',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('uint8'), 8),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.id = kwargs.get('id', int())
        self.is_rtr = kwargs.get('is_rtr', bool())
        self.is_extended = kwargs.get('is_extended', bool())
        self.is_error = kwargs.get('is_error', bool())
        self.dlc = kwargs.get('dlc', int())
        if 'data' not in kwargs:
            self.data = numpy.zeros(8, dtype=numpy.uint8)
        else:
            self.data = numpy.array(kwargs.get('data'), dtype=numpy.uint8)
            assert self.data.shape == (8, )

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
        if self.id != other.id:
            return False
        if self.is_rtr != other.is_rtr:
            return False
        if self.is_extended != other.is_extended:
            return False
        if self.is_error != other.is_error:
            return False
        if self.dlc != other.dlc:
            return False
        if all(self.data != other.data):
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

    @builtins.property  # noqa: A003
    def id(self):  # noqa: A003
        """Message field 'id'."""
        return self._id

    @id.setter  # noqa: A003
    def id(self, value):  # noqa: A003
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'id' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'id' field must be an unsigned integer in [0, 4294967295]"
        self._id = value

    @builtins.property
    def is_rtr(self):
        """Message field 'is_rtr'."""
        return self._is_rtr

    @is_rtr.setter
    def is_rtr(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'is_rtr' field must be of type 'bool'"
        self._is_rtr = value

    @builtins.property
    def is_extended(self):
        """Message field 'is_extended'."""
        return self._is_extended

    @is_extended.setter
    def is_extended(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'is_extended' field must be of type 'bool'"
        self._is_extended = value

    @builtins.property
    def is_error(self):
        """Message field 'is_error'."""
        return self._is_error

    @is_error.setter
    def is_error(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'is_error' field must be of type 'bool'"
        self._is_error = value

    @builtins.property
    def dlc(self):
        """Message field 'dlc'."""
        return self._dlc

    @dlc.setter
    def dlc(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'dlc' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'dlc' field must be an unsigned integer in [0, 255]"
        self._dlc = value

    @builtins.property
    def data(self):
        """Message field 'data'."""
        return self._data

    @data.setter
    def data(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.uint8, \
                "The 'data' numpy.ndarray() must have the dtype of 'numpy.uint8'"
            assert value.size == 8, \
                "The 'data' numpy.ndarray() must have a size of 8"
            self._data = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 8 and
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 256 for val in value)), \
                "The 'data' field must be a set or sequence with length 8 and each value of type 'int' and each unsigned integer in [0, 255]"
        self._data = numpy.array(value, dtype=numpy.uint8)
