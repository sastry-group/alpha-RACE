# generated from rosidl_generator_py/resource/_idl.py.em
# with input from novatel_oem7_msgs:msg/RXSTATUS.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'error_bits'
# Member 'rxstat_bits'
# Member 'aux1_stat_bits'
# Member 'aux2_stat_bits'
# Member 'aux3_stat_bits'
# Member 'aux4_stat_bits'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_RXSTATUS(type):
    """Metaclass of message 'RXSTATUS'."""

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
            module = import_type_support('novatel_oem7_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'novatel_oem7_msgs.msg.RXSTATUS')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__rxstatus
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__rxstatus
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__rxstatus
            cls._TYPE_SUPPORT = module.type_support_msg__msg__rxstatus
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__rxstatus

            from novatel_oem7_msgs.msg import Oem7Header
            if Oem7Header.__class__._TYPE_SUPPORT is None:
                Oem7Header.__class__.__import_type_support__()

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


class RXSTATUS(metaclass=Metaclass_RXSTATUS):
    """Message class 'RXSTATUS'."""

    __slots__ = [
        '_header',
        '_nov_header',
        '_error',
        '_num_status_codes',
        '_rxstat',
        '_rxstat_pri_mask',
        '_rxstat_set_mask',
        '_rxstat_clr_mask',
        '_aux1_stat',
        '_aux1_stat_pri',
        '_aux1_stat_set',
        '_aux1_stat_clr',
        '_aux2_stat',
        '_aux2_stat_pri',
        '_aux2_stat_set',
        '_aux2_stat_clr',
        '_aux3_stat',
        '_aux3_stat_pri',
        '_aux3_stat_set',
        '_aux3_stat_clr',
        '_aux4_stat',
        '_aux4_stat_pri',
        '_aux4_stat_set',
        '_aux4_stat_clr',
        '_error_bits',
        '_error_strs',
        '_rxstat_bits',
        '_rxstat_strs',
        '_aux1_stat_bits',
        '_aux1_stat_strs',
        '_aux2_stat_bits',
        '_aux2_stat_strs',
        '_aux3_stat_bits',
        '_aux3_stat_strs',
        '_aux4_stat_bits',
        '_aux4_stat_strs',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'nov_header': 'novatel_oem7_msgs/Oem7Header',
        'error': 'uint32',
        'num_status_codes': 'uint32',
        'rxstat': 'uint32',
        'rxstat_pri_mask': 'uint32',
        'rxstat_set_mask': 'uint32',
        'rxstat_clr_mask': 'uint32',
        'aux1_stat': 'uint32',
        'aux1_stat_pri': 'uint32',
        'aux1_stat_set': 'uint32',
        'aux1_stat_clr': 'uint32',
        'aux2_stat': 'uint32',
        'aux2_stat_pri': 'uint32',
        'aux2_stat_set': 'uint32',
        'aux2_stat_clr': 'uint32',
        'aux3_stat': 'uint32',
        'aux3_stat_pri': 'uint32',
        'aux3_stat_set': 'uint32',
        'aux3_stat_clr': 'uint32',
        'aux4_stat': 'uint32',
        'aux4_stat_pri': 'uint32',
        'aux4_stat_set': 'uint32',
        'aux4_stat_clr': 'uint32',
        'error_bits': 'sequence<uint8, 32>',
        'error_strs': 'sequence<string<256>, 32>',
        'rxstat_bits': 'sequence<uint8, 32>',
        'rxstat_strs': 'sequence<string<256>, 32>',
        'aux1_stat_bits': 'sequence<uint8, 32>',
        'aux1_stat_strs': 'sequence<string<256>, 32>',
        'aux2_stat_bits': 'sequence<uint8, 32>',
        'aux2_stat_strs': 'sequence<string<256>, 32>',
        'aux3_stat_bits': 'sequence<uint8, 32>',
        'aux3_stat_strs': 'sequence<string<256>, 32>',
        'aux4_stat_bits': 'sequence<uint8, 32>',
        'aux4_stat_strs': 'sequence<string<256>, 32>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['novatel_oem7_msgs', 'msg'], 'Oem7Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BoundedSequence(rosidl_parser.definition.BasicType('uint8'), 32),  # noqa: E501
        rosidl_parser.definition.BoundedSequence(rosidl_parser.definition.BoundedString(256), 32),  # noqa: E501
        rosidl_parser.definition.BoundedSequence(rosidl_parser.definition.BasicType('uint8'), 32),  # noqa: E501
        rosidl_parser.definition.BoundedSequence(rosidl_parser.definition.BoundedString(256), 32),  # noqa: E501
        rosidl_parser.definition.BoundedSequence(rosidl_parser.definition.BasicType('uint8'), 32),  # noqa: E501
        rosidl_parser.definition.BoundedSequence(rosidl_parser.definition.BoundedString(256), 32),  # noqa: E501
        rosidl_parser.definition.BoundedSequence(rosidl_parser.definition.BasicType('uint8'), 32),  # noqa: E501
        rosidl_parser.definition.BoundedSequence(rosidl_parser.definition.BoundedString(256), 32),  # noqa: E501
        rosidl_parser.definition.BoundedSequence(rosidl_parser.definition.BasicType('uint8'), 32),  # noqa: E501
        rosidl_parser.definition.BoundedSequence(rosidl_parser.definition.BoundedString(256), 32),  # noqa: E501
        rosidl_parser.definition.BoundedSequence(rosidl_parser.definition.BasicType('uint8'), 32),  # noqa: E501
        rosidl_parser.definition.BoundedSequence(rosidl_parser.definition.BoundedString(256), 32),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        from novatel_oem7_msgs.msg import Oem7Header
        self.nov_header = kwargs.get('nov_header', Oem7Header())
        self.error = kwargs.get('error', int())
        self.num_status_codes = kwargs.get('num_status_codes', int())
        self.rxstat = kwargs.get('rxstat', int())
        self.rxstat_pri_mask = kwargs.get('rxstat_pri_mask', int())
        self.rxstat_set_mask = kwargs.get('rxstat_set_mask', int())
        self.rxstat_clr_mask = kwargs.get('rxstat_clr_mask', int())
        self.aux1_stat = kwargs.get('aux1_stat', int())
        self.aux1_stat_pri = kwargs.get('aux1_stat_pri', int())
        self.aux1_stat_set = kwargs.get('aux1_stat_set', int())
        self.aux1_stat_clr = kwargs.get('aux1_stat_clr', int())
        self.aux2_stat = kwargs.get('aux2_stat', int())
        self.aux2_stat_pri = kwargs.get('aux2_stat_pri', int())
        self.aux2_stat_set = kwargs.get('aux2_stat_set', int())
        self.aux2_stat_clr = kwargs.get('aux2_stat_clr', int())
        self.aux3_stat = kwargs.get('aux3_stat', int())
        self.aux3_stat_pri = kwargs.get('aux3_stat_pri', int())
        self.aux3_stat_set = kwargs.get('aux3_stat_set', int())
        self.aux3_stat_clr = kwargs.get('aux3_stat_clr', int())
        self.aux4_stat = kwargs.get('aux4_stat', int())
        self.aux4_stat_pri = kwargs.get('aux4_stat_pri', int())
        self.aux4_stat_set = kwargs.get('aux4_stat_set', int())
        self.aux4_stat_clr = kwargs.get('aux4_stat_clr', int())
        self.error_bits = array.array('B', kwargs.get('error_bits', []))
        self.error_strs = kwargs.get('error_strs', [])
        self.rxstat_bits = array.array('B', kwargs.get('rxstat_bits', []))
        self.rxstat_strs = kwargs.get('rxstat_strs', [])
        self.aux1_stat_bits = array.array('B', kwargs.get('aux1_stat_bits', []))
        self.aux1_stat_strs = kwargs.get('aux1_stat_strs', [])
        self.aux2_stat_bits = array.array('B', kwargs.get('aux2_stat_bits', []))
        self.aux2_stat_strs = kwargs.get('aux2_stat_strs', [])
        self.aux3_stat_bits = array.array('B', kwargs.get('aux3_stat_bits', []))
        self.aux3_stat_strs = kwargs.get('aux3_stat_strs', [])
        self.aux4_stat_bits = array.array('B', kwargs.get('aux4_stat_bits', []))
        self.aux4_stat_strs = kwargs.get('aux4_stat_strs', [])

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
        if self.nov_header != other.nov_header:
            return False
        if self.error != other.error:
            return False
        if self.num_status_codes != other.num_status_codes:
            return False
        if self.rxstat != other.rxstat:
            return False
        if self.rxstat_pri_mask != other.rxstat_pri_mask:
            return False
        if self.rxstat_set_mask != other.rxstat_set_mask:
            return False
        if self.rxstat_clr_mask != other.rxstat_clr_mask:
            return False
        if self.aux1_stat != other.aux1_stat:
            return False
        if self.aux1_stat_pri != other.aux1_stat_pri:
            return False
        if self.aux1_stat_set != other.aux1_stat_set:
            return False
        if self.aux1_stat_clr != other.aux1_stat_clr:
            return False
        if self.aux2_stat != other.aux2_stat:
            return False
        if self.aux2_stat_pri != other.aux2_stat_pri:
            return False
        if self.aux2_stat_set != other.aux2_stat_set:
            return False
        if self.aux2_stat_clr != other.aux2_stat_clr:
            return False
        if self.aux3_stat != other.aux3_stat:
            return False
        if self.aux3_stat_pri != other.aux3_stat_pri:
            return False
        if self.aux3_stat_set != other.aux3_stat_set:
            return False
        if self.aux3_stat_clr != other.aux3_stat_clr:
            return False
        if self.aux4_stat != other.aux4_stat:
            return False
        if self.aux4_stat_pri != other.aux4_stat_pri:
            return False
        if self.aux4_stat_set != other.aux4_stat_set:
            return False
        if self.aux4_stat_clr != other.aux4_stat_clr:
            return False
        if self.error_bits != other.error_bits:
            return False
        if self.error_strs != other.error_strs:
            return False
        if self.rxstat_bits != other.rxstat_bits:
            return False
        if self.rxstat_strs != other.rxstat_strs:
            return False
        if self.aux1_stat_bits != other.aux1_stat_bits:
            return False
        if self.aux1_stat_strs != other.aux1_stat_strs:
            return False
        if self.aux2_stat_bits != other.aux2_stat_bits:
            return False
        if self.aux2_stat_strs != other.aux2_stat_strs:
            return False
        if self.aux3_stat_bits != other.aux3_stat_bits:
            return False
        if self.aux3_stat_strs != other.aux3_stat_strs:
            return False
        if self.aux4_stat_bits != other.aux4_stat_bits:
            return False
        if self.aux4_stat_strs != other.aux4_stat_strs:
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
    def nov_header(self):
        """Message field 'nov_header'."""
        return self._nov_header

    @nov_header.setter
    def nov_header(self, value):
        if __debug__:
            from novatel_oem7_msgs.msg import Oem7Header
            assert \
                isinstance(value, Oem7Header), \
                "The 'nov_header' field must be a sub message of type 'Oem7Header'"
        self._nov_header = value

    @builtins.property
    def error(self):
        """Message field 'error'."""
        return self._error

    @error.setter
    def error(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'error' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'error' field must be an unsigned integer in [0, 4294967295]"
        self._error = value

    @builtins.property
    def num_status_codes(self):
        """Message field 'num_status_codes'."""
        return self._num_status_codes

    @num_status_codes.setter
    def num_status_codes(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'num_status_codes' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'num_status_codes' field must be an unsigned integer in [0, 4294967295]"
        self._num_status_codes = value

    @builtins.property
    def rxstat(self):
        """Message field 'rxstat'."""
        return self._rxstat

    @rxstat.setter
    def rxstat(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'rxstat' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'rxstat' field must be an unsigned integer in [0, 4294967295]"
        self._rxstat = value

    @builtins.property
    def rxstat_pri_mask(self):
        """Message field 'rxstat_pri_mask'."""
        return self._rxstat_pri_mask

    @rxstat_pri_mask.setter
    def rxstat_pri_mask(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'rxstat_pri_mask' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'rxstat_pri_mask' field must be an unsigned integer in [0, 4294967295]"
        self._rxstat_pri_mask = value

    @builtins.property
    def rxstat_set_mask(self):
        """Message field 'rxstat_set_mask'."""
        return self._rxstat_set_mask

    @rxstat_set_mask.setter
    def rxstat_set_mask(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'rxstat_set_mask' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'rxstat_set_mask' field must be an unsigned integer in [0, 4294967295]"
        self._rxstat_set_mask = value

    @builtins.property
    def rxstat_clr_mask(self):
        """Message field 'rxstat_clr_mask'."""
        return self._rxstat_clr_mask

    @rxstat_clr_mask.setter
    def rxstat_clr_mask(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'rxstat_clr_mask' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'rxstat_clr_mask' field must be an unsigned integer in [0, 4294967295]"
        self._rxstat_clr_mask = value

    @builtins.property
    def aux1_stat(self):
        """Message field 'aux1_stat'."""
        return self._aux1_stat

    @aux1_stat.setter
    def aux1_stat(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'aux1_stat' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'aux1_stat' field must be an unsigned integer in [0, 4294967295]"
        self._aux1_stat = value

    @builtins.property
    def aux1_stat_pri(self):
        """Message field 'aux1_stat_pri'."""
        return self._aux1_stat_pri

    @aux1_stat_pri.setter
    def aux1_stat_pri(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'aux1_stat_pri' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'aux1_stat_pri' field must be an unsigned integer in [0, 4294967295]"
        self._aux1_stat_pri = value

    @builtins.property
    def aux1_stat_set(self):
        """Message field 'aux1_stat_set'."""
        return self._aux1_stat_set

    @aux1_stat_set.setter
    def aux1_stat_set(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'aux1_stat_set' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'aux1_stat_set' field must be an unsigned integer in [0, 4294967295]"
        self._aux1_stat_set = value

    @builtins.property
    def aux1_stat_clr(self):
        """Message field 'aux1_stat_clr'."""
        return self._aux1_stat_clr

    @aux1_stat_clr.setter
    def aux1_stat_clr(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'aux1_stat_clr' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'aux1_stat_clr' field must be an unsigned integer in [0, 4294967295]"
        self._aux1_stat_clr = value

    @builtins.property
    def aux2_stat(self):
        """Message field 'aux2_stat'."""
        return self._aux2_stat

    @aux2_stat.setter
    def aux2_stat(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'aux2_stat' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'aux2_stat' field must be an unsigned integer in [0, 4294967295]"
        self._aux2_stat = value

    @builtins.property
    def aux2_stat_pri(self):
        """Message field 'aux2_stat_pri'."""
        return self._aux2_stat_pri

    @aux2_stat_pri.setter
    def aux2_stat_pri(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'aux2_stat_pri' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'aux2_stat_pri' field must be an unsigned integer in [0, 4294967295]"
        self._aux2_stat_pri = value

    @builtins.property
    def aux2_stat_set(self):
        """Message field 'aux2_stat_set'."""
        return self._aux2_stat_set

    @aux2_stat_set.setter
    def aux2_stat_set(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'aux2_stat_set' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'aux2_stat_set' field must be an unsigned integer in [0, 4294967295]"
        self._aux2_stat_set = value

    @builtins.property
    def aux2_stat_clr(self):
        """Message field 'aux2_stat_clr'."""
        return self._aux2_stat_clr

    @aux2_stat_clr.setter
    def aux2_stat_clr(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'aux2_stat_clr' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'aux2_stat_clr' field must be an unsigned integer in [0, 4294967295]"
        self._aux2_stat_clr = value

    @builtins.property
    def aux3_stat(self):
        """Message field 'aux3_stat'."""
        return self._aux3_stat

    @aux3_stat.setter
    def aux3_stat(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'aux3_stat' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'aux3_stat' field must be an unsigned integer in [0, 4294967295]"
        self._aux3_stat = value

    @builtins.property
    def aux3_stat_pri(self):
        """Message field 'aux3_stat_pri'."""
        return self._aux3_stat_pri

    @aux3_stat_pri.setter
    def aux3_stat_pri(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'aux3_stat_pri' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'aux3_stat_pri' field must be an unsigned integer in [0, 4294967295]"
        self._aux3_stat_pri = value

    @builtins.property
    def aux3_stat_set(self):
        """Message field 'aux3_stat_set'."""
        return self._aux3_stat_set

    @aux3_stat_set.setter
    def aux3_stat_set(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'aux3_stat_set' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'aux3_stat_set' field must be an unsigned integer in [0, 4294967295]"
        self._aux3_stat_set = value

    @builtins.property
    def aux3_stat_clr(self):
        """Message field 'aux3_stat_clr'."""
        return self._aux3_stat_clr

    @aux3_stat_clr.setter
    def aux3_stat_clr(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'aux3_stat_clr' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'aux3_stat_clr' field must be an unsigned integer in [0, 4294967295]"
        self._aux3_stat_clr = value

    @builtins.property
    def aux4_stat(self):
        """Message field 'aux4_stat'."""
        return self._aux4_stat

    @aux4_stat.setter
    def aux4_stat(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'aux4_stat' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'aux4_stat' field must be an unsigned integer in [0, 4294967295]"
        self._aux4_stat = value

    @builtins.property
    def aux4_stat_pri(self):
        """Message field 'aux4_stat_pri'."""
        return self._aux4_stat_pri

    @aux4_stat_pri.setter
    def aux4_stat_pri(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'aux4_stat_pri' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'aux4_stat_pri' field must be an unsigned integer in [0, 4294967295]"
        self._aux4_stat_pri = value

    @builtins.property
    def aux4_stat_set(self):
        """Message field 'aux4_stat_set'."""
        return self._aux4_stat_set

    @aux4_stat_set.setter
    def aux4_stat_set(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'aux4_stat_set' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'aux4_stat_set' field must be an unsigned integer in [0, 4294967295]"
        self._aux4_stat_set = value

    @builtins.property
    def aux4_stat_clr(self):
        """Message field 'aux4_stat_clr'."""
        return self._aux4_stat_clr

    @aux4_stat_clr.setter
    def aux4_stat_clr(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'aux4_stat_clr' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'aux4_stat_clr' field must be an unsigned integer in [0, 4294967295]"
        self._aux4_stat_clr = value

    @builtins.property
    def error_bits(self):
        """Message field 'error_bits'."""
        return self._error_bits

    @error_bits.setter
    def error_bits(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'B', \
                "The 'error_bits' array.array() must have the type code of 'B'"
            assert len(value) <= 32, \
                "The 'error_bits' array.array() must have a size <= 32"
            self._error_bits = value
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
                 len(value) <= 32 and
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 256 for val in value)), \
                "The 'error_bits' field must be a set or sequence with length <= 32 and each value of type 'int' and each unsigned integer in [0, 255]"
        self._error_bits = array.array('B', value)

    @builtins.property
    def error_strs(self):
        """Message field 'error_strs'."""
        return self._error_strs

    @error_strs.setter
    def error_strs(self, value):
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
                 all(len(val) <= 256 for val in value) and
                 len(value) <= 32 and
                 all(isinstance(v, str) for v in value) and
                 True), \
                "The 'error_strs' field must be a set or sequence with length <= 32 and each string value not longer than 256 and each value of type 'str'"
        self._error_strs = value

    @builtins.property
    def rxstat_bits(self):
        """Message field 'rxstat_bits'."""
        return self._rxstat_bits

    @rxstat_bits.setter
    def rxstat_bits(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'B', \
                "The 'rxstat_bits' array.array() must have the type code of 'B'"
            assert len(value) <= 32, \
                "The 'rxstat_bits' array.array() must have a size <= 32"
            self._rxstat_bits = value
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
                 len(value) <= 32 and
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 256 for val in value)), \
                "The 'rxstat_bits' field must be a set or sequence with length <= 32 and each value of type 'int' and each unsigned integer in [0, 255]"
        self._rxstat_bits = array.array('B', value)

    @builtins.property
    def rxstat_strs(self):
        """Message field 'rxstat_strs'."""
        return self._rxstat_strs

    @rxstat_strs.setter
    def rxstat_strs(self, value):
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
                 all(len(val) <= 256 for val in value) and
                 len(value) <= 32 and
                 all(isinstance(v, str) for v in value) and
                 True), \
                "The 'rxstat_strs' field must be a set or sequence with length <= 32 and each string value not longer than 256 and each value of type 'str'"
        self._rxstat_strs = value

    @builtins.property
    def aux1_stat_bits(self):
        """Message field 'aux1_stat_bits'."""
        return self._aux1_stat_bits

    @aux1_stat_bits.setter
    def aux1_stat_bits(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'B', \
                "The 'aux1_stat_bits' array.array() must have the type code of 'B'"
            assert len(value) <= 32, \
                "The 'aux1_stat_bits' array.array() must have a size <= 32"
            self._aux1_stat_bits = value
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
                 len(value) <= 32 and
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 256 for val in value)), \
                "The 'aux1_stat_bits' field must be a set or sequence with length <= 32 and each value of type 'int' and each unsigned integer in [0, 255]"
        self._aux1_stat_bits = array.array('B', value)

    @builtins.property
    def aux1_stat_strs(self):
        """Message field 'aux1_stat_strs'."""
        return self._aux1_stat_strs

    @aux1_stat_strs.setter
    def aux1_stat_strs(self, value):
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
                 all(len(val) <= 256 for val in value) and
                 len(value) <= 32 and
                 all(isinstance(v, str) for v in value) and
                 True), \
                "The 'aux1_stat_strs' field must be a set or sequence with length <= 32 and each string value not longer than 256 and each value of type 'str'"
        self._aux1_stat_strs = value

    @builtins.property
    def aux2_stat_bits(self):
        """Message field 'aux2_stat_bits'."""
        return self._aux2_stat_bits

    @aux2_stat_bits.setter
    def aux2_stat_bits(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'B', \
                "The 'aux2_stat_bits' array.array() must have the type code of 'B'"
            assert len(value) <= 32, \
                "The 'aux2_stat_bits' array.array() must have a size <= 32"
            self._aux2_stat_bits = value
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
                 len(value) <= 32 and
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 256 for val in value)), \
                "The 'aux2_stat_bits' field must be a set or sequence with length <= 32 and each value of type 'int' and each unsigned integer in [0, 255]"
        self._aux2_stat_bits = array.array('B', value)

    @builtins.property
    def aux2_stat_strs(self):
        """Message field 'aux2_stat_strs'."""
        return self._aux2_stat_strs

    @aux2_stat_strs.setter
    def aux2_stat_strs(self, value):
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
                 all(len(val) <= 256 for val in value) and
                 len(value) <= 32 and
                 all(isinstance(v, str) for v in value) and
                 True), \
                "The 'aux2_stat_strs' field must be a set or sequence with length <= 32 and each string value not longer than 256 and each value of type 'str'"
        self._aux2_stat_strs = value

    @builtins.property
    def aux3_stat_bits(self):
        """Message field 'aux3_stat_bits'."""
        return self._aux3_stat_bits

    @aux3_stat_bits.setter
    def aux3_stat_bits(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'B', \
                "The 'aux3_stat_bits' array.array() must have the type code of 'B'"
            assert len(value) <= 32, \
                "The 'aux3_stat_bits' array.array() must have a size <= 32"
            self._aux3_stat_bits = value
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
                 len(value) <= 32 and
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 256 for val in value)), \
                "The 'aux3_stat_bits' field must be a set or sequence with length <= 32 and each value of type 'int' and each unsigned integer in [0, 255]"
        self._aux3_stat_bits = array.array('B', value)

    @builtins.property
    def aux3_stat_strs(self):
        """Message field 'aux3_stat_strs'."""
        return self._aux3_stat_strs

    @aux3_stat_strs.setter
    def aux3_stat_strs(self, value):
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
                 all(len(val) <= 256 for val in value) and
                 len(value) <= 32 and
                 all(isinstance(v, str) for v in value) and
                 True), \
                "The 'aux3_stat_strs' field must be a set or sequence with length <= 32 and each string value not longer than 256 and each value of type 'str'"
        self._aux3_stat_strs = value

    @builtins.property
    def aux4_stat_bits(self):
        """Message field 'aux4_stat_bits'."""
        return self._aux4_stat_bits

    @aux4_stat_bits.setter
    def aux4_stat_bits(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'B', \
                "The 'aux4_stat_bits' array.array() must have the type code of 'B'"
            assert len(value) <= 32, \
                "The 'aux4_stat_bits' array.array() must have a size <= 32"
            self._aux4_stat_bits = value
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
                 len(value) <= 32 and
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 256 for val in value)), \
                "The 'aux4_stat_bits' field must be a set or sequence with length <= 32 and each value of type 'int' and each unsigned integer in [0, 255]"
        self._aux4_stat_bits = array.array('B', value)

    @builtins.property
    def aux4_stat_strs(self):
        """Message field 'aux4_stat_strs'."""
        return self._aux4_stat_strs

    @aux4_stat_strs.setter
    def aux4_stat_strs(self, value):
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
                 all(len(val) <= 256 for val in value) and
                 len(value) <= 32 and
                 all(isinstance(v, str) for v in value) and
                 True), \
                "The 'aux4_stat_strs' field must be a set or sequence with length <= 32 and each string value not longer than 256 and each value of type 'str'"
        self._aux4_stat_strs = value
