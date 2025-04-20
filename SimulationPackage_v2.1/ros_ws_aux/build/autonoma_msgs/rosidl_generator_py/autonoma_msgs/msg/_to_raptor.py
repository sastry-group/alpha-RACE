# generated from rosidl_generator_py/resource/_idl.py.em
# with input from autonoma_msgs:msg/ToRaptor.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ToRaptor(type):
    """Metaclass of message 'ToRaptor'."""

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
                'autonoma_msgs.msg.ToRaptor')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__to_raptor
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__to_raptor
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__to_raptor
            cls._TYPE_SUPPORT = module.type_support_msg__msg__to_raptor
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__to_raptor

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


class ToRaptor(metaclass=Metaclass_ToRaptor):
    """Message class 'ToRaptor'."""

    __slots__ = [
        '_header',
        '_track_cond_ack',
        '_veh_sig_ack',
        '_ct_state',
        '_rolling_counter',
        '_veh_num',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'track_cond_ack': 'uint8',
        'veh_sig_ack': 'uint8',
        'ct_state': 'uint8',
        'rolling_counter': 'uint8',
        'veh_num': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.track_cond_ack = kwargs.get('track_cond_ack', int())
        self.veh_sig_ack = kwargs.get('veh_sig_ack', int())
        self.ct_state = kwargs.get('ct_state', int())
        self.rolling_counter = kwargs.get('rolling_counter', int())
        self.veh_num = kwargs.get('veh_num', int())

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
        if self.track_cond_ack != other.track_cond_ack:
            return False
        if self.veh_sig_ack != other.veh_sig_ack:
            return False
        if self.ct_state != other.ct_state:
            return False
        if self.rolling_counter != other.rolling_counter:
            return False
        if self.veh_num != other.veh_num:
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
    def track_cond_ack(self):
        """Message field 'track_cond_ack'."""
        return self._track_cond_ack

    @track_cond_ack.setter
    def track_cond_ack(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'track_cond_ack' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'track_cond_ack' field must be an unsigned integer in [0, 255]"
        self._track_cond_ack = value

    @builtins.property
    def veh_sig_ack(self):
        """Message field 'veh_sig_ack'."""
        return self._veh_sig_ack

    @veh_sig_ack.setter
    def veh_sig_ack(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'veh_sig_ack' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'veh_sig_ack' field must be an unsigned integer in [0, 255]"
        self._veh_sig_ack = value

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
    def veh_num(self):
        """Message field 'veh_num'."""
        return self._veh_num

    @veh_num.setter
    def veh_num(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'veh_num' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'veh_num' field must be an unsigned integer in [0, 255]"
        self._veh_num = value
