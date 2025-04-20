# generated from rosidl_generator_py/resource/_idl.py.em
# with input from raptor_dbw_msgs:msg/DriverInputReport.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_DriverInputReport(type):
    """Metaclass of message 'DriverInputReport'."""

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
                'raptor_dbw_msgs.msg.DriverInputReport')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__driver_input_report
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__driver_input_report
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__driver_input_report
            cls._TYPE_SUPPORT = module.type_support_msg__msg__driver_input_report
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__driver_input_report

            from raptor_dbw_msgs.msg import HighBeam
            if HighBeam.__class__._TYPE_SUPPORT is None:
                HighBeam.__class__.__import_type_support__()

            from raptor_dbw_msgs.msg import TurnSignal
            if TurnSignal.__class__._TYPE_SUPPORT is None:
                TurnSignal.__class__.__import_type_support__()

            from raptor_dbw_msgs.msg import WiperFront
            if WiperFront.__class__._TYPE_SUPPORT is None:
                WiperFront.__class__.__import_type_support__()

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


class DriverInputReport(metaclass=Metaclass_DriverInputReport):
    """Message class 'DriverInputReport'."""

    __slots__ = [
        '_header',
        '_turn_signal',
        '_high_beam_headlights',
        '_wiper',
        '_cruise_resume_button',
        '_cruise_cancel_button',
        '_cruise_accel_button',
        '_cruise_decel_button',
        '_cruise_on_off_button',
        '_adaptive_cruise_on_off_button',
        '_adaptive_cruise_increase_distance_button',
        '_adaptive_cruise_decrease_distance_button',
        '_driver_door_ajar',
        '_passenger_door_ajar',
        '_rear_left_door_ajar',
        '_rear_right_door_ajar',
        '_liftgate_ajar',
        '_any_seatbelt_unbuckled',
        '_airbag_deployed',
        '_door_or_hood_ajar',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'turn_signal': 'raptor_dbw_msgs/TurnSignal',
        'high_beam_headlights': 'raptor_dbw_msgs/HighBeam',
        'wiper': 'raptor_dbw_msgs/WiperFront',
        'cruise_resume_button': 'boolean',
        'cruise_cancel_button': 'boolean',
        'cruise_accel_button': 'boolean',
        'cruise_decel_button': 'boolean',
        'cruise_on_off_button': 'boolean',
        'adaptive_cruise_on_off_button': 'boolean',
        'adaptive_cruise_increase_distance_button': 'boolean',
        'adaptive_cruise_decrease_distance_button': 'boolean',
        'driver_door_ajar': 'boolean',
        'passenger_door_ajar': 'boolean',
        'rear_left_door_ajar': 'boolean',
        'rear_right_door_ajar': 'boolean',
        'liftgate_ajar': 'boolean',
        'any_seatbelt_unbuckled': 'boolean',
        'airbag_deployed': 'boolean',
        'door_or_hood_ajar': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['raptor_dbw_msgs', 'msg'], 'TurnSignal'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['raptor_dbw_msgs', 'msg'], 'HighBeam'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['raptor_dbw_msgs', 'msg'], 'WiperFront'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        from raptor_dbw_msgs.msg import TurnSignal
        self.turn_signal = kwargs.get('turn_signal', TurnSignal())
        from raptor_dbw_msgs.msg import HighBeam
        self.high_beam_headlights = kwargs.get('high_beam_headlights', HighBeam())
        from raptor_dbw_msgs.msg import WiperFront
        self.wiper = kwargs.get('wiper', WiperFront())
        self.cruise_resume_button = kwargs.get('cruise_resume_button', bool())
        self.cruise_cancel_button = kwargs.get('cruise_cancel_button', bool())
        self.cruise_accel_button = kwargs.get('cruise_accel_button', bool())
        self.cruise_decel_button = kwargs.get('cruise_decel_button', bool())
        self.cruise_on_off_button = kwargs.get('cruise_on_off_button', bool())
        self.adaptive_cruise_on_off_button = kwargs.get('adaptive_cruise_on_off_button', bool())
        self.adaptive_cruise_increase_distance_button = kwargs.get('adaptive_cruise_increase_distance_button', bool())
        self.adaptive_cruise_decrease_distance_button = kwargs.get('adaptive_cruise_decrease_distance_button', bool())
        self.driver_door_ajar = kwargs.get('driver_door_ajar', bool())
        self.passenger_door_ajar = kwargs.get('passenger_door_ajar', bool())
        self.rear_left_door_ajar = kwargs.get('rear_left_door_ajar', bool())
        self.rear_right_door_ajar = kwargs.get('rear_right_door_ajar', bool())
        self.liftgate_ajar = kwargs.get('liftgate_ajar', bool())
        self.any_seatbelt_unbuckled = kwargs.get('any_seatbelt_unbuckled', bool())
        self.airbag_deployed = kwargs.get('airbag_deployed', bool())
        self.door_or_hood_ajar = kwargs.get('door_or_hood_ajar', bool())

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
        if self.turn_signal != other.turn_signal:
            return False
        if self.high_beam_headlights != other.high_beam_headlights:
            return False
        if self.wiper != other.wiper:
            return False
        if self.cruise_resume_button != other.cruise_resume_button:
            return False
        if self.cruise_cancel_button != other.cruise_cancel_button:
            return False
        if self.cruise_accel_button != other.cruise_accel_button:
            return False
        if self.cruise_decel_button != other.cruise_decel_button:
            return False
        if self.cruise_on_off_button != other.cruise_on_off_button:
            return False
        if self.adaptive_cruise_on_off_button != other.adaptive_cruise_on_off_button:
            return False
        if self.adaptive_cruise_increase_distance_button != other.adaptive_cruise_increase_distance_button:
            return False
        if self.adaptive_cruise_decrease_distance_button != other.adaptive_cruise_decrease_distance_button:
            return False
        if self.driver_door_ajar != other.driver_door_ajar:
            return False
        if self.passenger_door_ajar != other.passenger_door_ajar:
            return False
        if self.rear_left_door_ajar != other.rear_left_door_ajar:
            return False
        if self.rear_right_door_ajar != other.rear_right_door_ajar:
            return False
        if self.liftgate_ajar != other.liftgate_ajar:
            return False
        if self.any_seatbelt_unbuckled != other.any_seatbelt_unbuckled:
            return False
        if self.airbag_deployed != other.airbag_deployed:
            return False
        if self.door_or_hood_ajar != other.door_or_hood_ajar:
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
    def turn_signal(self):
        """Message field 'turn_signal'."""
        return self._turn_signal

    @turn_signal.setter
    def turn_signal(self, value):
        if __debug__:
            from raptor_dbw_msgs.msg import TurnSignal
            assert \
                isinstance(value, TurnSignal), \
                "The 'turn_signal' field must be a sub message of type 'TurnSignal'"
        self._turn_signal = value

    @builtins.property
    def high_beam_headlights(self):
        """Message field 'high_beam_headlights'."""
        return self._high_beam_headlights

    @high_beam_headlights.setter
    def high_beam_headlights(self, value):
        if __debug__:
            from raptor_dbw_msgs.msg import HighBeam
            assert \
                isinstance(value, HighBeam), \
                "The 'high_beam_headlights' field must be a sub message of type 'HighBeam'"
        self._high_beam_headlights = value

    @builtins.property
    def wiper(self):
        """Message field 'wiper'."""
        return self._wiper

    @wiper.setter
    def wiper(self, value):
        if __debug__:
            from raptor_dbw_msgs.msg import WiperFront
            assert \
                isinstance(value, WiperFront), \
                "The 'wiper' field must be a sub message of type 'WiperFront'"
        self._wiper = value

    @builtins.property
    def cruise_resume_button(self):
        """Message field 'cruise_resume_button'."""
        return self._cruise_resume_button

    @cruise_resume_button.setter
    def cruise_resume_button(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'cruise_resume_button' field must be of type 'bool'"
        self._cruise_resume_button = value

    @builtins.property
    def cruise_cancel_button(self):
        """Message field 'cruise_cancel_button'."""
        return self._cruise_cancel_button

    @cruise_cancel_button.setter
    def cruise_cancel_button(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'cruise_cancel_button' field must be of type 'bool'"
        self._cruise_cancel_button = value

    @builtins.property
    def cruise_accel_button(self):
        """Message field 'cruise_accel_button'."""
        return self._cruise_accel_button

    @cruise_accel_button.setter
    def cruise_accel_button(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'cruise_accel_button' field must be of type 'bool'"
        self._cruise_accel_button = value

    @builtins.property
    def cruise_decel_button(self):
        """Message field 'cruise_decel_button'."""
        return self._cruise_decel_button

    @cruise_decel_button.setter
    def cruise_decel_button(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'cruise_decel_button' field must be of type 'bool'"
        self._cruise_decel_button = value

    @builtins.property
    def cruise_on_off_button(self):
        """Message field 'cruise_on_off_button'."""
        return self._cruise_on_off_button

    @cruise_on_off_button.setter
    def cruise_on_off_button(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'cruise_on_off_button' field must be of type 'bool'"
        self._cruise_on_off_button = value

    @builtins.property
    def adaptive_cruise_on_off_button(self):
        """Message field 'adaptive_cruise_on_off_button'."""
        return self._adaptive_cruise_on_off_button

    @adaptive_cruise_on_off_button.setter
    def adaptive_cruise_on_off_button(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'adaptive_cruise_on_off_button' field must be of type 'bool'"
        self._adaptive_cruise_on_off_button = value

    @builtins.property
    def adaptive_cruise_increase_distance_button(self):
        """Message field 'adaptive_cruise_increase_distance_button'."""
        return self._adaptive_cruise_increase_distance_button

    @adaptive_cruise_increase_distance_button.setter
    def adaptive_cruise_increase_distance_button(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'adaptive_cruise_increase_distance_button' field must be of type 'bool'"
        self._adaptive_cruise_increase_distance_button = value

    @builtins.property
    def adaptive_cruise_decrease_distance_button(self):
        """Message field 'adaptive_cruise_decrease_distance_button'."""
        return self._adaptive_cruise_decrease_distance_button

    @adaptive_cruise_decrease_distance_button.setter
    def adaptive_cruise_decrease_distance_button(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'adaptive_cruise_decrease_distance_button' field must be of type 'bool'"
        self._adaptive_cruise_decrease_distance_button = value

    @builtins.property
    def driver_door_ajar(self):
        """Message field 'driver_door_ajar'."""
        return self._driver_door_ajar

    @driver_door_ajar.setter
    def driver_door_ajar(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'driver_door_ajar' field must be of type 'bool'"
        self._driver_door_ajar = value

    @builtins.property
    def passenger_door_ajar(self):
        """Message field 'passenger_door_ajar'."""
        return self._passenger_door_ajar

    @passenger_door_ajar.setter
    def passenger_door_ajar(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'passenger_door_ajar' field must be of type 'bool'"
        self._passenger_door_ajar = value

    @builtins.property
    def rear_left_door_ajar(self):
        """Message field 'rear_left_door_ajar'."""
        return self._rear_left_door_ajar

    @rear_left_door_ajar.setter
    def rear_left_door_ajar(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'rear_left_door_ajar' field must be of type 'bool'"
        self._rear_left_door_ajar = value

    @builtins.property
    def rear_right_door_ajar(self):
        """Message field 'rear_right_door_ajar'."""
        return self._rear_right_door_ajar

    @rear_right_door_ajar.setter
    def rear_right_door_ajar(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'rear_right_door_ajar' field must be of type 'bool'"
        self._rear_right_door_ajar = value

    @builtins.property
    def liftgate_ajar(self):
        """Message field 'liftgate_ajar'."""
        return self._liftgate_ajar

    @liftgate_ajar.setter
    def liftgate_ajar(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'liftgate_ajar' field must be of type 'bool'"
        self._liftgate_ajar = value

    @builtins.property
    def any_seatbelt_unbuckled(self):
        """Message field 'any_seatbelt_unbuckled'."""
        return self._any_seatbelt_unbuckled

    @any_seatbelt_unbuckled.setter
    def any_seatbelt_unbuckled(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'any_seatbelt_unbuckled' field must be of type 'bool'"
        self._any_seatbelt_unbuckled = value

    @builtins.property
    def airbag_deployed(self):
        """Message field 'airbag_deployed'."""
        return self._airbag_deployed

    @airbag_deployed.setter
    def airbag_deployed(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'airbag_deployed' field must be of type 'bool'"
        self._airbag_deployed = value

    @builtins.property
    def door_or_hood_ajar(self):
        """Message field 'door_or_hood_ajar'."""
        return self._door_or_hood_ajar

    @door_or_hood_ajar.setter
    def door_or_hood_ajar(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'door_or_hood_ajar' field must be of type 'bool'"
        self._door_or_hood_ajar = value
