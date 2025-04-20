# generated from rosidl_generator_py/resource/_idl.py.em
# with input from raptor_dbw_msgs:msg/WatchdogStatus.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_WatchdogStatus(type):
    """Metaclass of message 'WatchdogStatus'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'NONE': 0,
        'OTHER_BRAKE': 1,
        'OTHER_ACCELERATOR_PEDAL': 2,
        'OTHER_STEERING': 3,
        'BRAKE_COUNTER': 4,
        'BRAKE_DISABLED': 5,
        'BRAKE_COMMAND': 6,
        'BRAKE_REPORT': 7,
        'ACCELERATOR_PEDAL_COUNTER': 8,
        'ACCELERATOR_PEDAL_DISABLED': 9,
        'ACCELERATOR_PEDAL_COMMAND': 10,
        'ACCELERATOR_PEDAL_REPORT': 11,
        'STEERING_COUNTER': 12,
        'STEERING_DISABLED': 13,
        'STEERING_COMMAND': 14,
        'STEERING_REPORT': 15,
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
                'raptor_dbw_msgs.msg.WatchdogStatus')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__watchdog_status
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__watchdog_status
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__watchdog_status
            cls._TYPE_SUPPORT = module.type_support_msg__msg__watchdog_status
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__watchdog_status

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'NONE': cls.__constants['NONE'],
            'OTHER_BRAKE': cls.__constants['OTHER_BRAKE'],
            'OTHER_ACCELERATOR_PEDAL': cls.__constants['OTHER_ACCELERATOR_PEDAL'],
            'OTHER_STEERING': cls.__constants['OTHER_STEERING'],
            'BRAKE_COUNTER': cls.__constants['BRAKE_COUNTER'],
            'BRAKE_DISABLED': cls.__constants['BRAKE_DISABLED'],
            'BRAKE_COMMAND': cls.__constants['BRAKE_COMMAND'],
            'BRAKE_REPORT': cls.__constants['BRAKE_REPORT'],
            'ACCELERATOR_PEDAL_COUNTER': cls.__constants['ACCELERATOR_PEDAL_COUNTER'],
            'ACCELERATOR_PEDAL_DISABLED': cls.__constants['ACCELERATOR_PEDAL_DISABLED'],
            'ACCELERATOR_PEDAL_COMMAND': cls.__constants['ACCELERATOR_PEDAL_COMMAND'],
            'ACCELERATOR_PEDAL_REPORT': cls.__constants['ACCELERATOR_PEDAL_REPORT'],
            'STEERING_COUNTER': cls.__constants['STEERING_COUNTER'],
            'STEERING_DISABLED': cls.__constants['STEERING_DISABLED'],
            'STEERING_COMMAND': cls.__constants['STEERING_COMMAND'],
            'STEERING_REPORT': cls.__constants['STEERING_REPORT'],
        }

    @property
    def NONE(self):
        """Message constant 'NONE'."""
        return Metaclass_WatchdogStatus.__constants['NONE']

    @property
    def OTHER_BRAKE(self):
        """Message constant 'OTHER_BRAKE'."""
        return Metaclass_WatchdogStatus.__constants['OTHER_BRAKE']

    @property
    def OTHER_ACCELERATOR_PEDAL(self):
        """Message constant 'OTHER_ACCELERATOR_PEDAL'."""
        return Metaclass_WatchdogStatus.__constants['OTHER_ACCELERATOR_PEDAL']

    @property
    def OTHER_STEERING(self):
        """Message constant 'OTHER_STEERING'."""
        return Metaclass_WatchdogStatus.__constants['OTHER_STEERING']

    @property
    def BRAKE_COUNTER(self):
        """Message constant 'BRAKE_COUNTER'."""
        return Metaclass_WatchdogStatus.__constants['BRAKE_COUNTER']

    @property
    def BRAKE_DISABLED(self):
        """Message constant 'BRAKE_DISABLED'."""
        return Metaclass_WatchdogStatus.__constants['BRAKE_DISABLED']

    @property
    def BRAKE_COMMAND(self):
        """Message constant 'BRAKE_COMMAND'."""
        return Metaclass_WatchdogStatus.__constants['BRAKE_COMMAND']

    @property
    def BRAKE_REPORT(self):
        """Message constant 'BRAKE_REPORT'."""
        return Metaclass_WatchdogStatus.__constants['BRAKE_REPORT']

    @property
    def ACCELERATOR_PEDAL_COUNTER(self):
        """Message constant 'ACCELERATOR_PEDAL_COUNTER'."""
        return Metaclass_WatchdogStatus.__constants['ACCELERATOR_PEDAL_COUNTER']

    @property
    def ACCELERATOR_PEDAL_DISABLED(self):
        """Message constant 'ACCELERATOR_PEDAL_DISABLED'."""
        return Metaclass_WatchdogStatus.__constants['ACCELERATOR_PEDAL_DISABLED']

    @property
    def ACCELERATOR_PEDAL_COMMAND(self):
        """Message constant 'ACCELERATOR_PEDAL_COMMAND'."""
        return Metaclass_WatchdogStatus.__constants['ACCELERATOR_PEDAL_COMMAND']

    @property
    def ACCELERATOR_PEDAL_REPORT(self):
        """Message constant 'ACCELERATOR_PEDAL_REPORT'."""
        return Metaclass_WatchdogStatus.__constants['ACCELERATOR_PEDAL_REPORT']

    @property
    def STEERING_COUNTER(self):
        """Message constant 'STEERING_COUNTER'."""
        return Metaclass_WatchdogStatus.__constants['STEERING_COUNTER']

    @property
    def STEERING_DISABLED(self):
        """Message constant 'STEERING_DISABLED'."""
        return Metaclass_WatchdogStatus.__constants['STEERING_DISABLED']

    @property
    def STEERING_COMMAND(self):
        """Message constant 'STEERING_COMMAND'."""
        return Metaclass_WatchdogStatus.__constants['STEERING_COMMAND']

    @property
    def STEERING_REPORT(self):
        """Message constant 'STEERING_REPORT'."""
        return Metaclass_WatchdogStatus.__constants['STEERING_REPORT']


class WatchdogStatus(metaclass=Metaclass_WatchdogStatus):
    """
    Message class 'WatchdogStatus'.

    Constants:
      NONE
      OTHER_BRAKE
      OTHER_ACCELERATOR_PEDAL
      OTHER_STEERING
      BRAKE_COUNTER
      BRAKE_DISABLED
      BRAKE_COMMAND
      BRAKE_REPORT
      ACCELERATOR_PEDAL_COUNTER
      ACCELERATOR_PEDAL_DISABLED
      ACCELERATOR_PEDAL_COMMAND
      ACCELERATOR_PEDAL_REPORT
      STEERING_COUNTER
      STEERING_DISABLED
      STEERING_COMMAND
      STEERING_REPORT
    """

    __slots__ = [
        '_header',
        '_source',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'source': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
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
        if self.header != other.header:
            return False
        if self.source != other.source:
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
