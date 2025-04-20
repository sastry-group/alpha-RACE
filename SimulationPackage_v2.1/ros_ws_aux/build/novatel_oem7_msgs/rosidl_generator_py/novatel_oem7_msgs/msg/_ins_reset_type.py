# generated from rosidl_generator_py/resource/_idl.py.em
# with input from novatel_oem7_msgs:msg/INSResetType.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_INSResetType(type):
    """Metaclass of message 'INSResetType'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'INITIALIZED': 0,
        'INS_TIMING_ERROR': 1,
        'INVALID_SOLUTION': 2,
        'INS_ORIENT_CHANGED': 3,
        'INS_USER_COMMAND': 4,
        'INS_CALIBRATION': 5,
        'INIT_ATTITUDE_RECEIVED': 6,
        'ALIGNMENT_MODE_CHANGED': 8,
        'EXPT_RESTRICTS_EXCEEDED': 9,
        'DATA_GAP': 10,
        'RECEIVED_IMU_SPECS': 11,
        'ACCEL_RESTRICTIONS_EXCEEDED': 12,
        'ROTATION_RESTRICTIONS_EXCEEDED': 13,
        'RAWIMU_STATUS_INVALID': 14,
        'IMU_CONFIGURED': 15,
        'IMU_UNUSPPORTED': 16,
        'INS_SEED_INVALID': 17,
        'INS_SEED_VALIDATION_FAILED': 18,
        'USER_COMMAND_RESTART': 19,
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
                'novatel_oem7_msgs.msg.INSResetType')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__ins_reset_type
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__ins_reset_type
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__ins_reset_type
            cls._TYPE_SUPPORT = module.type_support_msg__msg__ins_reset_type
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__ins_reset_type

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'INITIALIZED': cls.__constants['INITIALIZED'],
            'INS_TIMING_ERROR': cls.__constants['INS_TIMING_ERROR'],
            'INVALID_SOLUTION': cls.__constants['INVALID_SOLUTION'],
            'INS_ORIENT_CHANGED': cls.__constants['INS_ORIENT_CHANGED'],
            'INS_USER_COMMAND': cls.__constants['INS_USER_COMMAND'],
            'INS_CALIBRATION': cls.__constants['INS_CALIBRATION'],
            'INIT_ATTITUDE_RECEIVED': cls.__constants['INIT_ATTITUDE_RECEIVED'],
            'ALIGNMENT_MODE_CHANGED': cls.__constants['ALIGNMENT_MODE_CHANGED'],
            'EXPT_RESTRICTS_EXCEEDED': cls.__constants['EXPT_RESTRICTS_EXCEEDED'],
            'DATA_GAP': cls.__constants['DATA_GAP'],
            'RECEIVED_IMU_SPECS': cls.__constants['RECEIVED_IMU_SPECS'],
            'ACCEL_RESTRICTIONS_EXCEEDED': cls.__constants['ACCEL_RESTRICTIONS_EXCEEDED'],
            'ROTATION_RESTRICTIONS_EXCEEDED': cls.__constants['ROTATION_RESTRICTIONS_EXCEEDED'],
            'RAWIMU_STATUS_INVALID': cls.__constants['RAWIMU_STATUS_INVALID'],
            'IMU_CONFIGURED': cls.__constants['IMU_CONFIGURED'],
            'IMU_UNUSPPORTED': cls.__constants['IMU_UNUSPPORTED'],
            'INS_SEED_INVALID': cls.__constants['INS_SEED_INVALID'],
            'INS_SEED_VALIDATION_FAILED': cls.__constants['INS_SEED_VALIDATION_FAILED'],
            'USER_COMMAND_RESTART': cls.__constants['USER_COMMAND_RESTART'],
        }

    @property
    def INITIALIZED(self):
        """Message constant 'INITIALIZED'."""
        return Metaclass_INSResetType.__constants['INITIALIZED']

    @property
    def INS_TIMING_ERROR(self):
        """Message constant 'INS_TIMING_ERROR'."""
        return Metaclass_INSResetType.__constants['INS_TIMING_ERROR']

    @property
    def INVALID_SOLUTION(self):
        """Message constant 'INVALID_SOLUTION'."""
        return Metaclass_INSResetType.__constants['INVALID_SOLUTION']

    @property
    def INS_ORIENT_CHANGED(self):
        """Message constant 'INS_ORIENT_CHANGED'."""
        return Metaclass_INSResetType.__constants['INS_ORIENT_CHANGED']

    @property
    def INS_USER_COMMAND(self):
        """Message constant 'INS_USER_COMMAND'."""
        return Metaclass_INSResetType.__constants['INS_USER_COMMAND']

    @property
    def INS_CALIBRATION(self):
        """Message constant 'INS_CALIBRATION'."""
        return Metaclass_INSResetType.__constants['INS_CALIBRATION']

    @property
    def INIT_ATTITUDE_RECEIVED(self):
        """Message constant 'INIT_ATTITUDE_RECEIVED'."""
        return Metaclass_INSResetType.__constants['INIT_ATTITUDE_RECEIVED']

    @property
    def ALIGNMENT_MODE_CHANGED(self):
        """Message constant 'ALIGNMENT_MODE_CHANGED'."""
        return Metaclass_INSResetType.__constants['ALIGNMENT_MODE_CHANGED']

    @property
    def EXPT_RESTRICTS_EXCEEDED(self):
        """Message constant 'EXPT_RESTRICTS_EXCEEDED'."""
        return Metaclass_INSResetType.__constants['EXPT_RESTRICTS_EXCEEDED']

    @property
    def DATA_GAP(self):
        """Message constant 'DATA_GAP'."""
        return Metaclass_INSResetType.__constants['DATA_GAP']

    @property
    def RECEIVED_IMU_SPECS(self):
        """Message constant 'RECEIVED_IMU_SPECS'."""
        return Metaclass_INSResetType.__constants['RECEIVED_IMU_SPECS']

    @property
    def ACCEL_RESTRICTIONS_EXCEEDED(self):
        """Message constant 'ACCEL_RESTRICTIONS_EXCEEDED'."""
        return Metaclass_INSResetType.__constants['ACCEL_RESTRICTIONS_EXCEEDED']

    @property
    def ROTATION_RESTRICTIONS_EXCEEDED(self):
        """Message constant 'ROTATION_RESTRICTIONS_EXCEEDED'."""
        return Metaclass_INSResetType.__constants['ROTATION_RESTRICTIONS_EXCEEDED']

    @property
    def RAWIMU_STATUS_INVALID(self):
        """Message constant 'RAWIMU_STATUS_INVALID'."""
        return Metaclass_INSResetType.__constants['RAWIMU_STATUS_INVALID']

    @property
    def IMU_CONFIGURED(self):
        """Message constant 'IMU_CONFIGURED'."""
        return Metaclass_INSResetType.__constants['IMU_CONFIGURED']

    @property
    def IMU_UNUSPPORTED(self):
        """Message constant 'IMU_UNUSPPORTED'."""
        return Metaclass_INSResetType.__constants['IMU_UNUSPPORTED']

    @property
    def INS_SEED_INVALID(self):
        """Message constant 'INS_SEED_INVALID'."""
        return Metaclass_INSResetType.__constants['INS_SEED_INVALID']

    @property
    def INS_SEED_VALIDATION_FAILED(self):
        """Message constant 'INS_SEED_VALIDATION_FAILED'."""
        return Metaclass_INSResetType.__constants['INS_SEED_VALIDATION_FAILED']

    @property
    def USER_COMMAND_RESTART(self):
        """Message constant 'USER_COMMAND_RESTART'."""
        return Metaclass_INSResetType.__constants['USER_COMMAND_RESTART']


class INSResetType(metaclass=Metaclass_INSResetType):
    """
    Message class 'INSResetType'.

    Constants:
      INITIALIZED
      INS_TIMING_ERROR
      INVALID_SOLUTION
      INS_ORIENT_CHANGED
      INS_USER_COMMAND
      INS_CALIBRATION
      INIT_ATTITUDE_RECEIVED
      ALIGNMENT_MODE_CHANGED
      EXPT_RESTRICTS_EXCEEDED
      DATA_GAP
      RECEIVED_IMU_SPECS
      ACCEL_RESTRICTIONS_EXCEEDED
      ROTATION_RESTRICTIONS_EXCEEDED
      RAWIMU_STATUS_INVALID
      IMU_CONFIGURED
      IMU_UNUSPPORTED
      INS_SEED_INVALID
      INS_SEED_VALIDATION_FAILED
      USER_COMMAND_RESTART
    """

    __slots__ = [
        '_type',
    ]

    _fields_and_field_types = {
        'type': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
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
            assert value >= 0 and value < 256, \
                "The 'type' field must be an unsigned integer in [0, 255]"
        self._type = value
