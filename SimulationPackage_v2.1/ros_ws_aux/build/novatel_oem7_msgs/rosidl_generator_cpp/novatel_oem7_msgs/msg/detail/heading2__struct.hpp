// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from novatel_oem7_msgs:msg/HEADING2.idl
// generated code does not contain a copyright notice

#ifndef NOVATEL_OEM7_MSGS__MSG__DETAIL__HEADING2__STRUCT_HPP_
#define NOVATEL_OEM7_MSGS__MSG__DETAIL__HEADING2__STRUCT_HPP_

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
// Member 'sol_source'
#include "novatel_oem7_msgs/msg/detail/solution_source__struct.hpp"
// Member 'ext_sol_status'
#include "novatel_oem7_msgs/msg/detail/best_extended_solution_status__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__novatel_oem7_msgs__msg__HEADING2 __attribute__((deprecated))
#else
# define DEPRECATED__novatel_oem7_msgs__msg__HEADING2 __declspec(deprecated)
#endif

namespace novatel_oem7_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct HEADING2_
{
  using Type = HEADING2_<ContainerAllocator>;

  explicit HEADING2_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    nov_header(_init),
    sol_status(_init),
    pos_type(_init),
    sol_source(_init),
    ext_sol_status(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->length = 0.0f;
      this->heading = 0.0f;
      this->pitch = 0.0f;
      this->reserved = 0.0f;
      this->heading_stdev = 0.0f;
      this->pitch_stdev = 0.0f;
      std::fill<typename std::array<int8_t, 4>::iterator, int8_t>(this->rover_stn_id.begin(), this->rover_stn_id.end(), 0);
      std::fill<typename std::array<int8_t, 4>::iterator, int8_t>(this->master_stn_id.begin(), this->master_stn_id.end(), 0);
      this->num_sv_tracked = 0;
      this->num_sv_in_sol = 0;
      this->num_sv_obs = 0;
      this->num_sv_multi = 0;
      this->galileo_beidou_sig_mask = 0;
      this->gps_glonass_sig_mask = 0;
    }
  }

  explicit HEADING2_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    nov_header(_alloc, _init),
    sol_status(_alloc, _init),
    pos_type(_alloc, _init),
    rover_stn_id(_alloc),
    master_stn_id(_alloc),
    sol_source(_alloc, _init),
    ext_sol_status(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->length = 0.0f;
      this->heading = 0.0f;
      this->pitch = 0.0f;
      this->reserved = 0.0f;
      this->heading_stdev = 0.0f;
      this->pitch_stdev = 0.0f;
      std::fill<typename std::array<int8_t, 4>::iterator, int8_t>(this->rover_stn_id.begin(), this->rover_stn_id.end(), 0);
      std::fill<typename std::array<int8_t, 4>::iterator, int8_t>(this->master_stn_id.begin(), this->master_stn_id.end(), 0);
      this->num_sv_tracked = 0;
      this->num_sv_in_sol = 0;
      this->num_sv_obs = 0;
      this->num_sv_multi = 0;
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
  using _length_type =
    float;
  _length_type length;
  using _heading_type =
    float;
  _heading_type heading;
  using _pitch_type =
    float;
  _pitch_type pitch;
  using _reserved_type =
    float;
  _reserved_type reserved;
  using _heading_stdev_type =
    float;
  _heading_stdev_type heading_stdev;
  using _pitch_stdev_type =
    float;
  _pitch_stdev_type pitch_stdev;
  using _rover_stn_id_type =
    std::array<int8_t, 4>;
  _rover_stn_id_type rover_stn_id;
  using _master_stn_id_type =
    std::array<int8_t, 4>;
  _master_stn_id_type master_stn_id;
  using _num_sv_tracked_type =
    uint8_t;
  _num_sv_tracked_type num_sv_tracked;
  using _num_sv_in_sol_type =
    uint8_t;
  _num_sv_in_sol_type num_sv_in_sol;
  using _num_sv_obs_type =
    uint8_t;
  _num_sv_obs_type num_sv_obs;
  using _num_sv_multi_type =
    uint8_t;
  _num_sv_multi_type num_sv_multi;
  using _sol_source_type =
    novatel_oem7_msgs::msg::SolutionSource_<ContainerAllocator>;
  _sol_source_type sol_source;
  using _ext_sol_status_type =
    novatel_oem7_msgs::msg::BestExtendedSolutionStatus_<ContainerAllocator>;
  _ext_sol_status_type ext_sol_status;
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
  Type & set__length(
    const float & _arg)
  {
    this->length = _arg;
    return *this;
  }
  Type & set__heading(
    const float & _arg)
  {
    this->heading = _arg;
    return *this;
  }
  Type & set__pitch(
    const float & _arg)
  {
    this->pitch = _arg;
    return *this;
  }
  Type & set__reserved(
    const float & _arg)
  {
    this->reserved = _arg;
    return *this;
  }
  Type & set__heading_stdev(
    const float & _arg)
  {
    this->heading_stdev = _arg;
    return *this;
  }
  Type & set__pitch_stdev(
    const float & _arg)
  {
    this->pitch_stdev = _arg;
    return *this;
  }
  Type & set__rover_stn_id(
    const std::array<int8_t, 4> & _arg)
  {
    this->rover_stn_id = _arg;
    return *this;
  }
  Type & set__master_stn_id(
    const std::array<int8_t, 4> & _arg)
  {
    this->master_stn_id = _arg;
    return *this;
  }
  Type & set__num_sv_tracked(
    const uint8_t & _arg)
  {
    this->num_sv_tracked = _arg;
    return *this;
  }
  Type & set__num_sv_in_sol(
    const uint8_t & _arg)
  {
    this->num_sv_in_sol = _arg;
    return *this;
  }
  Type & set__num_sv_obs(
    const uint8_t & _arg)
  {
    this->num_sv_obs = _arg;
    return *this;
  }
  Type & set__num_sv_multi(
    const uint8_t & _arg)
  {
    this->num_sv_multi = _arg;
    return *this;
  }
  Type & set__sol_source(
    const novatel_oem7_msgs::msg::SolutionSource_<ContainerAllocator> & _arg)
  {
    this->sol_source = _arg;
    return *this;
  }
  Type & set__ext_sol_status(
    const novatel_oem7_msgs::msg::BestExtendedSolutionStatus_<ContainerAllocator> & _arg)
  {
    this->ext_sol_status = _arg;
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
    novatel_oem7_msgs::msg::HEADING2_<ContainerAllocator> *;
  using ConstRawPtr =
    const novatel_oem7_msgs::msg::HEADING2_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<novatel_oem7_msgs::msg::HEADING2_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<novatel_oem7_msgs::msg::HEADING2_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      novatel_oem7_msgs::msg::HEADING2_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<novatel_oem7_msgs::msg::HEADING2_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      novatel_oem7_msgs::msg::HEADING2_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<novatel_oem7_msgs::msg::HEADING2_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<novatel_oem7_msgs::msg::HEADING2_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<novatel_oem7_msgs::msg::HEADING2_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__novatel_oem7_msgs__msg__HEADING2
    std::shared_ptr<novatel_oem7_msgs::msg::HEADING2_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__novatel_oem7_msgs__msg__HEADING2
    std::shared_ptr<novatel_oem7_msgs::msg::HEADING2_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const HEADING2_ & other) const
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
    if (this->length != other.length) {
      return false;
    }
    if (this->heading != other.heading) {
      return false;
    }
    if (this->pitch != other.pitch) {
      return false;
    }
    if (this->reserved != other.reserved) {
      return false;
    }
    if (this->heading_stdev != other.heading_stdev) {
      return false;
    }
    if (this->pitch_stdev != other.pitch_stdev) {
      return false;
    }
    if (this->rover_stn_id != other.rover_stn_id) {
      return false;
    }
    if (this->master_stn_id != other.master_stn_id) {
      return false;
    }
    if (this->num_sv_tracked != other.num_sv_tracked) {
      return false;
    }
    if (this->num_sv_in_sol != other.num_sv_in_sol) {
      return false;
    }
    if (this->num_sv_obs != other.num_sv_obs) {
      return false;
    }
    if (this->num_sv_multi != other.num_sv_multi) {
      return false;
    }
    if (this->sol_source != other.sol_source) {
      return false;
    }
    if (this->ext_sol_status != other.ext_sol_status) {
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
  bool operator!=(const HEADING2_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct HEADING2_

// alias to use template instance with default allocator
using HEADING2 =
  novatel_oem7_msgs::msg::HEADING2_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace novatel_oem7_msgs

#endif  // NOVATEL_OEM7_MSGS__MSG__DETAIL__HEADING2__STRUCT_HPP_
