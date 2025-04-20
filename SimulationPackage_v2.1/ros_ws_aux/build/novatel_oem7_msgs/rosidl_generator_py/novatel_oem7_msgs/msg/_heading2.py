# generated from rosidl_generator_py/resource/_idl.py.em
# with input from novatel_oem7_msgs:msg/HEADING2.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

# Member 'rover_stn_id'
# Member 'master_stn_id'
import numpy  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_HEADING2(type):
    """Metaclass of message 'HEADING2'."""

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
                'novatel_oem7_msgs.msg.HEADING2')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__heading2
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__heading2
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__heading2
            cls._TYPE_SUPPORT = module.type_support_msg__msg__heading2
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__heading2

            from novatel_oem7_msgs.msg import BestExtendedSolutionStatus
            if BestExtendedSolutionStatus.__class__._TYPE_SUPPORT is None:
                BestExtendedSolutionStatus.__class__.__import_type_support__()

            from novatel_oem7_msgs.msg import Oem7Header
            if Oem7Header.__class__._TYPE_SUPPORT is None:
                Oem7Header.__class__.__import_type_support__()

            from novatel_oem7_msgs.msg import PositionOrVelocityType
            if PositionOrVelocityType.__class__._TYPE_SUPPORT is None:
                PositionOrVelocityType.__class__.__import_type_support__()

            from novatel_oem7_msgs.msg import SolutionSource
            if SolutionSource.__class__._TYPE_SUPPORT is None:
                SolutionSource.__class__.__import_type_support__()

            from novatel_oem7_msgs.msg import SolutionStatus
            if SolutionStatus.__class__._TYPE_SUPPORT is None:
                SolutionStatus.__class__.__import_type_support__()

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


