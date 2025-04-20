# generated from rosidl_generator_py/resource/_idl.py.em
# with input from novatel_oem7_msgs:msg/INSOutputFrame.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_INSOutputFrame(type):
    """Metaclass of message 'INSOutputFrame'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'ROVER': 1,
        'MASTER': 2,
        'ECEF': 3,
        'LOCALEVEL': 4,
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
                'novatel_oem7_msgs.msg.INSOutputFrame')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__ins_output_frame
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__ins_output_frame
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__ins_output_frame
            cls._TYPE_SUPPORT = module.type_support_msg__msg__ins_output_frame
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__ins_output_frame

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'ROVER': cls.__constants['ROVER'],
            'MASTER': cls.__constants['MASTER'],
            'ECEF': cls.__constants['ECEF'],
            'LOCALEVEL': cls.__constants['LOCALEVEL'],
        }

    @property
    def ROVER(self):
        """Message constant 'ROVER'."""
        return Metaclass_INSOutputFrame.__constants['ROVER']

    @property
    def MASTER(self):
        """Message constant 'MASTER'."""
        return Metaclass_INSOutputFrame.__constants['MASTER']

    @property
    def ECEF(self):
        """Message constant 'ECEF'."""
        return Metaclass_INSOutputFrame.__constants['ECEF']

    @property
    def LOCALEVEL(self):
        """Message constant 'LOCALEVEL'."""
        return Metaclass_INSOutputFrame.__constants['LOCALEVEL']


class INSOutputFrame(metaclass=Metaclass_INSOutputFrame):
    """
    Message class 'INSOutputFrame'.

    Constants:
      ROVER
      MASTER
      ECEF
      LOCALEVEL
    """

    __slots__ = [
        '_frame',
    ]

    _fields_and_field_types = {
        'frame': 'uint32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.frame = kwargs.get('frame', int())

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
        if self.frame != other.frame:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def frame(self):
        """Message field 'frame'."""
        return self._frame

    @frame.setter
    def frame(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'frame' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'frame' field must be an unsigned integer in [0, 4294967295]"
        self._frame = value
