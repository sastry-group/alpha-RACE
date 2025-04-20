# generated from rosidl_generator_py/resource/_idl.py.em
# with input from raptor_dbw_msgs:msg/MotecReport.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_MotecReport(type):
    """Metaclass of message 'MotecReport'."""

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
                'raptor_dbw_msgs.msg.MotecReport')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__motec_report
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__motec_report
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__motec_report
            cls._TYPE_SUPPORT = module.type_support_msg__msg__motec_report
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__motec_report

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


class MotecReport(metaclass=Metaclass_MotecReport):
    """Message class 'MotecReport'."""

    __slots__ = [
        '_header',
        '_engine_speed',
        '_inlet_manifold_pressure',
        '_inlet_air_temperature',
        '_throttle_position',
        '_fuel_pressure_sensor',
        '_engine_efficiency',
        '_throttle_pedal',
        '_engine_load',
        '_engine_oil_temperature',
        '_ambient_temperature',
        '_engine_oil_pressure',
        '_boost_pressure',
        '_boost_aim',
        '_wheel_speed_front_left',
        '_wheel_speed_front_right',
        '_wheel_speed_rear_left',
        '_wheel_speed_rear_right',
        '_engine_run_time',
        '_ecu_up_time',
        '_ecu_battery_voltage',
        '_warning_source',
        '_coolant_temperature',
        '_coolant_temperature_warning',
        '_coolant_pressure_warning',
        '_engine_speed_warning',
        '_engine_oil_temperature_warning',
        '_engine_oil_pressure_warning',
        '_crankcase_pressure_warning',
        '_fuel_pressure_warning',
        '_fuel_used',
        '_knock_warning',
        '_engine_state',
        '_fuel_pump_state',
        '_launch_state',
        '_boost_aim_state',
        '_knock_state',
        '_throttle_aim_state',
        '_engine_speed_reference_state',
        '_gear',
        '_engine_speed_limit_state',
        '_engine_run_time_total',
        '_driver_switch_1',
        '_driver_switch_2',
        '_driver_switch_3',
        '_exhaust_lambda',
        '_fuel_pressure_direct_b1',
        '_fuel_pressure_direct_b1_aim',
        '_fuel_pressure_direct_b1_control',
        '_vehicle_speed',
        '_gearratio',
        '_gear_100hz',
        '_gear_shift',
        '_gear_shift_req',
        '_torque_wheels',
        '_fr_wheel_speed_sensor_fault',
        '_fl_wheel_speed_sensor_fault',
        '_rr_wheel_speed_sensor_fault',
        '_rl_wheel_speed_sensor_fault',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'engine_speed': 'uint16',
        'inlet_manifold_pressure': 'float',
        'inlet_air_temperature': 'float',
        'throttle_position': 'float',
        'fuel_pressure_sensor': 'float',
        'engine_efficiency': 'uint8',
        'throttle_pedal': 'uint16',
        'engine_load': 'float',
        'engine_oil_temperature': 'float',
        'ambient_temperature': 'uint8',
        'engine_oil_pressure': 'uint16',
        'boost_pressure': 'float',
        'boost_aim': 'float',
        'wheel_speed_front_left': 'float',
        'wheel_speed_front_right': 'float',
        'wheel_speed_rear_left': 'float',
        'wheel_speed_rear_right': 'float',
        'engine_run_time': 'uint16',
        'ecu_up_time': 'uint16',
        'ecu_battery_voltage': 'float',
        'warning_source': 'uint8',
        'coolant_temperature': 'float',
        'coolant_temperature_warning': 'boolean',
        'coolant_pressure_warning': 'boolean',
        'engine_speed_warning': 'boolean',
        'engine_oil_temperature_warning': 'boolean',
        'engine_oil_pressure_warning': 'boolean',
        'crankcase_pressure_warning': 'boolean',
        'fuel_pressure_warning': 'boolean',
        'fuel_used': 'float',
        'knock_warning': 'boolean',
        'engine_state': 'float',
        'fuel_pump_state': 'float',
        'launch_state': 'float',
        'boost_aim_state': 'float',
        'knock_state': 'float',
        'throttle_aim_state': 'float',
        'engine_speed_reference_state': 'float',
        'gear': 'float',
        'engine_speed_limit_state': 'float',
        'engine_run_time_total': 'float',
        'driver_switch_1': 'float',
        'driver_switch_2': 'float',
        'driver_switch_3': 'float',
        'exhaust_lambda': 'float',
        'fuel_pressure_direct_b1': 'float',
        'fuel_pressure_direct_b1_aim': 'float',
        'fuel_pressure_direct_b1_control': 'float',
        'vehicle_speed': 'float',
        'gearratio': 'float',
        'gear_100hz': 'float',
        'gear_shift': 'float',
        'gear_shift_req': 'float',
        'torque_wheels': 'float',
        'fr_wheel_speed_sensor_fault': 'float',
        'fl_wheel_speed_sensor_fault': 'float',
        'rr_wheel_speed_sensor_fault': 'float',
        'rl_wheel_speed_sensor_fault': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
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
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.engine_speed = kwargs.get('engine_speed', int())
        self.inlet_manifold_pressure = kwargs.get('inlet_manifold_pressure', float())
        self.inlet_air_temperature = kwargs.get('inlet_air_temperature', float())
        self.throttle_position = kwargs.get('throttle_position', float())
        self.fuel_pressure_sensor = kwargs.get('fuel_pressure_sensor', float())
        self.engine_efficiency = kwargs.get('engine_efficiency', int())
        self.throttle_pedal = kwargs.get('throttle_pedal', int())
        self.engine_load = kwargs.get('engine_load', float())
        self.engine_oil_temperature = kwargs.get('engine_oil_temperature', float())
        self.ambient_temperature = kwargs.get('ambient_temperature', int())
        self.engine_oil_pressure = kwargs.get('engine_oil_pressure', int())
        self.boost_pressure = kwargs.get('boost_pressure', float())
        self.boost_aim = kwargs.get('boost_aim', float())
        self.wheel_speed_front_left = kwargs.get('wheel_speed_front_left', float())
        self.wheel_speed_front_right = kwargs.get('wheel_speed_front_right', float())
        self.wheel_speed_rear_left = kwargs.get('wheel_speed_rear_left', float())
        self.wheel_speed_rear_right = kwargs.get('wheel_speed_rear_right', float())
        self.engine_run_time = kwargs.get('engine_run_time', int())
        self.ecu_up_time = kwargs.get('ecu_up_time', int())
        self.ecu_battery_voltage = kwargs.get('ecu_battery_voltage', float())
        self.warning_source = kwargs.get('warning_source', int())
        self.coolant_temperature = kwargs.get('coolant_temperature', float())
        self.coolant_temperature_warning = kwargs.get('coolant_temperature_warning', bool())
        self.coolant_pressure_warning = kwargs.get('coolant_pressure_warning', bool())
        self.engine_speed_warning = kwargs.get('engine_speed_warning', bool())
        self.engine_oil_temperature_warning = kwargs.get('engine_oil_temperature_warning', bool())
        self.engine_oil_pressure_warning = kwargs.get('engine_oil_pressure_warning', bool())
        self.crankcase_pressure_warning = kwargs.get('crankcase_pressure_warning', bool())
        self.fuel_pressure_warning = kwargs.get('fuel_pressure_warning', bool())
        self.fuel_used = kwargs.get('fuel_used', float())
        self.knock_warning = kwargs.get('knock_warning', bool())
        self.engine_state = kwargs.get('engine_state', float())
        self.fuel_pump_state = kwargs.get('fuel_pump_state', float())
        self.launch_state = kwargs.get('launch_state', float())
        self.boost_aim_state = kwargs.get('boost_aim_state', float())
        self.knock_state = kwargs.get('knock_state', float())
        self.throttle_aim_state = kwargs.get('throttle_aim_state', float())
        self.engine_speed_reference_state = kwargs.get('engine_speed_reference_state', float())
        self.gear = kwargs.get('gear', float())
        self.engine_speed_limit_state = kwargs.get('engine_speed_limit_state', float())
        self.engine_run_time_total = kwargs.get('engine_run_time_total', float())
        self.driver_switch_1 = kwargs.get('driver_switch_1', float())
        self.driver_switch_2 = kwargs.get('driver_switch_2', float())
        self.driver_switch_3 = kwargs.get('driver_switch_3', float())
        self.exhaust_lambda = kwargs.get('exhaust_lambda', float())
        self.fuel_pressure_direct_b1 = kwargs.get('fuel_pressure_direct_b1', float())
        self.fuel_pressure_direct_b1_aim = kwargs.get('fuel_pressure_direct_b1_aim', float())
        self.fuel_pressure_direct_b1_control = kwargs.get('fuel_pressure_direct_b1_control', float())
        self.vehicle_speed = kwargs.get('vehicle_speed', float())
        self.gearratio = kwargs.get('gearratio', float())
        self.gear_100hz = kwargs.get('gear_100hz', float())
        self.gear_shift = kwargs.get('gear_shift', float())
        self.gear_shift_req = kwargs.get('gear_shift_req', float())
        self.torque_wheels = kwargs.get('torque_wheels', float())
        self.fr_wheel_speed_sensor_fault = kwargs.get('fr_wheel_speed_sensor_fault', float())
        self.fl_wheel_speed_sensor_fault = kwargs.get('fl_wheel_speed_sensor_fault', float())
        self.rr_wheel_speed_sensor_fault = kwargs.get('rr_wheel_speed_sensor_fault', float())
        self.rl_wheel_speed_sensor_fault = kwargs.get('rl_wheel_speed_sensor_fault', float())

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
        if self.engine_speed != other.engine_speed:
            return False
        if self.inlet_manifold_pressure != other.inlet_manifold_pressure:
            return False
        if self.inlet_air_temperature != other.inlet_air_temperature:
            return False
        if self.throttle_position != other.throttle_position:
            return False
        if self.fuel_pressure_sensor != other.fuel_pressure_sensor:
            return False
        if self.engine_efficiency != other.engine_efficiency:
            return False
        if self.throttle_pedal != other.throttle_pedal:
            return False
        if self.engine_load != other.engine_load:
            return False
        if self.engine_oil_temperature != other.engine_oil_temperature:
            return False
        if self.ambient_temperature != other.ambient_temperature:
            return False
        if self.engine_oil_pressure != other.engine_oil_pressure:
            return False
        if self.boost_pressure != other.boost_pressure:
            return False
        if self.boost_aim != other.boost_aim:
            return False
        if self.wheel_speed_front_left != other.wheel_speed_front_left:
            return False
        if self.wheel_speed_front_right != other.wheel_speed_front_right:
            return False
        if self.wheel_speed_rear_left != other.wheel_speed_rear_left:
            return False
        if self.wheel_speed_rear_right != other.wheel_speed_rear_right:
            return False
        if self.engine_run_time != other.engine_run_time:
            return False
        if self.ecu_up_time != other.ecu_up_time:
            return False
        if self.ecu_battery_voltage != other.ecu_battery_voltage:
            return False
        if self.warning_source != other.warning_source:
            return False
        if self.coolant_temperature != other.coolant_temperature:
            return False
        if self.coolant_temperature_warning != other.coolant_temperature_warning:
            return False
        if self.coolant_pressure_warning != other.coolant_pressure_warning:
            return False
        if self.engine_speed_warning != other.engine_speed_warning:
            return False
        if self.engine_oil_temperature_warning != other.engine_oil_temperature_warning:
            return False
        if self.engine_oil_pressure_warning != other.engine_oil_pressure_warning:
            return False
        if self.crankcase_pressure_warning != other.crankcase_pressure_warning:
            return False
        if self.fuel_pressure_warning != other.fuel_pressure_warning:
            return False
        if self.fuel_used != other.fuel_used:
            return False
        if self.knock_warning != other.knock_warning:
            return False
        if self.engine_state != other.engine_state:
            return False
        if self.fuel_pump_state != other.fuel_pump_state:
            return False
        if self.launch_state != other.launch_state:
            return False
        if self.boost_aim_state != other.boost_aim_state:
            return False
        if self.knock_state != other.knock_state:
            return False
        if self.throttle_aim_state != other.throttle_aim_state:
            return False
        if self.engine_speed_reference_state != other.engine_speed_reference_state:
            return False
        if self.gear != other.gear:
            return False
        if self.engine_speed_limit_state != other.engine_speed_limit_state:
            return False
        if self.engine_run_time_total != other.engine_run_time_total:
            return False
        if self.driver_switch_1 != other.driver_switch_1:
            return False
        if self.driver_switch_2 != other.driver_switch_2:
            return False
        if self.driver_switch_3 != other.driver_switch_3:
            return False
        if self.exhaust_lambda != other.exhaust_lambda:
            return False
        if self.fuel_pressure_direct_b1 != other.fuel_pressure_direct_b1:
            return False
        if self.fuel_pressure_direct_b1_aim != other.fuel_pressure_direct_b1_aim:
            return False
        if self.fuel_pressure_direct_b1_control != other.fuel_pressure_direct_b1_control:
            return False
        if self.vehicle_speed != other.vehicle_speed:
            return False
        if self.gearratio != other.gearratio:
            return False
        if self.gear_100hz != other.gear_100hz:
            return False
        if self.gear_shift != other.gear_shift:
            return False
        if self.gear_shift_req != other.gear_shift_req:
            return False
        if self.torque_wheels != other.torque_wheels:
            return False
        if self.fr_wheel_speed_sensor_fault != other.fr_wheel_speed_sensor_fault:
            return False
        if self.fl_wheel_speed_sensor_fault != other.fl_wheel_speed_sensor_fault:
            return False
        if self.rr_wheel_speed_sensor_fault != other.rr_wheel_speed_sensor_fault:
            return False
        if self.rl_wheel_speed_sensor_fault != other.rl_wheel_speed_sensor_fault:
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
    def engine_speed(self):
        """Message field 'engine_speed'."""
        return self._engine_speed

    @engine_speed.setter
    def engine_speed(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'engine_speed' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'engine_speed' field must be an unsigned integer in [0, 65535]"
        self._engine_speed = value

    @builtins.property
    def inlet_manifold_pressure(self):
        """Message field 'inlet_manifold_pressure'."""
        return self._inlet_manifold_pressure

    @inlet_manifold_pressure.setter
    def inlet_manifold_pressure(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'inlet_manifold_pressure' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'inlet_manifold_pressure' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._inlet_manifold_pressure = value

    @builtins.property
    def inlet_air_temperature(self):
        """Message field 'inlet_air_temperature'."""
        return self._inlet_air_temperature

    @inlet_air_temperature.setter
    def inlet_air_temperature(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'inlet_air_temperature' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'inlet_air_temperature' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._inlet_air_temperature = value

    @builtins.property
    def throttle_position(self):
        """Message field 'throttle_position'."""
        return self._throttle_position

    @throttle_position.setter
    def throttle_position(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'throttle_position' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'throttle_position' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._throttle_position = value

    @builtins.property
    def fuel_pressure_sensor(self):
        """Message field 'fuel_pressure_sensor'."""
        return self._fuel_pressure_sensor

    @fuel_pressure_sensor.setter
    def fuel_pressure_sensor(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'fuel_pressure_sensor' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'fuel_pressure_sensor' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._fuel_pressure_sensor = value

    @builtins.property
    def engine_efficiency(self):
        """Message field 'engine_efficiency'."""
        return self._engine_efficiency

    @engine_efficiency.setter
    def engine_efficiency(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'engine_efficiency' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'engine_efficiency' field must be an unsigned integer in [0, 255]"
        self._engine_efficiency = value

    @builtins.property
    def throttle_pedal(self):
        """Message field 'throttle_pedal'."""
        return self._throttle_pedal

    @throttle_pedal.setter
    def throttle_pedal(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'throttle_pedal' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'throttle_pedal' field must be an unsigned integer in [0, 65535]"
        self._throttle_pedal = value

    @builtins.property
    def engine_load(self):
        """Message field 'engine_load'."""
        return self._engine_load

    @engine_load.setter
    def engine_load(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'engine_load' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'engine_load' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._engine_load = value

    @builtins.property
    def engine_oil_temperature(self):
        """Message field 'engine_oil_temperature'."""
        return self._engine_oil_temperature

    @engine_oil_temperature.setter
    def engine_oil_temperature(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'engine_oil_temperature' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'engine_oil_temperature' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._engine_oil_temperature = value

    @builtins.property
    def ambient_temperature(self):
        """Message field 'ambient_temperature'."""
        return self._ambient_temperature

    @ambient_temperature.setter
    def ambient_temperature(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'ambient_temperature' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'ambient_temperature' field must be an unsigned integer in [0, 255]"
        self._ambient_temperature = value

    @builtins.property
    def engine_oil_pressure(self):
        """Message field 'engine_oil_pressure'."""
        return self._engine_oil_pressure

    @engine_oil_pressure.setter
    def engine_oil_pressure(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'engine_oil_pressure' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'engine_oil_pressure' field must be an unsigned integer in [0, 65535]"
        self._engine_oil_pressure = value

    @builtins.property
    def boost_pressure(self):
        """Message field 'boost_pressure'."""
        return self._boost_pressure

    @boost_pressure.setter
    def boost_pressure(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'boost_pressure' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'boost_pressure' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._boost_pressure = value

    @builtins.property
    def boost_aim(self):
        """Message field 'boost_aim'."""
        return self._boost_aim

    @boost_aim.setter
    def boost_aim(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'boost_aim' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'boost_aim' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._boost_aim = value

    @builtins.property
    def wheel_speed_front_left(self):
        """Message field 'wheel_speed_front_left'."""
        return self._wheel_speed_front_left

    @wheel_speed_front_left.setter
    def wheel_speed_front_left(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'wheel_speed_front_left' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'wheel_speed_front_left' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._wheel_speed_front_left = value

    @builtins.property
    def wheel_speed_front_right(self):
        """Message field 'wheel_speed_front_right'."""
        return self._wheel_speed_front_right

    @wheel_speed_front_right.setter
    def wheel_speed_front_right(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'wheel_speed_front_right' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'wheel_speed_front_right' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._wheel_speed_front_right = value

    @builtins.property
    def wheel_speed_rear_left(self):
        """Message field 'wheel_speed_rear_left'."""
        return self._wheel_speed_rear_left

    @wheel_speed_rear_left.setter
    def wheel_speed_rear_left(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'wheel_speed_rear_left' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'wheel_speed_rear_left' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._wheel_speed_rear_left = value

    @builtins.property
    def wheel_speed_rear_right(self):
        """Message field 'wheel_speed_rear_right'."""
        return self._wheel_speed_rear_right

    @wheel_speed_rear_right.setter
    def wheel_speed_rear_right(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'wheel_speed_rear_right' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'wheel_speed_rear_right' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._wheel_speed_rear_right = value

    @builtins.property
    def engine_run_time(self):
        """Message field 'engine_run_time'."""
        return self._engine_run_time

    @engine_run_time.setter
    def engine_run_time(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'engine_run_time' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'engine_run_time' field must be an unsigned integer in [0, 65535]"
        self._engine_run_time = value

    @builtins.property
    def ecu_up_time(self):
        """Message field 'ecu_up_time'."""
        return self._ecu_up_time

    @ecu_up_time.setter
    def ecu_up_time(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'ecu_up_time' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'ecu_up_time' field must be an unsigned integer in [0, 65535]"
        self._ecu_up_time = value

    @builtins.property
    def ecu_battery_voltage(self):
        """Message field 'ecu_battery_voltage'."""
        return self._ecu_battery_voltage

    @ecu_battery_voltage.setter
    def ecu_battery_voltage(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'ecu_battery_voltage' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'ecu_battery_voltage' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._ecu_battery_voltage = value

    @builtins.property
    def warning_source(self):
        """Message field 'warning_source'."""
        return self._warning_source

    @warning_source.setter
    def warning_source(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'warning_source' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'warning_source' field must be an unsigned integer in [0, 255]"
        self._warning_source = value

    @builtins.property
    def coolant_temperature(self):
        """Message field 'coolant_temperature'."""
        return self._coolant_temperature

    @coolant_temperature.setter
    def coolant_temperature(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'coolant_temperature' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'coolant_temperature' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._coolant_temperature = value

    @builtins.property
    def coolant_temperature_warning(self):
        """Message field 'coolant_temperature_warning'."""
        return self._coolant_temperature_warning

    @coolant_temperature_warning.setter
    def coolant_temperature_warning(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'coolant_temperature_warning' field must be of type 'bool'"
        self._coolant_temperature_warning = value

    @builtins.property
    def coolant_pressure_warning(self):
        """Message field 'coolant_pressure_warning'."""
        return self._coolant_pressure_warning

    @coolant_pressure_warning.setter
    def coolant_pressure_warning(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'coolant_pressure_warning' field must be of type 'bool'"
        self._coolant_pressure_warning = value

    @builtins.property
    def engine_speed_warning(self):
        """Message field 'engine_speed_warning'."""
        return self._engine_speed_warning

    @engine_speed_warning.setter
    def engine_speed_warning(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'engine_speed_warning' field must be of type 'bool'"
        self._engine_speed_warning = value

    @builtins.property
    def engine_oil_temperature_warning(self):
        """Message field 'engine_oil_temperature_warning'."""
        return self._engine_oil_temperature_warning

    @engine_oil_temperature_warning.setter
    def engine_oil_temperature_warning(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'engine_oil_temperature_warning' field must be of type 'bool'"
        self._engine_oil_temperature_warning = value

    @builtins.property
    def engine_oil_pressure_warning(self):
        """Message field 'engine_oil_pressure_warning'."""
        return self._engine_oil_pressure_warning

    @engine_oil_pressure_warning.setter
    def engine_oil_pressure_warning(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'engine_oil_pressure_warning' field must be of type 'bool'"
        self._engine_oil_pressure_warning = value

    @builtins.property
    def crankcase_pressure_warning(self):
        """Message field 'crankcase_pressure_warning'."""
        return self._crankcase_pressure_warning

    @crankcase_pressure_warning.setter
    def crankcase_pressure_warning(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'crankcase_pressure_warning' field must be of type 'bool'"
        self._crankcase_pressure_warning = value

    @builtins.property
    def fuel_pressure_warning(self):
        """Message field 'fuel_pressure_warning'."""
        return self._fuel_pressure_warning

    @fuel_pressure_warning.setter
    def fuel_pressure_warning(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'fuel_pressure_warning' field must be of type 'bool'"
        self._fuel_pressure_warning = value

    @builtins.property
    def fuel_used(self):
        """Message field 'fuel_used'."""
        return self._fuel_used

    @fuel_used.setter
    def fuel_used(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'fuel_used' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'fuel_used' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._fuel_used = value

    @builtins.property
    def knock_warning(self):
        """Message field 'knock_warning'."""
        return self._knock_warning

    @knock_warning.setter
    def knock_warning(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'knock_warning' field must be of type 'bool'"
        self._knock_warning = value

    @builtins.property
    def engine_state(self):
        """Message field 'engine_state'."""
        return self._engine_state

    @engine_state.setter
    def engine_state(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'engine_state' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'engine_state' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._engine_state = value

    @builtins.property
    def fuel_pump_state(self):
        """Message field 'fuel_pump_state'."""
        return self._fuel_pump_state

    @fuel_pump_state.setter
    def fuel_pump_state(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'fuel_pump_state' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'fuel_pump_state' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._fuel_pump_state = value

    @builtins.property
    def launch_state(self):
        """Message field 'launch_state'."""
        return self._launch_state

    @launch_state.setter
    def launch_state(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'launch_state' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'launch_state' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._launch_state = value

    @builtins.property
    def boost_aim_state(self):
        """Message field 'boost_aim_state'."""
        return self._boost_aim_state

    @boost_aim_state.setter
    def boost_aim_state(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'boost_aim_state' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'boost_aim_state' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._boost_aim_state = value

    @builtins.property
    def knock_state(self):
        """Message field 'knock_state'."""
        return self._knock_state

    @knock_state.setter
    def knock_state(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'knock_state' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'knock_state' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._knock_state = value

    @builtins.property
    def throttle_aim_state(self):
        """Message field 'throttle_aim_state'."""
        return self._throttle_aim_state

    @throttle_aim_state.setter
    def throttle_aim_state(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'throttle_aim_state' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'throttle_aim_state' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._throttle_aim_state = value

    @builtins.property
    def engine_speed_reference_state(self):
        """Message field 'engine_speed_reference_state'."""
        return self._engine_speed_reference_state

    @engine_speed_reference_state.setter
    def engine_speed_reference_state(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'engine_speed_reference_state' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'engine_speed_reference_state' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._engine_speed_reference_state = value

    @builtins.property
    def gear(self):
        """Message field 'gear'."""
        return self._gear

    @gear.setter
    def gear(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'gear' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'gear' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._gear = value

    @builtins.property
    def engine_speed_limit_state(self):
        """Message field 'engine_speed_limit_state'."""
        return self._engine_speed_limit_state

    @engine_speed_limit_state.setter
    def engine_speed_limit_state(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'engine_speed_limit_state' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'engine_speed_limit_state' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._engine_speed_limit_state = value

    @builtins.property
    def engine_run_time_total(self):
        """Message field 'engine_run_time_total'."""
        return self._engine_run_time_total

    @engine_run_time_total.setter
    def engine_run_time_total(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'engine_run_time_total' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'engine_run_time_total' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._engine_run_time_total = value

    @builtins.property
    def driver_switch_1(self):
        """Message field 'driver_switch_1'."""
        return self._driver_switch_1

    @driver_switch_1.setter
    def driver_switch_1(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'driver_switch_1' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'driver_switch_1' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._driver_switch_1 = value

    @builtins.property
    def driver_switch_2(self):
        """Message field 'driver_switch_2'."""
        return self._driver_switch_2

    @driver_switch_2.setter
    def driver_switch_2(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'driver_switch_2' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'driver_switch_2' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._driver_switch_2 = value

    @builtins.property
    def driver_switch_3(self):
        """Message field 'driver_switch_3'."""
        return self._driver_switch_3

    @driver_switch_3.setter
    def driver_switch_3(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'driver_switch_3' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'driver_switch_3' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._driver_switch_3 = value

    @builtins.property
    def exhaust_lambda(self):
        """Message field 'exhaust_lambda'."""
        return self._exhaust_lambda

    @exhaust_lambda.setter
    def exhaust_lambda(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'exhaust_lambda' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'exhaust_lambda' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._exhaust_lambda = value

    @builtins.property
    def fuel_pressure_direct_b1(self):
        """Message field 'fuel_pressure_direct_b1'."""
        return self._fuel_pressure_direct_b1

    @fuel_pressure_direct_b1.setter
    def fuel_pressure_direct_b1(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'fuel_pressure_direct_b1' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'fuel_pressure_direct_b1' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._fuel_pressure_direct_b1 = value

    @builtins.property
    def fuel_pressure_direct_b1_aim(self):
        """Message field 'fuel_pressure_direct_b1_aim'."""
        return self._fuel_pressure_direct_b1_aim

    @fuel_pressure_direct_b1_aim.setter
    def fuel_pressure_direct_b1_aim(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'fuel_pressure_direct_b1_aim' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'fuel_pressure_direct_b1_aim' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._fuel_pressure_direct_b1_aim = value

    @builtins.property
    def fuel_pressure_direct_b1_control(self):
        """Message field 'fuel_pressure_direct_b1_control'."""
        return self._fuel_pressure_direct_b1_control

    @fuel_pressure_direct_b1_control.setter
    def fuel_pressure_direct_b1_control(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'fuel_pressure_direct_b1_control' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'fuel_pressure_direct_b1_control' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._fuel_pressure_direct_b1_control = value

    @builtins.property
    def vehicle_speed(self):
        """Message field 'vehicle_speed'."""
        return self._vehicle_speed

    @vehicle_speed.setter
    def vehicle_speed(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'vehicle_speed' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'vehicle_speed' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._vehicle_speed = value

    @builtins.property
    def gearratio(self):
        """Message field 'gearratio'."""
        return self._gearratio

    @gearratio.setter
    def gearratio(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'gearratio' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'gearratio' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._gearratio = value

    @builtins.property
    def gear_100hz(self):
        """Message field 'gear_100hz'."""
        return self._gear_100hz

    @gear_100hz.setter
    def gear_100hz(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'gear_100hz' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'gear_100hz' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._gear_100hz = value

    @builtins.property
    def gear_shift(self):
        """Message field 'gear_shift'."""
        return self._gear_shift

    @gear_shift.setter
    def gear_shift(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'gear_shift' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'gear_shift' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._gear_shift = value

    @builtins.property
    def gear_shift_req(self):
        """Message field 'gear_shift_req'."""
        return self._gear_shift_req

    @gear_shift_req.setter
    def gear_shift_req(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'gear_shift_req' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'gear_shift_req' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._gear_shift_req = value

    @builtins.property
    def torque_wheels(self):
        """Message field 'torque_wheels'."""
        return self._torque_wheels

    @torque_wheels.setter
    def torque_wheels(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'torque_wheels' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'torque_wheels' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._torque_wheels = value

    @builtins.property
    def fr_wheel_speed_sensor_fault(self):
        """Message field 'fr_wheel_speed_sensor_fault'."""
        return self._fr_wheel_speed_sensor_fault

    @fr_wheel_speed_sensor_fault.setter
    def fr_wheel_speed_sensor_fault(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'fr_wheel_speed_sensor_fault' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'fr_wheel_speed_sensor_fault' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._fr_wheel_speed_sensor_fault = value

    @builtins.property
    def fl_wheel_speed_sensor_fault(self):
        """Message field 'fl_wheel_speed_sensor_fault'."""
        return self._fl_wheel_speed_sensor_fault

    @fl_wheel_speed_sensor_fault.setter
    def fl_wheel_speed_sensor_fault(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'fl_wheel_speed_sensor_fault' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'fl_wheel_speed_sensor_fault' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._fl_wheel_speed_sensor_fault = value

    @builtins.property
    def rr_wheel_speed_sensor_fault(self):
        """Message field 'rr_wheel_speed_sensor_fault'."""
        return self._rr_wheel_speed_sensor_fault

    @rr_wheel_speed_sensor_fault.setter
    def rr_wheel_speed_sensor_fault(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'rr_wheel_speed_sensor_fault' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'rr_wheel_speed_sensor_fault' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._rr_wheel_speed_sensor_fault = value

    @builtins.property
    def rl_wheel_speed_sensor_fault(self):
        """Message field 'rl_wheel_speed_sensor_fault'."""
        return self._rl_wheel_speed_sensor_fault

    @rl_wheel_speed_sensor_fault.setter
    def rl_wheel_speed_sensor_fault(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'rl_wheel_speed_sensor_fault' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'rl_wheel_speed_sensor_fault' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._rl_wheel_speed_sensor_fault = value
