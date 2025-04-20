# generated from rosidl_generator_py/resource/_idl.py.em
# with input from novatel_oem7_msgs:msg/PositionOrVelocityType.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_PositionOrVelocityType(type):
    """Metaclass of message 'PositionOrVelocityType'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'NONE': 0,
        'FIXEDPOS': 1,
        'FIXEDHEIGHT': 2,
        'DOPPLER_VELOCITY': 8,
        'SINGLE': 16,
        'PSRDIFF': 17,
        'WAAS': 18,
        'PROPAGATED': 19,
        'L1_FLOAT': 32,
        'NARROW_FLOAT': 34,
        'L1_INT': 48,
        'WIDE_INT': 49,
        'NARROW_INT': 50,
        'RTK_DIRECT_INS': 51,
        'INS_SBAS': 52,
        'INS_PSRSP': 53,
        'INS_PSRDIFF': 54,
        'INS_RTKFLOAT': 55,
        'INS_RTKFIXED': 56,
        'PPP_CONVERGING': 68,
        'PPP': 69,
        'OPERATIONAL': 70,
        'WARNING': 71,
        'OUT_OF_BOUNDS': 72,
        'INS_PPP_CONVERGING': 73,
        'INS_PPP': 74,
        'PPP_BASIC_CONVERGING': 77,
        'PPP_BASIC': 78,
        'INS_PPP_BASIC_CONVERGING': 79,
        'INS_PPP_BASIC': 80,
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('novatel_oem7_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'novatel_oem7_msgs.msg.PositionOrVelocityType')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__position_or_velocity_type
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__position_or_velocity_type
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__position_or_velocity_type
            cls._TYPE_SUPPORT = module.type_support_msg__msg__position_or_velocity_type
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__position_or_velocity_type

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'NONE': cls.__constants['NONE'],
            'FIXEDPOS': cls.__constants['FIXEDPOS'],
            'FIXEDHEIGHT': cls.__constants['FIXEDHEIGHT'],
            'DOPPLER_VELOCITY': cls.__constants['DOPPLER_VELOCITY'],
            'SINGLE': cls.__constants['SINGLE'],
            'PSRDIFF': cls.__constants['PSRDIFF'],
            'WAAS': cls.__constants['WAAS'],
            'PROPAGATED': cls.__constants['PROPAGATED'],
            'L1_FLOAT': cls.__constants['L1_FLOAT'],
            'NARROW_FLOAT': cls.__constants['NARROW_FLOAT'],
            'L1_INT': cls.__constants['L1_INT'],
            'WIDE_INT': cls.__constants['WIDE_INT'],
            'NARROW_INT': cls.__constants['NARROW_INT'],
            'RTK_DIRECT_INS': cls.__constants['RTK_DIRECT_INS'],
            'INS_SBAS': cls.__constants['INS_SBAS'],
            'INS_PSRSP': cls.__constants['INS_PSRSP'],
            'INS_PSRDIFF': cls.__constants['INS_PSRDIFF'],
            'INS_RTKFLOAT': cls.__constants['INS_RTKFLOAT'],
            'INS_RTKFIXED': cls.__constants['INS_RTKFIXED'],
            'PPP_CONVERGING': cls.__constants['PPP_CONVERGING'],
            'PPP': cls.__constants['PPP'],
            'OPERATIONAL': cls.__constants['OPERATIONAL'],
            'WARNING': cls.__constants['WARNING'],
            'OUT_OF_BOUNDS': cls.__constants['OUT_OF_BOUNDS'],
            'INS_PPP_CONVERGING': cls.__constants['INS_PPP_CONVERGING'],
            'INS_PPP': cls.__constants['INS_PPP'],
            'PPP_BASIC_CONVERGING': cls.__constants['PPP_BASIC_CONVERGING'],
            'PPP_BASIC': cls.__constants['PPP_BASIC'],
            'INS_PPP_BASIC_CONVERGING': cls.__constants['INS_PPP_BASIC_CONVERGING'],
            'INS_PPP_BASIC': cls.__constants['INS_PPP_BASIC'],
        }

    @property
    def NONE(self):
        """Message constant 'NONE'."""
        return Metaclass_PositionOrVelocityType.__constants['NONE']

    @property
    def FIXEDPOS(self):
        """Message constant 'FIXEDPOS'."""
        return Metaclass_PositionOrVelocityType.__constants['FIXEDPOS']

    @property
    def FIXEDHEIGHT(self):
        """Message constant 'FIXEDHEIGHT'."""
        return Metaclass_PositionOrVelocityType.__constants['FIXEDHEIGHT']

    @property
    def DOPPLER_VELOCITY(self):
        """Message constant 'DOPPLER_VELOCITY'."""
        return Metaclass_PositionOrVelocityType.__constants['DOPPLER_VELOCITY']

    @property
    def SINGLE(self):
        """Message constant 'SINGLE'."""
        return Metaclass_PositionOrVelocityType.__constants['SINGLE']

    @property
    def PSRDIFF(self):
        """Message constant 'PSRDIFF'."""
        return Metaclass_PositionOrVelocityType.__constants['PSRDIFF']

    @property
    def WAAS(self):
        """Message constant 'WAAS'."""
        return Metaclass_PositionOrVelocityType.__constants['WAAS']

    @property
    def PROPAGATED(self):
        """Message constant 'PROPAGATED'."""
        return Metaclass_PositionOrVelocityType.__constants['PROPAGATED']

    @property
    def L1_FLOAT(self):
        """Message constant 'L1_FLOAT'."""
        return Metaclass_PositionOrVelocityType.__constants['L1_FLOAT']

    @property
    def NARROW_FLOAT(self):
        """Message constant 'NARROW_FLOAT'."""
        return Metaclass_PositionOrVelocityType.__constants['NARROW_FLOAT']

    @property
    def L1_INT(self):
        """Message constant 'L1_INT'."""
        return Metaclass_PositionOrVelocityType.__constants['L1_INT']

    @property
    def WIDE_INT(self):
        """Message constant 'WIDE_INT'."""
        return Metaclass_PositionOrVelocityType.__constants['WIDE_INT']

    @property
    def NARROW_INT(self):
        """Message constant 'NARROW_INT'."""
        return Metaclass_PositionOrVelocityType.__constants['NARROW_INT']

    @property
    def RTK_DIRECT_INS(self):
        """Message constant 'RTK_DIRECT_INS'."""
        return Metaclass_PositionOrVelocityType.__constants['RTK_DIRECT_INS']

    @property
    def INS_SBAS(self):
        """Message constant 'INS_SBAS'."""
        return Metaclass_PositionOrVelocityType.__constants['INS_SBAS']

    @property
    def INS_PSRSP(self):
        """Message constant 'INS_PSRSP'."""
        return Metaclass_PositionOrVelocityType.__constants['INS_PSRSP']

    @property
    def INS_PSRDIFF(self):
        """Message constant 'INS_PSRDIFF'."""
        return Metaclass_PositionOrVelocityType.__constants['INS_PSRDIFF']

    @property
    def INS_RTKFLOAT(self):
        """Message constant 'INS_RTKFLOAT'."""
        return Metaclass_PositionOrVelocityType.__constants['INS_RTKFLOAT']

    @property
    def INS_RTKFIXED(self):
        """Message constant 'INS_RTKFIXED'."""
        return Metaclass_PositionOrVelocityType.__constants['INS_RTKFIXED']

    @property
    def PPP_CONVERGING(self):
        """Message constant 'PPP_CONVERGING'."""
        return Metaclass_PositionOrVelocityType.__constants['PPP_CONVERGING']

    @property
    def PPP(self):
        """Message constant 'PPP'."""
        return Metaclass_PositionOrVelocityType.__constants['PPP']

    @property
    def OPERATIONAL(self):
        """Message constant 'OPERATIONAL'."""
        return Metaclass_PositionOrVelocityType.__constants['OPERATIONAL']

    @property
    def WARNING(self):
        """Message constant 'WARNING'."""
        return Metaclass_PositionOrVelocityType.__constants['WARNING']

    @property
    def OUT_OF_BOUNDS(self):
        """Message constant 'OUT_OF_BOUNDS'."""
        return Metaclass_PositionOrVelocityType.__constants['OUT_OF_BOUNDS']

    @property
    def INS_PPP_CONVERGING(self):
        """Message constant 'INS_PPP_CONVERGING'."""
        return Metaclass_PositionOrVelocityType.__constants['INS_PPP_CONVERGING']

    @property
    def INS_PPP(self):
        """Message constant 'INS_PPP'."""
        return Metaclass_PositionOrVelocityType.__constants['INS_PPP']

    @property
    def PPP_BASIC_CONVERGING(self):
        """Message constant 'PPP_BASIC_CONVERGING'."""
        return Metaclass_PositionOrVelocityType.__constants['PPP_BASIC_CONVERGING']

    @property
    def PPP_BASIC(self):
        """Message constant 'PPP_BASIC'."""
        return Metaclass_PositionOrVelocityType.__constants['PPP_BASIC']

    @property
    def INS_PPP_BASIC_CONVERGING(self):
        """Message constant 'INS_PPP_BASIC_CONVERGING'."""
        return Metaclass_PositionOrVelocityType.__constants['INS_PPP_BASIC_CONVERGING']

    @property
    def INS_PPP_BASIC(self):
        """Message constant 'INS_PPP_BASIC'."""
        return Metaclass_PositionOrVelocityType.__constants['INS_PPP_BASIC']


class PositionOrVelocityType(metaclass=Metaclass_PositionOrVelocityType):
    """
    Message class 'PositionOrVelocityType'.

    Constants:
      NONE
      FIXEDPOS
      FIXEDHEIGHT
      DOPPLER_VELOCITY
      SINGLE
      PSRDIFF
      WAAS
      PROPAGATED
      L1_FLOAT
      NARROW_FLOAT
      L1_INT
      WIDE_INT
      NARROW_INT
      RTK_DIRECT_INS
      INS_SBAS
      INS_PSRSP
      INS_PSRDIFF
      INS_RTKFLOAT
      INS_RTKFIXED
      PPP_CONVERGING
      PPP
      OPERATIONAL
      WARNING
      OUT_OF_BOUNDS
      INS_PPP_CONVERGING
      INS_PPP
      PPP_BASIC_CONVERGING
      PPP_BASIC
      INS_PPP_BASIC_CONVERGING
      INS_PPP_BASIC
    """

    __slots__ = [
        '_type',
    ]

    _fields_and_field_types = {
        'type': 'uint32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.type = kwargs.get('type', int())

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
        if self.type != other.type:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property  # noqa: A003
    def type(self):  # noqa: A003
        """Message field 'type'."""
        return self._type

    @type.setter  # noqa: A003
    def type(self, value):  # noqa: A003
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'type' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'type' field must be an unsigned integer in [0, 4294967295]"
        self._type = value
