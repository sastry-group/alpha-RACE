# generated from rosidl_generator_py/resource/_idl.py.em
# with input from raptor_dbw_msgs:msg/OtherActuatorsReport.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_OtherActuatorsReport(type):
    """Metaclass of message 'OtherActuatorsReport'."""

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
                'raptor_dbw_msgs.msg.OtherActuatorsReport')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__other_actuators_report
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__other_actuators_report
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__other_actuators_report
            cls._TYPE_SUPPORT = module.type_support_msg__msg__other_actuators_report
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__other_actuators_report

            from raptor_dbw_msgs.msg import DoorState
            if DoorState.__class__._TYPE_SUPPORT is None:
                DoorState.__class__.__import_type_support__()

            from raptor_dbw_msgs.msg import HighBeamState
            if HighBeamState.__class__._TYPE_SUPPORT is None:
                HighBeamState.__class__.__import_type_support__()

            from raptor_dbw_msgs.msg import HornState
            if HornState.__class__._TYPE_SUPPORT is None:
                HornState.__class__.__import_type_support__()

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


class OtherActuatorsReport(metaclass=Metaclass_OtherActuatorsReport):
    """Message class 'OtherActuatorsReport'."""

    __slots__ = [
        '_header',
        '_turn_signal_state',
        '_right_rear_door_state',
        '_high_beam_state',
        '_front_wiper_state',
        '_rear_wiper_state',
        '_ignition_state',
        '_left_rear_door_state',
        '_liftgate_door_state',
        '_horn_state',
        '_low_beam_state',
        '_rolling_counter',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'turn_signal_state': 'raptor_dbw_msgs/TurnSignal',
        'right_rear_door_state': 'raptor_dbw_msgs/DoorState',
        'high_beam_state': 'raptor_dbw_msgs/HighBeamState',
        'front_wiper_state': 'raptor_dbw_msgs/WiperFront',
        'rear_wiper_state': 'raptor_dbw_msgs/WiperRear',
        'ignition_state': 'raptor_dbw_msgs/Ignition',
        'left_rear_door_state': 'raptor_dbw_msgs/DoorState',
        'liftgate_door_state': 'raptor_dbw_msgs/DoorState',
        'horn_state': 'raptor_dbw_msgs/HornState',
        'low_beam_state': 'raptor_dbw_msgs/LowBeam',
        'rolling_counter': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['raptor_dbw_msgs', 'msg'], 'TurnSignal'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['raptor_dbw_msgs', 'msg'], 'DoorState'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['raptor_dbw_msgs', 'msg'], 'HighBeamState'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['raptor_dbw_msgs', 'msg'], 'WiperFront'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['raptor_dbw_msgs', 'msg'], 'WiperRear'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['raptor_dbw_msgs', 'msg'], 'Ignition'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['raptor_dbw_msgs', 'msg'], 'DoorState'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['raptor_dbw_msgs', 'msg'], 'DoorState'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['raptor_dbw_msgs', 'msg'], 'HornState'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['raptor_dbw_msgs', 'msg'], 'LowBeam'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        from raptor_dbw_msgs.msg import TurnSignal
        self.turn_signal_state = kwargs.get('turn_signal_state', TurnSignal())
        from raptor_dbw_msgs.msg import DoorState
        self.right_rear_door_state = kwargs.get('right_rear_door_state', DoorState())
        from raptor_dbw_msgs.msg import HighBeamState
        self.high_beam_state = kwargs.get('high_beam_state', HighBeamState())
        from raptor_dbw_msgs.msg import WiperFront
        self.front_wiper_state = kwargs.get('front_wiper_state', WiperFront())
        from raptor_dbw_msgs.msg import WiperRear
        self.rear_wiper_state = kwargs.get('rear_wiper_state', WiperRear())
        from raptor_dbw_msgs.msg import Ignition
        self.ignition_state = kwargs.get('ignition_state', Ignition())
        from raptor_dbw_msgs.msg import DoorState
        self.left_rear_door_state = kwargs.get('left_rear_door_state', DoorState())
        from raptor_dbw_msgs.msg import DoorState
        self.liftgate_door_state = kwargs.get('liftgate_door_state', DoorState())
        from raptor_dbw_msgs.msg import HornState
        self.horn_state = kwargs.get('horn_state', HornState())
        from raptor_dbw_msgs.msg import LowBeam
        self.low_beam_state = kwargs.get('low_beam_state', LowBeam())
        self.rolling_counter = kwargs.get('rolling_counter', int())

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
        if self.turn_signal_state != other.turn_signal_state:
            return False
        if self.right_rear_door_state != other.right_rear_door_state:
            return False
        if self.high_beam_state != other.high_beam_state:
            return False
        if self.front_wiper_state != other.front_wiper_state:
            return False
        if self.rear_wiper_state != other.rear_wiper_state:
            return False
        if self.ignition_state != other.ignition_state:
            return False
        if self.left_rear_door_state != other.left_rear_door_state:
            return False
        if self.liftgate_door_state != other.liftgate_door_state:
            return False
        if self.horn_state != other.horn_state:
            return False
        if self.low_beam_state != other.low_beam_state:
            return False
        if self.rolling_counter != other.rolling_counter:
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
    def turn_signal_state(self):
        """Message field 'turn_signal_state'."""
        return self._turn_signal_state

    @turn_signal_state.setter
    def turn_signal_state(self, value):
        if __debug__:
            from raptor_dbw_msgs.msg import TurnSignal
            assert \
                isinstance(value, TurnSignal), \
                "The 'turn_signal_state' field must be a sub message of type 'TurnSignal'"
        self._turn_signal_state = value

    @builtins.property
    def right_rear_door_state(self):
        """Message field 'right_rear_door_state'."""
        return self._right_rear_door_state

    @right_rear_door_state.setter
    def right_rear_door_state(self, value):
        if __debug__:
            from raptor_dbw_msgs.msg import DoorState
            assert \
                isinstance(value, DoorState), \
                "The 'right_rear_door_state' field must be a sub message of type 'DoorState'"
        self._right_rear_door_state = value

    @builtins.property
    def high_beam_state(self):
        """Message field 'high_beam_state'."""
        return self._high_beam_state

    @high_beam_state.setter
    def high_beam_state(self, value):
        if __debug__:
            from raptor_dbw_msgs.msg import HighBeamState
            assert \
                isinstance(value, HighBeamState), \
                "The 'high_beam_state' field must be a sub message of type 'HighBeamState'"
        self._high_beam_state = value

    @builtins.property
    def front_wiper_state(self):
        """Message field 'front_wiper_state'."""
        return self._front_wiper_state

    @front_wiper_state.setter
    def front_wiper_state(self, value):
        if __debug__:
            from raptor_dbw_msgs.msg import WiperFront
            assert \
                isinstance(value, WiperFront), \
                "The 'front_wiper_state' field must be a sub message of type 'WiperFront'"
        self._front_wiper_state = value

    @builtins.property
    def rear_wiper_state(self):
        """Message field 'rear_wiper_state'."""
        return self._rear_wiper_state

    @rear_wiper_state.setter
    def rear_wiper_state(self, value):
        if __debug__:
            from raptor_dbw_msgs.msg import WiperRear
            assert \
                isinstance(value, WiperRear), \
                "The 'rear_wiper_state' field must be a sub message of type 'WiperRear'"
        self._rear_wiper_state = value

    @builtins.property
    def ignition_state(self):
        """Message field 'ignition_state'."""
        return self._ignition_state

    @ignition_state.setter
    def ignition_state(self, value):
        if __debug__:
            from raptor_dbw_msgs.msg import Ignition
            assert \
                isinstance(value, Ignition), \
                "The 'ignition_state' field must be a sub message of type 'Ignition'"
        self._ignition_state = value

    @builtins.property
    def left_rear_door_state(self):
        """Message field 'left_rear_door_state'."""
        return self._left_rear_door_state

    @left_rear_door_state.setter
    def left_rear_door_state(self, value):
        if __debug__:
            from raptor_dbw_msgs.msg import DoorState
            assert \
                isinstance(value, DoorState), \
                "The 'left_rear_door_state' field must be a sub message of type 'DoorState'"
        self._left_rear_door_state = value

    @builtins.property
    def liftgate_door_state(self):
        """Message field 'liftgate_door_state'."""
        return self._liftgate_door_state

    @liftgate_door_state.setter
    def liftgate_door_state(self, value):
        if __debug__:
            from raptor_dbw_msgs.msg import DoorState
            assert \
                isinstance(value, DoorState), \
                "The 'liftgate_door_state' field must be a sub message of type 'DoorState'"
        self._liftgate_door_state = value

    @builtins.property
    def horn_state(self):
        """Message field 'horn_state'."""
        return self._horn_state

    @horn_state.setter
    def horn_state(self, value):
        if __debug__:
            from raptor_dbw_msgs.msg import HornState
            assert \
                isinstance(value, HornState), \
                "The 'horn_state' field must be a sub message of type 'HornState'"
        self._horn_state = value

    @builtins.property
    def low_beam_state(self):
        """Message field 'low_beam_state'."""
        return self._low_beam_state

    @low_beam_state.setter
    def low_beam_state(self, value):
        if __debug__:
            from raptor_dbw_msgs.msg import LowBeam
            assert \
                isinstance(value, LowBeam), \
                "The 'low_beam_state' field must be a sub message of type 'LowBeam'"
        self._low_beam_state = value

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
