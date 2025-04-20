# generated from rosidl_generator_py/resource/_idl.py.em
# with input from foxglove_msgs:msg/LineMarker.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'indices'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_LineMarker(type):
    """Metaclass of message 'LineMarker'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'LINE_STRIP': 0,
        'LINE_LOOP': 1,
        'LINE_LIST': 2,
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
                'foxglove_msgs.msg.LineMarker')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__line_marker
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__line_marker
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__line_marker
            cls._TYPE_SUPPORT = module.type_support_msg__msg__line_marker
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__line_marker

            from foxglove_msgs.msg import Color
            if Color.__class__._TYPE_SUPPORT is None:
                Color.__class__.__import_type_support__()

            from geometry_msgs.msg import Point
            if Point.__class__._TYPE_SUPPORT is None:
                Point.__class__.__import_type_support__()

            from geometry_msgs.msg import Pose
            if Pose.__class__._TYPE_SUPPORT is None:
                Pose.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'LINE_STRIP': cls.__constants['LINE_STRIP'],
            'LINE_LOOP': cls.__constants['LINE_LOOP'],
            'LINE_LIST': cls.__constants['LINE_LIST'],
        }

    @property
    def LINE_STRIP(self):
        """Message constant 'LINE_STRIP'."""
        return Metaclass_LineMarker.__constants['LINE_STRIP']

    @property
    def LINE_LOOP(self):
        """Message constant 'LINE_LOOP'."""
        return Metaclass_LineMarker.__constants['LINE_LOOP']

    @property
    def LINE_LIST(self):
        """Message constant 'LINE_LIST'."""
        return Metaclass_LineMarker.__constants['LINE_LIST']


class LineMarker(metaclass=Metaclass_LineMarker):
    """
    Message class 'LineMarker'.

    Constants:
      LINE_STRIP
      LINE_LOOP
      LINE_LIST
    """

    __slots__ = [
        '_type',
        '_pose',
        '_thickness',
        '_scale_invariant',
        '_points',
        '_color',
        '_colors',
        '_indices',
    ]

    _fields_and_field_types = {
        'type': 'uint8',
        'pose': 'geometry_msgs/Pose',
        'thickness': 'double',
        'scale_invariant': 'boolean',
        'points': 'sequence<geometry_msgs/Point>',
        'color': 'foxglove_msgs/Color',
        'colors': 'sequence<foxglove_msgs/Color>',
        'indices': 'sequence<uint32>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Pose'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Point')),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['foxglove_msgs', 'msg'], 'Color'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['foxglove_msgs', 'msg'], 'Color')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint32')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.type = kwargs.get('type', int())
        from geometry_msgs.msg import Pose
        self.pose = kwargs.get('pose', Pose())
        self.thickness = kwargs.get('thickness', float())
        self.scale_invariant = kwargs.get('scale_invariant', bool())
        self.points = kwargs.get('points', [])
        from foxglove_msgs.msg import Color
        self.color = kwargs.get('color', Color())
        self.colors = kwargs.get('colors', [])
        self.indices = array.array('I', kwargs.get('indices', []))

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
        if self.type != other.type:
            return False
        if self.pose != other.pose:
            return False
        if self.thickness != other.thickness:
            return False
        if self.scale_invariant != other.scale_invariant:
            return False
        if self.points != other.points:
            return False
        if self.color != other.color:
            return False
        if self.colors != other.colors:
            return False
        if self.indices != other.indices:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

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
    def pose(self):
        """Message field 'pose'."""
        return self._pose

    @pose.setter
    def pose(self, value):
        if __debug__:
            from geometry_msgs.msg import Pose
            assert \
                isinstance(value, Pose), \
                "The 'pose' field must be a sub message of type 'Pose'"
        self._pose = value

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
    def scale_invariant(self):
        """Message field 'scale_invariant'."""
        return self._scale_invariant

    @scale_invariant.setter
    def scale_invariant(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'scale_invariant' field must be of type 'bool'"
        self._scale_invariant = value

    @builtins.property
    def points(self):
        """Message field 'points'."""
        return self._points

    @points.setter
    def points(self, value):
        if __debug__:
            from geometry_msgs.msg import Point
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
                 all(isinstance(v, Point) for v in value) and
                 True), \
                "The 'points' field must be a set or sequence and each value of type 'Point'"
        self._points = value

    @builtins.property
    def color(self):
        """Message field 'color'."""
        return self._color

    @color.setter
    def color(self, value):
        if __debug__:
            from foxglove_msgs.msg import Color
            assert \
                isinstance(value, Color), \
                "The 'color' field must be a sub message of type 'Color'"
        self._color = value

    @builtins.property
    def colors(self):
        """Message field 'colors'."""
        return self._colors

    @colors.setter
    def colors(self, value):
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
                "The 'colors' field must be a set or sequence and each value of type 'Color'"
        self._colors = value

    @builtins.property
    def indices(self):
        """Message field 'indices'."""
        return self._indices

    @indices.setter
    def indices(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'I', \
                "The 'indices' array.array() must have the type code of 'I'"
            self._indices = value
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
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 4294967296 for val in value)), \
                "The 'indices' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 4294967295]"
        self._indices = array.array('I', value)
