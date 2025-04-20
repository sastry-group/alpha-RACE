# generated from rosidl_generator_py/resource/_idl.py.em
# with input from novatel_oem7_msgs:msg/INSCONFIG.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

# Member 'enabled_updates'
import numpy  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_INSCONFIG(type):
    """Metaclass of message 'INSCONFIG'."""

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
            module = import_type_support('novatel_oem7_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'novatel_oem7_msgs.msg.INSCONFIG')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__insconfig
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__insconfig
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__insconfig
            cls._TYPE_SUPPORT = module.type_support_msg__msg__insconfig
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__insconfig

            from novatel_oem7_msgs.msg import INSAlignmentMode
            if INSAlignmentMode.__class__._TYPE_SUPPORT is None:
                INSAlignmentMode.__class__.__import_type_support__()

            from novatel_oem7_msgs.msg import INSOutputFrame
            if INSOutputFrame.__class__._TYPE_SUPPORT is None:
                INSOutputFrame.__class__.__import_type_support__()

            from novatel_oem7_msgs.msg import INSReceiverStatus
            if INSReceiverStatus.__class__._TYPE_SUPPORT is None:
                INSReceiverStatus.__class__.__import_type_support__()

            from novatel_oem7_msgs.msg import Oem7Header
            if Oem7Header.__class__._TYPE_SUPPORT is None:
                Oem7Header.__class__.__import_type_support__()

            from novatel_oem7_msgs.msg import Rotation
            if Rotation.__class__._TYPE_SUPPORT is None:
                Rotation.__class__.__import_type_support__()

            from novatel_oem7_msgs.msg import Translation
            if Translation.__class__._TYPE_SUPPORT is None:
                Translation.__class__.__import_type_support__()

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


class INSCONFIG(metaclass=Metaclass_INSCONFIG):
    """Message class 'INSCONFIG'."""

    __slots__ = [
        '_header',
        '_nov_header',
        '_imu_type',
        '_mapping',
        '_initial_alignment_velocity',
        '_heave_window',
        '_profile',
        '_enabled_updates',
        '_alignment_mode',
        '_relative_ins_output_frame',
        '_relative_ins_output_direction',
        '_ins_receiver_status',
        '_ins_seed_enabled',
        '_ins_seed_validation',
        '_reserved_1',
        '_reserved_2',
        '_reserved_3',
        '_reserved_4',
        '_reserved_5',
        '_reserved_6',
        '_reserved_7',
        '_number_of_translations',
        '_translations',
        '_number_of_rotations',
        '_rotations',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'nov_header': 'novatel_oem7_msgs/Oem7Header',
        'imu_type': 'uint32',
        'mapping': 'uint8',
        'initial_alignment_velocity': 'uint8',
        'heave_window': 'uint16',
        'profile': 'uint32',
        'enabled_updates': 'uint8[4]',
        'alignment_mode': 'novatel_oem7_msgs/INSAlignmentMode',
        'relative_ins_output_frame': 'novatel_oem7_msgs/INSOutputFrame',
        'relative_ins_output_direction': 'boolean',
        'ins_receiver_status': 'novatel_oem7_msgs/INSReceiverStatus',
        'ins_seed_enabled': 'uint8',
        'ins_seed_validation': 'uint8',
        'reserved_1': 'uint16',
        'reserved_2': 'uint32',
        'reserved_3': 'uint32',
        'reserved_4': 'uint32',
        'reserved_5': 'uint32',
        'reserved_6': 'uint32',
        'reserved_7': 'uint32',
        'number_of_translations': 'uint32',
        'translations': 'sequence<novatel_oem7_msgs/Translation>',
        'number_of_rotations': 'uint32',
        'rotations': 'sequence<novatel_oem7_msgs/Rotation>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['novatel_oem7_msgs', 'msg'], 'Oem7Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('uint8'), 4),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['novatel_oem7_msgs', 'msg'], 'INSAlignmentMode'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['novatel_oem7_msgs', 'msg'], 'INSOutputFrame'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['novatel_oem7_msgs', 'msg'], 'INSReceiverStatus'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['novatel_oem7_msgs', 'msg'], 'Translation')),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['novatel_oem7_msgs', 'msg'], 'Rotation')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        from novatel_oem7_msgs.msg import Oem7Header
        self.nov_header = kwargs.get('nov_header', Oem7Header())
        self.imu_type = kwargs.get('imu_type', int())
        self.mapping = kwargs.get('mapping', int())
        self.initial_alignment_velocity = kwargs.get('initial_alignment_velocity', int())
        self.heave_window = kwargs.get('heave_window', int())
        self.profile = kwargs.get('profile', int())
        if 'enabled_updates' not in kwargs:
            self.enabled_updates = numpy.zeros(4, dtype=numpy.uint8)
        else:
            self.enabled_updates = numpy.array(kwargs.get('enabled_updates'), dtype=numpy.uint8)
            assert self.enabled_updates.shape == (4, )
        from novatel_oem7_msgs.msg import INSAlignmentMode
        self.alignment_mode = kwargs.get('alignment_mode', INSAlignmentMode())
        from novatel_oem7_msgs.msg import INSOutputFrame
        self.relative_ins_output_frame = kwargs.get('relative_ins_output_frame', INSOutputFrame())
        self.relative_ins_output_direction = kwargs.get('relative_ins_output_direction', bool())
        from novatel_oem7_msgs.msg import INSReceiverStatus
        self.ins_receiver_status = kwargs.get('ins_receiver_status', INSReceiverStatus())
        self.ins_seed_enabled = kwargs.get('ins_seed_enabled', int())
        self.ins_seed_validation = kwargs.get('ins_seed_validation', int())
        self.reserved_1 = kwargs.get('reserved_1', int())
        self.reserved_2 = kwargs.get('reserved_2', int())
        self.reserved_3 = kwargs.get('reserved_3', int())
        self.reserved_4 = kwargs.get('reserved_4', int())
        self.reserved_5 = kwargs.get('reserved_5', int())
        self.reserved_6 = kwargs.get('reserved_6', int())
        self.reserved_7 = kwargs.get('reserved_7', int())
        self.number_of_translations = kwargs.get('number_of_translations', int())
        self.translations = kwargs.get('translations', [])
        self.number_of_rotations = kwargs.get('number_of_rotations', int())
        self.rotations = kwargs.get('rotations', [])

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
        if self.nov_header != other.nov_header:
            return False
        if self.imu_type != other.imu_type:
            return False
        if self.mapping != other.mapping:
            return False
        if self.initial_alignment_velocity != other.initial_alignment_velocity:
            return False
        if self.heave_window != other.heave_window:
            return False
        if self.profile != other.profile:
            return False
        if all(self.enabled_updates != other.enabled_updates):
            return False
        if self.alignment_mode != other.alignment_mode:
            return False
        if self.relative_ins_output_frame != other.relative_ins_output_frame:
            return False
        if self.relative_ins_output_direction != other.relative_ins_output_direction:
            return False
        if self.ins_receiver_status != other.ins_receiver_status:
            return False
        if self.ins_seed_enabled != other.ins_seed_enabled:
            return False
        if self.ins_seed_validation != other.ins_seed_validation:
            return False
        if self.reserved_1 != other.reserved_1:
            return False
        if self.reserved_2 != other.reserved_2:
            return False
        if self.reserved_3 != other.reserved_3:
            return False
        if self.reserved_4 != other.reserved_4:
            return False
        if self.reserved_5 != other.reserved_5:
            return False
        if self.reserved_6 != other.reserved_6:
            return False
        if self.reserved_7 != other.reserved_7:
            return False
        if self.number_of_translations != other.number_of_translations:
            return False
        if self.translations != other.translations:
            return False
        if self.number_of_rotations != other.number_of_rotations:
            return False
        if self.rotations != other.rotations:
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
    def nov_header(self):
        """Message field 'nov_header'."""
        return self._nov_header

    @nov_header.setter
    def nov_header(self, value):
        if __debug__:
            from novatel_oem7_msgs.msg import Oem7Header
            assert \
                isinstance(value, Oem7Header), \
                "The 'nov_header' field must be a sub message of type 'Oem7Header'"
        self._nov_header = value

    @builtins.property
    def imu_type(self):
        """Message field 'imu_type'."""
        return self._imu_type

    @imu_type.setter
    def imu_type(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'imu_type' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'imu_type' field must be an unsigned integer in [0, 4294967295]"
        self._imu_type = value

    @builtins.property
    def mapping(self):
        """Message field 'mapping'."""
        return self._mapping

    @mapping.setter
    def mapping(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'mapping' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'mapping' field must be an unsigned integer in [0, 255]"
        self._mapping = value

    @builtins.property
    def initial_alignment_velocity(self):
        """Message field 'initial_alignment_velocity'."""
        return self._initial_alignment_velocity

    @initial_alignment_velocity.setter
    def initial_alignment_velocity(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'initial_alignment_velocity' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'initial_alignment_velocity' field must be an unsigned integer in [0, 255]"
        self._initial_alignment_velocity = value

    @builtins.property
    def heave_window(self):
        """Message field 'heave_window'."""
        return self._heave_window

    @heave_window.setter
    def heave_window(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'heave_window' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'heave_window' field must be an unsigned integer in [0, 65535]"
        self._heave_window = value

    @builtins.property
    def profile(self):
        """Message field 'profile'."""
        return self._profile

    @profile.setter
    def profile(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'profile' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'profile' field must be an unsigned integer in [0, 4294967295]"
        self._profile = value

    @builtins.property
    def enabled_updates(self):
        """Message field 'enabled_updates'."""
        return self._enabled_updates

    @enabled_updates.setter
    def enabled_updates(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.uint8, \
                "The 'enabled_updates' numpy.ndarray() must have the dtype of 'numpy.uint8'"
            assert value.size == 4, \
                "The 'enabled_updates' numpy.ndarray() must have a size of 4"
            self._enabled_updates = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 4 and
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 256 for val in value)), \
                "The 'enabled_updates' field must be a set or sequence with length 4 and each value of type 'int' and each unsigned integer in [0, 255]"
        self._enabled_updates = numpy.array(value, dtype=numpy.uint8)

    @builtins.property
    def alignment_mode(self):
        """Message field 'alignment_mode'."""
        return self._alignment_mode

    @alignment_mode.setter
    def alignment_mode(self, value):
        if __debug__:
            from novatel_oem7_msgs.msg import INSAlignmentMode
            assert \
                isinstance(value, INSAlignmentMode), \
                "The 'alignment_mode' field must be a sub message of type 'INSAlignmentMode'"
        self._alignment_mode = value

    @builtins.property
    def relative_ins_output_frame(self):
        """Message field 'relative_ins_output_frame'."""
        return self._relative_ins_output_frame

    @relative_ins_output_frame.setter
    def relative_ins_output_frame(self, value):
        if __debug__:
            from novatel_oem7_msgs.msg import INSOutputFrame
            assert \
                isinstance(value, INSOutputFrame), \
                "The 'relative_ins_output_frame' field must be a sub message of type 'INSOutputFrame'"
        self._relative_ins_output_frame = value

    @builtins.property
    def relative_ins_output_direction(self):
        """Message field 'relative_ins_output_direction'."""
        return self._relative_ins_output_direction

    @relative_ins_output_direction.setter
    def relative_ins_output_direction(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'relative_ins_output_direction' field must be of type 'bool'"
        self._relative_ins_output_direction = value

    @builtins.property
    def ins_receiver_status(self):
        """Message field 'ins_receiver_status'."""
        return self._ins_receiver_status

    @ins_receiver_status.setter
    def ins_receiver_status(self, value):
        if __debug__:
            from novatel_oem7_msgs.msg import INSReceiverStatus
            assert \
                isinstance(value, INSReceiverStatus), \
                "The 'ins_receiver_status' field must be a sub message of type 'INSReceiverStatus'"
        self._ins_receiver_status = value

    @builtins.property
    def ins_seed_enabled(self):
        """Message field 'ins_seed_enabled'."""
        return self._ins_seed_enabled

    @ins_seed_enabled.setter
    def ins_seed_enabled(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'ins_seed_enabled' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'ins_seed_enabled' field must be an unsigned integer in [0, 255]"
        self._ins_seed_enabled = value

    @builtins.property
    def ins_seed_validation(self):
        """Message field 'ins_seed_validation'."""
        return self._ins_seed_validation

    @ins_seed_validation.setter
    def ins_seed_validation(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'ins_seed_validation' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'ins_seed_validation' field must be an unsigned integer in [0, 255]"
        self._ins_seed_validation = value

    @builtins.property
    def reserved_1(self):
        """Message field 'reserved_1'."""
        return self._reserved_1

    @reserved_1.setter
    def reserved_1(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'reserved_1' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'reserved_1' field must be an unsigned integer in [0, 65535]"
        self._reserved_1 = value

    @builtins.property
    def reserved_2(self):
        """Message field 'reserved_2'."""
        return self._reserved_2

    @reserved_2.setter
    def reserved_2(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'reserved_2' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'reserved_2' field must be an unsigned integer in [0, 4294967295]"
        self._reserved_2 = value

    @builtins.property
    def reserved_3(self):
        """Message field 'reserved_3'."""
        return self._reserved_3

    @reserved_3.setter
    def reserved_3(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'reserved_3' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'reserved_3' field must be an unsigned integer in [0, 4294967295]"
        self._reserved_3 = value

    @builtins.property
    def reserved_4(self):
        """Message field 'reserved_4'."""
        return self._reserved_4

    @reserved_4.setter
    def reserved_4(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'reserved_4' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'reserved_4' field must be an unsigned integer in [0, 4294967295]"
        self._reserved_4 = value

    @builtins.property
    def reserved_5(self):
        """Message field 'reserved_5'."""
        return self._reserved_5

    @reserved_5.setter
    def reserved_5(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'reserved_5' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'reserved_5' field must be an unsigned integer in [0, 4294967295]"
        self._reserved_5 = value

    @builtins.property
    def reserved_6(self):
        """Message field 'reserved_6'."""
        return self._reserved_6

    @reserved_6.setter
    def reserved_6(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'reserved_6' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'reserved_6' field must be an unsigned integer in [0, 4294967295]"
        self._reserved_6 = value

    @builtins.property
    def reserved_7(self):
        """Message field 'reserved_7'."""
        return self._reserved_7

    @reserved_7.setter
    def reserved_7(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'reserved_7' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'reserved_7' field must be an unsigned integer in [0, 4294967295]"
        self._reserved_7 = value

    @builtins.property
    def number_of_translations(self):
        """Message field 'number_of_translations'."""
        return self._number_of_translations

    @number_of_translations.setter
    def number_of_translations(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'number_of_translations' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'number_of_translations' field must be an unsigned integer in [0, 4294967295]"
        self._number_of_translations = value

    @builtins.property
    def translations(self):
        """Message field 'translations'."""
        return self._translations

    @translations.setter
    def translations(self, value):
        if __debug__:
            from novatel_oem7_msgs.msg import Translation
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, Translation) for v in value) and
                 True), \
                "The 'translations' field must be a set or sequence and each value of type 'Translation'"
        self._translations = value

    @builtins.property
    def number_of_rotations(self):
        """Message field 'number_of_rotations'."""
        return self._number_of_rotations

    @number_of_rotations.setter
    def number_of_rotations(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'number_of_rotations' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'number_of_rotations' field must be an unsigned integer in [0, 4294967295]"
        self._number_of_rotations = value

    @builtins.property
    def rotations(self):
        """Message field 'rotations'."""
        return self._rotations

    @rotations.setter
    def rotations(self, value):
        if __debug__:
            from novatel_oem7_msgs.msg import Rotation
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, Rotation) for v in value) and
                 True), \
                "The 'rotations' field must be a set or sequence and each value of type 'Rotation'"
        self._rotations = value
