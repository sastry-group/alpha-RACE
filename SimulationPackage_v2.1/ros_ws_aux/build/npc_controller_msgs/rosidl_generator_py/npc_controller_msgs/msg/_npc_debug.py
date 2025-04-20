# generated from rosidl_generator_py/resource/_idl.py.em
# with input from npc_controller_msgs:msg/NPCDebug.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_NPCDebug(type):
    """Metaclass of message 'NPCDebug'."""

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
                'npc_controller_msgs.msg.NPCDebug')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__npc_debug
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__npc_debug
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__npc_debug
            cls._TYPE_SUPPORT = module.type_support_msg__msg__npc_debug
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__npc_debug

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class NPCDebug(metaclass=Metaclass_NPCDebug):
    """Message class 'NPCDebug'."""

    __slots__ = [
        '_desired_acceleration',
        '_desired_velocity',
        '_current_acceleration',
        '_current_velocity',
        '_error_acceleration',
        '_error_velocity',
        '_output_throttle',
        '_output_brake',
        '_vel_p',
        '_vel_i',
        '_vel_d',
        '_thr_p',
        '_thr_i',
        '_thr_d',
        '_brk_p',
        '_brk_i',
        '_brk_d',
        '_throttle_deadband',
        '_brake_deadband',
        '_max_throttle',
        '_ct_state',
        '_vehicle_flag',
        '_track_flag',
        '_lap_state',
        '_track_loc',
        '_center_s',
        '_pit_s',
        '_sys_state',
    ]

    _fields_and_field_types = {
        'desired_acceleration': 'double',
        'desired_velocity': 'double',
        'current_acceleration': 'double',
        'current_velocity': 'double',
        'error_acceleration': 'double',
        'error_velocity': 'double',
        'output_throttle': 'double',
        'output_brake': 'double',
        'vel_p': 'double',
        'vel_i': 'double',
        'vel_d': 'double',
        'thr_p': 'double',
        'thr_i': 'double',
        'thr_d': 'double',
        'brk_p': 'double',
        'brk_i': 'double',
        'brk_d': 'double',
        'throttle_deadband': 'double',
        'brake_deadband': 'double',
        'max_throttle': 'double',
        'ct_state': 'uint8',
        'vehicle_flag': 'uint8',
        'track_flag': 'uint8',
        'lap_state': 'uint8',
        'track_loc': 'uint8',
        'center_s': 'double',
        'pit_s': 'double',
        'sys_state': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.desired_acceleration = kwargs.get('desired_acceleration', float())
        self.desired_velocity = kwargs.get('desired_velocity', float())
        self.current_acceleration = kwargs.get('current_acceleration', float())
        self.current_velocity = kwargs.get('current_velocity', float())
        self.error_acceleration = kwargs.get('error_acceleration', float())
        self.error_velocity = kwargs.get('error_velocity', float())
        self.output_throttle = kwargs.get('output_throttle', float())
        self.output_brake = kwargs.get('output_brake', float())
        self.vel_p = kwargs.get('vel_p', float())
        self.vel_i = kwargs.get('vel_i', float())
        self.vel_d = kwargs.get('vel_d', float())
        self.thr_p = kwargs.get('thr_p', float())
        self.thr_i = kwargs.get('thr_i', float())
        self.thr_d = kwargs.get('thr_d', float())
        self.brk_p = kwargs.get('brk_p', float())
        self.brk_i = kwargs.get('brk_i', float())
        self.brk_d = kwargs.get('brk_d', float())
        self.throttle_deadband = kwargs.get('throttle_deadband', float())
        self.brake_deadband = kwargs.get('brake_deadband', float())
        self.max_throttle = kwargs.get('max_throttle', float())
        self.ct_state = kwargs.get('ct_state', int())
        self.vehicle_flag = kwargs.get('vehicle_flag', int())
        self.track_flag = kwargs.get('track_flag', int())
        self.lap_state = kwargs.get('lap_state', int())
        self.track_loc = kwargs.get('track_loc', int())
        self.center_s = kwargs.get('center_s', float())
        self.pit_s = kwargs.get('pit_s', float())
        self.sys_state = kwargs.get('sys_state', int())

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
        if self.desired_acceleration != other.desired_acceleration:
            return False
        if self.desired_velocity != other.desired_velocity:
            return False
        if self.current_acceleration != other.current_acceleration:
            return False
        if self.current_velocity != other.current_velocity:
            return False
        if self.error_acceleration != other.error_acceleration:
            return False
        if self.error_velocity != other.error_velocity:
            return False
        if self.output_throttle != other.output_throttle:
            return False
        if self.output_brake != other.output_brake:
            return False
        if self.vel_p != other.vel_p:
            return False
        if self.vel_i != other.vel_i:
            return False
        if self.vel_d != other.vel_d:
            return False
        if self.thr_p != other.thr_p:
            return False
        if self.thr_i != other.thr_i:
            return False
        if self.thr_d != other.thr_d:
            return False
        if self.brk_p != other.brk_p:
            return False
        if self.brk_i != other.brk_i:
            return False
        if self.brk_d != other.brk_d:
            return False
        if self.throttle_deadband != other.throttle_deadband:
            return False
        if self.brake_deadband != other.brake_deadband:
            return False
        if self.max_throttle != other.max_throttle:
            return False
        if self.ct_state != other.ct_state:
            return False
        if self.vehicle_flag != other.vehicle_flag:
            return False
        if self.track_flag != other.track_flag:
            return False
        if self.lap_state != other.lap_state:
            return False
        if self.track_loc != other.track_loc:
            return False
        if self.center_s != other.center_s:
            return False
        if self.pit_s != other.pit_s:
            return False
        if self.sys_state != other.sys_state:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def desired_acceleration(self):
        """Message field 'desired_acceleration'."""
        return self._desired_acceleration

    @desired_acceleration.setter
    def desired_acceleration(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'desired_acceleration' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'desired_acceleration' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._desired_acceleration = value

    @builtins.property
    def desired_velocity(self):
        """Message field 'desired_velocity'."""
        return self._desired_velocity

    @desired_velocity.setter
    def desired_velocity(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'desired_velocity' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'desired_velocity' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._desired_velocity = value

    @builtins.property
    def current_acceleration(self):
        """Message field 'current_acceleration'."""
        return self._current_acceleration

    @current_acceleration.setter
    def current_acceleration(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'current_acceleration' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'current_acceleration' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._current_acceleration = value

    @builtins.property
    def current_velocity(self):
        """Message field 'current_velocity'."""
        return self._current_velocity

    @current_velocity.setter
    def current_velocity(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'current_velocity' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'current_velocity' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._current_velocity = value

    @builtins.property
    def error_acceleration(self):
        """Message field 'error_acceleration'."""
        return self._error_acceleration

    @error_acceleration.setter
    def error_acceleration(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'error_acceleration' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'error_acceleration' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._error_acceleration = value

    @builtins.property
    def error_velocity(self):
        """Message field 'error_velocity'."""
        return self._error_velocity

    @error_velocity.setter
    def error_velocity(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'error_velocity' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'error_velocity' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._error_velocity = value

    @builtins.property
    def output_throttle(self):
        """Message field 'output_throttle'."""
        return self._output_throttle

    @output_throttle.setter
    def output_throttle(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'output_throttle' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'output_throttle' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._output_throttle = value

    @builtins.property
    def output_brake(self):
        """Message field 'output_brake'."""
        return self._output_brake

    @output_brake.setter
    def output_brake(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'output_brake' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'output_brake' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._output_brake = value

    @builtins.property
    def vel_p(self):
        """Message field 'vel_p'."""
        return self._vel_p

    @vel_p.setter
    def vel_p(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'vel_p' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'vel_p' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._vel_p = value

    @builtins.property
    def vel_i(self):
        """Message field 'vel_i'."""
        return self._vel_i

    @vel_i.setter
    def vel_i(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'vel_i' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'vel_i' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._vel_i = value

    @builtins.property
    def vel_d(self):
        """Message field 'vel_d'."""
        return self._vel_d

    @vel_d.setter
    def vel_d(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'vel_d' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'vel_d' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._vel_d = value

    @builtins.property
    def thr_p(self):
        """Message field 'thr_p'."""
        return self._thr_p

    @thr_p.setter
    def thr_p(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'thr_p' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'thr_p' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._thr_p = value

    @builtins.property
    def thr_i(self):
        """Message field 'thr_i'."""
        return self._thr_i

    @thr_i.setter
    def thr_i(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'thr_i' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'thr_i' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._thr_i = value

    @builtins.property
    def thr_d(self):
        """Message field 'thr_d'."""
        return self._thr_d

    @thr_d.setter
    def thr_d(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'thr_d' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'thr_d' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._thr_d = value

    @builtins.property
    def brk_p(self):
        """Message field 'brk_p'."""
        return self._brk_p

    @brk_p.setter
    def brk_p(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'brk_p' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'brk_p' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._brk_p = value

    @builtins.property
    def brk_i(self):
        """Message field 'brk_i'."""
        return self._brk_i

    @brk_i.setter
    def brk_i(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'brk_i' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'brk_i' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._brk_i = value

    @builtins.property
    def brk_d(self):
        """Message field 'brk_d'."""
        return self._brk_d

    @brk_d.setter
    def brk_d(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'brk_d' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'brk_d' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._brk_d = value

    @builtins.property
    def throttle_deadband(self):
        """Message field 'throttle_deadband'."""
        return self._throttle_deadband

    @throttle_deadband.setter
    def throttle_deadband(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'throttle_deadband' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'throttle_deadband' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._throttle_deadband = value

    @builtins.property
    def brake_deadband(self):
        """Message field 'brake_deadband'."""
        return self._brake_deadband

    @brake_deadband.setter
    def brake_deadband(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'brake_deadband' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'brake_deadband' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._brake_deadband = value

    @builtins.property
    def max_throttle(self):
        """Message field 'max_throttle'."""
        return self._max_throttle

    @max_throttle.setter
    def max_throttle(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'max_throttle' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'max_throttle' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._max_throttle = value

    @builtins.property
    def ct_state(self):
        """Message field 'ct_state'."""
        return self._ct_state

    @ct_state.setter
    def ct_state(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'ct_state' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'ct_state' field must be an unsigned integer in [0, 255]"
        self._ct_state = value

    @builtins.property
    def vehicle_flag(self):
        """Message field 'vehicle_flag'."""
        return self._vehicle_flag

    @vehicle_flag.setter
    def vehicle_flag(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'vehicle_flag' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'vehicle_flag' field must be an unsigned integer in [0, 255]"
        self._vehicle_flag = value

    @builtins.property
    def track_flag(self):
        """Message field 'track_flag'."""
        return self._track_flag

    @track_flag.setter
    def track_flag(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'track_flag' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'track_flag' field must be an unsigned integer in [0, 255]"
        self._track_flag = value

    @builtins.property
    def lap_state(self):
        """Message field 'lap_state'."""
        return self._lap_state

    @lap_state.setter
    def lap_state(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'lap_state' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'lap_state' field must be an unsigned integer in [0, 255]"
        self._lap_state = value

    @builtins.property
    def track_loc(self):
        """Message field 'track_loc'."""
        return self._track_loc

    @track_loc.setter
    def track_loc(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'track_loc' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'track_loc' field must be an unsigned integer in [0, 255]"
        self._track_loc = value

    @builtins.property
    def center_s(self):
        """Message field 'center_s'."""
        return self._center_s

    @center_s.setter
    def center_s(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'center_s' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'center_s' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._center_s = value

    @builtins.property
    def pit_s(self):
        """Message field 'pit_s'."""
        return self._pit_s

    @pit_s.setter
    def pit_s(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'pit_s' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'pit_s' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._pit_s = value

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
