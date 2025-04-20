# generated from rosidl_generator_py/resource/_idl.py.em
# with input from novatel_oem7_msgs:msg/BESTPOS.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

# Member 'stn_id'
import numpy  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_BESTPOS(type):
    """Metaclass of message 'BESTPOS'."""

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
                'novatel_oem7_msgs.msg.BESTPOS')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__bestpos
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__bestpos
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__bestpos
            cls._TYPE_SUPPORT = module.type_support_msg__msg__bestpos
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__bestpos

            from novatel_oem7_msgs.msg import BestExtendedSolutionStatus
            if BestExtendedSolutionStatus.__class__._TYPE_SUPPORT is None:
                BestExtendedSolutionStatus.__class__.__import_type_support__()

            from novatel_oem7_msgs.msg import Oem7Header
            if Oem7Header.__class__._TYPE_SUPPORT is None:
                Oem7Header.__class__.__import_type_support__()

            from novatel_oem7_msgs.msg import PositionOrVelocityType
            if PositionOrVelocityType.__class__._TYPE_SUPPORT is None:
                PositionOrVelocityType.__class__.__import_type_support__()

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


class BESTPOS(metaclass=Metaclass_BESTPOS):
    """Message class 'BESTPOS'."""

    __slots__ = [
        '_header',
        '_nov_header',
        '_sol_status',
        '_pos_type',
        '_lat',
        '_lon',
        '_hgt',
        '_undulation',
        '_datum_id',
        '_lat_stdev',
        '_lon_stdev',
        '_hgt_stdev',
        '_stn_id',
        '_diff_age',
        '_sol_age',
        '_num_svs',
        '_num_sol_svs',
        '_num_sol_l1_svs',
        '_num_sol_multi_svs',
        '_reserved',
        '_ext_sol_stat',
        '_galileo_beidou_sig_mask',
        '_gps_glonass_sig_mask',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'nov_header': 'novatel_oem7_msgs/Oem7Header',
        'sol_status': 'novatel_oem7_msgs/SolutionStatus',
        'pos_type': 'novatel_oem7_msgs/PositionOrVelocityType',
        'lat': 'double',
        'lon': 'double',
        'hgt': 'double',
        'undulation': 'float',
        'datum_id': 'uint32',
        'lat_stdev': 'float',
        'lon_stdev': 'float',
        'hgt_stdev': 'float',
        'stn_id': 'int8[4]',
        'diff_age': 'float',
        'sol_age': 'float',
        'num_svs': 'uint8',
        'num_sol_svs': 'uint8',
        'num_sol_l1_svs': 'uint8',
        'num_sol_multi_svs': 'uint8',
        'reserved': 'uint8',
        'ext_sol_stat': 'novatel_oem7_msgs/BestExtendedSolutionStatus',
        'galileo_beidou_sig_mask': 'uint8',
        'gps_glonass_sig_mask': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['novatel_oem7_msgs', 'msg'], 'Oem7Header'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['novatel_oem7_msgs', 'msg'], 'SolutionStatus'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['novatel_oem7_msgs', 'msg'], 'PositionOrVelocityType'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('int8'), 4),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
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
        self.lat = kwargs.get('lat', float())
        self.lon = kwargs.get('lon', float())
        self.hgt = kwargs.get('hgt', float())
        self.undulation = kwargs.get('undulation', float())
        self.datum_id = kwargs.get('datum_id', int())
        self.lat_stdev = kwargs.get('lat_stdev', float())
        self.lon_stdev = kwargs.get('lon_stdev', float())
        self.hgt_stdev = kwargs.get('hgt_stdev', float())
        if 'stn_id' not in kwargs:
            self.stn_id = numpy.zeros(4, dtype=numpy.int8)
        else:
            self.stn_id = numpy.array(kwargs.get('stn_id'), dtype=numpy.int8)
            assert self.stn_id.shape == (4, )
        self.diff_age = kwargs.get('diff_age', float())
        self.sol_age = kwargs.get('sol_age', float())
        self.num_svs = kwargs.get('num_svs', int())
        self.num_sol_svs = kwargs.get('num_sol_svs', int())
        self.num_sol_l1_svs = kwargs.get('num_sol_l1_svs', int())
        self.num_sol_multi_svs = kwargs.get('num_sol_multi_svs', int())
        self.reserved = kwargs.get('reserved', int())
        from novatel_oem7_msgs.msg import BestExtendedSolutionStatus
        self.ext_sol_stat = kwargs.get('ext_sol_stat', BestExtendedSolutionStatus())
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
        if self.lat != other.lat:
            return False
        if self.lon != other.lon:
            return False
        if self.hgt != other.hgt:
            return False
        if self.undulation != other.undulation:
            return False
        if self.datum_id != other.datum_id:
            return False
        if self.lat_stdev != other.lat_stdev:
            return False
        if self.lon_stdev != other.lon_stdev:
            return False
        if self.hgt_stdev != other.hgt_stdev:
            return False
        if all(self.stn_id != other.stn_id):
            return False
        if self.diff_age != other.diff_age:
            return False
        if self.sol_age != other.sol_age:
            return False
        if self.num_svs != other.num_svs:
            return False
        if self.num_sol_svs != other.num_sol_svs:
            return False
        if self.num_sol_l1_svs != other.num_sol_l1_svs:
            return False
        if self.num_sol_multi_svs != other.num_sol_multi_svs:
            return False
        if self.reserved != other.reserved:
            return False
        if self.ext_sol_stat != other.ext_sol_stat:
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
    def lat(self):
        """Message field 'lat'."""
        return self._lat

    @lat.setter
    def lat(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'lat' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'lat' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._lat = value

    @builtins.property
    def lon(self):
        """Message field 'lon'."""
        return self._lon

    @lon.setter
    def lon(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'lon' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'lon' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._lon = value

    @builtins.property
    def hgt(self):
        """Message field 'hgt'."""
        return self._hgt

    @hgt.setter
    def hgt(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'hgt' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'hgt' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._hgt = value

    @builtins.property
    def undulation(self):
        """Message field 'undulation'."""
        return self._undulation

    @undulation.setter
    def undulation(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'undulation' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'undulation' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._undulation = value

    @builtins.property
    def datum_id(self):
        """Message field 'datum_id'."""
        return self._datum_id

    @datum_id.setter
    def datum_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'datum_id' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'datum_id' field must be an unsigned integer in [0, 4294967295]"
        self._datum_id = value

    @builtins.property
    def lat_stdev(self):
        """Message field 'lat_stdev'."""
        return self._lat_stdev

    @lat_stdev.setter
    def lat_stdev(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'lat_stdev' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'lat_stdev' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._lat_stdev = value

    @builtins.property
    def lon_stdev(self):
        """Message field 'lon_stdev'."""
        return self._lon_stdev

    @lon_stdev.setter
    def lon_stdev(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'lon_stdev' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'lon_stdev' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._lon_stdev = value

    @builtins.property
    def hgt_stdev(self):
        """Message field 'hgt_stdev'."""
        return self._hgt_stdev

    @hgt_stdev.setter
    def hgt_stdev(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'hgt_stdev' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'hgt_stdev' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._hgt_stdev = value

    @builtins.property
    def stn_id(self):
        """Message field 'stn_id'."""
        return self._stn_id

    @stn_id.setter
    def stn_id(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.int8, \
                "The 'stn_id' numpy.ndarray() must have the dtype of 'numpy.int8'"
            assert value.size == 4, \
                "The 'stn_id' numpy.ndarray() must have a size of 4"
            self._stn_id = value
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
                "The 'stn_id' field must be a set or sequence with length 4 and each value of type 'int' and each integer in [-128, 127]"
        self._stn_id = numpy.array(value, dtype=numpy.int8)

    @builtins.property
    def diff_age(self):
        """Message field 'diff_age'."""
        return self._diff_age

    @diff_age.setter
    def diff_age(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'diff_age' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'diff_age' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._diff_age = value

    @builtins.property
    def sol_age(self):
        """Message field 'sol_age'."""
        return self._sol_age

    @sol_age.setter
    def sol_age(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'sol_age' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'sol_age' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._sol_age = value

    @builtins.property
    def num_svs(self):
        """Message field 'num_svs'."""
        return self._num_svs

    @num_svs.setter
    def num_svs(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'num_svs' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'num_svs' field must be an unsigned integer in [0, 255]"
        self._num_svs = value

    @builtins.property
    def num_sol_svs(self):
        """Message field 'num_sol_svs'."""
        return self._num_sol_svs

    @num_sol_svs.setter
    def num_sol_svs(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'num_sol_svs' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'num_sol_svs' field must be an unsigned integer in [0, 255]"
        self._num_sol_svs = value

    @builtins.property
    def num_sol_l1_svs(self):
        """Message field 'num_sol_l1_svs'."""
        return self._num_sol_l1_svs

    @num_sol_l1_svs.setter
    def num_sol_l1_svs(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'num_sol_l1_svs' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'num_sol_l1_svs' field must be an unsigned integer in [0, 255]"
        self._num_sol_l1_svs = value

    @builtins.property
    def num_sol_multi_svs(self):
        """Message field 'num_sol_multi_svs'."""
        return self._num_sol_multi_svs

    @num_sol_multi_svs.setter
    def num_sol_multi_svs(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'num_sol_multi_svs' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'num_sol_multi_svs' field must be an unsigned integer in [0, 255]"
        self._num_sol_multi_svs = value

    @builtins.property
    def reserved(self):
        """Message field 'reserved'."""
        return self._reserved

    @reserved.setter
    def reserved(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'reserved' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'reserved' field must be an unsigned integer in [0, 255]"
        self._reserved = value

    @builtins.property
    def ext_sol_stat(self):
        """Message field 'ext_sol_stat'."""
        return self._ext_sol_stat

    @ext_sol_stat.setter
    def ext_sol_stat(self, value):
        if __debug__:
            from novatel_oem7_msgs.msg import BestExtendedSolutionStatus
            assert \
                isinstance(value, BestExtendedSolutionStatus), \
                "The 'ext_sol_stat' field must be a sub message of type 'BestExtendedSolutionStatus'"
        self._ext_sol_stat = value

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
