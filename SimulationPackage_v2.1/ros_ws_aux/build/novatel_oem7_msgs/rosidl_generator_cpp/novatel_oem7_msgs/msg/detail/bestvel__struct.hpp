// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from novatel_oem7_msgs:msg/BESTVEL.idl
// generated code does not contain a copyright notice

#ifndef NOVATEL_OEM7_MSGS__MSG__DETAIL__BESTVEL__STRUCT_HPP_
#define NOVATEL_OEM7_MSGS__MSG__DETAIL__BESTVEL__STRUCT_HPP_

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
// Member 'vel_type'
#include "novatel_oem7_msgs/msg/detail/position_or_velocity_type__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__novatel_oem7_msgs__msg__BESTVEL __attribute__((deprecated))
#else
# define DEPRECATED__novatel_oem7_msgs__msg__BESTVEL __declspec(deprecated)
#endif

namespace novatel_oem7_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct BESTVEL_
{
  using Type = BESTVEL_<ContainerAllocator>;

  explicit BESTVEL_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    nov_header(_init),
    sol_status(_init),
    vel_type(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->latency = 0.0f;
      this->diff_age = 0.0f;
      this->hor_speed = 0.0;
      this->trk_gnd = 0.0;
      this->ver_speed = 0.0;
      this->reserved = 0.0f;
    }
  }

  explicit BESTVEL_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    nov_header(_alloc, _init),
    sol_status(_alloc, _init),
    vel_type(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->latency = 0.0f;
      this->diff_age = 0.0f;
      this->hor_speed = 0.0;
      this->trk_gnd = 0.0;
      this->ver_speed = 0.0;
      this->reserved = 0.0f;
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
  using _vel_type_type =
    novatel_oem7_msgs::msg::PositionOrVelocityType_<ContainerAllocator>;
  _vel_type_type vel_type;
  using _latency_type =
    float;
  _latency_type latency;
  using _diff_age_type =
    float;
  _diff_age_type diff_age;
  using _hor_speed_type =
    double;
  _hor_speed_type hor_speed;
  using _trk_gnd_type =
    double;
  _trk_gnd_type trk_gnd;
  using _ver_speed_type =
    double;
  _ver_speed_type ver_speed;
  using _reserved_type =
    float;
  _reserved_type reserved;

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
  Type & set__vel_type(
    const novatel_oem7_msgs::msg::PositionOrVelocityType_<ContainerAllocator> & _arg)
  {
    this->vel_type = _arg;
    return *this;
  }
  Type & set__latency(
    const float & _arg)
  {
    this->latency = _arg;
    return *this;
  }
  Type & set__diff_age(
    const float & _arg)
  {
    this->diff_age = _arg;
    return *this;
  }
  Type & set__hor_speed(
    const double & _arg)
  {
    this->hor_speed = _arg;
    return *this;
  }
  Type & set__trk_gnd(
    const double & _arg)
  {
    this->trk_gnd = _arg;
    return *this;
  }
  Type & set__ver_speed(
    const double & _arg)
  {
    this->ver_speed = _arg;
    return *this;
  }
  Type & set__reserved(
    const float & _arg)
  {
    this->reserved = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    novatel_oem7_msgs::msg::BESTVEL_<ContainerAllocator> *;
  using ConstRawPtr =
    const novatel_oem7_msgs::msg::BESTVEL_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<novatel_oem7_msgs::msg::BESTVEL_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<novatel_oem7_msgs::msg::BESTVEL_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      novatel_oem7_msgs::msg::BESTVEL_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<novatel_oem7_msgs::msg::BESTVEL_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      novatel_oem7_msgs::msg::BESTVEL_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<novatel_oem7_msgs::msg::BESTVEL_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<novatel_oem7_msgs::msg::BESTVEL_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<novatel_oem7_msgs::msg::BESTVEL_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__novatel_oem7_msgs__msg__BESTVEL
    std::shared_ptr<novatel_oem7_msgs::msg::BESTVEL_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__novatel_oem7_msgs__msg__BESTVEL
    std::shared_ptr<novatel_oem7_msgs::msg::BESTVEL_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const BESTVEL_ & other) const
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
    if (this->vel_type != other.vel_type) {
      return false;
    }
    if (this->latency != other.latency) {
      return false;
    }
    if (this->diff_age != other.diff_age) {
      return false;
    }
    if (this->hor_speed != other.hor_speed) {
      return false;
    }
    if (this->trk_gnd != other.trk_gnd) {
      return false;
    }
    if (this->ver_speed != other.ver_speed) {
      return false;
    }
    if (this->reserved != other.reserved) {
      return false;
    }
    return true;
  }
  bool operator!=(const BESTVEL_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct BESTVEL_

// alias to use template instance with default allocator
using BESTVEL =
  novatel_oem7_msgs::msg::BESTVEL_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace novatel_oem7_msgs

#endif  // NOVATEL_OEM7_MSGS__MSG__DETAIL__BESTVEL__STRUCT_HPP_
