# generated from rosidl_generator_py/resource/_idl.py.em
# with input from novatel_oem7_msgs:msg/INSSourceStatus.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_INSSourceStatus(type):
    """Metaclass of message 'INSSourceStatus'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'FROM_NVM': 1,
        'CALIBRATING': 2,
        'CALIBRATED': 3,
        'FROM_COMMAND': 4,
        'RESET': 5,
        'FROM_DUAL_ANT': 6,
        'INS_CONVERSING': 7,
        'INSUFFICIENT_SPEED': 8,
        'HIGH_ROTATION': 9,
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
                'novatel_oem7_msgs.msg.INSSourceStatus')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__ins_source_status
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__ins_source_status
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__ins_source_status
            cls._TYPE_SUPPORT = module.type_support_msg__msg__ins_source_status
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__ins_source_status

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'FROM_NVM': cls.__constants['FROM_NVM'],
            'CALIBRATING': cls.__constants['CALIBRATING'],
            'CALIBRATED': cls.__constants['CALIBRATED'],
            'FROM_COMMAND': cls.__constants['FROM_COMMAND'],
            'RESET': cls.__constants['RESET'],
            'FROM_DUAL_ANT': cls.__constants['FROM_DUAL_ANT'],
            'INS_CONVERSING': cls.__constants['INS_CONVERSING'],
            'INSUFFICIENT_SPEED': cls.__constants['INSUFFICIENT_SPEED'],
            'HIGH_ROTATION': cls.__constants['HIGH_ROTATION'],
        }

    @property
    def FROM_NVM(self):
        """Message constant 'FROM_NVM'."""
        return Metaclass_INSSourceStatus.__constants['FROM_NVM']

    @property
    def CALIBRATING(self):
        """Message constant 'CALIBRATING'."""
        return Metaclass_INSSourceStatus.__constants['CALIBRATING']

    @property
    def CALIBRATED(self):
        """Message constant 'CALIBRATED'."""
        return Metaclass_INSSourceStatus.__constants['CALIBRATED']

    @property
    def FROM_COMMAND(self):
        """Message constant 'FROM_COMMAND'."""
        return Metaclass_INSSourceStatus.__constants['FROM_COMMAND']

    @property
    def RESET(self):
        """Message constant 'RESET'."""
        return Metaclass_INSSourceStatus.__constants['RESET']

    @property
    def FROM_DUAL_ANT(self):
        """Message constant 'FROM_DUAL_ANT'."""
        return Metaclass_INSSourceStatus.__constants['FROM_DUAL_ANT']

    @property
    def INS_CONVERSING(self):
        """Message constant 'INS_CONVERSING'."""
        return Metaclass_INSSourceStatus.__constants['INS_CONVERSING']

    @property
    def INSUFFICIENT_SPEED(self):
        """Message constant 'INSUFFICIENT_SPEED'."""
        return Metaclass_INSSourceStatus.__constants['INSUFFICIENT_SPEED']

    @property
    def HIGH_ROTATION(self):
        """Message constant 'HIGH_ROTATION'."""
        return Metaclass_INSSourceStatus.__constants['HIGH_ROTATION']


class INSSourceStatus(metaclass=Metaclass_INSSourceStatus):
    """
    Message class 'INSSourceStatus'.

    Constants:
      FROM_NVM
      CALIBRATING
      CALIBRATED
      FROM_COMMAND
      RESET
      FROM_DUAL_ANT
      INS_CONVERSING
      INSUFFICIENT_SPEED
      HIGH_ROTATION
    """

    __slots__ = [
        '_status',
    ]

    _fields_and_field_types = {
        'status': 'uint32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
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
            assert value >= 0 and value < 4294967296, \
                "The 'status' field must be an unsigned integer in [0, 4294967295]"
        self._status = value
