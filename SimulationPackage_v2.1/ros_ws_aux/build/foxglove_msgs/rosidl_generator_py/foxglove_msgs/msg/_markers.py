# generated from rosidl_generator_py/resource/_idl.py.em
# with input from foxglove_msgs:msg/Markers.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Markers(type):
    """Metaclass of message 'Markers'."""

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
                'foxglove_msgs.msg.Markers')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__markers
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__markers
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__markers
            cls._TYPE_SUPPORT = module.type_support_msg__msg__markers
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__markers

            from foxglove_msgs.msg import ArrowMarker
            if ArrowMarker.__class__._TYPE_SUPPORT is None:
                ArrowMarker.__class__.__import_type_support__()

            from foxglove_msgs.msg import ConeListMarker
            if ConeListMarker.__class__._TYPE_SUPPORT is None:
                ConeListMarker.__class__.__import_type_support__()

            from foxglove_msgs.msg import CubeListMarker
            if CubeListMarker.__class__._TYPE_SUPPORT is None:
                CubeListMarker.__class__.__import_type_support__()

            from foxglove_msgs.msg import LineMarker
            if LineMarker.__class__._TYPE_SUPPORT is None:
                LineMarker.__class__.__import_type_support__()

            from foxglove_msgs.msg import MarkerDeletion
            if MarkerDeletion.__class__._TYPE_SUPPORT is None:
                MarkerDeletion.__class__.__import_type_support__()

            from foxglove_msgs.msg import ModelMarker
            if ModelMarker.__class__._TYPE_SUPPORT is None:
                ModelMarker.__class__.__import_type_support__()

            from foxglove_msgs.msg import SphereListMarker
            if SphereListMarker.__class__._TYPE_SUPPORT is None:
                SphereListMarker.__class__.__import_type_support__()

            from foxglove_msgs.msg import TextMarker
            if TextMarker.__class__._TYPE_SUPPORT is None:
                TextMarker.__class__.__import_type_support__()

            from foxglove_msgs.msg import TriangleListMarker
            if TriangleListMarker.__class__._TYPE_SUPPORT is None:
                TriangleListMarker.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Markers(metaclass=Metaclass_Markers):
    """Message class 'Markers'."""

    __slots__ = [
        '_deletions',
        '_arrows',
        '_cubes',
        '_spheres',
        '_cones',
        '_lines',
        '_triangles',
        '_texts',
        '_models',
    ]

    _fields_and_field_types = {
        'deletions': 'sequence<foxglove_msgs/MarkerDeletion>',
        'arrows': 'sequence<foxglove_msgs/ArrowMarker>',
        'cubes': 'sequence<foxglove_msgs/CubeListMarker>',
        'spheres': 'sequence<foxglove_msgs/SphereListMarker>',
        'cones': 'sequence<foxglove_msgs/ConeListMarker>',
        'lines': 'sequence<foxglove_msgs/LineMarker>',
        'triangles': 'sequence<foxglove_msgs/TriangleListMarker>',
        'texts': 'sequence<foxglove_msgs/TextMarker>',
        'models': 'sequence<foxglove_msgs/ModelMarker>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['foxglove_msgs', 'msg'], 'MarkerDeletion')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['foxglove_msgs', 'msg'], 'ArrowMarker')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['foxglove_msgs', 'msg'], 'CubeListMarker')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['foxglove_msgs', 'msg'], 'SphereListMarker')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['foxglove_msgs', 'msg'], 'ConeListMarker')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['foxglove_msgs', 'msg'], 'LineMarker')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['foxglove_msgs', 'msg'], 'TriangleListMarker')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['foxglove_msgs', 'msg'], 'TextMarker')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['foxglove_msgs', 'msg'], 'ModelMarker')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.deletions = kwargs.get('deletions', [])
        self.arrows = kwargs.get('arrows', [])
        self.cubes = kwargs.get('cubes', [])
        self.spheres = kwargs.get('spheres', [])
        self.cones = kwargs.get('cones', [])
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
        if self.deletions != other.deletions:
            return False
        if self.arrows != other.arrows:
            return False
        if self.cubes != other.cubes:
            return False
        if self.spheres != other.spheres:
            return False
        if self.cones != other.cones:
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
    def deletions(self):
        """Message field 'deletions'."""
        return self._deletions

    @deletions.setter
    def deletions(self, value):
        if __debug__:
            from foxglove_msgs.msg import MarkerDeletion
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
                 all(isinstance(v, MarkerDeletion) for v in value) and
                 True), \
                "The 'deletions' field must be a set or sequence and each value of type 'MarkerDeletion'"
        self._deletions = value

    @builtins.property
    def arrows(self):
        """Message field 'arrows'."""
        return self._arrows

    @arrows.setter
    def arrows(self, value):
        if __debug__:
            from foxglove_msgs.msg import ArrowMarker
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
                 all(isinstance(v, ArrowMarker) for v in value) and
                 True), \
                "The 'arrows' field must be a set or sequence and each value of type 'ArrowMarker'"
        self._arrows = value

    @builtins.property
    def cubes(self):
        """Message field 'cubes'."""
        return self._cubes

    @cubes.setter
    def cubes(self, value):
        if __debug__:
            from foxglove_msgs.msg import CubeListMarker
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
                 all(isinstance(v, CubeListMarker) for v in value) and
                 True), \
                "The 'cubes' field must be a set or sequence and each value of type 'CubeListMarker'"
        self._cubes = value

    @builtins.property
    def spheres(self):
        """Message field 'spheres'."""
        return self._spheres

    @spheres.setter
    def spheres(self, value):
        if __debug__:
            from foxglove_msgs.msg import SphereListMarker
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
                 all(isinstance(v, SphereListMarker) for v in value) and
                 True), \
                "The 'spheres' field must be a set or sequence and each value of type 'SphereListMarker'"
        self._spheres = value

    @builtins.property
    def cones(self):
        """Message field 'cones'."""
        return self._cones

    @cones.setter
    def cones(self, value):
        if __debug__:
            from foxglove_msgs.msg import ConeListMarker
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
                 all(isinstance(v, ConeListMarker) for v in value) and
                 True), \
                "The 'cones' field must be a set or sequence and each value of type 'ConeListMarker'"
        self._cones = value

    @builtins.property
    def lines(self):
        """Message field 'lines'."""
        return self._lines

    @lines.setter
    def lines(self, value):
        if __debug__:
            from foxglove_msgs.msg import LineMarker
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
                 all(isinstance(v, LineMarker) for v in value) and
                 True), \
                "The 'lines' field must be a set or sequence and each value of type 'LineMarker'"
        self._lines = value

    @builtins.property
    def triangles(self):
        """Message field 'triangles'."""
        return self._triangles

    @triangles.setter
    def triangles(self, value):
        if __debug__:
            from foxglove_msgs.msg import TriangleListMarker
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
                 all(isinstance(v, TriangleListMarker) for v in value) and
                 True), \
                "The 'triangles' field must be a set or sequence and each value of type 'TriangleListMarker'"
        self._triangles = value

    @builtins.property
    def texts(self):
        """Message field 'texts'."""
        return self._texts

    @texts.setter
    def texts(self, value):
        if __debug__:
            from foxglove_msgs.msg import TextMarker
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
                 all(isinstance(v, TextMarker) for v in value) and
                 True), \
                "The 'texts' field must be a set or sequence and each value of type 'TextMarker'"
        self._texts = value

    @builtins.property
    def models(self):
        """Message field 'models'."""
        return self._models

    @models.setter
    def models(self, value):
        if __debug__:
            from foxglove_msgs.msg import ModelMarker
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
                 all(isinstance(v, ModelMarker) for v in value) and
                 True), \
                "The 'models' field must be a set or sequence and each value of type 'ModelMarker'"
        self._models = value
