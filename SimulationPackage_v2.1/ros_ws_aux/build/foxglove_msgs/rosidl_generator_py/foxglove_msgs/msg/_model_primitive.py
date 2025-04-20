# generated from rosidl_generator_py/resource/_idl.py.em
# with input from foxglove_msgs:msg/ModelPrimitive.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'data'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ModelPrimitive(type):
    """Metaclass of message 'ModelPrimitive'."""

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
                'foxglove_msgs.msg.ModelPrimitive')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__model_primitive
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__model_primitive
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__model_primitive
            cls._TYPE_SUPPORT = module.type_support_msg__msg__model_primitive
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__model_primitive

            from foxglove_msgs.msg import Color
            if Color.__class__._TYPE_SUPPORT is None:
                Color.__class__.__import_type_support__()

            from geometry_msgs.msg import Pose
            if Pose.__class__._TYPE_SUPPORT is None:
                Pose.__class__.__import_type_support__()

            from geometry_msgs.msg import Vector3
            if Vector3.__class__._TYPE_SUPPORT is None:
                Vector3.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ModelPrimitive(metaclass=Metaclass_ModelPrimitive):
    """Message class 'ModelPrimitive'."""

    __slots__ = [
        '_pose',
        '_scale',
        '_color',
        '_override_color',
        '_url',
        '_media_type',
        '_data',
    ]

    _fields_and_field_types = {
        'pose': 'geometry_msgs/Pose',
        'scale': 'geometry_msgs/Vector3',
        'color': 'foxglove_msgs/Color',
        'override_color': 'boolean',
        'url': 'string',
        'media_type': 'string',
        'data': 'sequence<uint8>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Pose'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Vector3'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['foxglove_msgs', 'msg'], 'Color'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint8')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from geometry_msgs.msg import Pose
        self.pose = kwargs.get('pose', Pose())
        from geometry_msgs.msg import Vector3
        self.scale = kwargs.get('scale', Vector3())
        from foxglove_msgs.msg import Color
        self.color = kwargs.get('color', Color())
        self.override_color = kwargs.get('override_color', bool())
        self.url = kwargs.get('url', str())
        self.media_type = kwargs.get('media_type', str())
        self.data = array.array('B', kwargs.get('data', []))

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
        if self.scale != other.scale:
            return False
        if self.color != other.color:
            return False
        if self.override_color != other.override_color:
            return False
        if self.url != other.url:
            return False
        if self.media_type != other.media_type:
            return False
        if self.data != other.data:
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
    def scale(self):
        """Message field 'scale'."""
        return self._scale

    @scale.setter
    def scale(self, value):
        if __debug__:
            from geometry_msgs.msg import Vector3
            assert \
                isinstance(value, Vector3), \
                "The 'scale' field must be a sub message of type 'Vector3'"
        self._scale = value

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
    def override_color(self):
        """Message field 'override_color'."""
        return self._override_color

    @override_color.setter
    def override_color(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'override_color' field must be of type 'bool'"
        self._override_color = value

    @builtins.property
    def url(self):
        """Message field 'url'."""
        return self._url

    @url.setter
    def url(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'url' field must be of type 'str'"
        self._url = value

    @builtins.property
    def media_type(self):
        """Message field 'media_type'."""
        return self._media_type

    @media_type.setter
    def media_type(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'media_type' field must be of type 'str'"
        self._media_type = value

    @builtins.property
    def data(self):
        """Message field 'data'."""
        return self._data

    @data.setter
    def data(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'B', \
                "The 'data' array.array() must have the type code of 'B'"
            self._data = value
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
                 all(val >= 0 and val < 256 for val in value)), \
                "The 'data' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 255]"
        self._data = array.array('B', value)
