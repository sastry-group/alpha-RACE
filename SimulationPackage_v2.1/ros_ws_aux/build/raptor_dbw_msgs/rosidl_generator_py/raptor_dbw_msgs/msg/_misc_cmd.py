# generated from rosidl_generator_py/resource/_idl.py.em
# with input from raptor_dbw_msgs:msg/MiscCmd.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_MiscCmd(type):
    """Metaclass of message 'MiscCmd'."""

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
                'raptor_dbw_msgs.msg.MiscCmd')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__misc_cmd
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__misc_cmd
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__misc_cmd
            cls._TYPE_SUPPORT = module.type_support_msg__msg__misc_cmd
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__misc_cmd

            from raptor_dbw_msgs.msg import DoorRequest
            if DoorRequest.__class__._TYPE_SUPPORT is None:
                DoorRequest.__class__.__import_type_support__()

            from raptor_dbw_msgs.msg import HighBeam
            if HighBeam.__class__._TYPE_SUPPORT is None:
                HighBeam.__class__.__import_type_support__()

            from raptor_dbw_msgs.msg import Ignition
            if Ignition.__class__._TYPE_SUPPORT is None:
                Ignition.__class__.__import_type_support__()

            from raptor_dbw_msgs.msg import LowBeam
            if LowBeam.__class__._TYPE_SUPPORT is None:
                LowBeam.__class__.__import_type_support__()

            from raptor_dbw_msgs.msg import TurnSignal
            if TurnSignal.__class__._TYPE_SUPPORT is None:
                TurnSignal.__class__.__import_type_support__()

            from raptor_dbw_msgs.msg import WiperFront
            if WiperFront.__class__._TYPE_SUPPORT is None:
                WiperFront.__class__.__import_type_support__()

            from raptor_dbw_msgs.msg import WiperRear
            if WiperRear.__class__._TYPE_SUPPORT is None:
                WiperRear.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class MiscCmd(metaclass=Metaclass_MiscCmd):
    """Message class 'MiscCmd'."""

    __slots__ = [
        '_cmd',
        '_door_request_right_rear',
        '_rolling_counter',
        '_high_beam_cmd',
        '_front_wiper_cmd',
        '_rear_wiper_cmd',
        '_ignition_cmd',
        '_door_request_left_rear',
        '_door_request_lift_gate',
        '_block_standard_cruise_buttons',
        '_block_adaptive_cruise_buttons',
        '_block_turn_signal_stalk',
        '_horn_cmd',
        '_low_beam_cmd',
    ]

    _fields_and_field_types = {
        'cmd': 'raptor_dbw_msgs/TurnSignal',
        'door_request_right_rear': 'raptor_dbw_msgs/DoorRequest',
        'rolling_counter': 'uint8',
        'high_beam_cmd': 'raptor_dbw_msgs/HighBeam',
        'front_wiper_cmd': 'raptor_dbw_msgs/WiperFront',
        'rear_wiper_cmd': 'raptor_dbw_msgs/WiperRear',
        'ignition_cmd': 'raptor_dbw_msgs/Ignition',
        'door_request_left_rear': 'raptor_dbw_msgs/DoorRequest',
        'door_request_lift_gate': 'raptor_dbw_msgs/DoorRequest',
        'block_standard_cruise_buttons': 'boolean',
        'block_adaptive_cruise_buttons': 'boolean',
        'block_turn_signal_stalk': 'boolean',
        'horn_cmd': 'boolean',
        'low_beam_cmd': 'raptor_dbw_msgs/LowBeam',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['raptor_dbw_msgs', 'msg'], 'TurnSignal'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['raptor_dbw_msgs', 'msg'], 'DoorRequest'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['raptor_dbw_msgs', 'msg'], 'HighBeam'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['raptor_dbw_msgs', 'msg'], 'WiperFront'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['raptor_dbw_msgs', 'msg'], 'WiperRear'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['raptor_dbw_msgs', 'msg'], 'Ignition'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['raptor_dbw_msgs', 'msg'], 'DoorRequest'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['raptor_dbw_msgs', 'msg'], 'DoorRequest'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['raptor_dbw_msgs', 'msg'], 'LowBeam'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from raptor_dbw_msgs.msg import TurnSignal
        self.cmd = kwargs.get('cmd', TurnSignal())
        from raptor_dbw_msgs.msg import DoorRequest
        self.door_request_right_rear = kwargs.get('door_request_right_rear', DoorRequest())
        self.rolling_counter = kwargs.get('rolling_counter', int())
        from raptor_dbw_msgs.msg import HighBeam
        self.high_beam_cmd = kwargs.get('high_beam_cmd', HighBeam())
        from raptor_dbw_msgs.msg import WiperFront
        self.front_wiper_cmd = kwargs.get('front_wiper_cmd', WiperFront())
        from raptor_dbw_msgs.msg import WiperRear
        self.rear_wiper_cmd = kwargs.get('rear_wiper_cmd', WiperRear())
        from raptor_dbw_msgs.msg import Ignition
        self.ignition_cmd = kwargs.get('ignition_cmd', Ignition())
        from raptor_dbw_msgs.msg import DoorRequest
        self.door_request_left_rear = kwargs.get('door_request_left_rear', DoorRequest())
        from raptor_dbw_msgs.msg import DoorRequest
        self.door_request_lift_gate = kwargs.get('door_request_lift_gate', DoorRequest())
        self.block_standard_cruise_buttons = kwargs.get('block_standard_cruise_buttons', bool())
        self.block_adaptive_cruise_buttons = kwargs.get('block_adaptive_cruise_buttons', bool())
        self.block_turn_signal_stalk = kwargs.get('block_turn_signal_stalk', bool())
        self.horn_cmd = kwargs.get('horn_cmd', bool())
        from raptor_dbw_msgs.msg import LowBeam
        self.low_beam_cmd = kwargs.get('low_beam_cmd', LowBeam())

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
        if self.cmd != other.cmd:
            return False
        if self.door_request_right_rear != other.door_request_right_rear:
            return False
        if self.rolling_counter != other.rolling_counter:
            return False
        if self.high_beam_cmd != other.high_beam_cmd:
            return False
        if self.front_wiper_cmd != other.front_wiper_cmd:
            return False
        if self.rear_wiper_cmd != other.rear_wiper_cmd:
            return False
        if self.ignition_cmd != other.ignition_cmd:
            return False
        if self.door_request_left_rear != other.door_request_left_rear:
            return False
        if self.door_request_lift_gate != other.door_request_lift_gate:
            return False
        if self.block_standard_cruise_buttons != other.block_standard_cruise_buttons:
            return False
        if self.block_adaptive_cruise_buttons != other.block_adaptive_cruise_buttons:
            return False
        if self.block_turn_signal_stalk != other.block_turn_signal_stalk:
            return False
        if self.horn_cmd != other.horn_cmd:
            return False
        if self.low_beam_cmd != other.low_beam_cmd:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def cmd(self):
        """Message field 'cmd'."""
        return self._cmd

    @cmd.setter
    def cmd(self, value):
        if __debug__:
            from raptor_dbw_msgs.msg import TurnSignal
            assert \
                isinstance(value, TurnSignal), \
                "The 'cmd' field must be a sub message of type 'TurnSignal'"
        self._cmd = value

    @builtins.property
    def door_request_right_rear(self):
        """Message field 'door_request_right_rear'."""
        return self._door_request_right_rear

    @door_request_right_rear.setter
    def door_request_right_rear(self, value):
        if __debug__:
            from raptor_dbw_msgs.msg import DoorRequest
            assert \
                isinstance(value, DoorRequest), \
                "The 'door_request_right_rear' field must be a sub message of type 'DoorRequest'"
        self._door_request_right_rear = value

    @builtins.property
    def rolling_counter(self):
        """Message field 'rolling_counter'."""
        return self._rolling_counter

    @rolling_counter.setter
    def rolling_counter(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'rolling_counter' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'rolling_counter' field must be an unsigned integer in [0, 255]"
        self._rolling_counter = value

    @builtins.property
    def high_beam_cmd(self):
        """Message field 'high_beam_cmd'."""
        return self._high_beam_cmd

    @high_beam_cmd.setter
    def high_beam_cmd(self, value):
        if __debug__:
            from raptor_dbw_msgs.msg import HighBeam
            assert \
                isinstance(value, HighBeam), \
                "The 'high_beam_cmd' field must be a sub message of type 'HighBeam'"
        self._high_beam_cmd = value

    @builtins.property
    def front_wiper_cmd(self):
        """Message field 'front_wiper_cmd'."""
        return self._front_wiper_cmd

    @front_wiper_cmd.setter
    def front_wiper_cmd(self, value):
        if __debug__:
            from raptor_dbw_msgs.msg import WiperFront
            assert \
                isinstance(value, WiperFront), \
                "The 'front_wiper_cmd' field must be a sub message of type 'WiperFront'"
        self._front_wiper_cmd = value

    @builtins.property
    def rear_wiper_cmd(self):
        """Message field 'rear_wiper_cmd'."""
        return self._rear_wiper_cmd

    @rear_wiper_cmd.setter
    def rear_wiper_cmd(self, value):
        if __debug__:
            from raptor_dbw_msgs.msg import WiperRear
            assert \
                isinstance(value, WiperRear), \
                "The 'rear_wiper_cmd' field must be a sub message of type 'WiperRear'"
        self._rear_wiper_cmd = value

    @builtins.property
    def ignition_cmd(self):
        """Message field 'ignition_cmd'."""
        return self._ignition_cmd

    @ignition_cmd.setter
    def ignition_cmd(self, value):
        if __debug__:
            from raptor_dbw_msgs.msg import Ignition
            assert \
                isinstance(value, Ignition), \
                "The 'ignition_cmd' field must be a sub message of type 'Ignition'"
        self._ignition_cmd = value

    @builtins.property
    def door_request_left_rear(self):
        """Message field 'door_request_left_rear'."""
        return self._door_request_left_rear

    @door_request_left_rear.setter
    def door_request_left_rear(self, value):
        if __debug__:
            from raptor_dbw_msgs.msg import DoorRequest
            assert \
                isinstance(value, DoorRequest), \
                "The 'door_request_left_rear' field must be a sub message of type 'DoorRequest'"
        self._door_request_left_rear = value

    @builtins.property
    def door_request_lift_gate(self):
        """Message field 'door_request_lift_gate'."""
        return self._door_request_lift_gate

    @door_request_lift_gate.setter
    def door_request_lift_gate(self, value):
        if __debug__:
            from raptor_dbw_msgs.msg import DoorRequest
            assert \
                isinstance(value, DoorRequest), \
                "The 'door_request_lift_gate' field must be a sub message of type 'DoorRequest'"
        self._door_request_lift_gate = value

    @builtins.property
    def block_standard_cruise_buttons(self):
        """Message field 'block_standard_cruise_buttons'."""
        return self._block_standard_cruise_buttons

    @block_standard_cruise_buttons.setter
    def block_standard_cruise_buttons(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'block_standard_cruise_buttons' field must be of type 'bool'"
        self._block_standard_cruise_buttons = value

    @builtins.property
    def block_adaptive_cruise_buttons(self):
        """Message field 'block_adaptive_cruise_buttons'."""
        return self._block_adaptive_cruise_buttons

    @block_adaptive_cruise_buttons.setter
    def block_adaptive_cruise_buttons(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'block_adaptive_cruise_buttons' field must be of type 'bool'"
        self._block_adaptive_cruise_buttons = value

    @builtins.property
    def block_turn_signal_stalk(self):
        """Message field 'block_turn_signal_stalk'."""
        return self._block_turn_signal_stalk

    @block_turn_signal_stalk.setter
    def block_turn_signal_stalk(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'block_turn_signal_stalk' field must be of type 'bool'"
        self._block_turn_signal_stalk = value

    @builtins.property
    def horn_cmd(self):
        """Message field 'horn_cmd'."""
        return self._horn_cmd

    @horn_cmd.setter
    def horn_cmd(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'horn_cmd' field must be of type 'bool'"
        self._horn_cmd = value

    @builtins.property
    def low_beam_cmd(self):
        """Message field 'low_beam_cmd'."""
        return self._low_beam_cmd

    @low_beam_cmd.setter
    def low_beam_cmd(self, value):
        if __debug__:
            from raptor_dbw_msgs.msg import LowBeam
            assert \
                isinstance(value, LowBeam), \
                "The 'low_beam_cmd' field must be a sub message of type 'LowBeam'"
        self._low_beam_cmd = value
