# generated from rosidl_generator_py/resource/_idl.py.em
# with input from novatel_oem7_msgs:msg/SolutionSource.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SolutionSource(type):
    """Metaclass of message 'SolutionSource'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'RESERVED1': 3,
        'SOURCE_ANTENNA_MASK': 12,
        'PRIMARY_ANTENNA': 0,
        'SECONDARY_ANTENNA': 0,
        'RESERVED2': 240,
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
                'novatel_oem7_msgs.msg.SolutionSource')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__solution_source
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__solution_source
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__solution_source
            cls._TYPE_SUPPORT = module.type_support_msg__msg__solution_source
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__solution_source

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'RESERVED1': cls.__constants['RESERVED1'],
            'SOURCE_ANTENNA_MASK': cls.__constants['SOURCE_ANTENNA_MASK'],
            'PRIMARY_ANTENNA': cls.__constants['PRIMARY_ANTENNA'],
            'SECONDARY_ANTENNA': cls.__constants['SECONDARY_ANTENNA'],
            'RESERVED2': cls.__constants['RESERVED2'],
        }

    @property
    def RESERVED1(self):
        """Message constant 'RESERVED1'."""
        return Metaclass_SolutionSource.__constants['RESERVED1']

    @property
    def SOURCE_ANTENNA_MASK(self):
        """Message constant 'SOURCE_ANTENNA_MASK'."""
        return Metaclass_SolutionSource.__constants['SOURCE_ANTENNA_MASK']

    @property
    def PRIMARY_ANTENNA(self):
        """Message constant 'PRIMARY_ANTENNA'."""
        return Metaclass_SolutionSource.__constants['PRIMARY_ANTENNA']

    @property
    def SECONDARY_ANTENNA(self):
        """Message constant 'SECONDARY_ANTENNA'."""
        return Metaclass_SolutionSource.__constants['SECONDARY_ANTENNA']

    @property
    def RESERVED2(self):
        """Message constant 'RESERVED2'."""
        return Metaclass_SolutionSource.__constants['RESERVED2']


class SolutionSource(metaclass=Metaclass_SolutionSource):
    """
    Message class 'SolutionSource'.

    Constants:
      RESERVED1
      SOURCE_ANTENNA_MASK
      PRIMARY_ANTENNA
      SECONDARY_ANTENNA
      RESERVED2
    """

    __slots__ = [
        '_source',
    ]

    _fields_and_field_types = {
        'source': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.source = kwargs.get('source', int())

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
        if self.source != other.source:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def source(self):
        """Message field 'source'."""
        return self._source

    @source.setter
    def source(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'source' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'source' field must be an unsigned integer in [0, 255]"
        self._source = value
