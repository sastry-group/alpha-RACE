// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from raptor_dbw_msgs:msg/WatchdogStatus.idl
// generated code does not contain a copyright notice

#ifndef RAPTOR_DBW_MSGS__MSG__DETAIL__WATCHDOG_STATUS__STRUCT_HPP_
#define RAPTOR_DBW_MSGS__MSG__DETAIL__WATCHDOG_STATUS__STRUCT_HPP_

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

#ifndef _WIN32
# define DEPRECATED__raptor_dbw_msgs__msg__WatchdogStatus __attribute__((deprecated))
#else
# define DEPRECATED__raptor_dbw_msgs__msg__WatchdogStatus __declspec(deprecated)
#endif

namespace raptor_dbw_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct WatchdogStatus_
{
  using Type = WatchdogStatus_<ContainerAllocator>;

  explicit WatchdogStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->source = 0;
    }
  }

  explicit WatchdogStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->source = 0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _source_type =
    uint8_t;
  _source_type source;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__source(
    const uint8_t & _arg)
  {
    this->source = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t NONE =
    0u;
  static constexpr uint8_t OTHER_BRAKE =
    1u;
  static constexpr uint8_t OTHER_ACCELERATOR_PEDAL =
    2u;
  static constexpr uint8_t OTHER_STEERING =
    3u;
  static constexpr uint8_t BRAKE_COUNTER =
    4u;
  static constexpr uint8_t BRAKE_DISABLED =
    5u;
  static constexpr uint8_t BRAKE_COMMAND =
    6u;
  static constexpr uint8_t BRAKE_REPORT =
    7u;
  static constexpr uint8_t ACCELERATOR_PEDAL_COUNTER =
    8u;
  static constexpr uint8_t ACCELERATOR_PEDAL_DISABLED =
    9u;
  static constexpr uint8_t ACCELERATOR_PEDAL_COMMAND =
    10u;
  static constexpr uint8_t ACCELERATOR_PEDAL_REPORT =
    11u;
  static constexpr uint8_t STEERING_COUNTER =
    12u;
  static constexpr uint8_t STEERING_DISABLED =
    13u;
  static constexpr uint8_t STEERING_COMMAND =
    14u;
  static constexpr uint8_t STEERING_REPORT =
    15u;

  // pointer types
  using RawPtr =
    raptor_dbw_msgs::msg::WatchdogStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const raptor_dbw_msgs::msg::WatchdogStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<raptor_dbw_msgs::msg::WatchdogStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<raptor_dbw_msgs::msg::WatchdogStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      raptor_dbw_msgs::msg::WatchdogStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<raptor_dbw_msgs::msg::WatchdogStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      raptor_dbw_msgs::msg::WatchdogStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<raptor_dbw_msgs::msg::WatchdogStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<raptor_dbw_msgs::msg::WatchdogStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<raptor_dbw_msgs::msg::WatchdogStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__raptor_dbw_msgs__msg__WatchdogStatus
    std::shared_ptr<raptor_dbw_msgs::msg::WatchdogStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__raptor_dbw_msgs__msg__WatchdogStatus
    std::shared_ptr<raptor_dbw_msgs::msg::WatchdogStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const WatchdogStatus_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->source != other.source) {
      return false;
    }
    return true;
  }
  bool operator!=(const WatchdogStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct WatchdogStatus_

// alias to use template instance with default allocator
using WatchdogStatus =
  raptor_dbw_msgs::msg::WatchdogStatus_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t WatchdogStatus_<ContainerAllocator>::NONE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t WatchdogStatus_<ContainerAllocator>::OTHER_BRAKE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t WatchdogStatus_<ContainerAllocator>::OTHER_ACCELERATOR_PEDAL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t WatchdogStatus_<ContainerAllocator>::OTHER_STEERING;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t WatchdogStatus_<ContainerAllocator>::BRAKE_COUNTER;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t WatchdogStatus_<ContainerAllocator>::BRAKE_DISABLED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t WatchdogStatus_<ContainerAllocator>::BRAKE_COMMAND;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t WatchdogStatus_<ContainerAllocator>::BRAKE_REPORT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t WatchdogStatus_<ContainerAllocator>::ACCELERATOR_PEDAL_COUNTER;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t WatchdogStatus_<ContainerAllocator>::ACCELERATOR_PEDAL_DISABLED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t WatchdogStatus_<ContainerAllocator>::ACCELERATOR_PEDAL_COMMAND;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t WatchdogStatus_<ContainerAllocator>::ACCELERATOR_PEDAL_REPORT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t WatchdogStatus_<ContainerAllocator>::STEERING_COUNTER;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t WatchdogStatus_<ContainerAllocator>::STEERING_DISABLED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t WatchdogStatus_<ContainerAllocator>::STEERING_COMMAND;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t WatchdogStatus_<ContainerAllocator>::STEERING_REPORT;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace raptor_dbw_msgs

#endif  // RAPTOR_DBW_MSGS__MSG__DETAIL__WATCHDOG_STATUS__STRUCT_HPP_
