# generated from rosidl_generator_py/resource/_idl.py.em
# with input from novatel_oem7_msgs:msg/CORRIMU.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_CORRIMU(type):
    """Metaclass of message 'CORRIMU'."""

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
                'novatel_oem7_msgs.msg.CORRIMU')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__corrimu
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__corrimu
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__corrimu
            cls._TYPE_SUPPORT = module.type_support_msg__msg__corrimu
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__corrimu

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


class CORRIMU(metaclass=Metaclass_CORRIMU):
    """Message class 'CORRIMU'."""

    __slots__ = [
        '_header',
        '_nov_header',
        '_imu_data_count',
        '_pitch_rate',
        '_roll_rate',
        '_yaw_rate',
        '_lateral_acc',
        '_longitudinal_acc',
        '_vertical_acc',
        '_reserved1',
        '_reserved2',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'nov_header': 'novatel_oem7_msgs/Oem7Header',
        'imu_data_count': 'uint32',
        'pitch_rate': 'double',
        'roll_rate': 'double',
        'yaw_rate': 'double',
        'lateral_acc': 'double',
        'longitudinal_acc': 'double',
        'vertical_acc': 'double',
        'reserved1': 'uint32',
        'reserved2': 'uint32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['novatel_oem7_msgs', 'msg'], 'Oem7Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        from novatel_oem7_msgs.msg import Oem7Header
        self.nov_header = kwargs.get('nov_header', Oem7Header())
        self.imu_data_count = kwargs.get('imu_data_count', int())
        self.pitch_rate = kwargs.get('pitch_rate', float())
        self.roll_rate = kwargs.get('roll_rate', float())
        self.yaw_rate = kwargs.get('yaw_rate', float())
        self.lateral_acc = kwargs.get('lateral_acc', float())
        self.longitudinal_acc = kwargs.get('longitudinal_acc', float())
        self.vertical_acc = kwargs.get('vertical_acc', float())
        self.reserved1 = kwargs.get('reserved1', int())
        self.reserved2 = kwargs.get('reserved2', int())

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
        if self.imu_data_count != other.imu_data_count:
            return False
        if self.pitch_rate != other.pitch_rate:
            return False
        if self.roll_rate != other.roll_rate:
            return False
        if self.yaw_rate != other.yaw_rate:
            return False
        if self.lateral_acc != other.lateral_acc:
            return False
        if self.longitudinal_acc != other.longitudinal_acc:
            return False
        if self.vertical_acc != other.vertical_acc:
            return False
        if self.reserved1 != other.reserved1:
            return False
        if self.reserved2 != other.reserved2:
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
    def imu_data_count(self):
        """Message field 'imu_data_count'."""
        return self._imu_data_count

    @imu_data_count.setter
    def imu_data_count(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'imu_data_count' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'imu_data_count' field must be an unsigned integer in [0, 4294967295]"
        self._imu_data_count = value

    @builtins.property
    def pitch_rate(self):
        """Message field 'pitch_rate'."""
        return self._pitch_rate

    @pitch_rate.setter
    def pitch_rate(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'pitch_rate' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'pitch_rate' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._pitch_rate = value

    @builtins.property
    def roll_rate(self):
        """Message field 'roll_rate'."""
        return self._roll_rate

    @roll_rate.setter
    def roll_rate(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'roll_rate' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'roll_rate' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._roll_rate = value

    @builtins.property
    def yaw_rate(self):
        """Message field 'yaw_rate'."""
        return self._yaw_rate

    @yaw_rate.setter
    def yaw_rate(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'yaw_rate' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'yaw_rate' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._yaw_rate = value

    @builtins.property
    def lateral_acc(self):
        """Message field 'lateral_acc'."""
        return self._lateral_acc

    @lateral_acc.setter
    def lateral_acc(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'lateral_acc' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'lateral_acc' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._lateral_acc = value

    @builtins.property
    def longitudinal_acc(self):
        """Message field 'longitudinal_acc'."""
        return self._longitudinal_acc

    @longitudinal_acc.setter
    def longitudinal_acc(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'longitudinal_acc' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'longitudinal_acc' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._longitudinal_acc = value

    @builtins.property
    def vertical_acc(self):
        """Message field 'vertical_acc'."""
        return self._vertical_acc

    @vertical_acc.setter
    def vertical_acc(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'vertical_acc' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'vertical_acc' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._vertical_acc = value

    @builtins.property
    def reserved1(self):
        """Message field 'reserved1'."""
        return self._reserved1

    @reserved1.setter
    def reserved1(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'reserved1' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'reserved1' field must be an unsigned integer in [0, 4294967295]"
        self._reserved1 = value

    @builtins.property
    def reserved2(self):
        """Message field 'reserved2'."""
        return self._reserved2

    @reserved2.setter
    def reserved2(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'reserved2' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'reserved2' field must be an unsigned integer in [0, 4294967295]"
        self._reserved2 = value
