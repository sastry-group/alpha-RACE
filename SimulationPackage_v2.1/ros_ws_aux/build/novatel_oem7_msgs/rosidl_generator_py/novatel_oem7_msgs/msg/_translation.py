# generated from rosidl_generator_py/resource/_idl.py.em
# with input from novatel_oem7_msgs:msg/Translation.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Translation(type):
    """Metaclass of message 'Translation'."""

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
            module = import_type_support('novatel_oem7_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'novatel_oem7_msgs.msg.Translation')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__translation
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__translation
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__translation
            cls._TYPE_SUPPORT = module.type_support_msg__msg__translation
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__translation

            from novatel_oem7_msgs.msg import INSFrame
            if INSFrame.__class__._TYPE_SUPPORT is None:
                INSFrame.__class__.__import_type_support__()

            from novatel_oem7_msgs.msg import INSSourceStatus
            if INSSourceStatus.__class__._TYPE_SUPPORT is None:
                INSSourceStatus.__class__.__import_type_support__()

            from novatel_oem7_msgs.msg import TranslationOffset
            if TranslationOffset.__class__._TYPE_SUPPORT is None:
                TranslationOffset.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Translation(metaclass=Metaclass_Translation):
    """Message class 'Translation'."""

    __slots__ = [
        '_translation',
        '_frame',
        '_x_offset',
        '_y_offset',
        '_z_offset',
        '_x_uncertainty',
        '_y_uncertainty',
        '_z_uncertainty',
        '_translation_source',
    ]

    _fields_and_field_types = {
        'translation': 'novatel_oem7_msgs/TranslationOffset',
        'frame': 'novatel_oem7_msgs/INSFrame',
        'x_offset': 'float',
        'y_offset': 'float',
        'z_offset': 'float',
        'x_uncertainty': 'float',
        'y_uncertainty': 'float',
        'z_uncertainty': 'float',
        'translation_source': 'novatel_oem7_msgs/INSSourceStatus',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['novatel_oem7_msgs', 'msg'], 'TranslationOffset'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['novatel_oem7_msgs', 'msg'], 'INSFrame'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['novatel_oem7_msgs', 'msg'], 'INSSourceStatus'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from novatel_oem7_msgs.msg import TranslationOffset
        self.translation = kwargs.get('translation', TranslationOffset())
        from novatel_oem7_msgs.msg import INSFrame
        self.frame = kwargs.get('frame', INSFrame())
        self.x_offset = kwargs.get('x_offset', float())
        self.y_offset = kwargs.get('y_offset', float())
        self.z_offset = kwargs.get('z_offset', float())
        self.x_uncertainty = kwargs.get('x_uncertainty', float())
        self.y_uncertainty = kwargs.get('y_uncertainty', float())
        self.z_uncertainty = kwargs.get('z_uncertainty', float())
        from novatel_oem7_msgs.msg import INSSourceStatus
        self.translation_source = kwargs.get('translation_source', INSSourceStatus())

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
        if self.translation != other.translation:
            return False
        if self.frame != other.frame:
            return False
        if self.x_offset != other.x_offset:
            return False
        if self.y_offset != other.y_offset:
            return False
        if self.z_offset != other.z_offset:
            return False
        if self.x_uncertainty != other.x_uncertainty:
            return False
        if self.y_uncertainty != other.y_uncertainty:
            return False
        if self.z_uncertainty != other.z_uncertainty:
            return False
        if self.translation_source != other.translation_source:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def translation(self):
        """Message field 'translation'."""
        return self._translation

    @translation.setter
    def translation(self, value):
        if __debug__:
            from novatel_oem7_msgs.msg import TranslationOffset
            assert \
                isinstance(value, TranslationOffset), \
                "The 'translation' field must be a sub message of type 'TranslationOffset'"
        self._translation = value

    @builtins.property
    def frame(self):
        """Message field 'frame'."""
        return self._frame

    @frame.setter
    def frame(self, value):
        if __debug__:
            from novatel_oem7_msgs.msg import INSFrame
            assert \
                isinstance(value, INSFrame), \
                "The 'frame' field must be a sub message of type 'INSFrame'"
        self._frame = value

    @builtins.property
    def x_offset(self):
        """Message field 'x_offset'."""
        return self._x_offset

    @x_offset.setter
    def x_offset(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'x_offset' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'x_offset' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._x_offset = value

    @builtins.property
    def y_offset(self):
        """Message field 'y_offset'."""
        return self._y_offset

    @y_offset.setter
    def y_offset(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'y_offset' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'y_offset' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._y_offset = value

    @builtins.property
    def z_offset(self):
        """Message field 'z_offset'."""
        return self._z_offset

    @z_offset.setter
    def z_offset(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'z_offset' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'z_offset' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._z_offset = value

    @builtins.property
    def x_uncertainty(self):
        """Message field 'x_uncertainty'."""
        return self._x_uncertainty

    @x_uncertainty.setter
    def x_uncertainty(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'x_uncertainty' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'x_uncertainty' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._x_uncertainty = value

    @builtins.property
    def y_uncertainty(self):
        """Message field 'y_uncertainty'."""
        return self._y_uncertainty

    @y_uncertainty.setter
    def y_uncertainty(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'y_uncertainty' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'y_uncertainty' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._y_uncertainty = value

    @builtins.property
    def z_uncertainty(self):
        """Message field 'z_uncertainty'."""
        return self._z_uncertainty

    @z_uncertainty.setter
    def z_uncertainty(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'z_uncertainty' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'z_uncertainty' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._z_uncertainty = value

    @builtins.property
    def translation_source(self):
        """Message field 'translation_source'."""
        return self._translation_source

    @translation_source.setter
    def translation_source(self, value):
        if __debug__:
            from novatel_oem7_msgs.msg import INSSourceStatus
            assert \
                isinstance(value, INSSourceStatus), \
                "The 'translation_source' field must be a sub message of type 'INSSourceStatus'"
        self._translation_source = value
