# generated from rosidl_generator_py/resource/_idl.py.em
# with input from novatel_oem7_msgs:msg/INSPVA.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_INSPVA(type):
    """Metaclass of message 'INSPVA'."""

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
                'novatel_oem7_msgs.msg.INSPVA')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__inspva
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__inspva
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__inspva
            cls._TYPE_SUPPORT = module.type_support_msg__msg__inspva
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__inspva

            from novatel_oem7_msgs.msg import InertialSolutionStatus
            if InertialSolutionStatus.__class__._TYPE_SUPPORT is None:
                InertialSolutionStatus.__class__.__import_type_support__()

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


class INSPVA(metaclass=Metaclass_INSPVA):
    """Message class 'INSPVA'."""

    __slots__ = [
        '_header',
        '_nov_header',
        '_latitude',
        '_longitude',
        '_height',
        '_north_velocity',
        '_east_velocity',
        '_up_velocity',
        '_roll',
        '_pitch',
        '_azimuth',
        '_status',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'nov_header': 'novatel_oem7_msgs/Oem7Header',
        'latitude': 'double',
        'longitude': 'double',
        'height': 'double',
        'north_velocity': 'double',
        'east_velocity': 'double',
        'up_velocity': 'double',
        'roll': 'double',
        'pitch': 'double',
        'azimuth': 'double',
        'status': 'novatel_oem7_msgs/InertialSolutionStatus',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['novatel_oem7_msgs', 'msg'], 'Oem7Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['novatel_oem7_msgs', 'msg'], 'InertialSolutionStatus'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        from novatel_oem7_msgs.msg import Oem7Header
        self.nov_header = kwargs.get('nov_header', Oem7Header())
        self.latitude = kwargs.get('latitude', float())
        self.longitude = kwargs.get('longitude', float())
        self.height = kwargs.get('height', float())
        self.north_velocity = kwargs.get('north_velocity', float())
        self.east_velocity = kwargs.get('east_velocity', float())
        self.up_velocity = kwargs.get('up_velocity', float())
        self.roll = kwargs.get('roll', float())
        self.pitch = kwargs.get('pitch', float())
        self.azimuth = kwargs.get('azimuth', float())
        from novatel_oem7_msgs.msg import InertialSolutionStatus
        self.status = kwargs.get('status', InertialSolutionStatus())

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
        if self.latitude != other.latitude:
            return False
        if self.longitude != other.longitude:
            return False
        if self.height != other.height:
            return False
        if self.north_velocity != other.north_velocity:
            return False
        if self.east_velocity != other.east_velocity:
            return False
        if self.up_velocity != other.up_velocity:
            return False
        if self.roll != other.roll:
            return False
        if self.pitch != other.pitch:
            return False
        if self.azimuth != other.azimuth:
            return False
        if self.status != other.status:
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
    def latitude(self):
        """Message field 'latitude'."""
        return self._latitude

    @latitude.setter
    def latitude(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'latitude' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'latitude' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._latitude = value

    @builtins.property
    def longitude(self):
        """Message field 'longitude'."""
        return self._longitude

    @longitude.setter
    def longitude(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'longitude' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'longitude' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._longitude = value

    @builtins.property
    def height(self):
        """Message field 'height'."""
        return self._height

    @height.setter
    def height(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'height' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'height' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._height = value

    @builtins.property
    def north_velocity(self):
        """Message field 'north_velocity'."""
        return self._north_velocity

    @north_velocity.setter
    def north_velocity(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'north_velocity' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'north_velocity' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._north_velocity = value

    @builtins.property
    def east_velocity(self):
        """Message field 'east_velocity'."""
        return self._east_velocity

    @east_velocity.setter
    def east_velocity(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'east_velocity' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'east_velocity' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._east_velocity = value

    @builtins.property
    def up_velocity(self):
        """Message field 'up_velocity'."""
        return self._up_velocity

    @up_velocity.setter
    def up_velocity(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'up_velocity' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'up_velocity' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._up_velocity = value

    @builtins.property
    def roll(self):
        """Message field 'roll'."""
        return self._roll

    @roll.setter
    def roll(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'roll' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'roll' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._roll = value

    @builtins.property
    def pitch(self):
        """Message field 'pitch'."""
        return self._pitch

    @pitch.setter
    def pitch(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'pitch' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'pitch' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._pitch = value

    @builtins.property
    def azimuth(self):
        """Message field 'azimuth'."""
        return self._azimuth

    @azimuth.setter
    def azimuth(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'azimuth' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'azimuth' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._azimuth = value

    @builtins.property
    def status(self):
        """Message field 'status'."""
        return self._status

    @status.setter
    def status(self, value):
        if __debug__:
            from novatel_oem7_msgs.msg import InertialSolutionStatus
            assert \
                isinstance(value, InertialSolutionStatus), \
                "The 'status' field must be a sub message of type 'InertialSolutionStatus'"
        self._status = value
