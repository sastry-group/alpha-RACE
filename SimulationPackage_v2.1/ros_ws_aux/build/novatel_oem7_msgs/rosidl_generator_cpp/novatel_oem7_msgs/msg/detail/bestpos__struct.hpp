// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from novatel_oem7_msgs:msg/BESTPOS.idl
// generated code does not contain a copyright notice

#ifndef NOVATEL_OEM7_MSGS__MSG__DETAIL__BESTPOS__STRUCT_HPP_
#define NOVATEL_OEM7_MSGS__MSG__DETAIL__BESTPOS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"
// Member 'nov_header'
#include "novatel_oem7_msgs/msg/detail/oem7_header__struct.hpp"
// Member 'sol_status'
#include "novatel_oem7_msgs/msg/detail/solution_status__struct.hpp"
// Member 'pos_type'
#include "novatel_oem7_msgs/msg/detail/position_or_velocity_type__struct.hpp"
// Member 'ext_sol_stat'
#include "novatel_oem7_msgs/msg/detail/best_extended_solution_status__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__novatel_oem7_msgs__msg__BESTPOS __attribute__((deprecated))
#else
# define DEPRECATED__novatel_oem7_msgs__msg__BESTPOS __declspec(deprecated)
#endif

namespace novatel_oem7_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct BESTPOS_
{
  using Type = BESTPOS_<ContainerAllocator>;

