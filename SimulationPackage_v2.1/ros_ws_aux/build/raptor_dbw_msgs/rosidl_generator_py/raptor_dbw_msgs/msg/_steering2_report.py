# generated from rosidl_generator_py/resource/_idl.py.em
# with input from raptor_dbw_msgs:msg/Steering2Report.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Steering2Report(type):
    """Metaclass of message 'Steering2Report'."""

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
            module = import_type_support('raptor_dbw_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'raptor_dbw_msgs.msg.Steering2Report')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__steering2_report
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__steering2_report
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__steering2_report
            cls._TYPE_SUPPORT = module.type_support_msg__msg__steering2_report
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__steering2_report

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Steering2Report(metaclass=Metaclass_Steering2Report):
    """Message class 'Steering2Report'."""

    __slots__ = [
        '_header',
        '_vehicle_curvature_actual',
        '_max_torque_driver',
        '_max_torque_motor',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'vehicle_curvature_actual': 'float',
        'max_torque_driver': 'float',
        'max_torque_motor': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.vehicle_curvature_actual = kwargs.get('vehicle_curvature_actual', float())
        self.max_torque_driver = kwargs.get('max_torque_driver', float())
        self.max_torque_motor = kwargs.get('max_torque_motor', float())

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
        if self.header != other.header:
            return False
        if self.vehicle_curvature_actual != other.vehicle_curvature_actual:
            return False
        if self.max_torque_driver != other.max_torque_driver:
            return False
        if self.max_torque_motor != other.max_torque_motor:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def header(self):
        """Message field 'header'."""
        return self._header

    @header.setter
    def header(self, value):
        if __debug__:
            from std_msgs.msg import Header
            assert \
                isinstance(value, Header), \
                "The 'header' field must be a sub message of type 'Header'"
        self._header = value

    @builtins.property
    def vehicle_curvature_actual(self):
        """Message field 'vehicle_curvature_actual'."""
        return self._vehicle_curvature_actual

    @vehicle_curvature_actual.setter
    def vehicle_curvature_actual(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'vehicle_curvature_actual' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'vehicle_curvature_actual' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._vehicle_curvature_actual = value

    @builtins.property
    def max_torque_driver(self):
        """Message field 'max_torque_driver'."""
        return self._max_torque_driver

    @max_torque_driver.setter
    def max_torque_driver(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'max_torque_driver' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'max_torque_driver' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._max_torque_driver = value

    @builtins.property
    def max_torque_motor(self):
        """Message field 'max_torque_motor'."""
        return self._max_torque_motor

    @max_torque_motor.setter
    def max_torque_motor(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'max_torque_motor' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'max_torque_motor' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._max_torque_motor = value
