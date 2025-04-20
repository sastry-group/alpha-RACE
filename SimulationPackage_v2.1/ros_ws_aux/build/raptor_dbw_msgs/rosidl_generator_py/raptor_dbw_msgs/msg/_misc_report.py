# generated from rosidl_generator_py/resource/_idl.py.em
# with input from raptor_dbw_msgs:msg/MiscReport.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_MiscReport(type):
    """Metaclass of message 'MiscReport'."""

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
                'raptor_dbw_msgs.msg.MiscReport')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__misc_report
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__misc_report
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__misc_report
            cls._TYPE_SUPPORT = module.type_support_msg__msg__misc_report
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__misc_report

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


class MiscReport(metaclass=Metaclass_MiscReport):
    """Message class 'MiscReport'."""

    __slots__ = [
        '_header',
        '_fuel_level',
        '_drive_by_wire_enabled',
        '_vehicle_speed',
        '_software_build_number',
        '_general_actuator_fault',
        '_by_wire_ready',
        '_general_driver_activity',
        '_comms_fault',
        '_ambient_temp',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'fuel_level': 'float',
        'drive_by_wire_enabled': 'boolean',
        'vehicle_speed': 'float',
        'software_build_number': 'uint16',
        'general_actuator_fault': 'boolean',
        'by_wire_ready': 'boolean',
        'general_driver_activity': 'boolean',
        'comms_fault': 'boolean',
        'ambient_temp': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.fuel_level = kwargs.get('fuel_level', float())
        self.drive_by_wire_enabled = kwargs.get('drive_by_wire_enabled', bool())
        self.vehicle_speed = kwargs.get('vehicle_speed', float())
        self.software_build_number = kwargs.get('software_build_number', int())
        self.general_actuator_fault = kwargs.get('general_actuator_fault', bool())
        self.by_wire_ready = kwargs.get('by_wire_ready', bool())
        self.general_driver_activity = kwargs.get('general_driver_activity', bool())
        self.comms_fault = kwargs.get('comms_fault', bool())
        self.ambient_temp = kwargs.get('ambient_temp', float())

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
        if self.fuel_level != other.fuel_level:
            return False
        if self.drive_by_wire_enabled != other.drive_by_wire_enabled:
            return False
        if self.vehicle_speed != other.vehicle_speed:
            return False
        if self.software_build_number != other.software_build_number:
            return False
        if self.general_actuator_fault != other.general_actuator_fault:
            return False
        if self.by_wire_ready != other.by_wire_ready:
            return False
        if self.general_driver_activity != other.general_driver_activity:
            return False
        if self.comms_fault != other.comms_fault:
            return False
        if self.ambient_temp != other.ambient_temp:
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
    def drive_by_wire_enabled(self):
        """Message field 'drive_by_wire_enabled'."""
        return self._drive_by_wire_enabled

    @drive_by_wire_enabled.setter
    def drive_by_wire_enabled(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'drive_by_wire_enabled' field must be of type 'bool'"
        self._drive_by_wire_enabled = value

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
    def software_build_number(self):
        """Message field 'software_build_number'."""
        return self._software_build_number

    @software_build_number.setter
    def software_build_number(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'software_build_number' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'software_build_number' field must be an unsigned integer in [0, 65535]"
        self._software_build_number = value

    @builtins.property
    def general_actuator_fault(self):
        """Message field 'general_actuator_fault'."""
        return self._general_actuator_fault

    @general_actuator_fault.setter
    def general_actuator_fault(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'general_actuator_fault' field must be of type 'bool'"
        self._general_actuator_fault = value

    @builtins.property
    def by_wire_ready(self):
        """Message field 'by_wire_ready'."""
        return self._by_wire_ready

    @by_wire_ready.setter
    def by_wire_ready(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'by_wire_ready' field must be of type 'bool'"
        self._by_wire_ready = value

    @builtins.property
    def general_driver_activity(self):
        """Message field 'general_driver_activity'."""
        return self._general_driver_activity

    @general_driver_activity.setter
    def general_driver_activity(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'general_driver_activity' field must be of type 'bool'"
        self._general_driver_activity = value

    @builtins.property
    def comms_fault(self):
        """Message field 'comms_fault'."""
        return self._comms_fault

    @comms_fault.setter
    def comms_fault(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'comms_fault' field must be of type 'bool'"
        self._comms_fault = value

    @builtins.property
    def ambient_temp(self):
        """Message field 'ambient_temp'."""
        return self._ambient_temp

    @ambient_temp.setter
    def ambient_temp(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'ambient_temp' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'ambient_temp' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._ambient_temp = value
