# generated from rosidl_generator_py/resource/_idl.py.em
# with input from foxglove_msgs:msg/FrameTransform.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_FrameTransform(type):
    """Metaclass of message 'FrameTransform'."""

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
                'foxglove_msgs.msg.FrameTransform')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__frame_transform
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__frame_transform
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__frame_transform
            cls._TYPE_SUPPORT = module.type_support_msg__msg__frame_transform
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__frame_transform

            from builtin_interfaces.msg import Time
            if Time.__class__._TYPE_SUPPORT is None:
                Time.__class__.__import_type_support__()

            from geometry_msgs.msg import Quaternion
            if Quaternion.__class__._TYPE_SUPPORT is None:
                Quaternion.__class__.__import_type_support__()

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


class FrameTransform(metaclass=Metaclass_FrameTransform):
    """Message class 'FrameTransform'."""

    __slots__ = [
        '_timestamp',
        '_parent_frame_id',
        '_child_frame_id',
        '_translation',
        '_rotation',
    ]

    _fields_and_field_types = {
        'timestamp': 'builtin_interfaces/Time',
        'parent_frame_id': 'string',
        'child_frame_id': 'string',
        'translation': 'geometry_msgs/Vector3',
        'rotation': 'geometry_msgs/Quaternion',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Time'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Vector3'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Quaternion'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from builtin_interfaces.msg import Time
        self.timestamp = kwargs.get('timestamp', Time())
        self.parent_frame_id = kwargs.get('parent_frame_id', str())
        self.child_frame_id = kwargs.get('child_frame_id', str())
        from geometry_msgs.msg import Vector3
        self.translation = kwargs.get('translation', Vector3())
        from geometry_msgs.msg import Quaternion
        self.rotation = kwargs.get('rotation', Quaternion())

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
        if self.parent_frame_id != other.parent_frame_id:
            return False
        if self.child_frame_id != other.child_frame_id:
            return False
        if self.translation != other.translation:
            return False
        if self.rotation != other.rotation:
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
    def parent_frame_id(self):
        """Message field 'parent_frame_id'."""
        return self._parent_frame_id

    @parent_frame_id.setter
    def parent_frame_id(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'parent_frame_id' field must be of type 'str'"
        self._parent_frame_id = value

    @builtins.property
    def child_frame_id(self):
        """Message field 'child_frame_id'."""
        return self._child_frame_id

    @child_frame_id.setter
    def child_frame_id(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'child_frame_id' field must be of type 'str'"
        self._child_frame_id = value

    @builtins.property
    def translation(self):
        """Message field 'translation'."""
        return self._translation

    @translation.setter
    def translation(self, value):
        if __debug__:
            from geometry_msgs.msg import Vector3
            assert \
                isinstance(value, Vector3), \
                "The 'translation' field must be a sub message of type 'Vector3'"
        self._translation = value

    @builtins.property
    def rotation(self):
        """Message field 'rotation'."""
        return self._rotation

    @rotation.setter
    def rotation(self, value):
        if __debug__:
            from geometry_msgs.msg import Quaternion
            assert \
                isinstance(value, Quaternion), \
                "The 'rotation' field must be a sub message of type 'Quaternion'"
        self._rotation = value
