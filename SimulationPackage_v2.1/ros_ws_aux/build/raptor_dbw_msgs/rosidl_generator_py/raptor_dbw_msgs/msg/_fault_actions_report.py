# generated from rosidl_generator_py/resource/_idl.py.em
# with input from raptor_dbw_msgs:msg/FaultActionsReport.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_FaultActionsReport(type):
    """Metaclass of message 'FaultActionsReport'."""

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
                'raptor_dbw_msgs.msg.FaultActionsReport')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__fault_actions_report
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__fault_actions_report
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__fault_actions_report
            cls._TYPE_SUPPORT = module.type_support_msg__msg__fault_actions_report
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__fault_actions_report

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


class FaultActionsReport(metaclass=Metaclass_FaultActionsReport):
    """Message class 'FaultActionsReport'."""

    __slots__ = [
        '_header',
        '_autonomous_disabled_no_brakes',
        '_autonomous_disabled_apply_brakes',
        '_can_gateway_disabled',
        '_inverter_contactor_disabled',
        '_prevent_enter_autonomous_mode',
        '_warn_driver_only',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'autonomous_disabled_no_brakes': 'boolean',
        'autonomous_disabled_apply_brakes': 'boolean',
        'can_gateway_disabled': 'boolean',
        'inverter_contactor_disabled': 'boolean',
        'prevent_enter_autonomous_mode': 'boolean',
        'warn_driver_only': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
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
        self.autonomous_disabled_no_brakes = kwargs.get('autonomous_disabled_no_brakes', bool())
        self.autonomous_disabled_apply_brakes = kwargs.get('autonomous_disabled_apply_brakes', bool())
        self.can_gateway_disabled = kwargs.get('can_gateway_disabled', bool())
        self.inverter_contactor_disabled = kwargs.get('inverter_contactor_disabled', bool())
        self.prevent_enter_autonomous_mode = kwargs.get('prevent_enter_autonomous_mode', bool())
        self.warn_driver_only = kwargs.get('warn_driver_only', bool())

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
        if self.autonomous_disabled_no_brakes != other.autonomous_disabled_no_brakes:
            return False
        if self.autonomous_disabled_apply_brakes != other.autonomous_disabled_apply_brakes:
            return False
        if self.can_gateway_disabled != other.can_gateway_disabled:
            return False
        if self.inverter_contactor_disabled != other.inverter_contactor_disabled:
            return False
        if self.prevent_enter_autonomous_mode != other.prevent_enter_autonomous_mode:
            return False
        if self.warn_driver_only != other.warn_driver_only:
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
    def autonomous_disabled_no_brakes(self):
        """Message field 'autonomous_disabled_no_brakes'."""
        return self._autonomous_disabled_no_brakes

    @autonomous_disabled_no_brakes.setter
    def autonomous_disabled_no_brakes(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'autonomous_disabled_no_brakes' field must be of type 'bool'"
        self._autonomous_disabled_no_brakes = value

    @builtins.property
    def autonomous_disabled_apply_brakes(self):
        """Message field 'autonomous_disabled_apply_brakes'."""
        return self._autonomous_disabled_apply_brakes

    @autonomous_disabled_apply_brakes.setter
    def autonomous_disabled_apply_brakes(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'autonomous_disabled_apply_brakes' field must be of type 'bool'"
        self._autonomous_disabled_apply_brakes = value

    @builtins.property
    def can_gateway_disabled(self):
        """Message field 'can_gateway_disabled'."""
        return self._can_gateway_disabled

    @can_gateway_disabled.setter
    def can_gateway_disabled(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'can_gateway_disabled' field must be of type 'bool'"
        self._can_gateway_disabled = value

    @builtins.property
    def inverter_contactor_disabled(self):
        """Message field 'inverter_contactor_disabled'."""
        return self._inverter_contactor_disabled

    @inverter_contactor_disabled.setter
    def inverter_contactor_disabled(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'inverter_contactor_disabled' field must be of type 'bool'"
        self._inverter_contactor_disabled = value

    @builtins.property
    def prevent_enter_autonomous_mode(self):
        """Message field 'prevent_enter_autonomous_mode'."""
        return self._prevent_enter_autonomous_mode

    @prevent_enter_autonomous_mode.setter
    def prevent_enter_autonomous_mode(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'prevent_enter_autonomous_mode' field must be of type 'bool'"
        self._prevent_enter_autonomous_mode = value

    @builtins.property
    def warn_driver_only(self):
        """Message field 'warn_driver_only'."""
        return self._warn_driver_only

    @warn_driver_only.setter
    def warn_driver_only(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'warn_driver_only' field must be of type 'bool'"
        self._warn_driver_only = value