class HEADING2(metaclass=Metaclass_HEADING2):
    """Message class 'HEADING2'."""

    __slots__ = [
        '_header',
        '_nov_header',
        '_sol_status',
        '_pos_type',
        '_length',
        '_heading',
        '_pitch',
        '_reserved',
        '_heading_stdev',
        '_pitch_stdev',
        '_rover_stn_id',
        '_master_stn_id',
        '_num_sv_tracked',
        '_num_sv_in_sol',
        '_num_sv_obs',
        '_num_sv_multi',
        '_sol_source',
        '_ext_sol_status',
        '_galileo_beidou_sig_mask',
        '_gps_glonass_sig_mask',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'nov_header': 'novatel_oem7_msgs/Oem7Header',
        'sol_status': 'novatel_oem7_msgs/SolutionStatus',
        'pos_type': 'novatel_oem7_msgs/PositionOrVelocityType',
        'length': 'float',
        'heading': 'float',
        'pitch': 'float',
        'reserved': 'float',
        'heading_stdev': 'float',
        'pitch_stdev': 'float',
        'rover_stn_id': 'int8[4]',
        'master_stn_id': 'int8[4]',
        'num_sv_tracked': 'uint8',
        'num_sv_in_sol': 'uint8',
        'num_sv_obs': 'uint8',
        'num_sv_multi': 'uint8',
        'sol_source': 'novatel_oem7_msgs/SolutionSource',
        'ext_sol_status': 'novatel_oem7_msgs/BestExtendedSolutionStatus',
        'galileo_beidou_sig_mask': 'uint8',
        'gps_glonass_sig_mask': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['novatel_oem7_msgs', 'msg'], 'Oem7Header'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['novatel_oem7_msgs', 'msg'], 'SolutionStatus'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['novatel_oem7_msgs', 'msg'], 'PositionOrVelocityType'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('int8'), 4),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('int8'), 4),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['novatel_oem7_msgs', 'msg'], 'SolutionSource'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['novatel_oem7_msgs', 'msg'], 'BestExtendedSolutionStatus'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        from novatel_oem7_msgs.msg import Oem7Header
        self.nov_header = kwargs.get('nov_header', Oem7Header())
        from novatel_oem7_msgs.msg import SolutionStatus
        self.sol_status = kwargs.get('sol_status', SolutionStatus())
        from novatel_oem7_msgs.msg import PositionOrVelocityType
        self.pos_type = kwargs.get('pos_type', PositionOrVelocityType())
        self.length = kwargs.get('length', float())
        self.heading = kwargs.get('heading', float())
        self.pitch = kwargs.get('pitch', float())
        self.reserved = kwargs.get('reserved', float())
        self.heading_stdev = kwargs.get('heading_stdev', float())
        self.pitch_stdev = kwargs.get('pitch_stdev', float())
        if 'rover_stn_id' not in kwargs:
            self.rover_stn_id = numpy.zeros(4, dtype=numpy.int8)
        else:
            self.rover_stn_id = numpy.array(kwargs.get('rover_stn_id'), dtype=numpy.int8)
            assert self.rover_stn_id.shape == (4, )
        if 'master_stn_id' not in kwargs:
            self.master_stn_id = numpy.zeros(4, dtype=numpy.int8)
        else:
            self.master_stn_id = numpy.array(kwargs.get('master_stn_id'), dtype=numpy.int8)
            assert self.master_stn_id.shape == (4, )
        self.num_sv_tracked = kwargs.get('num_sv_tracked', int())
        self.num_sv_in_sol = kwargs.get('num_sv_in_sol', int())
        self.num_sv_obs = kwargs.get('num_sv_obs', int())
        self.num_sv_multi = kwargs.get('num_sv_multi', int())
        from novatel_oem7_msgs.msg import SolutionSource
        self.sol_source = kwargs.get('sol_source', SolutionSource())
        from novatel_oem7_msgs.msg import BestExtendedSolutionStatus
        self.ext_sol_status = kwargs.get('ext_sol_status', BestExtendedSolutionStatus())
        self.galileo_beidou_sig_mask = kwargs.get('galileo_beidou_sig_mask', int())
        self.gps_glonass_sig_mask = kwargs.get('gps_glonass_sig_mask', int())

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
        if self.sol_status != other.sol_status:
            return False
        if self.pos_type != other.pos_type:
            return False
        if self.length != other.length:
            return False
        if self.heading != other.heading:
            return False
        if self.pitch != other.pitch:
            return False
        if self.reserved != other.reserved:
            return False
        if self.heading_stdev != other.heading_stdev:
            return False
        if self.pitch_stdev != other.pitch_stdev:
            return False
        if all(self.rover_stn_id != other.rover_stn_id):
            return False
        if all(self.master_stn_id != other.master_stn_id):
            return False
        if self.num_sv_tracked != other.num_sv_tracked:
            return False
        if self.num_sv_in_sol != other.num_sv_in_sol:
            return False
        if self.num_sv_obs != other.num_sv_obs:
            return False
        if self.num_sv_multi != other.num_sv_multi:
            return False
        if self.sol_source != other.sol_source:
            return False
        if self.ext_sol_status != other.ext_sol_status:
            return False
        if self.galileo_beidou_sig_mask != other.galileo_beidou_sig_mask:
            return False
        if self.gps_glonass_sig_mask != other.gps_glonass_sig_mask:
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
    def sol_status(self):
        """Message field 'sol_status'."""
        return self._sol_status

    @sol_status.setter
    def sol_status(self, value):
        if __debug__:
            from novatel_oem7_msgs.msg import SolutionStatus
            assert \
                isinstance(value, SolutionStatus), \
                "The 'sol_status' field must be a sub message of type 'SolutionStatus'"
        self._sol_status = value

    @builtins.property
    def pos_type(self):
        """Message field 'pos_type'."""
        return self._pos_type

    @pos_type.setter
    def pos_type(self, value):
        if __debug__:
            from novatel_oem7_msgs.msg import PositionOrVelocityType
            assert \
                isinstance(value, PositionOrVelocityType), \
                "The 'pos_type' field must be a sub message of type 'PositionOrVelocityType'"
        self._pos_type = value

    @builtins.property
    def length(self):
        """Message field 'length'."""
        return self._length

    @length.setter
    def length(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'length' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'length' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._length = value

    @builtins.property
    def heading(self):
        """Message field 'heading'."""
        return self._heading

    @heading.setter
    def heading(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'heading' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'heading' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._heading = value

    @builtins.property
    def pitch(self):
        """Message field 'pitch'."""
        return self._pitch

    @pitch.setter
    def pitch(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'pitch' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'pitch' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._pitch = value

    @builtins.property
    def reserved(self):
        """Message field 'reserved'."""
        return self._reserved

    @reserved.setter
    def reserved(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'reserved' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'reserved' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._reserved = value

    @builtins.property
    def heading_stdev(self):
        """Message field 'heading_stdev'."""
        return self._heading_stdev

    @heading_stdev.setter
    def heading_stdev(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'heading_stdev' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'heading_stdev' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._heading_stdev = value

    @builtins.property
    def pitch_stdev(self):
        """Message field 'pitch_stdev'."""
        return self._pitch_stdev

    @pitch_stdev.setter
    def pitch_stdev(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'pitch_stdev' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'pitch_stdev' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._pitch_stdev = value

    @builtins.property
    def rover_stn_id(self):
        """Message field 'rover_stn_id'."""
        return self._rover_stn_id

    @rover_stn_id.setter
    def rover_stn_id(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.int8, \
                "The 'rover_stn_id' numpy.ndarray() must have the dtype of 'numpy.int8'"
            assert value.size == 4, \
                "The 'rover_stn_id' numpy.ndarray() must have a size of 4"
            self._rover_stn_id = value
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
                 all(val >= -128 and val < 128 for val in value)), \
                "The 'rover_stn_id' field must be a set or sequence with length 4 and each value of type 'int' and each integer in [-128, 127]"
        self._rover_stn_id = numpy.array(value, dtype=numpy.int8)

    @builtins.property
    def master_stn_id(self):
        """Message field 'master_stn_id'."""
        return self._master_stn_id

    @master_stn_id.setter
    def master_stn_id(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.int8, \
                "The 'master_stn_id' numpy.ndarray() must have the dtype of 'numpy.int8'"
            assert value.size == 4, \
                "The 'master_stn_id' numpy.ndarray() must have a size of 4"
            self._master_stn_id = value
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
                 all(val >= -128 and val < 128 for val in value)), \
                "The 'master_stn_id' field must be a set or sequence with length 4 and each value of type 'int' and each integer in [-128, 127]"
        self._master_stn_id = numpy.array(value, dtype=numpy.int8)

    @builtins.property
    def num_sv_tracked(self):
        """Message field 'num_sv_tracked'."""
        return self._num_sv_tracked

    @num_sv_tracked.setter
    def num_sv_tracked(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'num_sv_tracked' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'num_sv_tracked' field must be an unsigned integer in [0, 255]"
        self._num_sv_tracked = value

    @builtins.property
    def num_sv_in_sol(self):
        """Message field 'num_sv_in_sol'."""
        return self._num_sv_in_sol

    @num_sv_in_sol.setter
    def num_sv_in_sol(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'num_sv_in_sol' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'num_sv_in_sol' field must be an unsigned integer in [0, 255]"
        self._num_sv_in_sol = value

    @builtins.property
    def num_sv_obs(self):
        """Message field 'num_sv_obs'."""
        return self._num_sv_obs

    @num_sv_obs.setter
    def num_sv_obs(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'num_sv_obs' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'num_sv_obs' field must be an unsigned integer in [0, 255]"
        self._num_sv_obs = value

    @builtins.property
    def num_sv_multi(self):
        """Message field 'num_sv_multi'."""
        return self._num_sv_multi

    @num_sv_multi.setter
    def num_sv_multi(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'num_sv_multi' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'num_sv_multi' field must be an unsigned integer in [0, 255]"
        self._num_sv_multi = value

    @builtins.property
    def sol_source(self):
        """Message field 'sol_source'."""
        return self._sol_source

    @sol_source.setter
    def sol_source(self, value):
        if __debug__:
            from novatel_oem7_msgs.msg import SolutionSource
            assert \
                isinstance(value, SolutionSource), \
                "The 'sol_source' field must be a sub message of type 'SolutionSource'"
        self._sol_source = value

    @builtins.property
    def ext_sol_status(self):
        """Message field 'ext_sol_status'."""
        return self._ext_sol_status

    @ext_sol_status.setter
    def ext_sol_status(self, value):
        if __debug__:
            from novatel_oem7_msgs.msg import BestExtendedSolutionStatus
            assert \
                isinstance(value, BestExtendedSolutionStatus), \
                "The 'ext_sol_status' field must be a sub message of type 'BestExtendedSolutionStatus'"
        self._ext_sol_status = value

    @builtins.property
    def galileo_beidou_sig_mask(self):
        """Message field 'galileo_beidou_sig_mask'."""
        return self._galileo_beidou_sig_mask

    @galileo_beidou_sig_mask.setter
    def galileo_beidou_sig_mask(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'galileo_beidou_sig_mask' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'galileo_beidou_sig_mask' field must be an unsigned integer in [0, 255]"
        self._galileo_beidou_sig_mask = value

    @builtins.property
    def gps_glonass_sig_mask(self):
        """Message field 'gps_glonass_sig_mask'."""
        return self._gps_glonass_sig_mask

    @gps_glonass_sig_mask.setter
    def gps_glonass_sig_mask(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'gps_glonass_sig_mask' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'gps_glonass_sig_mask' field must be an unsigned integer in [0, 255]"
        self._gps_glonass_sig_mask = value
