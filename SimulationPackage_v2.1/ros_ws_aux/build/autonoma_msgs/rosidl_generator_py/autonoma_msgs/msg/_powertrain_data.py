# generated from rosidl_generator_py/resource/_idl.py.em
# with input from autonoma_msgs:msg/PowertrainData.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_PowertrainData(type):
    """Metaclass of message 'PowertrainData'."""

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
                'autonoma_msgs.msg.PowertrainData')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__powertrain_data
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__powertrain_data
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__powertrain_data
            cls._TYPE_SUPPORT = module.type_support_msg__msg__powertrain_data
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__powertrain_data

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


class PowertrainData(metaclass=Metaclass_PowertrainData):
    """Message class 'PowertrainData'."""

    __slots__ = [
        '_header',
        '_map_sensor',
        '_lambda_sensor',
        '_fuel_level',
        '_fuel_pressure',
        '_engine_oil_pressure',
        '_engine_oil_temperature',
        '_engine_coolant_temperature',
        '_engine_coolant_pressure',
        '_engine_rpm',
        '_engine_on_status',
        '_engine_run_switch_status',
        '_throttle_position',
        '_current_gear',
        '_gear_shift_status',
        '_transmission_oil_pressure',
        '_transmission_accumulator_pressure',
        '_transmission_oil_temperature',
        '_vehicle_speed_kmph',
        '_torque_wheels_nm',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'map_sensor': 'float',
        'lambda_sensor': 'float',
        'fuel_level': 'float',
        'fuel_pressure': 'float',
        'engine_oil_pressure': 'float',
        'engine_oil_temperature': 'float',
        'engine_coolant_temperature': 'float',
        'engine_coolant_pressure': 'float',
        'engine_rpm': 'float',
        'engine_on_status': 'boolean',
        'engine_run_switch_status': 'boolean',
        'throttle_position': 'float',
        'current_gear': 'int8',
        'gear_shift_status': 'int8',
        'transmission_oil_pressure': 'float',
        'transmission_accumulator_pressure': 'float',
        'transmission_oil_temperature': 'float',
        'vehicle_speed_kmph': 'float',
        'torque_wheels_nm': 'float',
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
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
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
        self.map_sensor = kwargs.get('map_sensor', float())
        self.lambda_sensor = kwargs.get('lambda_sensor', float())
        self.fuel_level = kwargs.get('fuel_level', float())
        self.fuel_pressure = kwargs.get('fuel_pressure', float())
        self.engine_oil_pressure = kwargs.get('engine_oil_pressure', float())
        self.engine_oil_temperature = kwargs.get('engine_oil_temperature', float())
        self.engine_coolant_temperature = kwargs.get('engine_coolant_temperature', float())
        self.engine_coolant_pressure = kwargs.get('engine_coolant_pressure', float())
        self.engine_rpm = kwargs.get('engine_rpm', float())
        self.engine_on_status = kwargs.get('engine_on_status', bool())
        self.engine_run_switch_status = kwargs.get('engine_run_switch_status', bool())
        self.throttle_position = kwargs.get('throttle_position', float())
        self.current_gear = kwargs.get('current_gear', int())
        self.gear_shift_status = kwargs.get('gear_shift_status', int())
        self.transmission_oil_pressure = kwargs.get('transmission_oil_pressure', float())
        self.transmission_accumulator_pressure = kwargs.get('transmission_accumulator_pressure', float())
        self.transmission_oil_temperature = kwargs.get('transmission_oil_temperature', float())
        self.vehicle_speed_kmph = kwargs.get('vehicle_speed_kmph', float())
        self.torque_wheels_nm = kwargs.get('torque_wheels_nm', float())

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
        if self.map_sensor != other.map_sensor:
            return False
        if self.lambda_sensor != other.lambda_sensor:
            return False
        if self.fuel_level != other.fuel_level:
            return False
        if self.fuel_pressure != other.fuel_pressure:
            return False
        if self.engine_oil_pressure != other.engine_oil_pressure:
            return False
        if self.engine_oil_temperature != other.engine_oil_temperature:
            return False
        if self.engine_coolant_temperature != other.engine_coolant_temperature:
            return False
        if self.engine_coolant_pressure != other.engine_coolant_pressure:
            return False
        if self.engine_rpm != other.engine_rpm:
            return False
        if self.engine_on_status != other.engine_on_status:
            return False
        if self.engine_run_switch_status != other.engine_run_switch_status:
            return False
        if self.throttle_position != other.throttle_position:
            return False
        if self.current_gear != other.current_gear:
            return False
        if self.gear_shift_status != other.gear_shift_status:
            return False
        if self.transmission_oil_pressure != other.transmission_oil_pressure:
            return False
        if self.transmission_accumulator_pressure != other.transmission_accumulator_pressure:
            return False
        if self.transmission_oil_temperature != other.transmission_oil_temperature:
            return False
        if self.vehicle_speed_kmph != other.vehicle_speed_kmph:
            return False
        if self.torque_wheels_nm != other.torque_wheels_nm:
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
    def map_sensor(self):
        """Message field 'map_sensor'."""
        return self._map_sensor

    @map_sensor.setter
    def map_sensor(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'map_sensor' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'map_sensor' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._map_sensor = value

    @builtins.property
    def lambda_sensor(self):
        """Message field 'lambda_sensor'."""
        return self._lambda_sensor

    @lambda_sensor.setter
    def lambda_sensor(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'lambda_sensor' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'lambda_sensor' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._lambda_sensor = value

    @builtins.property
    def fuel_level(self):
        """Message field 'fuel_level'."""
        return self._fuel_level

    @fuel_level.setter
    def fuel_level(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'fuel_level' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'fuel_level' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._fuel_level = value

    @builtins.property
    def fuel_pressure(self):
        """Message field 'fuel_pressure'."""
        return self._fuel_pressure

    @fuel_pressure.setter
    def fuel_pressure(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'fuel_pressure' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'fuel_pressure' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._fuel_pressure = value

    @builtins.property
    def engine_oil_pressure(self):
        """Message field 'engine_oil_pressure'."""
        return self._engine_oil_pressure

    @engine_oil_pressure.setter
    def engine_oil_pressure(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'engine_oil_pressure' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'engine_oil_pressure' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._engine_oil_pressure = value

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
    def engine_coolant_temperature(self):
        """Message field 'engine_coolant_temperature'."""
        return self._engine_coolant_temperature

    @engine_coolant_temperature.setter
    def engine_coolant_temperature(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'engine_coolant_temperature' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'engine_coolant_temperature' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._engine_coolant_temperature = value

    @builtins.property
    def engine_coolant_pressure(self):
        """Message field 'engine_coolant_pressure'."""
        return self._engine_coolant_pressure

    @engine_coolant_pressure.setter
    def engine_coolant_pressure(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'engine_coolant_pressure' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'engine_coolant_pressure' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._engine_coolant_pressure = value

    @builtins.property
    def engine_rpm(self):
        """Message field 'engine_rpm'."""
        return self._engine_rpm

    @engine_rpm.setter
    def engine_rpm(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'engine_rpm' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'engine_rpm' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._engine_rpm = value

    @builtins.property
    def engine_on_status(self):
        """Message field 'engine_on_status'."""
        return self._engine_on_status

    @engine_on_status.setter
    def engine_on_status(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'engine_on_status' field must be of type 'bool'"
        self._engine_on_status = value

    @builtins.property
    def engine_run_switch_status(self):
        """Message field 'engine_run_switch_status'."""
        return self._engine_run_switch_status

    @engine_run_switch_status.setter
    def engine_run_switch_status(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'engine_run_switch_status' field must be of type 'bool'"
        self._engine_run_switch_status = value

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
    def current_gear(self):
        """Message field 'current_gear'."""
        return self._current_gear

    @current_gear.setter
    def current_gear(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'current_gear' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'current_gear' field must be an integer in [-128, 127]"
        self._current_gear = value

    @builtins.property
    def gear_shift_status(self):
        """Message field 'gear_shift_status'."""
        return self._gear_shift_status

    @gear_shift_status.setter
    def gear_shift_status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'gear_shift_status' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'gear_shift_status' field must be an integer in [-128, 127]"
        self._gear_shift_status = value

    @builtins.property
    def transmission_oil_pressure(self):
        """Message field 'transmission_oil_pressure'."""
        return self._transmission_oil_pressure

    @transmission_oil_pressure.setter
    def transmission_oil_pressure(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'transmission_oil_pressure' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'transmission_oil_pressure' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._transmission_oil_pressure = value

    @builtins.property
    def transmission_accumulator_pressure(self):
        """Message field 'transmission_accumulator_pressure'."""
        return self._transmission_accumulator_pressure

    @transmission_accumulator_pressure.setter
    def transmission_accumulator_pressure(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'transmission_accumulator_pressure' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'transmission_accumulator_pressure' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._transmission_accumulator_pressure = value

    @builtins.property
    def transmission_oil_temperature(self):
        """Message field 'transmission_oil_temperature'."""
        return self._transmission_oil_temperature

    @transmission_oil_temperature.setter
    def transmission_oil_temperature(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'transmission_oil_temperature' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'transmission_oil_temperature' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._transmission_oil_temperature = value

    @builtins.property
    def vehicle_speed_kmph(self):
        """Message field 'vehicle_speed_kmph'."""
        return self._vehicle_speed_kmph

    @vehicle_speed_kmph.setter
    def vehicle_speed_kmph(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'vehicle_speed_kmph' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'vehicle_speed_kmph' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._vehicle_speed_kmph = value

    @builtins.property
    def torque_wheels_nm(self):
        """Message field 'torque_wheels_nm'."""
        return self._torque_wheels_nm

    @torque_wheels_nm.setter
    def torque_wheels_nm(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'torque_wheels_nm' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'torque_wheels_nm' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._torque_wheels_nm = value