  explicit BESTPOS_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    nov_header(_init),
    sol_status(_init),
    pos_type(_init),
    ext_sol_stat(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->lat = 0.0;
      this->lon = 0.0;
      this->hgt = 0.0;
      this->undulation = 0.0f;
      this->datum_id = 0ul;
      this->lat_stdev = 0.0f;
      this->lon_stdev = 0.0f;
      this->hgt_stdev = 0.0f;
      std::fill<typename std::array<int8_t, 4>::iterator, int8_t>(this->stn_id.begin(), this->stn_id.end(), 0);
      this->diff_age = 0.0f;
      this->sol_age = 0.0f;
      this->num_svs = 0;
      this->num_sol_svs = 0;
      this->num_sol_l1_svs = 0;
      this->num_sol_multi_svs = 0;
      this->reserved = 0;
      this->galileo_beidou_sig_mask = 0;
      this->gps_glonass_sig_mask = 0;
    }
  }

  explicit BESTPOS_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    nov_header(_alloc, _init),
    sol_status(_alloc, _init),
    pos_type(_alloc, _init),
    stn_id(_alloc),
    ext_sol_stat(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->lat = 0.0;
      this->lon = 0.0;
      this->hgt = 0.0;
      this->undulation = 0.0f;
      this->datum_id = 0ul;
      this->lat_stdev = 0.0f;
      this->lon_stdev = 0.0f;
      this->hgt_stdev = 0.0f;
      std::fill<typename std::array<int8_t, 4>::iterator, int8_t>(this->stn_id.begin(), this->stn_id.end(), 0);
      this->diff_age = 0.0f;
      this->sol_age = 0.0f;
      this->num_svs = 0;
      this->num_sol_svs = 0;
      this->num_sol_l1_svs = 0;
      this->num_sol_multi_svs = 0;
      this->reserved = 0;
      this->galileo_beidou_sig_mask = 0;
      this->gps_glonass_sig_mask = 0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _nov_header_type =
    novatel_oem7_msgs::msg::Oem7Header_<ContainerAllocator>;
  _nov_header_type nov_header;
  using _sol_status_type =
    novatel_oem7_msgs::msg::SolutionStatus_<ContainerAllocator>;
  _sol_status_type sol_status;
  using _pos_type_type =
    novatel_oem7_msgs::msg::PositionOrVelocityType_<ContainerAllocator>;
  _pos_type_type pos_type;
  using _lat_type =
    double;
  _lat_type lat;
  using _lon_type =
    double;
  _lon_type lon;
  using _hgt_type =
    double;
  _hgt_type hgt;
  using _undulation_type =
    float;
  _undulation_type undulation;
  using _datum_id_type =
    uint32_t;
  _datum_id_type datum_id;
  using _lat_stdev_type =
    float;
  _lat_stdev_type lat_stdev;
  using _lon_stdev_type =
    float;
  _lon_stdev_type lon_stdev;
  using _hgt_stdev_type =
    float;
  _hgt_stdev_type hgt_stdev;
  using _stn_id_type =
    std::array<int8_t, 4>;
  _stn_id_type stn_id;
  using _diff_age_type =
    float;
  _diff_age_type diff_age;
  using _sol_age_type =
    float;
  _sol_age_type sol_age;
  using _num_svs_type =
    uint8_t;
  _num_svs_type num_svs;
  using _num_sol_svs_type =
    uint8_t;
  _num_sol_svs_type num_sol_svs;
  using _num_sol_l1_svs_type =
    uint8_t;
  _num_sol_l1_svs_type num_sol_l1_svs;
  using _num_sol_multi_svs_type =
    uint8_t;
  _num_sol_multi_svs_type num_sol_multi_svs;
  using _reserved_type =
    uint8_t;
  _reserved_type reserved;
  using _ext_sol_stat_type =
    novatel_oem7_msgs::msg::BestExtendedSolutionStatus_<ContainerAllocator>;
  _ext_sol_stat_type ext_sol_stat;
  using _galileo_beidou_sig_mask_type =
    uint8_t;
  _galileo_beidou_sig_mask_type galileo_beidou_sig_mask;
  using _gps_glonass_sig_mask_type =
    uint8_t;
  _gps_glonass_sig_mask_type gps_glonass_sig_mask;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__nov_header(
    const novatel_oem7_msgs::msg::Oem7Header_<ContainerAllocator> & _arg)
  {
    this->nov_header = _arg;
    return *this;
  }
  Type & set__sol_status(
    const novatel_oem7_msgs::msg::SolutionStatus_<ContainerAllocator> & _arg)
  {
    this->sol_status = _arg;
    return *this;
  }
  Type & set__pos_type(
    const novatel_oem7_msgs::msg::PositionOrVelocityType_<ContainerAllocator> & _arg)
  {
    this->pos_type = _arg;
    return *this;
  }
  Type & set__lat(
    const double & _arg)
  {
    this->lat = _arg;
    return *this;
  }
  Type & set__lon(
    const double & _arg)
  {
    this->lon = _arg;
    return *this;
  }
  Type & set__hgt(
    const double & _arg)
  {
    this->hgt = _arg;
    return *this;
  }
  Type & set__undulation(
    const float & _arg)
  {
    this->undulation = _arg;
    return *this;
  }
  Type & set__datum_id(
    const uint32_t & _arg)
  {
    this->datum_id = _arg;
    return *this;
  }
  Type & set__lat_stdev(
    const float & _arg)
  {
    this->lat_stdev = _arg;
    return *this;
  }
  Type & set__lon_stdev(
    const float & _arg)
  {
    this->lon_stdev = _arg;
    return *this;
  }
  Type & set__hgt_stdev(
    const float & _arg)
  {
    this->hgt_stdev = _arg;
    return *this;
  }
  Type & set__stn_id(
    const std::array<int8_t, 4> & _arg)
  {
    this->stn_id = _arg;
    return *this;
  }
  Type & set__diff_age(
    const float & _arg)
  {
    this->diff_age = _arg;
    return *this;
  }
  Type & set__sol_age(
    const float & _arg)
  {
    this->sol_age = _arg;
    return *this;
  }
  Type & set__num_svs(
    const uint8_t & _arg)
  {
    this->num_svs = _arg;
    return *this;
  }
  Type & set__num_sol_svs(
    const uint8_t & _arg)
  {
    this->num_sol_svs = _arg;
    return *this;
  }
  Type & set__num_sol_l1_svs(
    const uint8_t & _arg)
  {
    this->num_sol_l1_svs = _arg;
    return *this;
  }
  Type & set__num_sol_multi_svs(
    const uint8_t & _arg)
  {
    this->num_sol_multi_svs = _arg;
    return *this;
  }
  Type & set__reserved(
    const uint8_t & _arg)
  {
    this->reserved = _arg;
    return *this;
  }
  Type & set__ext_sol_stat(
    const novatel_oem7_msgs::msg::BestExtendedSolutionStatus_<ContainerAllocator> & _arg)
  {
    this->ext_sol_stat = _arg;
    return *this;
  }
  Type & set__galileo_beidou_sig_mask(
    const uint8_t & _arg)
  {
    this->galileo_beidou_sig_mask = _arg;
    return *this;
  }
  Type & set__gps_glonass_sig_mask(
    const uint8_t & _arg)
  {
    this->gps_glonass_sig_mask = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    novatel_oem7_msgs::msg::BESTPOS_<ContainerAllocator> *;
  using ConstRawPtr =
    const novatel_oem7_msgs::msg::BESTPOS_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<novatel_oem7_msgs::msg::BESTPOS_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<novatel_oem7_msgs::msg::BESTPOS_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      novatel_oem7_msgs::msg::BESTPOS_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<novatel_oem7_msgs::msg::BESTPOS_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      novatel_oem7_msgs::msg::BESTPOS_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<novatel_oem7_msgs::msg::BESTPOS_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<novatel_oem7_msgs::msg::BESTPOS_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<novatel_oem7_msgs::msg::BESTPOS_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__novatel_oem7_msgs__msg__BESTPOS
    std::shared_ptr<novatel_oem7_msgs::msg::BESTPOS_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__novatel_oem7_msgs__msg__BESTPOS
    std::shared_ptr<novatel_oem7_msgs::msg::BESTPOS_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const BESTPOS_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->nov_header != other.nov_header) {
      return false;
    }
    if (this->sol_status != other.sol_status) {
      return false;
    }
    if (this->pos_type != other.pos_type) {
      return false;
    }
    if (this->lat != other.lat) {
      return false;
    }
    if (this->lon != other.lon) {
      return false;
    }
    if (this->hgt != other.hgt) {
      return false;
    }
    if (this->undulation != other.undulation) {
      return false;
    }
    if (this->datum_id != other.datum_id) {
      return false;
    }
    if (this->lat_stdev != other.lat_stdev) {
      return false;
    }
    if (this->lon_stdev != other.lon_stdev) {
      return false;
    }
    if (this->hgt_stdev != other.hgt_stdev) {
      return false;
    }
    if (this->stn_id != other.stn_id) {
      return false;
    }
    if (this->diff_age != other.diff_age) {
      return false;
    }
    if (this->sol_age != other.sol_age) {
      return false;
    }
    if (this->num_svs != other.num_svs) {
      return false;
    }
    if (this->num_sol_svs != other.num_sol_svs) {
      return false;
    }
    if (this->num_sol_l1_svs != other.num_sol_l1_svs) {
      return false;
    }
    if (this->num_sol_multi_svs != other.num_sol_multi_svs) {
      return false;
    }
    if (this->reserved != other.reserved) {
      return false;
    }
    if (this->ext_sol_stat != other.ext_sol_stat) {
      return false;
    }
    if (this->galileo_beidou_sig_mask != other.galileo_beidou_sig_mask) {
      return false;
    }
    if (this->gps_glonass_sig_mask != other.gps_glonass_sig_mask) {
      return false;
    }
    return true;
  }
  bool operator!=(const BESTPOS_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct BESTPOS_

// alias to use template instance with default allocator
using BESTPOS =
  novatel_oem7_msgs::msg::BESTPOS_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace novatel_oem7_msgs

#endif  // NOVATEL_OEM7_MSGS__MSG__DETAIL__BESTPOS__STRUCT_HPP_
