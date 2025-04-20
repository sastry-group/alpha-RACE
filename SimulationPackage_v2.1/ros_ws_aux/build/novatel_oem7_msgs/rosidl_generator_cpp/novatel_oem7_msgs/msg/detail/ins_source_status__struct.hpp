// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from novatel_oem7_msgs:msg/INSSourceStatus.idl
// generated code does not contain a copyright notice

#ifndef NOVATEL_OEM7_MSGS__MSG__DETAIL__INS_SOURCE_STATUS__STRUCT_HPP_
#define NOVATEL_OEM7_MSGS__MSG__DETAIL__INS_SOURCE_STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__novatel_oem7_msgs__msg__INSSourceStatus __attribute__((deprecated))
#else
# define DEPRECATED__novatel_oem7_msgs__msg__INSSourceStatus __declspec(deprecated)
#endif

namespace novatel_oem7_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct INSSourceStatus_
{
  using Type = INSSourceStatus_<ContainerAllocator>;

  explicit INSSourceStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0ul;
    }
  }

  explicit INSSourceStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0ul;
    }
  }

  // field types and members
  using _status_type =
    uint32_t;
  _status_type status;

  // setters for named parameter idiom
  Type & set__status(
    const uint32_t & _arg)
  {
    this->status = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint32_t FROM_NVM =
    1u;
  static constexpr uint32_t CALIBRATING =
    2u;
  static constexpr uint32_t CALIBRATED =
    3u;
  static constexpr uint32_t FROM_COMMAND =
    4u;
  static constexpr uint32_t RESET =
    5u;
  static constexpr uint32_t FROM_DUAL_ANT =
    6u;
  static constexpr uint32_t INS_CONVERSING =
    7u;
  static constexpr uint32_t INSUFFICIENT_SPEED =
    8u;
  static constexpr uint32_t HIGH_ROTATION =
    9u;

  // pointer types
  using RawPtr =
    novatel_oem7_msgs::msg::INSSourceStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const novatel_oem7_msgs::msg::INSSourceStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<novatel_oem7_msgs::msg::INSSourceStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<novatel_oem7_msgs::msg::INSSourceStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      novatel_oem7_msgs::msg::INSSourceStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<novatel_oem7_msgs::msg::INSSourceStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      novatel_oem7_msgs::msg::INSSourceStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<novatel_oem7_msgs::msg::INSSourceStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<novatel_oem7_msgs::msg::INSSourceStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<novatel_oem7_msgs::msg::INSSourceStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__novatel_oem7_msgs__msg__INSSourceStatus
    std::shared_ptr<novatel_oem7_msgs::msg::INSSourceStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__novatel_oem7_msgs__msg__INSSourceStatus
    std::shared_ptr<novatel_oem7_msgs::msg::INSSourceStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const INSSourceStatus_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    return true;
  }
  bool operator!=(const INSSourceStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct INSSourceStatus_

// alias to use template instance with default allocator
using INSSourceStatus =
  novatel_oem7_msgs::msg::INSSourceStatus_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t INSSourceStatus_<ContainerAllocator>::FROM_NVM;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t INSSourceStatus_<ContainerAllocator>::CALIBRATING;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t INSSourceStatus_<ContainerAllocator>::CALIBRATED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t INSSourceStatus_<ContainerAllocator>::FROM_COMMAND;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t INSSourceStatus_<ContainerAllocator>::RESET;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t INSSourceStatus_<ContainerAllocator>::FROM_DUAL_ANT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t INSSourceStatus_<ContainerAllocator>::INS_CONVERSING;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t INSSourceStatus_<ContainerAllocator>::INSUFFICIENT_SPEED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t INSSourceStatus_<ContainerAllocator>::HIGH_ROTATION;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace novatel_oem7_msgs

#endif  // NOVATEL_OEM7_MSGS__MSG__DETAIL__INS_SOURCE_STATUS__STRUCT_HPP_
