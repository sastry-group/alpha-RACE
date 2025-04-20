# generated from rosidl_generator_py/resource/_idl.py.em
# with input from foxglove_msgs:msg/SceneEntityUpdate.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SceneEntityUpdate(type):
    """Metaclass of message 'SceneEntityUpdate'."""

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
                'foxglove_msgs.msg.SceneEntityUpdate')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__scene_entity_update
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__scene_entity_update
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__scene_entity_update
            cls._TYPE_SUPPORT = module.type_support_msg__msg__scene_entity_update
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__scene_entity_update

            from foxglove_msgs.msg import SceneEntity
            if SceneEntity.__class__._TYPE_SUPPORT is None:
                SceneEntity.__class__.__import_type_support__()

            from foxglove_msgs.msg import SceneEntityDeletion
            if SceneEntityDeletion.__class__._TYPE_SUPPORT is None:
                SceneEntityDeletion.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SceneEntityUpdate(metaclass=Metaclass_SceneEntityUpdate):
    """Message class 'SceneEntityUpdate'."""

    __slots__ = [
        '_deletions',
        '_entities',
    ]

    _fields_and_field_types = {
        'deletions': 'sequence<foxglove_msgs/SceneEntityDeletion>',
        'entities': 'sequence<foxglove_msgs/SceneEntity>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['foxglove_msgs', 'msg'], 'SceneEntityDeletion')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['foxglove_msgs', 'msg'], 'SceneEntity')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.deletions = kwargs.get('deletions', [])
        self.entities = kwargs.get('entities', [])

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
        if self.entities != other.entities:
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
            from foxglove_msgs.msg import SceneEntityDeletion
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
                 all(isinstance(v, SceneEntityDeletion) for v in value) and
                 True), \
                "The 'deletions' field must be a set or sequence and each value of type 'SceneEntityDeletion'"
        self._deletions = value

    @builtins.property
    def entities(self):
        """Message field 'entities'."""
        return self._entities

    @entities.setter
    def entities(self, value):
        if __debug__:
            from foxglove_msgs.msg import SceneEntity
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
                 all(isinstance(v, SceneEntity) for v in value) and
                 True), \
                "The 'entities' field must be a set or sequence and each value of type 'SceneEntity'"
        self._entities = value
