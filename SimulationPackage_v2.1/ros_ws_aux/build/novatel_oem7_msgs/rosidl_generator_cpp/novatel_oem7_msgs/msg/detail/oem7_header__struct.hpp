// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from novatel_oem7_msgs:msg/Oem7Header.idl
// generated code does not contain a copyright notice

#ifndef NOVATEL_OEM7_MSGS__MSG__DETAIL__OEM7_HEADER__STRUCT_HPP_
#define NOVATEL_OEM7_MSGS__MSG__DETAIL__OEM7_HEADER__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__novatel_oem7_msgs__msg__Oem7Header __attribute__((deprecated))
#else
# define DEPRECATED__novatel_oem7_msgs__msg__Oem7Header __declspec(deprecated)
#endif

namespace novatel_oem7_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Oem7Header_
{
  using Type = Oem7Header_<ContainerAllocator>;

  explicit Oem7Header_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->message_name = "";
      this->message_id = 0;
      this->message_type = 0;
      this->sequence_number = 0ul;
      this->time_status = 0;
      this->gps_week_number = 0;
      this->gps_week_milliseconds = 0ul;
      this->idle_time = 0;
    }
  }

  explicit Oem7Header_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : message_name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->message_name = "";
      this->message_id = 0;
      this->message_type = 0;
      this->sequence_number = 0ul;
      this->time_status = 0;
      this->gps_week_number = 0;
      this->gps_week_milliseconds = 0ul;
      this->idle_time = 0;
    }
  }

  // field types and members
  using _message_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _message_name_type message_name;
  using _message_id_type =
    uint16_t;
  _message_id_type message_id;
  using _message_type_type =
    uint8_t;
  _message_type_type message_type;
  using _sequence_number_type =
    uint32_t;
  _sequence_number_type sequence_number;
  using _time_status_type =
    uint8_t;
  _time_status_type time_status;
  using _gps_week_number_type =
    uint16_t;
  _gps_week_number_type gps_week_number;
  using _gps_week_milliseconds_type =
    uint32_t;
  _gps_week_milliseconds_type gps_week_milliseconds;
  using _idle_time_type =
    uint8_t;
  _idle_time_type idle_time;

  // setters for named parameter idiom
  Type & set__message_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->message_name = _arg;
    return *this;
  }
  Type & set__message_id(
    const uint16_t & _arg)
  {
    this->message_id = _arg;
    return *this;
  }
  Type & set__message_type(
    const uint8_t & _arg)
  {
    this->message_type = _arg;
    return *this;
  }
  Type & set__sequence_number(
    const uint32_t & _arg)
  {
    this->sequence_number = _arg;
    return *this;
  }
  Type & set__time_status(
    const uint8_t & _arg)
  {
    this->time_status = _arg;
    return *this;
  }
  Type & set__gps_week_number(
    const uint16_t & _arg)
  {
    this->gps_week_number = _arg;
    return *this;
  }
  Type & set__gps_week_milliseconds(
    const uint32_t & _arg)
  {
    this->gps_week_milliseconds = _arg;
    return *this;
  }
  Type & set__idle_time(
    const uint8_t & _arg)
  {
    this->idle_time = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint16_t OEM7MSGTYPE_LOG =
    0u;

  // pointer types
  using RawPtr =
    novatel_oem7_msgs::msg::Oem7Header_<ContainerAllocator> *;
  using ConstRawPtr =
    const novatel_oem7_msgs::msg::Oem7Header_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<novatel_oem7_msgs::msg::Oem7Header_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<novatel_oem7_msgs::msg::Oem7Header_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      novatel_oem7_msgs::msg::Oem7Header_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<novatel_oem7_msgs::msg::Oem7Header_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      novatel_oem7_msgs::msg::Oem7Header_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<novatel_oem7_msgs::msg::Oem7Header_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<novatel_oem7_msgs::msg::Oem7Header_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<novatel_oem7_msgs::msg::Oem7Header_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__novatel_oem7_msgs__msg__Oem7Header
    std::shared_ptr<novatel_oem7_msgs::msg::Oem7Header_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__novatel_oem7_msgs__msg__Oem7Header
    std::shared_ptr<novatel_oem7_msgs::msg::Oem7Header_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Oem7Header_ & other) const
  {
    if (this->message_name != other.message_name) {
      return false;
    }
    if (this->message_id != other.message_id) {
      return false;
    }
    if (this->message_type != other.message_type) {
      return false;
    }
    if (this->sequence_number != other.sequence_number) {
      return false;
    }
    if (this->time_status != other.time_status) {
      return false;
    }
    if (this->gps_week_number != other.gps_week_number) {
      return false;
    }
    if (this->gps_week_milliseconds != other.gps_week_milliseconds) {
      return false;
    }
    if (this->idle_time != other.idle_time) {
      return false;
    }
    return true;
  }
  bool operator!=(const Oem7Header_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Oem7Header_

// alias to use template instance with default allocator
using Oem7Header =
  novatel_oem7_msgs::msg::Oem7Header_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Oem7Header_<ContainerAllocator>::OEM7MSGTYPE_LOG;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace novatel_oem7_msgs

#endif  // NOVATEL_OEM7_MSGS__MSG__DETAIL__OEM7_HEADER__STRUCT_HPP_
