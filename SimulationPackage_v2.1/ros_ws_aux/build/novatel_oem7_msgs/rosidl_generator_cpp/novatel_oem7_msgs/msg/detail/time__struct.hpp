// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from novatel_oem7_msgs:msg/TIME.idl
// generated code does not contain a copyright notice

#ifndef NOVATEL_OEM7_MSGS__MSG__DETAIL__TIME__STRUCT_HPP_
#define NOVATEL_OEM7_MSGS__MSG__DETAIL__TIME__STRUCT_HPP_

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
# define DEPRECATED__novatel_oem7_msgs__msg__TIME __attribute__((deprecated))
#else
# define DEPRECATED__novatel_oem7_msgs__msg__TIME __declspec(deprecated)
#endif

namespace novatel_oem7_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TIME_
{
  using Type = TIME_<ContainerAllocator>;

  explicit TIME_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    nov_header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->clock_status = 0ul;
      this->offset = 0.0;
      this->offset_std = 0.0;
      this->utc_offset = 0.0;
      this->utc_year = 0ul;
      this->utc_month = 0;
      this->utc_day = 0;
      this->utc_hour = 0;
      this->utc_min = 0;
      this->utc_msec = 0ul;
      this->utc_status = 0ul;
    }
  }

  explicit TIME_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    nov_header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->clock_status = 0ul;
      this->offset = 0.0;
      this->offset_std = 0.0;
      this->utc_offset = 0.0;
      this->utc_year = 0ul;
      this->utc_month = 0;
      this->utc_day = 0;
      this->utc_hour = 0;
      this->utc_min = 0;
      this->utc_msec = 0ul;
      this->utc_status = 0ul;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _nov_header_type =
    novatel_oem7_msgs::msg::Oem7Header_<ContainerAllocator>;
  _nov_header_type nov_header;
  using _clock_status_type =
    uint32_t;
  _clock_status_type clock_status;
  using _offset_type =
    double;
  _offset_type offset;
  using _offset_std_type =
    double;
  _offset_std_type offset_std;
  using _utc_offset_type =
    double;
  _utc_offset_type utc_offset;
  using _utc_year_type =
    uint32_t;
  _utc_year_type utc_year;
  using _utc_month_type =
    uint8_t;
  _utc_month_type utc_month;
  using _utc_day_type =
    uint8_t;
  _utc_day_type utc_day;
  using _utc_hour_type =
    uint8_t;
  _utc_hour_type utc_hour;
  using _utc_min_type =
    uint8_t;
  _utc_min_type utc_min;
  using _utc_msec_type =
    uint32_t;
  _utc_msec_type utc_msec;
  using _utc_status_type =
    uint32_t;
  _utc_status_type utc_status;

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
  Type & set__clock_status(
    const uint32_t & _arg)
  {
    this->clock_status = _arg;
    return *this;
  }
  Type & set__offset(
    const double & _arg)
  {
    this->offset = _arg;
    return *this;
  }
  Type & set__offset_std(
    const double & _arg)
  {
    this->offset_std = _arg;
    return *this;
  }
  Type & set__utc_offset(
    const double & _arg)
  {
    this->utc_offset = _arg;
    return *this;
  }
  Type & set__utc_year(
    const uint32_t & _arg)
  {
    this->utc_year = _arg;
    return *this;
  }
  Type & set__utc_month(
    const uint8_t & _arg)
  {
    this->utc_month = _arg;
    return *this;
  }
  Type & set__utc_day(
    const uint8_t & _arg)
  {
    this->utc_day = _arg;
    return *this;
  }
  Type & set__utc_hour(
    const uint8_t & _arg)
  {
    this->utc_hour = _arg;
    return *this;
  }
  Type & set__utc_min(
    const uint8_t & _arg)
  {
    this->utc_min = _arg;
    return *this;
  }
  Type & set__utc_msec(
    const uint32_t & _arg)
  {
    this->utc_msec = _arg;
    return *this;
  }
  Type & set__utc_status(
    const uint32_t & _arg)
  {
    this->utc_status = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    novatel_oem7_msgs::msg::TIME_<ContainerAllocator> *;
  using ConstRawPtr =
    const novatel_oem7_msgs::msg::TIME_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<novatel_oem7_msgs::msg::TIME_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<novatel_oem7_msgs::msg::TIME_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      novatel_oem7_msgs::msg::TIME_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<novatel_oem7_msgs::msg::TIME_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      novatel_oem7_msgs::msg::TIME_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<novatel_oem7_msgs::msg::TIME_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<novatel_oem7_msgs::msg::TIME_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<novatel_oem7_msgs::msg::TIME_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__novatel_oem7_msgs__msg__TIME
    std::shared_ptr<novatel_oem7_msgs::msg::TIME_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__novatel_oem7_msgs__msg__TIME
    std::shared_ptr<novatel_oem7_msgs::msg::TIME_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TIME_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->nov_header != other.nov_header) {
      return false;
    }
    if (this->clock_status != other.clock_status) {
      return false;
    }
    if (this->offset != other.offset) {
      return false;
    }
    if (this->offset_std != other.offset_std) {
      return false;
    }
    if (this->utc_offset != other.utc_offset) {
      return false;
    }
    if (this->utc_year != other.utc_year) {
      return false;
    }
    if (this->utc_month != other.utc_month) {
      return false;
    }
    if (this->utc_day != other.utc_day) {
      return false;
    }
    if (this->utc_hour != other.utc_hour) {
      return false;
    }
    if (this->utc_min != other.utc_min) {
      return false;
    }
    if (this->utc_msec != other.utc_msec) {
      return false;
    }
    if (this->utc_status != other.utc_status) {
      return false;
    }
    return true;
  }
  bool operator!=(const TIME_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TIME_

// alias to use template instance with default allocator
using TIME =
  novatel_oem7_msgs::msg::TIME_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace novatel_oem7_msgs

#endif  // NOVATEL_OEM7_MSGS__MSG__DETAIL__TIME__STRUCT_HPP_
