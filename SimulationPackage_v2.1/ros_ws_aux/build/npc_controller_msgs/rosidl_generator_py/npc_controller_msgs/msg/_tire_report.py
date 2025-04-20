# generated from rosidl_generator_py/resource/_idl.py.em
# with input from npc_controller_msgs:msg/TireReport.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'fl_tire_temperature'
# Member 'fr_tire_temperature'
# Member 'rl_tire_temperature'
# Member 'rr_tire_temperature'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_TireReport(type):
    """Metaclass of message 'TireReport'."""

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
            module = import_type_support('npc_controller_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'npc_controller_msgs.msg.TireReport')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__tire_report
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__tire_report
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__tire_report
            cls._TYPE_SUPPORT = module.type_support_msg__msg__tire_report
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__tire_report

            from builtin_interfaces.msg import Time
            if Time.__class__._TYPE_SUPPORT is None:
                Time.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class TireReport(metaclass=Metaclass_TireReport):
    """Message class 'TireReport'."""

    __slots__ = [
        '_stamp',
        '_fl_tire_temperature',
        '_fl_damper_linear_potentiometer',
        '_fl_tire_pressure',
        '_fl_tire_pressure_gauge',
        '_fl_wheel_load',
        '_fr_tire_temperature',
        '_fr_damper_linear_potentiometer',
        '_fr_tire_pressure',
        '_fr_tire_pressure_gauge',
        '_fr_wheel_load',
        '_rl_tire_temperature',
        '_rl_damper_linear_potentiometer',
        '_rl_tire_pressure',
        '_rl_tire_pressure_gauge',
        '_rl_wheel_load',
        '_rr_tire_temperature',
        '_rr_damper_linear_potentiometer',
        '_rr_tire_pressure',
        '_rr_tire_pressure_gauge',
        '_rr_wheel_load',
    ]

    _fields_and_field_types = {
        'stamp': 'builtin_interfaces/Time',
        'fl_tire_temperature': 'sequence<float>',
        'fl_damper_linear_potentiometer': 'float',
        'fl_tire_pressure': 'float',
        'fl_tire_pressure_gauge': 'float',
        'fl_wheel_load': 'float',
        'fr_tire_temperature': 'sequence<float>',
        'fr_damper_linear_potentiometer': 'float',
        'fr_tire_pressure': 'float',
        'fr_tire_pressure_gauge': 'float',
        'fr_wheel_load': 'float',
        'rl_tire_temperature': 'sequence<float>',
        'rl_damper_linear_potentiometer': 'float',
        'rl_tire_pressure': 'float',
        'rl_tire_pressure_gauge': 'float',
        'rl_wheel_load': 'float',
        'rr_tire_temperature': 'sequence<float>',
        'rr_damper_linear_potentiometer': 'float',
        'rr_tire_pressure': 'float',
        'rr_tire_pressure_gauge': 'float',
        'rr_wheel_load': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Time'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from builtin_interfaces.msg import Time
        self.stamp = kwargs.get('stamp', Time())
        self.fl_tire_temperature = array.array('f', kwargs.get('fl_tire_temperature', []))
        self.fl_damper_linear_potentiometer = kwargs.get('fl_damper_linear_potentiometer', float())
        self.fl_tire_pressure = kwargs.get('fl_tire_pressure', float())
        self.fl_tire_pressure_gauge = kwargs.get('fl_tire_pressure_gauge', float())
        self.fl_wheel_load = kwargs.get('fl_wheel_load', float())
        self.fr_tire_temperature = array.array('f', kwargs.get('fr_tire_temperature', []))
        self.fr_damper_linear_potentiometer = kwargs.get('fr_damper_linear_potentiometer', float())
        self.fr_tire_pressure = kwargs.get('fr_tire_pressure', float())
        self.fr_tire_pressure_gauge = kwargs.get('fr_tire_pressure_gauge', float())
        self.fr_wheel_load = kwargs.get('fr_wheel_load', float())
        self.rl_tire_temperature = array.array('f', kwargs.get('rl_tire_temperature', []))
        self.rl_damper_linear_potentiometer = kwargs.get('rl_damper_linear_potentiometer', float())
        self.rl_tire_pressure = kwargs.get('rl_tire_pressure', float())
        self.rl_tire_pressure_gauge = kwargs.get('rl_tire_pressure_gauge', float())
        self.rl_wheel_load = kwargs.get('rl_wheel_load', float())
        self.rr_tire_temperature = array.array('f', kwargs.get('rr_tire_temperature', []))
        self.rr_damper_linear_potentiometer = kwargs.get('rr_damper_linear_potentiometer', float())
        self.rr_tire_pressure = kwargs.get('rr_tire_pressure', float())
        self.rr_tire_pressure_gauge = kwargs.get('rr_tire_pressure_gauge', float())
        self.rr_wheel_load = kwargs.get('rr_wheel_load', float())

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
        if self.stamp != other.stamp:
            return False
        if self.fl_tire_temperature != other.fl_tire_temperature:
            return False
        if self.fl_damper_linear_potentiometer != other.fl_damper_linear_potentiometer:
            return False
        if self.fl_tire_pressure != other.fl_tire_pressure:
            return False
        if self.fl_tire_pressure_gauge != other.fl_tire_pressure_gauge:
            return False
        if self.fl_wheel_load != other.fl_wheel_load:
            return False
        if self.fr_tire_temperature != other.fr_tire_temperature:
            return False
        if self.fr_damper_linear_potentiometer != other.fr_damper_linear_potentiometer:
            return False
        if self.fr_tire_pressure != other.fr_tire_pressure:
            return False
        if self.fr_tire_pressure_gauge != other.fr_tire_pressure_gauge:
            return False
        if self.fr_wheel_load != other.fr_wheel_load:
            return False
        if self.rl_tire_temperature != other.rl_tire_temperature:
            return False
        if self.rl_damper_linear_potentiometer != other.rl_damper_linear_potentiometer:
            return False
        if self.rl_tire_pressure != other.rl_tire_pressure:
            return False
        if self.rl_tire_pressure_gauge != other.rl_tire_pressure_gauge:
            return False
        if self.rl_wheel_load != other.rl_wheel_load:
            return False
        if self.rr_tire_temperature != other.rr_tire_temperature:
            return False
        if self.rr_damper_linear_potentiometer != other.rr_damper_linear_potentiometer:
            return False
        if self.rr_tire_pressure != other.rr_tire_pressure:
            return False
        if self.rr_tire_pressure_gauge != other.rr_tire_pressure_gauge:
            return False
        if self.rr_wheel_load != other.rr_wheel_load:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def stamp(self):
        """Message field 'stamp'."""
        return self._stamp

    @stamp.setter
    def stamp(self, value):
        if __debug__:
            from builtin_interfaces.msg import Time
            assert \
                isinstance(value, Time), \
                "The 'stamp' field must be a sub message of type 'Time'"
        self._stamp = value

    @builtins.property
    def fl_tire_temperature(self):
        """Message field 'fl_tire_temperature'."""
        return self._fl_tire_temperature

    @fl_tire_temperature.setter
    def fl_tire_temperature(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'fl_tire_temperature' array.array() must have the type code of 'f'"
            self._fl_tire_temperature = value
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
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'fl_tire_temperature' field must be a set or sequence and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._fl_tire_temperature = array.array('f', value)

    @builtins.property
    def fl_damper_linear_potentiometer(self):
        """Message field 'fl_damper_linear_potentiometer'."""
        return self._fl_damper_linear_potentiometer

    @fl_damper_linear_potentiometer.setter
    def fl_damper_linear_potentiometer(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'fl_damper_linear_potentiometer' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'fl_damper_linear_potentiometer' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._fl_damper_linear_potentiometer = value

    @builtins.property
    def fl_tire_pressure(self):
        """Message field 'fl_tire_pressure'."""
        return self._fl_tire_pressure

    @fl_tire_pressure.setter
    def fl_tire_pressure(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'fl_tire_pressure' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'fl_tire_pressure' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._fl_tire_pressure = value

    @builtins.property
    def fl_tire_pressure_gauge(self):
        """Message field 'fl_tire_pressure_gauge'."""
        return self._fl_tire_pressure_gauge

    @fl_tire_pressure_gauge.setter
    def fl_tire_pressure_gauge(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'fl_tire_pressure_gauge' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'fl_tire_pressure_gauge' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._fl_tire_pressure_gauge = value

    @builtins.property
    def fl_wheel_load(self):
        """Message field 'fl_wheel_load'."""
        return self._fl_wheel_load

    @fl_wheel_load.setter
    def fl_wheel_load(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'fl_wheel_load' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'fl_wheel_load' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._fl_wheel_load = value

    @builtins.property
    def fr_tire_temperature(self):
        """Message field 'fr_tire_temperature'."""
        return self._fr_tire_temperature

    @fr_tire_temperature.setter
    def fr_tire_temperature(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'fr_tire_temperature' array.array() must have the type code of 'f'"
            self._fr_tire_temperature = value
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
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'fr_tire_temperature' field must be a set or sequence and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._fr_tire_temperature = array.array('f', value)

    @builtins.property
    def fr_damper_linear_potentiometer(self):
        """Message field 'fr_damper_linear_potentiometer'."""
        return self._fr_damper_linear_potentiometer

    @fr_damper_linear_potentiometer.setter
    def fr_damper_linear_potentiometer(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'fr_damper_linear_potentiometer' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'fr_damper_linear_potentiometer' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._fr_damper_linear_potentiometer = value

    @builtins.property
    def fr_tire_pressure(self):
        """Message field 'fr_tire_pressure'."""
        return self._fr_tire_pressure

    @fr_tire_pressure.setter
    def fr_tire_pressure(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'fr_tire_pressure' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'fr_tire_pressure' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._fr_tire_pressure = value

    @builtins.property
    def fr_tire_pressure_gauge(self):
        """Message field 'fr_tire_pressure_gauge'."""
        return self._fr_tire_pressure_gauge

    @fr_tire_pressure_gauge.setter
    def fr_tire_pressure_gauge(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'fr_tire_pressure_gauge' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'fr_tire_pressure_gauge' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._fr_tire_pressure_gauge = value

    @builtins.property
    def fr_wheel_load(self):
        """Message field 'fr_wheel_load'."""
        return self._fr_wheel_load

    @fr_wheel_load.setter
    def fr_wheel_load(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'fr_wheel_load' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'fr_wheel_load' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._fr_wheel_load = value

    @builtins.property
    def rl_tire_temperature(self):
        """Message field 'rl_tire_temperature'."""
        return self._rl_tire_temperature

    @rl_tire_temperature.setter
    def rl_tire_temperature(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'rl_tire_temperature' array.array() must have the type code of 'f'"
            self._rl_tire_temperature = value
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
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'rl_tire_temperature' field must be a set or sequence and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._rl_tire_temperature = array.array('f', value)

    @builtins.property
    def rl_damper_linear_potentiometer(self):
        """Message field 'rl_damper_linear_potentiometer'."""
        return self._rl_damper_linear_potentiometer

    @rl_damper_linear_potentiometer.setter
    def rl_damper_linear_potentiometer(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'rl_damper_linear_potentiometer' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'rl_damper_linear_potentiometer' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._rl_damper_linear_potentiometer = value

    @builtins.property
    def rl_tire_pressure(self):
        """Message field 'rl_tire_pressure'."""
        return self._rl_tire_pressure

    @rl_tire_pressure.setter
    def rl_tire_pressure(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'rl_tire_pressure' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'rl_tire_pressure' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._rl_tire_pressure = value

    @builtins.property
    def rl_tire_pressure_gauge(self):
        """Message field 'rl_tire_pressure_gauge'."""
        return self._rl_tire_pressure_gauge

    @rl_tire_pressure_gauge.setter
    def rl_tire_pressure_gauge(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'rl_tire_pressure_gauge' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'rl_tire_pressure_gauge' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._rl_tire_pressure_gauge = value

    @builtins.property
    def rl_wheel_load(self):
        """Message field 'rl_wheel_load'."""
        return self._rl_wheel_load

    @rl_wheel_load.setter
    def rl_wheel_load(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'rl_wheel_load' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'rl_wheel_load' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._rl_wheel_load = value

    @builtins.property
    def rr_tire_temperature(self):
        """Message field 'rr_tire_temperature'."""
        return self._rr_tire_temperature

    @rr_tire_temperature.setter
    def rr_tire_temperature(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'rr_tire_temperature' array.array() must have the type code of 'f'"
            self._rr_tire_temperature = value
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
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'rr_tire_temperature' field must be a set or sequence and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._rr_tire_temperature = array.array('f', value)

    @builtins.property
    def rr_damper_linear_potentiometer(self):
        """Message field 'rr_damper_linear_potentiometer'."""
        return self._rr_damper_linear_potentiometer

    @rr_damper_linear_potentiometer.setter
    def rr_damper_linear_potentiometer(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'rr_damper_linear_potentiometer' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'rr_damper_linear_potentiometer' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._rr_damper_linear_potentiometer = value

    @builtins.property
    def rr_tire_pressure(self):
        """Message field 'rr_tire_pressure'."""
        return self._rr_tire_pressure

    @rr_tire_pressure.setter
    def rr_tire_pressure(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'rr_tire_pressure' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'rr_tire_pressure' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._rr_tire_pressure = value

    @builtins.property
    def rr_tire_pressure_gauge(self):
        """Message field 'rr_tire_pressure_gauge'."""
        return self._rr_tire_pressure_gauge

    @rr_tire_pressure_gauge.setter
    def rr_tire_pressure_gauge(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'rr_tire_pressure_gauge' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'rr_tire_pressure_gauge' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._rr_tire_pressure_gauge = value

    @builtins.property
    def rr_wheel_load(self):
        """Message field 'rr_wheel_load'."""
        return self._rr_wheel_load

    @rr_wheel_load.setter
    def rr_wheel_load(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'rr_wheel_load' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'rr_wheel_load' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._rr_wheel_load = value
