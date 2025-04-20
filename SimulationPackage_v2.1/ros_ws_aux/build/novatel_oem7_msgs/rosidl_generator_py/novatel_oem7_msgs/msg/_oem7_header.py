# generated from rosidl_generator_py/resource/_idl.py.em
# with input from novatel_oem7_msgs:msg/Oem7Header.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Oem7Header(type):
    """Metaclass of message 'Oem7Header'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'OEM7MSGTYPE_LOG': 0,
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
                'novatel_oem7_msgs.msg.Oem7Header')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__oem7_header
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__oem7_header
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__oem7_header
            cls._TYPE_SUPPORT = module.type_support_msg__msg__oem7_header
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__oem7_header

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'OEM7MSGTYPE_LOG': cls.__constants['OEM7MSGTYPE_LOG'],
        }

    @property
    def OEM7MSGTYPE_LOG(self):
        """Message constant 'OEM7MSGTYPE_LOG'."""
        return Metaclass_Oem7Header.__constants['OEM7MSGTYPE_LOG']


class Oem7Header(metaclass=Metaclass_Oem7Header):
    """
    Message class 'Oem7Header'.

    Constants:
      OEM7MSGTYPE_LOG
    """

    __slots__ = [
        '_message_name',
        '_message_id',
        '_message_type',
        '_sequence_number',
        '_time_status',
        '_gps_week_number',
        '_gps_week_milliseconds',
        '_idle_time',
    ]

    _fields_and_field_types = {
        'message_name': 'string',
        'message_id': 'uint16',
        'message_type': 'uint8',
        'sequence_number': 'uint32',
        'time_status': 'uint8',
        'gps_week_number': 'uint16',
        'gps_week_milliseconds': 'uint32',
        'idle_time': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.message_name = kwargs.get('message_name', str())
        self.message_id = kwargs.get('message_id', int())
        self.message_type = kwargs.get('message_type', int())
        self.sequence_number = kwargs.get('sequence_number', int())
        self.time_status = kwargs.get('time_status', int())
        self.gps_week_number = kwargs.get('gps_week_number', int())
        self.gps_week_milliseconds = kwargs.get('gps_week_milliseconds', int())
        self.idle_time = kwargs.get('idle_time', int())

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
        if self.message_name != other.message_name:
            return False
        if self.message_id != other.message_id:
            return False
        if self.message_type != other.message_type:
            return False
        if self.sequence_number != other.sequence_number:
            return False
        if self.time_status != other.time_status:
            return False
        if self.gps_week_number != other.gps_week_number:
            return False
        if self.gps_week_milliseconds != other.gps_week_milliseconds:
            return False
        if self.idle_time != other.idle_time:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def message_name(self):
        """Message field 'message_name'."""
        return self._message_name

    @message_name.setter
    def message_name(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'message_name' field must be of type 'str'"
        self._message_name = value

    @builtins.property
    def message_id(self):
        """Message field 'message_id'."""
        return self._message_id

    @message_id.setter
    def message_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'message_id' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'message_id' field must be an unsigned integer in [0, 65535]"
        self._message_id = value

    @builtins.property
    def message_type(self):
        """Message field 'message_type'."""
        return self._message_type

    @message_type.setter
    def message_type(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'message_type' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'message_type' field must be an unsigned integer in [0, 255]"
        self._message_type = value

    @builtins.property
    def sequence_number(self):
        """Message field 'sequence_number'."""
        return self._sequence_number

    @sequence_number.setter
    def sequence_number(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'sequence_number' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'sequence_number' field must be an unsigned integer in [0, 4294967295]"
        self._sequence_number = value

    @builtins.property
    def time_status(self):
        """Message field 'time_status'."""
        return self._time_status

    @time_status.setter
    def time_status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'time_status' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'time_status' field must be an unsigned integer in [0, 255]"
        self._time_status = value

    @builtins.property
    def gps_week_number(self):
        """Message field 'gps_week_number'."""
        return self._gps_week_number

    @gps_week_number.setter
    def gps_week_number(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'gps_week_number' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'gps_week_number' field must be an unsigned integer in [0, 65535]"
        self._gps_week_number = value

    @builtins.property
    def gps_week_milliseconds(self):
        """Message field 'gps_week_milliseconds'."""
        return self._gps_week_milliseconds

    @gps_week_milliseconds.setter
    def gps_week_milliseconds(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'gps_week_milliseconds' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'gps_week_milliseconds' field must be an unsigned integer in [0, 4294967295]"
        self._gps_week_milliseconds = value

    @builtins.property
    def idle_time(self):
        """Message field 'idle_time'."""
        return self._idle_time

    @idle_time.setter
    def idle_time(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'idle_time' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'idle_time' field must be an unsigned integer in [0, 255]"
        self._idle_time = value
