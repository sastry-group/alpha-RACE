# generated from rosidl_generator_py/resource/_idl.py.em
# with input from novatel_oem7_msgs:msg/InertialSolutionStatus.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_InertialSolutionStatus(type):
    """Metaclass of message 'InertialSolutionStatus'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'INS_INACTIVE': 0,
        'INS_ALIGNING': 1,
        'INS_HIGH_VARIANCE': 2,
        'INS_SOLUTION_GOOD': 3,
        'INS_SOLUTION_FREE': 6,
        'INS_ALIGNMENT_COMPLETE': 7,
        'DETERMINING_ORIENTATION': 8,
        'WAITING_INITIAL_POS': 9,
        'WAITING_AZIMUTH': 10,
        'INITIALIZING_BIASES': 11,
        'MOTION_DETECT': 12,
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
                'novatel_oem7_msgs.msg.InertialSolutionStatus')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__inertial_solution_status
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__inertial_solution_status
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__inertial_solution_status
            cls._TYPE_SUPPORT = module.type_support_msg__msg__inertial_solution_status
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__inertial_solution_status

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'INS_INACTIVE': cls.__constants['INS_INACTIVE'],
            'INS_ALIGNING': cls.__constants['INS_ALIGNING'],
            'INS_HIGH_VARIANCE': cls.__constants['INS_HIGH_VARIANCE'],
            'INS_SOLUTION_GOOD': cls.__constants['INS_SOLUTION_GOOD'],
            'INS_SOLUTION_FREE': cls.__constants['INS_SOLUTION_FREE'],
            'INS_ALIGNMENT_COMPLETE': cls.__constants['INS_ALIGNMENT_COMPLETE'],
            'DETERMINING_ORIENTATION': cls.__constants['DETERMINING_ORIENTATION'],
            'WAITING_INITIAL_POS': cls.__constants['WAITING_INITIAL_POS'],
            'WAITING_AZIMUTH': cls.__constants['WAITING_AZIMUTH'],
            'INITIALIZING_BIASES': cls.__constants['INITIALIZING_BIASES'],
            'MOTION_DETECT': cls.__constants['MOTION_DETECT'],
        }

    @property
    def INS_INACTIVE(self):
        """Message constant 'INS_INACTIVE'."""
        return Metaclass_InertialSolutionStatus.__constants['INS_INACTIVE']

    @property
    def INS_ALIGNING(self):
        """Message constant 'INS_ALIGNING'."""
        return Metaclass_InertialSolutionStatus.__constants['INS_ALIGNING']

    @property
    def INS_HIGH_VARIANCE(self):
        """Message constant 'INS_HIGH_VARIANCE'."""
        return Metaclass_InertialSolutionStatus.__constants['INS_HIGH_VARIANCE']

    @property
    def INS_SOLUTION_GOOD(self):
        """Message constant 'INS_SOLUTION_GOOD'."""
        return Metaclass_InertialSolutionStatus.__constants['INS_SOLUTION_GOOD']

    @property
    def INS_SOLUTION_FREE(self):
        """Message constant 'INS_SOLUTION_FREE'."""
        return Metaclass_InertialSolutionStatus.__constants['INS_SOLUTION_FREE']

    @property
    def INS_ALIGNMENT_COMPLETE(self):
        """Message constant 'INS_ALIGNMENT_COMPLETE'."""
        return Metaclass_InertialSolutionStatus.__constants['INS_ALIGNMENT_COMPLETE']

    @property
    def DETERMINING_ORIENTATION(self):
        """Message constant 'DETERMINING_ORIENTATION'."""
        return Metaclass_InertialSolutionStatus.__constants['DETERMINING_ORIENTATION']

    @property
    def WAITING_INITIAL_POS(self):
        """Message constant 'WAITING_INITIAL_POS'."""
        return Metaclass_InertialSolutionStatus.__constants['WAITING_INITIAL_POS']

    @property
    def WAITING_AZIMUTH(self):
        """Message constant 'WAITING_AZIMUTH'."""
        return Metaclass_InertialSolutionStatus.__constants['WAITING_AZIMUTH']

    @property
    def INITIALIZING_BIASES(self):
        """Message constant 'INITIALIZING_BIASES'."""
        return Metaclass_InertialSolutionStatus.__constants['INITIALIZING_BIASES']

    @property
    def MOTION_DETECT(self):
        """Message constant 'MOTION_DETECT'."""
        return Metaclass_InertialSolutionStatus.__constants['MOTION_DETECT']


class InertialSolutionStatus(metaclass=Metaclass_InertialSolutionStatus):
    """
    Message class 'InertialSolutionStatus'.

    Constants:
      INS_INACTIVE
      INS_ALIGNING
      INS_HIGH_VARIANCE
      INS_SOLUTION_GOOD
      INS_SOLUTION_FREE
      INS_ALIGNMENT_COMPLETE
      DETERMINING_ORIENTATION
      WAITING_INITIAL_POS
      WAITING_AZIMUTH
      INITIALIZING_BIASES
      MOTION_DETECT
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
