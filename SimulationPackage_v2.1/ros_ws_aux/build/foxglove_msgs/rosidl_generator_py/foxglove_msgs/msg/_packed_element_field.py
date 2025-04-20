# generated from rosidl_generator_py/resource/_idl.py.em
# with input from foxglove_msgs:msg/PackedElementField.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_PackedElementField(type):
    """Metaclass of message 'PackedElementField'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'UNKNOWN': 0,
        'UINT8': 1,
        'INT8': 2,
        'UINT16': 3,
        'INT16': 4,
        'UINT32': 5,
        'INT32': 6,
        'FLOAT32': 7,
        'FLOAT64': 8,
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('foxglove_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'foxglove_msgs.msg.PackedElementField')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__packed_element_field
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__packed_element_field
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__packed_element_field
            cls._TYPE_SUPPORT = module.type_support_msg__msg__packed_element_field
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__packed_element_field

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'UNKNOWN': cls.__constants['UNKNOWN'],
            'UINT8': cls.__constants['UINT8'],
            'INT8': cls.__constants['INT8'],
            'UINT16': cls.__constants['UINT16'],
            'INT16': cls.__constants['INT16'],
            'UINT32': cls.__constants['UINT32'],
            'INT32': cls.__constants['INT32'],
            'FLOAT32': cls.__constants['FLOAT32'],
            'FLOAT64': cls.__constants['FLOAT64'],
        }

    @property
    def UNKNOWN(self):
        """Message constant 'UNKNOWN'."""
        return Metaclass_PackedElementField.__constants['UNKNOWN']

    @property
    def UINT8(self):
        """Message constant 'UINT8'."""
        return Metaclass_PackedElementField.__constants['UINT8']

    @property
    def INT8(self):
        """Message constant 'INT8'."""
        return Metaclass_PackedElementField.__constants['INT8']

    @property
    def UINT16(self):
        """Message constant 'UINT16'."""
        return Metaclass_PackedElementField.__constants['UINT16']

    @property
    def INT16(self):
        """Message constant 'INT16'."""
        return Metaclass_PackedElementField.__constants['INT16']

    @property
    def UINT32(self):
        """Message constant 'UINT32'."""
        return Metaclass_PackedElementField.__constants['UINT32']

    @property
    def INT32(self):
        """Message constant 'INT32'."""
        return Metaclass_PackedElementField.__constants['INT32']

    @property
    def FLOAT32(self):
        """Message constant 'FLOAT32'."""
        return Metaclass_PackedElementField.__constants['FLOAT32']

    @property
    def FLOAT64(self):
        """Message constant 'FLOAT64'."""
        return Metaclass_PackedElementField.__constants['FLOAT64']


class PackedElementField(metaclass=Metaclass_PackedElementField):
    """
    Message class 'PackedElementField'.

    Constants:
      UNKNOWN
      UINT8
      INT8
      UINT16
      INT16
      UINT32
      INT32
      FLOAT32
      FLOAT64
    """

    __slots__ = [
        '_name',
        '_offset',
        '_type',
    ]

    _fields_and_field_types = {
        'name': 'string',
        'offset': 'uint32',
        'type': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.name = kwargs.get('name', str())
        self.offset = kwargs.get('offset', int())
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
        if self.name != other.name:
            return False
        if self.offset != other.offset:
            return False
        if self.type != other.type:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def name(self):
        """Message field 'name'."""
        return self._name

    @name.setter
    def name(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'name' field must be of type 'str'"
        self._name = value

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
            assert value >= 0 and value < 256, \
                "The 'type' field must be an unsigned integer in [0, 255]"
        self._type = value
