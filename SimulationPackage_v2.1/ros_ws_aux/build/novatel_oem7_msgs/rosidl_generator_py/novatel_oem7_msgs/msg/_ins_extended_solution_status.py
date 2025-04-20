# generated from rosidl_generator_py/resource/_idl.py.em
# with input from novatel_oem7_msgs:msg/INSExtendedSolutionStatus.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_INSExtendedSolutionStatus(type):
    """Metaclass of message 'INSExtendedSolutionStatus'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'POSITION_UPDATE': 1,
        'PHASE_UPDATE': 2,
        'ZERO_VELOCITY_UPDATE': 4,
        'WHEEL_SEONSOR_UPDATE': 8,
        'ALIGN_UPDATE': 16,
        'EXTERNAL_POSITION_UPDATE': 32,
        'INS_SOLUTIN_CONVERGENCE_FLAG': 64,
        'DOPPLER_UPDATE': 128,
        'PSEUDORANGE_UPDATE': 256,
        'VELOCITY_UPDATE': 512,
        'RESERVED_1': 1024,
        'DEAD_RECONING_UPDATE': 2048,
        'PHASE_WIND_UP_UPDATE': 4096,
        'COURSE_OVER_GROUND_UPDATE': 8192,
        'EXTERNAL_VELOCITY_UPDATE': 16384,
        'EXTERNAL_ATTITUDE_UPDATE': 32768,
        'EXTERNAL_HEADING_UPDATE': 65535,
        'EXTERNAL_HEIGHT_UPDATE': 131072,
        'RESERVED_2': 262144,
        'RESERVED_3': 524288,
        'ROVER_POSITION_UPDATE': 1048576,
        'ROVER_POSITION_UPDATE_TYPE': 2097152,
        'RESERVED_4': 4194304,
        'RESERVED_5': 8388608,
        'TURN_ON_BIASES_ESTIMATED': 16777216,
        'ALIGNMENT_DIRECTION_VERIFIED': 33554432,
        'ALIGNMENT_INDICATION_1': 67108864,
        'ALIGNMENT_INDICATION_2': 134217728,
        'ALIGNMENT_INDICATION_3': 268435456,
        'NVM_SEED_INDICATION_1': 538870912,
        'NVM_SEED_INDICATION_2': 1073741824,
        'NVM_SEED_INDICATION_3': 2147483648,
        'ALIGNMENT_INCOMPLETE_ALIGNMENT': 0,
        'ALIGNMENT_STATIC': 1,
        'ALIGNMENT_KINETMATIC': 2,
        'ALIGNMENT_DUAL_ANTENNA': 3,
        'ALIGNMENT_USER_COMMAND': 4,
        'ALIGNMENT_NVM_SEED': 5,
        'NVM_SEED_INACTIVE': 0,
        'NVM_SEED_STORED_INVALID': 1,
        'NVM_SEED_PENDING_VALIDATION': 2,
        'NVM_SEED_INJECTED': 4,
        'NVM_SEEED_DATA_IGNORED': 5,
        'NVM_SEED_ERROR_MODEL_DATA_INJECTED': 6,
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
                'novatel_oem7_msgs.msg.INSExtendedSolutionStatus')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__ins_extended_solution_status
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__ins_extended_solution_status
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__ins_extended_solution_status
            cls._TYPE_SUPPORT = module.type_support_msg__msg__ins_extended_solution_status
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__ins_extended_solution_status

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'POSITION_UPDATE': cls.__constants['POSITION_UPDATE'],
            'PHASE_UPDATE': cls.__constants['PHASE_UPDATE'],
            'ZERO_VELOCITY_UPDATE': cls.__constants['ZERO_VELOCITY_UPDATE'],
            'WHEEL_SEONSOR_UPDATE': cls.__constants['WHEEL_SEONSOR_UPDATE'],
            'ALIGN_UPDATE': cls.__constants['ALIGN_UPDATE'],
            'EXTERNAL_POSITION_UPDATE': cls.__constants['EXTERNAL_POSITION_UPDATE'],
            'INS_SOLUTIN_CONVERGENCE_FLAG': cls.__constants['INS_SOLUTIN_CONVERGENCE_FLAG'],
            'DOPPLER_UPDATE': cls.__constants['DOPPLER_UPDATE'],
            'PSEUDORANGE_UPDATE': cls.__constants['PSEUDORANGE_UPDATE'],
            'VELOCITY_UPDATE': cls.__constants['VELOCITY_UPDATE'],
            'RESERVED_1': cls.__constants['RESERVED_1'],
            'DEAD_RECONING_UPDATE': cls.__constants['DEAD_RECONING_UPDATE'],
            'PHASE_WIND_UP_UPDATE': cls.__constants['PHASE_WIND_UP_UPDATE'],
            'COURSE_OVER_GROUND_UPDATE': cls.__constants['COURSE_OVER_GROUND_UPDATE'],
            'EXTERNAL_VELOCITY_UPDATE': cls.__constants['EXTERNAL_VELOCITY_UPDATE'],
            'EXTERNAL_ATTITUDE_UPDATE': cls.__constants['EXTERNAL_ATTITUDE_UPDATE'],
            'EXTERNAL_HEADING_UPDATE': cls.__constants['EXTERNAL_HEADING_UPDATE'],
            'EXTERNAL_HEIGHT_UPDATE': cls.__constants['EXTERNAL_HEIGHT_UPDATE'],
            'RESERVED_2': cls.__constants['RESERVED_2'],
            'RESERVED_3': cls.__constants['RESERVED_3'],
            'ROVER_POSITION_UPDATE': cls.__constants['ROVER_POSITION_UPDATE'],
            'ROVER_POSITION_UPDATE_TYPE': cls.__constants['ROVER_POSITION_UPDATE_TYPE'],
            'RESERVED_4': cls.__constants['RESERVED_4'],
            'RESERVED_5': cls.__constants['RESERVED_5'],
            'TURN_ON_BIASES_ESTIMATED': cls.__constants['TURN_ON_BIASES_ESTIMATED'],
            'ALIGNMENT_DIRECTION_VERIFIED': cls.__constants['ALIGNMENT_DIRECTION_VERIFIED'],
            'ALIGNMENT_INDICATION_1': cls.__constants['ALIGNMENT_INDICATION_1'],
            'ALIGNMENT_INDICATION_2': cls.__constants['ALIGNMENT_INDICATION_2'],
            'ALIGNMENT_INDICATION_3': cls.__constants['ALIGNMENT_INDICATION_3'],
            'NVM_SEED_INDICATION_1': cls.__constants['NVM_SEED_INDICATION_1'],
            'NVM_SEED_INDICATION_2': cls.__constants['NVM_SEED_INDICATION_2'],
            'NVM_SEED_INDICATION_3': cls.__constants['NVM_SEED_INDICATION_3'],
            'ALIGNMENT_INCOMPLETE_ALIGNMENT': cls.__constants['ALIGNMENT_INCOMPLETE_ALIGNMENT'],
            'ALIGNMENT_STATIC': cls.__constants['ALIGNMENT_STATIC'],
            'ALIGNMENT_KINETMATIC': cls.__constants['ALIGNMENT_KINETMATIC'],
            'ALIGNMENT_DUAL_ANTENNA': cls.__constants['ALIGNMENT_DUAL_ANTENNA'],
            'ALIGNMENT_USER_COMMAND': cls.__constants['ALIGNMENT_USER_COMMAND'],
            'ALIGNMENT_NVM_SEED': cls.__constants['ALIGNMENT_NVM_SEED'],
            'NVM_SEED_INACTIVE': cls.__constants['NVM_SEED_INACTIVE'],
            'NVM_SEED_STORED_INVALID': cls.__constants['NVM_SEED_STORED_INVALID'],
            'NVM_SEED_PENDING_VALIDATION': cls.__constants['NVM_SEED_PENDING_VALIDATION'],
            'NVM_SEED_INJECTED': cls.__constants['NVM_SEED_INJECTED'],
            'NVM_SEEED_DATA_IGNORED': cls.__constants['NVM_SEEED_DATA_IGNORED'],
            'NVM_SEED_ERROR_MODEL_DATA_INJECTED': cls.__constants['NVM_SEED_ERROR_MODEL_DATA_INJECTED'],
        }

    @property
    def POSITION_UPDATE(self):
        """Message constant 'POSITION_UPDATE'."""
        return Metaclass_INSExtendedSolutionStatus.__constants['POSITION_UPDATE']

    @property
    def PHASE_UPDATE(self):
        """Message constant 'PHASE_UPDATE'."""
        return Metaclass_INSExtendedSolutionStatus.__constants['PHASE_UPDATE']

    @property
    def ZERO_VELOCITY_UPDATE(self):
        """Message constant 'ZERO_VELOCITY_UPDATE'."""
        return Metaclass_INSExtendedSolutionStatus.__constants['ZERO_VELOCITY_UPDATE']

    @property
    def WHEEL_SEONSOR_UPDATE(self):
        """Message constant 'WHEEL_SEONSOR_UPDATE'."""
        return Metaclass_INSExtendedSolutionStatus.__constants['WHEEL_SEONSOR_UPDATE']

    @property
    def ALIGN_UPDATE(self):
        """Message constant 'ALIGN_UPDATE'."""
        return Metaclass_INSExtendedSolutionStatus.__constants['ALIGN_UPDATE']

    @property
    def EXTERNAL_POSITION_UPDATE(self):
        """Message constant 'EXTERNAL_POSITION_UPDATE'."""
        return Metaclass_INSExtendedSolutionStatus.__constants['EXTERNAL_POSITION_UPDATE']

    @property
    def INS_SOLUTIN_CONVERGENCE_FLAG(self):
        """Message constant 'INS_SOLUTIN_CONVERGENCE_FLAG'."""
        return Metaclass_INSExtendedSolutionStatus.__constants['INS_SOLUTIN_CONVERGENCE_FLAG']

    @property
    def DOPPLER_UPDATE(self):
        """Message constant 'DOPPLER_UPDATE'."""
        return Metaclass_INSExtendedSolutionStatus.__constants['DOPPLER_UPDATE']

    @property
    def PSEUDORANGE_UPDATE(self):
        """Message constant 'PSEUDORANGE_UPDATE'."""
        return Metaclass_INSExtendedSolutionStatus.__constants['PSEUDORANGE_UPDATE']

    @property
    def VELOCITY_UPDATE(self):
        """Message constant 'VELOCITY_UPDATE'."""
        return Metaclass_INSExtendedSolutionStatus.__constants['VELOCITY_UPDATE']

    @property
    def RESERVED_1(self):
        """Message constant 'RESERVED_1'."""
        return Metaclass_INSExtendedSolutionStatus.__constants['RESERVED_1']

    @property
    def DEAD_RECONING_UPDATE(self):
        """Message constant 'DEAD_RECONING_UPDATE'."""
        return Metaclass_INSExtendedSolutionStatus.__constants['DEAD_RECONING_UPDATE']

    @property
    def PHASE_WIND_UP_UPDATE(self):
        """Message constant 'PHASE_WIND_UP_UPDATE'."""
        return Metaclass_INSExtendedSolutionStatus.__constants['PHASE_WIND_UP_UPDATE']

    @property
    def COURSE_OVER_GROUND_UPDATE(self):
        """Message constant 'COURSE_OVER_GROUND_UPDATE'."""
        return Metaclass_INSExtendedSolutionStatus.__constants['COURSE_OVER_GROUND_UPDATE']

    @property
    def EXTERNAL_VELOCITY_UPDATE(self):
        """Message constant 'EXTERNAL_VELOCITY_UPDATE'."""
        return Metaclass_INSExtendedSolutionStatus.__constants['EXTERNAL_VELOCITY_UPDATE']

    @property
    def EXTERNAL_ATTITUDE_UPDATE(self):
        """Message constant 'EXTERNAL_ATTITUDE_UPDATE'."""
        return Metaclass_INSExtendedSolutionStatus.__constants['EXTERNAL_ATTITUDE_UPDATE']

    @property
    def EXTERNAL_HEADING_UPDATE(self):
        """Message constant 'EXTERNAL_HEADING_UPDATE'."""
        return Metaclass_INSExtendedSolutionStatus.__constants['EXTERNAL_HEADING_UPDATE']

    @property
    def EXTERNAL_HEIGHT_UPDATE(self):
        """Message constant 'EXTERNAL_HEIGHT_UPDATE'."""
        return Metaclass_INSExtendedSolutionStatus.__constants['EXTERNAL_HEIGHT_UPDATE']

    @property
    def RESERVED_2(self):
        """Message constant 'RESERVED_2'."""
        return Metaclass_INSExtendedSolutionStatus.__constants['RESERVED_2']

    @property
    def RESERVED_3(self):
        """Message constant 'RESERVED_3'."""
        return Metaclass_INSExtendedSolutionStatus.__constants['RESERVED_3']

    @property
    def ROVER_POSITION_UPDATE(self):
        """Message constant 'ROVER_POSITION_UPDATE'."""
        return Metaclass_INSExtendedSolutionStatus.__constants['ROVER_POSITION_UPDATE']

    @property
    def ROVER_POSITION_UPDATE_TYPE(self):
        """Message constant 'ROVER_POSITION_UPDATE_TYPE'."""
        return Metaclass_INSExtendedSolutionStatus.__constants['ROVER_POSITION_UPDATE_TYPE']

    @property
    def RESERVED_4(self):
        """Message constant 'RESERVED_4'."""
        return Metaclass_INSExtendedSolutionStatus.__constants['RESERVED_4']

    @property
    def RESERVED_5(self):
        """Message constant 'RESERVED_5'."""
        return Metaclass_INSExtendedSolutionStatus.__constants['RESERVED_5']

    @property
    def TURN_ON_BIASES_ESTIMATED(self):
        """Message constant 'TURN_ON_BIASES_ESTIMATED'."""
        return Metaclass_INSExtendedSolutionStatus.__constants['TURN_ON_BIASES_ESTIMATED']

    @property
    def ALIGNMENT_DIRECTION_VERIFIED(self):
        """Message constant 'ALIGNMENT_DIRECTION_VERIFIED'."""
        return Metaclass_INSExtendedSolutionStatus.__constants['ALIGNMENT_DIRECTION_VERIFIED']

    @property
    def ALIGNMENT_INDICATION_1(self):
        """Message constant 'ALIGNMENT_INDICATION_1'."""
        return Metaclass_INSExtendedSolutionStatus.__constants['ALIGNMENT_INDICATION_1']

    @property
    def ALIGNMENT_INDICATION_2(self):
        """Message constant 'ALIGNMENT_INDICATION_2'."""
        return Metaclass_INSExtendedSolutionStatus.__constants['ALIGNMENT_INDICATION_2']

    @property
    def ALIGNMENT_INDICATION_3(self):
        """Message constant 'ALIGNMENT_INDICATION_3'."""
        return Metaclass_INSExtendedSolutionStatus.__constants['ALIGNMENT_INDICATION_3']

    @property
    def NVM_SEED_INDICATION_1(self):
        """Message constant 'NVM_SEED_INDICATION_1'."""
        return Metaclass_INSExtendedSolutionStatus.__constants['NVM_SEED_INDICATION_1']

    @property
    def NVM_SEED_INDICATION_2(self):
        """Message constant 'NVM_SEED_INDICATION_2'."""
        return Metaclass_INSExtendedSolutionStatus.__constants['NVM_SEED_INDICATION_2']

    @property
    def NVM_SEED_INDICATION_3(self):
        """Message constant 'NVM_SEED_INDICATION_3'."""
        return Metaclass_INSExtendedSolutionStatus.__constants['NVM_SEED_INDICATION_3']

    @property
    def ALIGNMENT_INCOMPLETE_ALIGNMENT(self):
        """Message constant 'ALIGNMENT_INCOMPLETE_ALIGNMENT'."""
        return Metaclass_INSExtendedSolutionStatus.__constants['ALIGNMENT_INCOMPLETE_ALIGNMENT']

    @property
    def ALIGNMENT_STATIC(self):
        """Message constant 'ALIGNMENT_STATIC'."""
        return Metaclass_INSExtendedSolutionStatus.__constants['ALIGNMENT_STATIC']

    @property
    def ALIGNMENT_KINETMATIC(self):
        """Message constant 'ALIGNMENT_KINETMATIC'."""
        return Metaclass_INSExtendedSolutionStatus.__constants['ALIGNMENT_KINETMATIC']

    @property
    def ALIGNMENT_DUAL_ANTENNA(self):
        """Message constant 'ALIGNMENT_DUAL_ANTENNA'."""
        return Metaclass_INSExtendedSolutionStatus.__constants['ALIGNMENT_DUAL_ANTENNA']

    @property
    def ALIGNMENT_USER_COMMAND(self):
        """Message constant 'ALIGNMENT_USER_COMMAND'."""
        return Metaclass_INSExtendedSolutionStatus.__constants['ALIGNMENT_USER_COMMAND']

    @property
    def ALIGNMENT_NVM_SEED(self):
        """Message constant 'ALIGNMENT_NVM_SEED'."""
        return Metaclass_INSExtendedSolutionStatus.__constants['ALIGNMENT_NVM_SEED']

    @property
    def NVM_SEED_INACTIVE(self):
        """Message constant 'NVM_SEED_INACTIVE'."""
        return Metaclass_INSExtendedSolutionStatus.__constants['NVM_SEED_INACTIVE']

    @property
    def NVM_SEED_STORED_INVALID(self):
        """Message constant 'NVM_SEED_STORED_INVALID'."""
        return Metaclass_INSExtendedSolutionStatus.__constants['NVM_SEED_STORED_INVALID']

    @property
    def NVM_SEED_PENDING_VALIDATION(self):
        """Message constant 'NVM_SEED_PENDING_VALIDATION'."""
        return Metaclass_INSExtendedSolutionStatus.__constants['NVM_SEED_PENDING_VALIDATION']

    @property
    def NVM_SEED_INJECTED(self):
        """Message constant 'NVM_SEED_INJECTED'."""
        return Metaclass_INSExtendedSolutionStatus.__constants['NVM_SEED_INJECTED']

    @property
    def NVM_SEEED_DATA_IGNORED(self):
        """Message constant 'NVM_SEEED_DATA_IGNORED'."""
        return Metaclass_INSExtendedSolutionStatus.__constants['NVM_SEEED_DATA_IGNORED']

    @property
    def NVM_SEED_ERROR_MODEL_DATA_INJECTED(self):
        """Message constant 'NVM_SEED_ERROR_MODEL_DATA_INJECTED'."""
        return Metaclass_INSExtendedSolutionStatus.__constants['NVM_SEED_ERROR_MODEL_DATA_INJECTED']


class INSExtendedSolutionStatus(metaclass=Metaclass_INSExtendedSolutionStatus):
    """
    Message class 'INSExtendedSolutionStatus'.

    Constants:
      POSITION_UPDATE
      PHASE_UPDATE
      ZERO_VELOCITY_UPDATE
      WHEEL_SEONSOR_UPDATE
      ALIGN_UPDATE
      EXTERNAL_POSITION_UPDATE
      INS_SOLUTIN_CONVERGENCE_FLAG
      DOPPLER_UPDATE
      PSEUDORANGE_UPDATE
      VELOCITY_UPDATE
      RESERVED_1
      DEAD_RECONING_UPDATE
      PHASE_WIND_UP_UPDATE
      COURSE_OVER_GROUND_UPDATE
      EXTERNAL_VELOCITY_UPDATE
      EXTERNAL_ATTITUDE_UPDATE
      EXTERNAL_HEADING_UPDATE
      EXTERNAL_HEIGHT_UPDATE
      RESERVED_2
      RESERVED_3
      ROVER_POSITION_UPDATE
      ROVER_POSITION_UPDATE_TYPE
      RESERVED_4
      RESERVED_5
      TURN_ON_BIASES_ESTIMATED
      ALIGNMENT_DIRECTION_VERIFIED
      ALIGNMENT_INDICATION_1
      ALIGNMENT_INDICATION_2
      ALIGNMENT_INDICATION_3
      NVM_SEED_INDICATION_1
      NVM_SEED_INDICATION_2
      NVM_SEED_INDICATION_3
      ALIGNMENT_INCOMPLETE_ALIGNMENT
      ALIGNMENT_STATIC
      ALIGNMENT_KINETMATIC
      ALIGNMENT_DUAL_ANTENNA
      ALIGNMENT_USER_COMMAND
      ALIGNMENT_NVM_SEED
      NVM_SEED_INACTIVE
      NVM_SEED_STORED_INVALID
      NVM_SEED_PENDING_VALIDATION
      NVM_SEED_INJECTED
      NVM_SEEED_DATA_IGNORED
      NVM_SEED_ERROR_MODEL_DATA_INJECTED
    """

    __slots__ = [
        '_status',
    ]

    _fields_and_field_types = {
        'status': 'uint32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.status = kwargs.get('status', int())

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
        if self.status != other.status:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def status(self):
        """Message field 'status'."""
        return self._status

    @status.setter
    def status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'status' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'status' field must be an unsigned integer in [0, 4294967295]"
        self._status = value
