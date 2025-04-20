# generated from rosidl_generator_py/resource/_idl.py.em
# with input from foxglove_msgs:msg/SceneEntity.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SceneEntity(type):
    """Metaclass of message 'SceneEntity'."""

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
                'foxglove_msgs.msg.SceneEntity')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__scene_entity
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__scene_entity
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__scene_entity
            cls._TYPE_SUPPORT = module.type_support_msg__msg__scene_entity
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__scene_entity

            from builtin_interfaces.msg import Duration
            if Duration.__class__._TYPE_SUPPORT is None:
                Duration.__class__.__import_type_support__()

            from builtin_interfaces.msg import Time
            if Time.__class__._TYPE_SUPPORT is None:
                Time.__class__.__import_type_support__()

            from foxglove_msgs.msg import ArrowPrimitive
            if ArrowPrimitive.__class__._TYPE_SUPPORT is None:
                ArrowPrimitive.__class__.__import_type_support__()

            from foxglove_msgs.msg import CubePrimitive
            if CubePrimitive.__class__._TYPE_SUPPORT is None:
                CubePrimitive.__class__.__import_type_support__()

            from foxglove_msgs.msg import CylinderPrimitive
            if CylinderPrimitive.__class__._TYPE_SUPPORT is None:
                CylinderPrimitive.__class__.__import_type_support__()

            from foxglove_msgs.msg import KeyValuePair
            if KeyValuePair.__class__._TYPE_SUPPORT is None:
                KeyValuePair.__class__.__import_type_support__()

            from foxglove_msgs.msg import LinePrimitive
            if LinePrimitive.__class__._TYPE_SUPPORT is None:
                LinePrimitive.__class__.__import_type_support__()

            from foxglove_msgs.msg import ModelPrimitive
            if ModelPrimitive.__class__._TYPE_SUPPORT is None:
                ModelPrimitive.__class__.__import_type_support__()

            from foxglove_msgs.msg import SpherePrimitive
            if SpherePrimitive.__class__._TYPE_SUPPORT is None:
                SpherePrimitive.__class__.__import_type_support__()

            from foxglove_msgs.msg import TextPrimitive
            if TextPrimitive.__class__._TYPE_SUPPORT is None:
                TextPrimitive.__class__.__import_type_support__()

            from foxglove_msgs.msg import TriangleListPrimitive
            if TriangleListPrimitive.__class__._TYPE_SUPPORT is None:
                TriangleListPrimitive.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SceneEntity(metaclass=Metaclass_SceneEntity):
    """Message class 'SceneEntity'."""

    __slots__ = [
        '_timestamp',
        '_frame_id',
        '_id',
        '_lifetime',
        '_frame_locked',
        '_metadata',
        '_arrows',
        '_cubes',
        '_spheres',
        '_cylinders',
        '_lines',
        '_triangles',
        '_texts',
        '_models',
    ]

    _fields_and_field_types = {
        'timestamp': 'builtin_interfaces/Time',
        'frame_id': 'string',
        'id': 'string',
        'lifetime': 'builtin_interfaces/Duration',
        'frame_locked': 'boolean',
        'metadata': 'sequence<foxglove_msgs/KeyValuePair>',
        'arrows': 'sequence<foxglove_msgs/ArrowPrimitive>',
        'cubes': 'sequence<foxglove_msgs/CubePrimitive>',
        'spheres': 'sequence<foxglove_msgs/SpherePrimitive>',
        'cylinders': 'sequence<foxglove_msgs/CylinderPrimitive>',
        'lines': 'sequence<foxglove_msgs/LinePrimitive>',
        'triangles': 'sequence<foxglove_msgs/TriangleListPrimitive>',
        'texts': 'sequence<foxglove_msgs/TextPrimitive>',
        'models': 'sequence<foxglove_msgs/ModelPrimitive>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Time'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Duration'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['foxglove_msgs', 'msg'], 'KeyValuePair')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['foxglove_msgs', 'msg'], 'ArrowPrimitive')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['foxglove_msgs', 'msg'], 'CubePrimitive')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['foxglove_msgs', 'msg'], 'SpherePrimitive')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['foxglove_msgs', 'msg'], 'CylinderPrimitive')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['foxglove_msgs', 'msg'], 'LinePrimitive')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['foxglove_msgs', 'msg'], 'TriangleListPrimitive')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['foxglove_msgs', 'msg'], 'TextPrimitive')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['foxglove_msgs', 'msg'], 'ModelPrimitive')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from builtin_interfaces.msg import Time
        self.timestamp = kwargs.get('timestamp', Time())
        self.frame_id = kwargs.get('frame_id', str())
        self.id = kwargs.get('id', str())
        from builtin_interfaces.msg import Duration
        self.lifetime = kwargs.get('lifetime', Duration())
        self.frame_locked = kwargs.get('frame_locked', bool())
        self.metadata = kwargs.get('metadata', [])
        self.arrows = kwargs.get('arrows', [])
        self.cubes = kwargs.get('cubes', [])
        self.spheres = kwargs.get('spheres', [])
        self.cylinders = kwargs.get('cylinders', [])
        self.lines = kwargs.get('lines', [])
        self.triangles = kwargs.get('triangles', [])
        self.texts = kwargs.get('texts', [])
        self.models = kwargs.get('models', [])

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
        if self.frame_id != other.frame_id:
            return False
        if self.id != other.id:
            return False
        if self.lifetime != other.lifetime:
            return False
        if self.frame_locked != other.frame_locked:
            return False
        if self.metadata != other.metadata:
            return False
        if self.arrows != other.arrows:
            return False
        if self.cubes != other.cubes:
            return False
        if self.spheres != other.spheres:
            return False
        if self.cylinders != other.cylinders:
            return False
        if self.lines != other.lines:
            return False
        if self.triangles != other.triangles:
            return False
        if self.texts != other.texts:
            return False
        if self.models != other.models:
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
    def frame_id(self):
        """Message field 'frame_id'."""
        return self._frame_id

    @frame_id.setter
    def frame_id(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'frame_id' field must be of type 'str'"
        self._frame_id = value

    @builtins.property  # noqa: A003
    def id(self):  # noqa: A003
        """Message field 'id'."""
        return self._id

    @id.setter  # noqa: A003
    def id(self, value):  # noqa: A003
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'id' field must be of type 'str'"
        self._id = value

    @builtins.property
    def lifetime(self):
        """Message field 'lifetime'."""
        return self._lifetime

    @lifetime.setter
    def lifetime(self, value):
        if __debug__:
            from builtin_interfaces.msg import Duration
            assert \
                isinstance(value, Duration), \
                "The 'lifetime' field must be a sub message of type 'Duration'"
        self._lifetime = value

    @builtins.property
    def frame_locked(self):
        """Message field 'frame_locked'."""
        return self._frame_locked

    @frame_locked.setter
    def frame_locked(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'frame_locked' field must be of type 'bool'"
        self._frame_locked = value

    @builtins.property
    def metadata(self):
        """Message field 'metadata'."""
        return self._metadata

    @metadata.setter
    def metadata(self, value):
        if __debug__:
            from foxglove_msgs.msg import KeyValuePair
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
                 all(isinstance(v, KeyValuePair) for v in value) and
                 True), \
                "The 'metadata' field must be a set or sequence and each value of type 'KeyValuePair'"
        self._metadata = value

    @builtins.property
    def arrows(self):
        """Message field 'arrows'."""
        return self._arrows

    @arrows.setter
    def arrows(self, value):
        if __debug__:
            from foxglove_msgs.msg import ArrowPrimitive
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
                 all(isinstance(v, ArrowPrimitive) for v in value) and
                 True), \
                "The 'arrows' field must be a set or sequence and each value of type 'ArrowPrimitive'"
        self._arrows = value

    @builtins.property
    def cubes(self):
        """Message field 'cubes'."""
        return self._cubes

    @cubes.setter
    def cubes(self, value):
        if __debug__:
            from foxglove_msgs.msg import CubePrimitive
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
                 all(isinstance(v, CubePrimitive) for v in value) and
                 True), \
                "The 'cubes' field must be a set or sequence and each value of type 'CubePrimitive'"
        self._cubes = value

    @builtins.property
    def spheres(self):
        """Message field 'spheres'."""
        return self._spheres

    @spheres.setter
    def spheres(self, value):
        if __debug__:
            from foxglove_msgs.msg import SpherePrimitive
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
                 all(isinstance(v, SpherePrimitive) for v in value) and
                 True), \
                "The 'spheres' field must be a set or sequence and each value of type 'SpherePrimitive'"
        self._spheres = value

    @builtins.property
    def cylinders(self):
        """Message field 'cylinders'."""
        return self._cylinders

    @cylinders.setter
    def cylinders(self, value):
        if __debug__:
            from foxglove_msgs.msg import CylinderPrimitive
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
                 all(isinstance(v, CylinderPrimitive) for v in value) and
                 True), \
                "The 'cylinders' field must be a set or sequence and each value of type 'CylinderPrimitive'"
        self._cylinders = value

    @builtins.property
    def lines(self):
        """Message field 'lines'."""
        return self._lines

    @lines.setter
    def lines(self, value):
        if __debug__:
            from foxglove_msgs.msg import LinePrimitive
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
                 all(isinstance(v, LinePrimitive) for v in value) and
                 True), \
                "The 'lines' field must be a set or sequence and each value of type 'LinePrimitive'"
        self._lines = value

    @builtins.property
    def triangles(self):
        """Message field 'triangles'."""
        return self._triangles

    @triangles.setter
    def triangles(self, value):
        if __debug__:
            from foxglove_msgs.msg import TriangleListPrimitive
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
                 all(isinstance(v, TriangleListPrimitive) for v in value) and
                 True), \
                "The 'triangles' field must be a set or sequence and each value of type 'TriangleListPrimitive'"
        self._triangles = value

    @builtins.property
    def texts(self):
        """Message field 'texts'."""
        return self._texts

    @texts.setter
    def texts(self, value):
        if __debug__:
            from foxglove_msgs.msg import TextPrimitive
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
                 all(isinstance(v, TextPrimitive) for v in value) and
                 True), \
                "The 'texts' field must be a set or sequence and each value of type 'TextPrimitive'"
        self._texts = value

    @builtins.property
    def models(self):
        """Message field 'models'."""
        return self._models

    @models.setter
    def models(self, value):
        if __debug__:
            from foxglove_msgs.msg import ModelPrimitive
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
                 all(isinstance(v, ModelPrimitive) for v in value) and
                 True), \
                "The 'models' field must be a set or sequence and each value of type 'ModelPrimitive'"
        self._models = value
