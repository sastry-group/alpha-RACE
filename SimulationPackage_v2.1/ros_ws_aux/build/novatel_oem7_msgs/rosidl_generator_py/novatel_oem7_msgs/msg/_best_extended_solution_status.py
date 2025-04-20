# generated from rosidl_generator_py/resource/_idl.py.em
# with input from novatel_oem7_msgs:msg/BestExtendedSolutionStatus.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_BestExtendedSolutionStatus(type):
    """Metaclass of message 'BestExtendedSolutionStatus'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'RTK_SOLUTION_VERIFIED': 1,
        'PDP_SOLUTION_IS_GLIDE': 1,
        'KLOBUCHAR_BROADCAST': 2,
        'SBAS_BROADCAST': 4,
        'MULTI_FREQUENCY_COMPUTED': 6,
        'PSRDIFF_CORRECTION': 8,
        'NOVATEL_BLENDED_IONO_VALUE': 10,
        'RTK_ASSIST_ACTIVE': 16,
        'ANTENNA_INFORMATION_IS_MISSING': 32,
        'RESERVED': 64,
        'POSITION_INCLUDES_TERRAIN_COMPENSATION_CORRECTIONS': 128,
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
                'novatel_oem7_msgs.msg.BestExtendedSolutionStatus')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__best_extended_solution_status
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__best_extended_solution_status
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__best_extended_solution_status
            cls._TYPE_SUPPORT = module.type_support_msg__msg__best_extended_solution_status
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__best_extended_solution_status

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'RTK_SOLUTION_VERIFIED': cls.__constants['RTK_SOLUTION_VERIFIED'],
            'PDP_SOLUTION_IS_GLIDE': cls.__constants['PDP_SOLUTION_IS_GLIDE'],
            'KLOBUCHAR_BROADCAST': cls.__constants['KLOBUCHAR_BROADCAST'],
            'SBAS_BROADCAST': cls.__constants['SBAS_BROADCAST'],
            'MULTI_FREQUENCY_COMPUTED': cls.__constants['MULTI_FREQUENCY_COMPUTED'],
            'PSRDIFF_CORRECTION': cls.__constants['PSRDIFF_CORRECTION'],
            'NOVATEL_BLENDED_IONO_VALUE': cls.__constants['NOVATEL_BLENDED_IONO_VALUE'],
            'RTK_ASSIST_ACTIVE': cls.__constants['RTK_ASSIST_ACTIVE'],
            'ANTENNA_INFORMATION_IS_MISSING': cls.__constants['ANTENNA_INFORMATION_IS_MISSING'],
            'RESERVED': cls.__constants['RESERVED'],
            'POSITION_INCLUDES_TERRAIN_COMPENSATION_CORRECTIONS': cls.__constants['POSITION_INCLUDES_TERRAIN_COMPENSATION_CORRECTIONS'],
        }

    @property
    def RTK_SOLUTION_VERIFIED(self):
        """Message constant 'RTK_SOLUTION_VERIFIED'."""
        return Metaclass_BestExtendedSolutionStatus.__constants['RTK_SOLUTION_VERIFIED']

    @property
    def PDP_SOLUTION_IS_GLIDE(self):
        """Message constant 'PDP_SOLUTION_IS_GLIDE'."""
        return Metaclass_BestExtendedSolutionStatus.__constants['PDP_SOLUTION_IS_GLIDE']

    @property
    def KLOBUCHAR_BROADCAST(self):
        """Message constant 'KLOBUCHAR_BROADCAST'."""
        return Metaclass_BestExtendedSolutionStatus.__constants['KLOBUCHAR_BROADCAST']

    @property
    def SBAS_BROADCAST(self):
        """Message constant 'SBAS_BROADCAST'."""
        return Metaclass_BestExtendedSolutionStatus.__constants['SBAS_BROADCAST']

    @property
    def MULTI_FREQUENCY_COMPUTED(self):
        """Message constant 'MULTI_FREQUENCY_COMPUTED'."""
        return Metaclass_BestExtendedSolutionStatus.__constants['MULTI_FREQUENCY_COMPUTED']

    @property
    def PSRDIFF_CORRECTION(self):
        """Message constant 'PSRDIFF_CORRECTION'."""
        return Metaclass_BestExtendedSolutionStatus.__constants['PSRDIFF_CORRECTION']

    @property
    def NOVATEL_BLENDED_IONO_VALUE(self):
        """Message constant 'NOVATEL_BLENDED_IONO_VALUE'."""
        return Metaclass_BestExtendedSolutionStatus.__constants['NOVATEL_BLENDED_IONO_VALUE']

    @property
    def RTK_ASSIST_ACTIVE(self):
        """Message constant 'RTK_ASSIST_ACTIVE'."""
        return Metaclass_BestExtendedSolutionStatus.__constants['RTK_ASSIST_ACTIVE']

    @property
    def ANTENNA_INFORMATION_IS_MISSING(self):
        """Message constant 'ANTENNA_INFORMATION_IS_MISSING'."""
        return Metaclass_BestExtendedSolutionStatus.__constants['ANTENNA_INFORMATION_IS_MISSING']

    @property
    def RESERVED(self):
        """Message constant 'RESERVED'."""
        return Metaclass_BestExtendedSolutionStatus.__constants['RESERVED']

    @property
    def POSITION_INCLUDES_TERRAIN_COMPENSATION_CORRECTIONS(self):
        """Message constant 'POSITION_INCLUDES_TERRAIN_COMPENSATION_CORRECTIONS'."""
        return Metaclass_BestExtendedSolutionStatus.__constants['POSITION_INCLUDES_TERRAIN_COMPENSATION_CORRECTIONS']


class BestExtendedSolutionStatus(metaclass=Metaclass_BestExtendedSolutionStatus):
    """
    Message class 'BestExtendedSolutionStatus'.

    Constants:
      RTK_SOLUTION_VERIFIED
      PDP_SOLUTION_IS_GLIDE
      KLOBUCHAR_BROADCAST
      SBAS_BROADCAST
      MULTI_FREQUENCY_COMPUTED
      PSRDIFF_CORRECTION
      NOVATEL_BLENDED_IONO_VALUE
      RTK_ASSIST_ACTIVE
      ANTENNA_INFORMATION_IS_MISSING
      RESERVED
      POSITION_INCLUDES_TERRAIN_COMPENSATION_CORRECTIONS
    """

    __slots__ = [
        '_status',
    ]

    _fields_and_field_types = {
        'status': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
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
            assert value >= 0 and value < 256, \
                "The 'status' field must be an unsigned integer in [0, 255]"
        self._status = value
