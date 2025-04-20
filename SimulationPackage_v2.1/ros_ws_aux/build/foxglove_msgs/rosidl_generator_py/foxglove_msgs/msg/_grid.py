# generated from rosidl_generator_py/resource/_idl.py.em
# with input from foxglove_msgs:msg/Grid.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'data'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Grid(type):
    """Metaclass of message 'Grid'."""

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
                'foxglove_msgs.msg.Grid')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__grid
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__grid
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__grid
            cls._TYPE_SUPPORT = module.type_support_msg__msg__grid
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__grid

            from builtin_interfaces.msg import Time
            if Time.__class__._TYPE_SUPPORT is None:
                Time.__class__.__import_type_support__()

            from foxglove_msgs.msg import PackedElementField
            if PackedElementField.__class__._TYPE_SUPPORT is None:
                PackedElementField.__class__.__import_type_support__()

            from foxglove_msgs.msg import Vector2
            if Vector2.__class__._TYPE_SUPPORT is None:
                Vector2.__class__.__import_type_support__()

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


class Grid(metaclass=Metaclass_Grid):
    """Message class 'Grid'."""

    __slots__ = [
        '_timestamp',
        '_frame_id',
        '_pose',
        '_column_count',
        '_cell_size',
        '_row_stride',
        '_cell_stride',
        '_fields',
        '_data',
    ]

    _fields_and_field_types = {
        'timestamp': 'builtin_interfaces/Time',
        'frame_id': 'string',
        'pose': 'geometry_msgs/Pose',
        'column_count': 'uint32',
        'cell_size': 'foxglove_msgs/Vector2',
        'row_stride': 'uint32',
        'cell_stride': 'uint32',
        'fields': 'sequence<foxglove_msgs/PackedElementField>',
        'data': 'sequence<uint8>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Time'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Pose'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['foxglove_msgs', 'msg'], 'Vector2'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['foxglove_msgs', 'msg'], 'PackedElementField')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint8')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from builtin_interfaces.msg import Time
        self.timestamp = kwargs.get('timestamp', Time())
        self.frame_id = kwargs.get('frame_id', str())
        from geometry_msgs.msg import Pose
        self.pose = kwargs.get('pose', Pose())
        self.column_count = kwargs.get('column_count', int())
        from foxglove_msgs.msg import Vector2
        self.cell_size = kwargs.get('cell_size', Vector2())
        self.row_stride = kwargs.get('row_stride', int())
        self.cell_stride = kwargs.get('cell_stride', int())
        self.fields = kwargs.get('fields', [])
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
        if self.timestamp != other.timestamp:
            return False
        if self.frame_id != other.frame_id:
            return False
        if self.pose != other.pose:
            return False
        if self.column_count != other.column_count:
            return False
        if self.cell_size != other.cell_size:
            return False
        if self.row_stride != other.row_stride:
            return False
        if self.cell_stride != other.cell_stride:
            return False
        if self.fields != other.fields:
            return False
        if self.data != other.data:
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
    def column_count(self):
        """Message field 'column_count'."""
        return self._column_count

    @column_count.setter
    def column_count(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'column_count' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'column_count' field must be an unsigned integer in [0, 4294967295]"
        self._column_count = value

    @builtins.property
    def cell_size(self):
        """Message field 'cell_size'."""
        return self._cell_size

    @cell_size.setter
    def cell_size(self, value):
        if __debug__:
            from foxglove_msgs.msg import Vector2
            assert \
                isinstance(value, Vector2), \
                "The 'cell_size' field must be a sub message of type 'Vector2'"
        self._cell_size = value

    @builtins.property
    def row_stride(self):
        """Message field 'row_stride'."""
        return self._row_stride

    @row_stride.setter
    def row_stride(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'row_stride' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'row_stride' field must be an unsigned integer in [0, 4294967295]"
        self._row_stride = value

    @builtins.property
    def cell_stride(self):
        """Message field 'cell_stride'."""
        return self._cell_stride

    @cell_stride.setter
    def cell_stride(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'cell_stride' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'cell_stride' field must be an unsigned integer in [0, 4294967295]"
        self._cell_stride = value

    @builtins.property
    def fields(self):
        """Message field 'fields'."""
        return self._fields

    @fields.setter
    def fields(self, value):
        if __debug__:
            from foxglove_msgs.msg import PackedElementField
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
                 all(isinstance(v, PackedElementField) for v in value) and
                 True), \
                "The 'fields' field must be a set or sequence and each value of type 'PackedElementField'"
        self._fields = value

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
