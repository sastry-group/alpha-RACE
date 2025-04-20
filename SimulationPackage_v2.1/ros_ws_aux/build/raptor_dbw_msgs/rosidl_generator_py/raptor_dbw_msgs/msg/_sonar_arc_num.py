# generated from rosidl_generator_py/resource/_idl.py.em
# with input from raptor_dbw_msgs:msg/SonarArcNum.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SonarArcNum(type):
    """Metaclass of message 'SonarArcNum'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'NO_DISTANCE': 0,
        'ARC1': 1,
        'ARC2': 2,
        'ARC3': 3,
        'ARC4': 4,
        'ARC5': 5,
        'ARC6': 6,
        'ARC7': 7,
        'ARC8': 8,
        'NO_ARC': 15,
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('raptor_dbw_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'raptor_dbw_msgs.msg.SonarArcNum')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__sonar_arc_num
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__sonar_arc_num
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__sonar_arc_num
            cls._TYPE_SUPPORT = module.type_support_msg__msg__sonar_arc_num
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__sonar_arc_num

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'NO_DISTANCE': cls.__constants['NO_DISTANCE'],
            'ARC1': cls.__constants['ARC1'],
            'ARC2': cls.__constants['ARC2'],
            'ARC3': cls.__constants['ARC3'],
            'ARC4': cls.__constants['ARC4'],
            'ARC5': cls.__constants['ARC5'],
            'ARC6': cls.__constants['ARC6'],
            'ARC7': cls.__constants['ARC7'],
            'ARC8': cls.__constants['ARC8'],
            'NO_ARC': cls.__constants['NO_ARC'],
        }

    @property
    def NO_DISTANCE(self):
        """Message constant 'NO_DISTANCE'."""
        return Metaclass_SonarArcNum.__constants['NO_DISTANCE']

    @property
    def ARC1(self):
        """Message constant 'ARC1'."""
        return Metaclass_SonarArcNum.__constants['ARC1']

    @property
    def ARC2(self):
        """Message constant 'ARC2'."""
        return Metaclass_SonarArcNum.__constants['ARC2']

    @property
    def ARC3(self):
        """Message constant 'ARC3'."""
        return Metaclass_SonarArcNum.__constants['ARC3']

    @property
    def ARC4(self):
        """Message constant 'ARC4'."""
        return Metaclass_SonarArcNum.__constants['ARC4']

    @property
    def ARC5(self):
        """Message constant 'ARC5'."""
        return Metaclass_SonarArcNum.__constants['ARC5']

    @property
    def ARC6(self):
        """Message constant 'ARC6'."""
        return Metaclass_SonarArcNum.__constants['ARC6']

    @property
    def ARC7(self):
        """Message constant 'ARC7'."""
        return Metaclass_SonarArcNum.__constants['ARC7']

    @property
    def ARC8(self):
        """Message constant 'ARC8'."""
        return Metaclass_SonarArcNum.__constants['ARC8']

    @property
    def NO_ARC(self):
        """Message constant 'NO_ARC'."""
        return Metaclass_SonarArcNum.__constants['NO_ARC']


class SonarArcNum(metaclass=Metaclass_SonarArcNum):
    """
    Message class 'SonarArcNum'.

    Constants:
      NO_DISTANCE
      ARC1
      ARC2
      ARC3
      ARC4
      ARC5
      ARC6
      ARC7
      ARC8
      NO_ARC
    """

    __slots__ = [
        '_status',
    ]

    _fields_and_field_types = {
        'status': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.status = kwargs.get('status', int())

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
        if self.status != other.status:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def status(self):
        """Message field 'status'."""
        return self._status

    @status.setter
    def status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'status' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'status' field must be an unsigned integer in [0, 255]"
        self._status = value
