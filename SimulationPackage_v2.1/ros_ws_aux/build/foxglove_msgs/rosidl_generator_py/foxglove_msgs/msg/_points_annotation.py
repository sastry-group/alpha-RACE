# generated from rosidl_generator_py/resource/_idl.py.em
# with input from foxglove_msgs:msg/PointsAnnotation.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_PointsAnnotation(type):
    """Metaclass of message 'PointsAnnotation'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'UNKNOWN': 0,
        'POINTS': 1,
        'LINE_LOOP': 2,
        'LINE_STRIP': 3,
        'LINE_LIST': 4,
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
                'foxglove_msgs.msg.PointsAnnotation')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__points_annotation
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__points_annotation
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__points_annotation
            cls._TYPE_SUPPORT = module.type_support_msg__msg__points_annotation
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__points_annotation

            from builtin_interfaces.msg import Time
            if Time.__class__._TYPE_SUPPORT is None:
                Time.__class__.__import_type_support__()

            from foxglove_msgs.msg import Color
            if Color.__class__._TYPE_SUPPORT is None:
                Color.__class__.__import_type_support__()

            from foxglove_msgs.msg import Point2
            if Point2.__class__._TYPE_SUPPORT is None:
                Point2.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'UNKNOWN': cls.__constants['UNKNOWN'],
            'POINTS': cls.__constants['POINTS'],
            'LINE_LOOP': cls.__constants['LINE_LOOP'],
            'LINE_STRIP': cls.__constants['LINE_STRIP'],
            'LINE_LIST': cls.__constants['LINE_LIST'],
        }

    @property
    def UNKNOWN(self):
        """Message constant 'UNKNOWN'."""
        return Metaclass_PointsAnnotation.__constants['UNKNOWN']

    @property
    def POINTS(self):
        """Message constant 'POINTS'."""
        return Metaclass_PointsAnnotation.__constants['POINTS']

    @property
    def LINE_LOOP(self):
        """Message constant 'LINE_LOOP'."""
        return Metaclass_PointsAnnotation.__constants['LINE_LOOP']

    @property
    def LINE_STRIP(self):
        """Message constant 'LINE_STRIP'."""
        return Metaclass_PointsAnnotation.__constants['LINE_STRIP']

    @property
    def LINE_LIST(self):
        """Message constant 'LINE_LIST'."""
        return Metaclass_PointsAnnotation.__constants['LINE_LIST']


class PointsAnnotation(metaclass=Metaclass_PointsAnnotation):
    """
    Message class 'PointsAnnotation'.

    Constants:
      UNKNOWN
      POINTS
      LINE_LOOP
      LINE_STRIP
      LINE_LIST
    """

    __slots__ = [
        '_timestamp',
        '_type',
        '_points',
        '_outline_color',
        '_outline_colors',
        '_fill_color',
        '_thickness',
    ]

    _fields_and_field_types = {
        'timestamp': 'builtin_interfaces/Time',
        'type': 'uint8',
        'points': 'sequence<foxglove_msgs/Point2>',
        'outline_color': 'foxglove_msgs/Color',
        'outline_colors': 'sequence<foxglove_msgs/Color>',
        'fill_color': 'foxglove_msgs/Color',
        'thickness': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Time'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['foxglove_msgs', 'msg'], 'Point2')),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['foxglove_msgs', 'msg'], 'Color'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['foxglove_msgs', 'msg'], 'Color')),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['foxglove_msgs', 'msg'], 'Color'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from builtin_interfaces.msg import Time
        self.timestamp = kwargs.get('timestamp', Time())
        self.type = kwargs.get('type', int())
        self.points = kwargs.get('points', [])
        from foxglove_msgs.msg import Color
        self.outline_color = kwargs.get('outline_color', Color())
        self.outline_colors = kwargs.get('outline_colors', [])
        from foxglove_msgs.msg import Color
        self.fill_color = kwargs.get('fill_color', Color())
        self.thickness = kwargs.get('thickness', float())

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
        if self.timestamp != other.timestamp:
            return False
        if self.type != other.type:
            return False
        if self.points != other.points:
            return False
        if self.outline_color != other.outline_color:
            return False
        if self.outline_colors != other.outline_colors:
            return False
        if self.fill_color != other.fill_color:
            return False
        if self.thickness != other.thickness:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def timestamp(self):
        """Message field 'timestamp'."""
        return self._timestamp

    @timestamp.setter
    def timestamp(self, value):
        if __debug__:
            from builtin_interfaces.msg import Time
            assert \
                isinstance(value, Time), \
                "The 'timestamp' field must be a sub message of type 'Time'"
        self._timestamp = value

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

    @builtins.property
    def points(self):
        """Message field 'points'."""
        return self._points

    @points.setter
    def points(self, value):
        if __debug__:
            from foxglove_msgs.msg import Point2
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
                 all(isinstance(v, Point2) for v in value) and
                 True), \
                "The 'points' field must be a set or sequence and each value of type 'Point2'"
        self._points = value

    @builtins.property
    def outline_color(self):
        """Message field 'outline_color'."""
        return self._outline_color

    @outline_color.setter
    def outline_color(self, value):
        if __debug__:
            from foxglove_msgs.msg import Color
            assert \
                isinstance(value, Color), \
                "The 'outline_color' field must be a sub message of type 'Color'"
        self._outline_color = value

    @builtins.property
    def outline_colors(self):
        """Message field 'outline_colors'."""
        return self._outline_colors

    @outline_colors.setter
    def outline_colors(self, value):
        if __debug__:
            from foxglove_msgs.msg import Color
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
                 all(isinstance(v, Color) for v in value) and
                 True), \
                "The 'outline_colors' field must be a set or sequence and each value of type 'Color'"
        self._outline_colors = value

    @builtins.property
    def fill_color(self):
        """Message field 'fill_color'."""
        return self._fill_color

    @fill_color.setter
    def fill_color(self, value):
        if __debug__:
            from foxglove_msgs.msg import Color
            assert \
                isinstance(value, Color), \
                "The 'fill_color' field must be a sub message of type 'Color'"
        self._fill_color = value

    @builtins.property
    def thickness(self):
        """Message field 'thickness'."""
        return self._thickness

    @thickness.setter
    def thickness(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'thickness' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'thickness' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._thickness = value
