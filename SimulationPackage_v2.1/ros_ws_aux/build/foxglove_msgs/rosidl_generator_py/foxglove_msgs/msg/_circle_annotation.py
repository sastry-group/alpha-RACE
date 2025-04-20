# generated from rosidl_generator_py/resource/_idl.py.em
# with input from foxglove_msgs:msg/CircleAnnotation.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_CircleAnnotation(type):
    """Metaclass of message 'CircleAnnotation'."""

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
            module = import_type_support('foxglove_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'foxglove_msgs.msg.CircleAnnotation')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__circle_annotation
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__circle_annotation
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__circle_annotation
            cls._TYPE_SUPPORT = module.type_support_msg__msg__circle_annotation
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__circle_annotation

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
        }


class CircleAnnotation(metaclass=Metaclass_CircleAnnotation):
    """Message class 'CircleAnnotation'."""

    __slots__ = [
        '_timestamp',
        '_position',
        '_diameter',
        '_thickness',
        '_fill_color',
        '_outline_color',
    ]

    _fields_and_field_types = {
        'timestamp': 'builtin_interfaces/Time',
        'position': 'foxglove_msgs/Point2',
        'diameter': 'double',
        'thickness': 'double',
        'fill_color': 'foxglove_msgs/Color',
        'outline_color': 'foxglove_msgs/Color',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Time'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['foxglove_msgs', 'msg'], 'Point2'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['foxglove_msgs', 'msg'], 'Color'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['foxglove_msgs', 'msg'], 'Color'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from builtin_interfaces.msg import Time
        self.timestamp = kwargs.get('timestamp', Time())
        from foxglove_msgs.msg import Point2
        self.position = kwargs.get('position', Point2())
        self.diameter = kwargs.get('diameter', float())
        self.thickness = kwargs.get('thickness', float())
        from foxglove_msgs.msg import Color
        self.fill_color = kwargs.get('fill_color', Color())
        from foxglove_msgs.msg import Color
        self.outline_color = kwargs.get('outline_color', Color())

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
        if self.position != other.position:
            return False
        if self.diameter != other.diameter:
            return False
        if self.thickness != other.thickness:
            return False
        if self.fill_color != other.fill_color:
            return False
        if self.outline_color != other.outline_color:
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

    @builtins.property
    def position(self):
        """Message field 'position'."""
        return self._position

    @position.setter
    def position(self, value):
        if __debug__:
            from foxglove_msgs.msg import Point2
            assert \
                isinstance(value, Point2), \
                "The 'position' field must be a sub message of type 'Point2'"
        self._position = value

    @builtins.property
    def diameter(self):
        """Message field 'diameter'."""
        return self._diameter

    @diameter.setter
    def diameter(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'diameter' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'diameter' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._diameter = value

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
