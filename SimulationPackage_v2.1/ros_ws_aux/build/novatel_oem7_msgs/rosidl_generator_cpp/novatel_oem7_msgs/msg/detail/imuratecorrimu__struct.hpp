// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from novatel_oem7_msgs:msg/IMURATECORRIMU.idl
// generated code does not contain a copyright notice

#ifndef NOVATEL_OEM7_MSGS__MSG__DETAIL__IMURATECORRIMU__STRUCT_HPP_
#define NOVATEL_OEM7_MSGS__MSG__DETAIL__IMURATECORRIMU__STRUCT_HPP_

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

#ifndef _WIN32
# define DEPRECATED__novatel_oem7_msgs__msg__IMURATECORRIMU __attribute__((deprecated))
#else
# define DEPRECATED__novatel_oem7_msgs__msg__IMURATECORRIMU __declspec(deprecated)
#endif

namespace novatel_oem7_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct IMURATECORRIMU_
{
  using Type = IMURATECORRIMU_<ContainerAllocator>;

  explicit IMURATECORRIMU_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    nov_header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->week = 0ul;
      this->seconds = 0.0;
      this->pitch_rate = 0.0;
      this->roll_rate = 0.0;
      this->yaw_rate = 0.0;
      this->lateral_acc = 0.0;
      this->longitudinal_acc = 0.0;
      this->vertical_acc = 0.0;
    }
  }

  explicit IMURATECORRIMU_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    nov_header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->week = 0ul;
      this->seconds = 0.0;
      this->pitch_rate = 0.0;
      this->roll_rate = 0.0;
      this->yaw_rate = 0.0;
      this->lateral_acc = 0.0;
      this->longitudinal_acc = 0.0;
      this->vertical_acc = 0.0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _nov_header_type =
    novatel_oem7_msgs::msg::Oem7Header_<ContainerAllocator>;
  _nov_header_type nov_header;
  using _week_type =
    uint32_t;
  _week_type week;
  using _seconds_type =
    double;
  _seconds_type seconds;
  using _pitch_rate_type =
    double;
  _pitch_rate_type pitch_rate;
  using _roll_rate_type =
    double;
  _roll_rate_type roll_rate;
  using _yaw_rate_type =
    double;
  _yaw_rate_type yaw_rate;
  using _lateral_acc_type =
    double;
  _lateral_acc_type lateral_acc;
  using _longitudinal_acc_type =
    double;
  _longitudinal_acc_type longitudinal_acc;
  using _vertical_acc_type =
    double;
  _vertical_acc_type vertical_acc;

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
  Type & set__week(
    const uint32_t & _arg)
  {
    this->week = _arg;
    return *this;
  }
  Type & set__seconds(
    const double & _arg)
  {
    this->seconds = _arg;
    return *this;
  }
  Type & set__pitch_rate(
    const double & _arg)
  {
    this->pitch_rate = _arg;
    return *this;
  }
  Type & set__roll_rate(
    const double & _arg)
  {
    this->roll_rate = _arg;
    return *this;
  }
  Type & set__yaw_rate(
    const double & _arg)
  {
    this->yaw_rate = _arg;
    return *this;
  }
  Type & set__lateral_acc(
    const double & _arg)
  {
    this->lateral_acc = _arg;
    return *this;
  }
  Type & set__longitudinal_acc(
    const double & _arg)
  {
    this->longitudinal_acc = _arg;
    return *this;
  }
  Type & set__vertical_acc(
    const double & _arg)
  {
    this->vertical_acc = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    novatel_oem7_msgs::msg::IMURATECORRIMU_<ContainerAllocator> *;
  using ConstRawPtr =
    const novatel_oem7_msgs::msg::IMURATECORRIMU_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<novatel_oem7_msgs::msg::IMURATECORRIMU_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<novatel_oem7_msgs::msg::IMURATECORRIMU_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      novatel_oem7_msgs::msg::IMURATECORRIMU_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<novatel_oem7_msgs::msg::IMURATECORRIMU_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      novatel_oem7_msgs::msg::IMURATECORRIMU_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<novatel_oem7_msgs::msg::IMURATECORRIMU_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<novatel_oem7_msgs::msg::IMURATECORRIMU_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<novatel_oem7_msgs::msg::IMURATECORRIMU_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__novatel_oem7_msgs__msg__IMURATECORRIMU
    std::shared_ptr<novatel_oem7_msgs::msg::IMURATECORRIMU_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__novatel_oem7_msgs__msg__IMURATECORRIMU
    std::shared_ptr<novatel_oem7_msgs::msg::IMURATECORRIMU_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const IMURATECORRIMU_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->nov_header != other.nov_header) {
      return false;
    }
    if (this->week != other.week) {
      return false;
    }
    if (this->seconds != other.seconds) {
      return false;
    }
    if (this->pitch_rate != other.pitch_rate) {
      return false;
    }
    if (this->roll_rate != other.roll_rate) {
      return false;
    }
    if (this->yaw_rate != other.yaw_rate) {
      return false;
    }
    if (this->lateral_acc != other.lateral_acc) {
      return false;
    }
    if (this->longitudinal_acc != other.longitudinal_acc) {
      return false;
    }
    if (this->vertical_acc != other.vertical_acc) {
      return false;
    }
    return true;
  }
  bool operator!=(const IMURATECORRIMU_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct IMURATECORRIMU_

// alias to use template instance with default allocator
using IMURATECORRIMU =
  novatel_oem7_msgs::msg::IMURATECORRIMU_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace novatel_oem7_msgs

#endif  // NOVATEL_OEM7_MSGS__MSG__DETAIL__IMURATECORRIMU__STRUCT_HPP_
