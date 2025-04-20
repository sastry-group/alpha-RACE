# generated from rosidl_generator_py/resource/_idl.py.em
# with input from autonoma_msgs:msg/VehicleData.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_VehicleData(type):
    """Metaclass of message 'VehicleData'."""

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
            module = import_type_support('autonoma_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'autonoma_msgs.msg.VehicleData')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__vehicle_data
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__vehicle_data
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__vehicle_data
            cls._TYPE_SUPPORT = module.type_support_msg__msg__vehicle_data
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__vehicle_data

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


class VehicleData(metaclass=Metaclass_VehicleData):
    """Message class 'VehicleData'."""

    __slots__ = [
        '_header',
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
        '_fl_brake_temp',
        '_fr_brake_temp',
        '_rl_brake_temp',
        '_rr_brake_temp',
        '_battery_voltage',
        '_safety_switch_state',
        '_mode_switch_state',
        '_sys_state',
        '_accel_pedal_input',
        '_accel_pedal_output',
        '_front_brake_pressure',
        '_rear_brake_pressure',
        '_steering_wheel_angle',
        '_steering_wheel_angle_cmd',
        '_steering_wheel_torque',
        '_ws_front_left',
        '_ws_front_right',
        '_ws_rear_left',
        '_ws_rear_right',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'fl_tire_temperature': 'float',
        'fl_damper_linear_potentiometer': 'float',
        'fl_tire_pressure': 'float',
        'fl_tire_pressure_gauge': 'float',
        'fl_wheel_load': 'float',
        'fr_tire_temperature': 'float',
        'fr_damper_linear_potentiometer': 'float',
        'fr_tire_pressure': 'float',
        'fr_tire_pressure_gauge': 'float',
        'fr_wheel_load': 'float',
        'rl_tire_temperature': 'float',
        'rl_damper_linear_potentiometer': 'float',
        'rl_tire_pressure': 'float',
        'rl_tire_pressure_gauge': 'float',
        'rl_wheel_load': 'float',
        'rr_tire_temperature': 'float',
        'rr_damper_linear_potentiometer': 'float',
        'rr_tire_pressure': 'float',
        'rr_tire_pressure_gauge': 'float',
        'rr_wheel_load': 'float',
        'fl_brake_temp': 'float',
        'fr_brake_temp': 'float',
        'rl_brake_temp': 'float',
        'rr_brake_temp': 'float',
        'battery_voltage': 'float',
        'safety_switch_state': 'uint8',
        'mode_switch_state': 'boolean',
        'sys_state': 'uint8',
        'accel_pedal_input': 'float',
        'accel_pedal_output': 'float',
        'front_brake_pressure': 'float',
        'rear_brake_pressure': 'float',
        'steering_wheel_angle': 'float',
        'steering_wheel_angle_cmd': 'float',
        'steering_wheel_torque': 'float',
        'ws_front_left': 'float',
        'ws_front_right': 'float',
        'ws_rear_left': 'float',
        'ws_rear_right': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
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
        self.fl_tire_temperature = kwargs.get('fl_tire_temperature', float())
        self.fl_damper_linear_potentiometer = kwargs.get('fl_damper_linear_potentiometer', float())
        self.fl_tire_pressure = kwargs.get('fl_tire_pressure', float())
        self.fl_tire_pressure_gauge = kwargs.get('fl_tire_pressure_gauge', float())
        self.fl_wheel_load = kwargs.get('fl_wheel_load', float())
        self.fr_tire_temperature = kwargs.get('fr_tire_temperature', float())
        self.fr_damper_linear_potentiometer = kwargs.get('fr_damper_linear_potentiometer', float())
        self.fr_tire_pressure = kwargs.get('fr_tire_pressure', float())
        self.fr_tire_pressure_gauge = kwargs.get('fr_tire_pressure_gauge', float())
        self.fr_wheel_load = kwargs.get('fr_wheel_load', float())
        self.rl_tire_temperature = kwargs.get('rl_tire_temperature', float())
        self.rl_damper_linear_potentiometer = kwargs.get('rl_damper_linear_potentiometer', float())
        self.rl_tire_pressure = kwargs.get('rl_tire_pressure', float())
        self.rl_tire_pressure_gauge = kwargs.get('rl_tire_pressure_gauge', float())
        self.rl_wheel_load = kwargs.get('rl_wheel_load', float())
        self.rr_tire_temperature = kwargs.get('rr_tire_temperature', float())
        self.rr_damper_linear_potentiometer = kwargs.get('rr_damper_linear_potentiometer', float())
        self.rr_tire_pressure = kwargs.get('rr_tire_pressure', float())
        self.rr_tire_pressure_gauge = kwargs.get('rr_tire_pressure_gauge', float())
        self.rr_wheel_load = kwargs.get('rr_wheel_load', float())
        self.fl_brake_temp = kwargs.get('fl_brake_temp', float())
        self.fr_brake_temp = kwargs.get('fr_brake_temp', float())
        self.rl_brake_temp = kwargs.get('rl_brake_temp', float())
        self.rr_brake_temp = kwargs.get('rr_brake_temp', float())
        self.battery_voltage = kwargs.get('battery_voltage', float())
        self.safety_switch_state = kwargs.get('safety_switch_state', int())
        self.mode_switch_state = kwargs.get('mode_switch_state', bool())
        self.sys_state = kwargs.get('sys_state', int())
        self.accel_pedal_input = kwargs.get('accel_pedal_input', float())
        self.accel_pedal_output = kwargs.get('accel_pedal_output', float())
        self.front_brake_pressure = kwargs.get('front_brake_pressure', float())
        self.rear_brake_pressure = kwargs.get('rear_brake_pressure', float())
        self.steering_wheel_angle = kwargs.get('steering_wheel_angle', float())
        self.steering_wheel_angle_cmd = kwargs.get('steering_wheel_angle_cmd', float())
        self.steering_wheel_torque = kwargs.get('steering_wheel_torque', float())
        self.ws_front_left = kwargs.get('ws_front_left', float())
        self.ws_front_right = kwargs.get('ws_front_right', float())
        self.ws_rear_left = kwargs.get('ws_rear_left', float())
        self.ws_rear_right = kwargs.get('ws_rear_right', float())

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
        if self.fl_brake_temp != other.fl_brake_temp:
            return False
        if self.fr_brake_temp != other.fr_brake_temp:
            return False
        if self.rl_brake_temp != other.rl_brake_temp:
            return False
        if self.rr_brake_temp != other.rr_brake_temp:
            return False
        if self.battery_voltage != other.battery_voltage:
            return False
        if self.safety_switch_state != other.safety_switch_state:
            return False
        if self.mode_switch_state != other.mode_switch_state:
            return False
        if self.sys_state != other.sys_state:
            return False
        if self.accel_pedal_input != other.accel_pedal_input:
            return False
        if self.accel_pedal_output != other.accel_pedal_output:
            return False
        if self.front_brake_pressure != other.front_brake_pressure:
            return False
        if self.rear_brake_pressure != other.rear_brake_pressure:
            return False
        if self.steering_wheel_angle != other.steering_wheel_angle:
            return False
        if self.steering_wheel_angle_cmd != other.steering_wheel_angle_cmd:
            return False
        if self.steering_wheel_torque != other.steering_wheel_torque:
            return False
        if self.ws_front_left != other.ws_front_left:
            return False
        if self.ws_front_right != other.ws_front_right:
            return False
        if self.ws_rear_left != other.ws_rear_left:
            return False
        if self.ws_rear_right != other.ws_rear_right:
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
    def fl_tire_temperature(self):
        """Message field 'fl_tire_temperature'."""
        return self._fl_tire_temperature

    @fl_tire_temperature.setter
    def fl_tire_temperature(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'fl_tire_temperature' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'fl_tire_temperature' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._fl_tire_temperature = value

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
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'fr_tire_temperature' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'fr_tire_temperature' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._fr_tire_temperature = value

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
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'rl_tire_temperature' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'rl_tire_temperature' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._rl_tire_temperature = value

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
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'rr_tire_temperature' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'rr_tire_temperature' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._rr_tire_temperature = value

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

    @builtins.property
    def fl_brake_temp(self):
        """Message field 'fl_brake_temp'."""
        return self._fl_brake_temp

    @fl_brake_temp.setter
    def fl_brake_temp(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'fl_brake_temp' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'fl_brake_temp' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._fl_brake_temp = value

    @builtins.property
    def fr_brake_temp(self):
        """Message field 'fr_brake_temp'."""
        return self._fr_brake_temp

    @fr_brake_temp.setter
    def fr_brake_temp(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'fr_brake_temp' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'fr_brake_temp' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._fr_brake_temp = value

    @builtins.property
    def rl_brake_temp(self):
        """Message field 'rl_brake_temp'."""
        return self._rl_brake_temp

    @rl_brake_temp.setter
    def rl_brake_temp(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'rl_brake_temp' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'rl_brake_temp' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._rl_brake_temp = value

    @builtins.property
    def rr_brake_temp(self):
        """Message field 'rr_brake_temp'."""
        return self._rr_brake_temp

    @rr_brake_temp.setter
    def rr_brake_temp(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'rr_brake_temp' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'rr_brake_temp' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._rr_brake_temp = value

    @builtins.property
    def battery_voltage(self):
        """Message field 'battery_voltage'."""
        return self._battery_voltage

    @battery_voltage.setter
    def battery_voltage(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'battery_voltage' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'battery_voltage' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._battery_voltage = value

    @builtins.property
    def safety_switch_state(self):
        """Message field 'safety_switch_state'."""
        return self._safety_switch_state

    @safety_switch_state.setter
    def safety_switch_state(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'safety_switch_state' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'safety_switch_state' field must be an unsigned integer in [0, 255]"
        self._safety_switch_state = value

    @builtins.property
    def mode_switch_state(self):
        """Message field 'mode_switch_state'."""
        return self._mode_switch_state

    @mode_switch_state.setter
    def mode_switch_state(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'mode_switch_state' field must be of type 'bool'"
        self._mode_switch_state = value

    @builtins.property
    def sys_state(self):
        """Message field 'sys_state'."""
        return self._sys_state

    @sys_state.setter
    def sys_state(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'sys_state' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'sys_state' field must be an unsigned integer in [0, 255]"
        self._sys_state = value

    @builtins.property
    def accel_pedal_input(self):
        """Message field 'accel_pedal_input'."""
        return self._accel_pedal_input

    @accel_pedal_input.setter
    def accel_pedal_input(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'accel_pedal_input' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'accel_pedal_input' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._accel_pedal_input = value

    @builtins.property
    def accel_pedal_output(self):
        """Message field 'accel_pedal_output'."""
        return self._accel_pedal_output

    @accel_pedal_output.setter
    def accel_pedal_output(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'accel_pedal_output' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'accel_pedal_output' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._accel_pedal_output = value

    @builtins.property
    def front_brake_pressure(self):
        """Message field 'front_brake_pressure'."""
        return self._front_brake_pressure

    @front_brake_pressure.setter
    def front_brake_pressure(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'front_brake_pressure' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'front_brake_pressure' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._front_brake_pressure = value

    @builtins.property
    def rear_brake_pressure(self):
        """Message field 'rear_brake_pressure'."""
        return self._rear_brake_pressure

    @rear_brake_pressure.setter
    def rear_brake_pressure(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'rear_brake_pressure' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'rear_brake_pressure' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._rear_brake_pressure = value

    @builtins.property
    def steering_wheel_angle(self):
        """Message field 'steering_wheel_angle'."""
        return self._steering_wheel_angle

    @steering_wheel_angle.setter
    def steering_wheel_angle(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'steering_wheel_angle' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'steering_wheel_angle' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._steering_wheel_angle = value

    @builtins.property
    def steering_wheel_angle_cmd(self):
        """Message field 'steering_wheel_angle_cmd'."""
        return self._steering_wheel_angle_cmd

    @steering_wheel_angle_cmd.setter
    def steering_wheel_angle_cmd(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'steering_wheel_angle_cmd' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'steering_wheel_angle_cmd' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._steering_wheel_angle_cmd = value

    @builtins.property
    def steering_wheel_torque(self):
        """Message field 'steering_wheel_torque'."""
        return self._steering_wheel_torque

    @steering_wheel_torque.setter
    def steering_wheel_torque(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'steering_wheel_torque' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'steering_wheel_torque' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._steering_wheel_torque = value

    @builtins.property
    def ws_front_left(self):
        """Message field 'ws_front_left'."""
        return self._ws_front_left

    @ws_front_left.setter
    def ws_front_left(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'ws_front_left' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'ws_front_left' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._ws_front_left = value

    @builtins.property
    def ws_front_right(self):
        """Message field 'ws_front_right'."""
        return self._ws_front_right

    @ws_front_right.setter
    def ws_front_right(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'ws_front_right' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'ws_front_right' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._ws_front_right = value

    @builtins.property
    def ws_rear_left(self):
        """Message field 'ws_rear_left'."""
        return self._ws_rear_left

    @ws_rear_left.setter
    def ws_rear_left(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'ws_rear_left' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'ws_rear_left' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._ws_rear_left = value

    @builtins.property
    def ws_rear_right(self):
        """Message field 'ws_rear_right'."""
        return self._ws_rear_right

    @ws_rear_right.setter
    def ws_rear_right(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'ws_rear_right' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'ws_rear_right' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._ws_rear_right = value
