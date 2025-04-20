# generated from rosidl_generator_py/resource/_idl.py.em
# with input from foxglove_msgs:msg/TextMarker.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_TextMarker(type):
    """Metaclass of message 'TextMarker'."""

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
                'foxglove_msgs.msg.TextMarker')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__text_marker
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__text_marker
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__text_marker
            cls._TYPE_SUPPORT = module.type_support_msg__msg__text_marker
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__text_marker

            from foxglove_msgs.msg import Color
            if Color.__class__._TYPE_SUPPORT is None:
                Color.__class__.__import_type_support__()

            from geometry_msgs.msg import Pose
            if Pose.__class__._TYPE_SUPPORT is None:
                Pose.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class TextMarker(metaclass=Metaclass_TextMarker):
    """Message class 'TextMarker'."""

    __slots__ = [
        '_pose',
        '_billboard',
        '_font_size',
        '_scale_invariant',
        '_color',
        '_text',
    ]

    _fields_and_field_types = {
        'pose': 'geometry_msgs/Pose',
        'billboard': 'boolean',
        'font_size': 'double',
        'scale_invariant': 'boolean',
        'color': 'foxglove_msgs/Color',
        'text': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Pose'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['foxglove_msgs', 'msg'], 'Color'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from geometry_msgs.msg import Pose
        self.pose = kwargs.get('pose', Pose())
        self.billboard = kwargs.get('billboard', bool())
        self.font_size = kwargs.get('font_size', float())
        self.scale_invariant = kwargs.get('scale_invariant', bool())
        from foxglove_msgs.msg import Color
        self.color = kwargs.get('color', Color())
        self.text = kwargs.get('text', str())

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
        if self.pose != other.pose:
            return False
        if self.billboard != other.billboard:
            return False
        if self.font_size != other.font_size:
            return False
        if self.scale_invariant != other.scale_invariant:
            return False
        if self.color != other.color:
            return False
        if self.text != other.text:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

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
    def billboard(self):
        """Message field 'billboard'."""
        return self._billboard

    @billboard.setter
    def billboard(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'billboard' field must be of type 'bool'"
        self._billboard = value

    @builtins.property
    def font_size(self):
        """Message field 'font_size'."""
        return self._font_size

    @font_size.setter
    def font_size(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'font_size' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'font_size' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._font_size = value

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
    def text(self):
        """Message field 'text'."""
        return self._text

    @text.setter
    def text(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'text' field must be of type 'str'"
        self._text = value
