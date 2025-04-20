# generated from rosidl_generator_py/resource/_idl.py.em
# with input from novatel_oem7_msgs:msg/INSAlignmentMode.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_INSAlignmentMode(type):
    """Metaclass of message 'INSAlignmentMode'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'UNAIDED': 0,
        'AIDED_TRANSFER': 2,
        'AUTOMATIC': 3,
        'STATIC': 4,
        'KINEMATIC': 5,
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
                'novatel_oem7_msgs.msg.INSAlignmentMode')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__ins_alignment_mode
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__ins_alignment_mode
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__ins_alignment_mode
            cls._TYPE_SUPPORT = module.type_support_msg__msg__ins_alignment_mode
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__ins_alignment_mode

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'UNAIDED': cls.__constants['UNAIDED'],
            'AIDED_TRANSFER': cls.__constants['AIDED_TRANSFER'],
            'AUTOMATIC': cls.__constants['AUTOMATIC'],
            'STATIC': cls.__constants['STATIC'],
            'KINEMATIC': cls.__constants['KINEMATIC'],
        }

    @property
    def UNAIDED(self):
        """Message constant 'UNAIDED'."""
        return Metaclass_INSAlignmentMode.__constants['UNAIDED']

    @property
    def AIDED_TRANSFER(self):
        """Message constant 'AIDED_TRANSFER'."""
        return Metaclass_INSAlignmentMode.__constants['AIDED_TRANSFER']

    @property
    def AUTOMATIC(self):
        """Message constant 'AUTOMATIC'."""
        return Metaclass_INSAlignmentMode.__constants['AUTOMATIC']

    @property
    def STATIC(self):
        """Message constant 'STATIC'."""
        return Metaclass_INSAlignmentMode.__constants['STATIC']

    @property
    def KINEMATIC(self):
        """Message constant 'KINEMATIC'."""
        return Metaclass_INSAlignmentMode.__constants['KINEMATIC']


class INSAlignmentMode(metaclass=Metaclass_INSAlignmentMode):
    """
    Message class 'INSAlignmentMode'.

    Constants:
      UNAIDED
      AIDED_TRANSFER
      AUTOMATIC
      STATIC
      KINEMATIC
    """

    __slots__ = [
        '_mode',
    ]

    _fields_and_field_types = {
        'mode': 'uint32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.mode = kwargs.get('mode', int())

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
        if self.mode != other.mode:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def mode(self):
        """Message field 'mode'."""
        return self._mode

    @mode.setter
    def mode(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'mode' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'mode' field must be an unsigned integer in [0, 4294967295]"
        self._mode = value
