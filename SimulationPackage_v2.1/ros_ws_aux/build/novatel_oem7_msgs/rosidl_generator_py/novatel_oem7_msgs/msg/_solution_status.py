# generated from rosidl_generator_py/resource/_idl.py.em
# with input from novatel_oem7_msgs:msg/SolutionStatus.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SolutionStatus(type):
    """Metaclass of message 'SolutionStatus'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'SOL_COMPUTED': 0,
        'INSUFFICIENT_OBS': 1,
        'NO_CONVERGECE': 2,
        'SINGULARITY': 3,
        'COV_TRACE': 4,
        'TEST_DIST': 5,
        'COLD_START': 6,
        'V_H_LIMIT': 7,
        'VARIANCE': 8,
        'RESIDUALS': 1,
        'INTEGRITY_WARNING': 13,
        'PENDING': 18,
        'INVALID_FIX': 19,
        'UNAUTHORIZED': 20,
        'INVALID_RATE': 22,
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
                'novatel_oem7_msgs.msg.SolutionStatus')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__solution_status
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__solution_status
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__solution_status
            cls._TYPE_SUPPORT = module.type_support_msg__msg__solution_status
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__solution_status

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'SOL_COMPUTED': cls.__constants['SOL_COMPUTED'],
            'INSUFFICIENT_OBS': cls.__constants['INSUFFICIENT_OBS'],
            'NO_CONVERGECE': cls.__constants['NO_CONVERGECE'],
            'SINGULARITY': cls.__constants['SINGULARITY'],
            'COV_TRACE': cls.__constants['COV_TRACE'],
            'TEST_DIST': cls.__constants['TEST_DIST'],
            'COLD_START': cls.__constants['COLD_START'],
            'V_H_LIMIT': cls.__constants['V_H_LIMIT'],
            'VARIANCE': cls.__constants['VARIANCE'],
            'RESIDUALS': cls.__constants['RESIDUALS'],
            'INTEGRITY_WARNING': cls.__constants['INTEGRITY_WARNING'],
            'PENDING': cls.__constants['PENDING'],
            'INVALID_FIX': cls.__constants['INVALID_FIX'],
            'UNAUTHORIZED': cls.__constants['UNAUTHORIZED'],
            'INVALID_RATE': cls.__constants['INVALID_RATE'],
        }

    @property
    def SOL_COMPUTED(self):
        """Message constant 'SOL_COMPUTED'."""
        return Metaclass_SolutionStatus.__constants['SOL_COMPUTED']

    @property
    def INSUFFICIENT_OBS(self):
        """Message constant 'INSUFFICIENT_OBS'."""
        return Metaclass_SolutionStatus.__constants['INSUFFICIENT_OBS']

    @property
    def NO_CONVERGECE(self):
        """Message constant 'NO_CONVERGECE'."""
        return Metaclass_SolutionStatus.__constants['NO_CONVERGECE']

    @property
    def SINGULARITY(self):
        """Message constant 'SINGULARITY'."""
        return Metaclass_SolutionStatus.__constants['SINGULARITY']

    @property
    def COV_TRACE(self):
        """Message constant 'COV_TRACE'."""
        return Metaclass_SolutionStatus.__constants['COV_TRACE']

    @property
    def TEST_DIST(self):
        """Message constant 'TEST_DIST'."""
        return Metaclass_SolutionStatus.__constants['TEST_DIST']

    @property
    def COLD_START(self):
        """Message constant 'COLD_START'."""
        return Metaclass_SolutionStatus.__constants['COLD_START']

    @property
    def V_H_LIMIT(self):
        """Message constant 'V_H_LIMIT'."""
        return Metaclass_SolutionStatus.__constants['V_H_LIMIT']

    @property
    def VARIANCE(self):
        """Message constant 'VARIANCE'."""
        return Metaclass_SolutionStatus.__constants['VARIANCE']

    @property
    def RESIDUALS(self):
        """Message constant 'RESIDUALS'."""
        return Metaclass_SolutionStatus.__constants['RESIDUALS']

    @property
    def INTEGRITY_WARNING(self):
        """Message constant 'INTEGRITY_WARNING'."""
        return Metaclass_SolutionStatus.__constants['INTEGRITY_WARNING']

    @property
    def PENDING(self):
        """Message constant 'PENDING'."""
        return Metaclass_SolutionStatus.__constants['PENDING']

    @property
    def INVALID_FIX(self):
        """Message constant 'INVALID_FIX'."""
        return Metaclass_SolutionStatus.__constants['INVALID_FIX']

    @property
    def UNAUTHORIZED(self):
        """Message constant 'UNAUTHORIZED'."""
        return Metaclass_SolutionStatus.__constants['UNAUTHORIZED']

    @property
    def INVALID_RATE(self):
        """Message constant 'INVALID_RATE'."""
        return Metaclass_SolutionStatus.__constants['INVALID_RATE']


class SolutionStatus(metaclass=Metaclass_SolutionStatus):
    """
    Message class 'SolutionStatus'.

    Constants:
      SOL_COMPUTED
      INSUFFICIENT_OBS
      NO_CONVERGECE
      SINGULARITY
      COV_TRACE
      TEST_DIST
      COLD_START
      V_H_LIMIT
      VARIANCE
      RESIDUALS
      INTEGRITY_WARNING
      PENDING
      INVALID_FIX
      UNAUTHORIZED
      INVALID_RATE
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
