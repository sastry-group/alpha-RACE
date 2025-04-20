# generated from rosidl_generator_py/resource/_idl.py.em
# with input from raptor_dbw_msgs:msg/LowVoltageSystemReport.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_LowVoltageSystemReport(type):
    """Metaclass of message 'LowVoltageSystemReport'."""

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
                'raptor_dbw_msgs.msg.LowVoltageSystemReport')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__low_voltage_system_report
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__low_voltage_system_report
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__low_voltage_system_report
            cls._TYPE_SUPPORT = module.type_support_msg__msg__low_voltage_system_report
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__low_voltage_system_report

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


class LowVoltageSystemReport(metaclass=Metaclass_LowVoltageSystemReport):
    """Message class 'LowVoltageSystemReport'."""

    __slots__ = [
        '_header',
        '_dbw_battery_volts',
        '_vehicle_battery_volts',
        '_vehicle_battery_current',
        '_vehicle_alternator_current',
        '_dcdc_current',
        '_alternator_current',
        '_aux_inverter_contactor',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'dbw_battery_volts': 'float',
        'vehicle_battery_volts': 'float',
        'vehicle_battery_current': 'float',
        'vehicle_alternator_current': 'float',
        'dcdc_current': 'float',
        'alternator_current': 'float',
        'aux_inverter_contactor': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.dbw_battery_volts = kwargs.get('dbw_battery_volts', float())
        self.vehicle_battery_volts = kwargs.get('vehicle_battery_volts', float())
        self.vehicle_battery_current = kwargs.get('vehicle_battery_current', float())
        self.vehicle_alternator_current = kwargs.get('vehicle_alternator_current', float())
        self.dcdc_current = kwargs.get('dcdc_current', float())
        self.alternator_current = kwargs.get('alternator_current', float())
        self.aux_inverter_contactor = kwargs.get('aux_inverter_contactor', bool())

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
        if self.dbw_battery_volts != other.dbw_battery_volts:
            return False
        if self.vehicle_battery_volts != other.vehicle_battery_volts:
            return False
        if self.vehicle_battery_current != other.vehicle_battery_current:
            return False
        if self.vehicle_alternator_current != other.vehicle_alternator_current:
            return False
        if self.dcdc_current != other.dcdc_current:
            return False
        if self.alternator_current != other.alternator_current:
            return False
        if self.aux_inverter_contactor != other.aux_inverter_contactor:
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
    def dbw_battery_volts(self):
        """Message field 'dbw_battery_volts'."""
        return self._dbw_battery_volts

    @dbw_battery_volts.setter
    def dbw_battery_volts(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'dbw_battery_volts' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'dbw_battery_volts' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._dbw_battery_volts = value

    @builtins.property
    def vehicle_battery_volts(self):
        """Message field 'vehicle_battery_volts'."""
        return self._vehicle_battery_volts

    @vehicle_battery_volts.setter
    def vehicle_battery_volts(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'vehicle_battery_volts' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'vehicle_battery_volts' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._vehicle_battery_volts = value

    @builtins.property
    def vehicle_battery_current(self):
        """Message field 'vehicle_battery_current'."""
        return self._vehicle_battery_current

    @vehicle_battery_current.setter
    def vehicle_battery_current(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'vehicle_battery_current' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'vehicle_battery_current' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._vehicle_battery_current = value

    @builtins.property
    def vehicle_alternator_current(self):
        """Message field 'vehicle_alternator_current'."""
        return self._vehicle_alternator_current

    @vehicle_alternator_current.setter
    def vehicle_alternator_current(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'vehicle_alternator_current' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'vehicle_alternator_current' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._vehicle_alternator_current = value

    @builtins.property
    def dcdc_current(self):
        """Message field 'dcdc_current'."""
        return self._dcdc_current

    @dcdc_current.setter
    def dcdc_current(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'dcdc_current' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'dcdc_current' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._dcdc_current = value

    @builtins.property
    def alternator_current(self):
        """Message field 'alternator_current'."""
        return self._alternator_current

    @alternator_current.setter
    def alternator_current(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'alternator_current' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'alternator_current' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._alternator_current = value

    @builtins.property
    def aux_inverter_contactor(self):
        """Message field 'aux_inverter_contactor'."""
        return self._aux_inverter_contactor

    @aux_inverter_contactor.setter
    def aux_inverter_contactor(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'aux_inverter_contactor' field must be of type 'bool'"
        self._aux_inverter_contactor = value
