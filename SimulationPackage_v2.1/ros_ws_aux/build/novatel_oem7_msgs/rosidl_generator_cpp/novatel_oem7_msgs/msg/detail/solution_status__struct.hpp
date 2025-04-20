// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from novatel_oem7_msgs:msg/SolutionStatus.idl
// generated code does not contain a copyright notice

#ifndef NOVATEL_OEM7_MSGS__MSG__DETAIL__SOLUTION_STATUS__STRUCT_HPP_
#define NOVATEL_OEM7_MSGS__MSG__DETAIL__SOLUTION_STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__novatel_oem7_msgs__msg__SolutionStatus __attribute__((deprecated))
#else
# define DEPRECATED__novatel_oem7_msgs__msg__SolutionStatus __declspec(deprecated)
#endif

namespace novatel_oem7_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SolutionStatus_
{
  using Type = SolutionStatus_<ContainerAllocator>;

  explicit SolutionStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0ul;
    }
  }

  explicit SolutionStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
  static constexpr uint32_t SOL_COMPUTED =
    0u;
  static constexpr uint32_t INSUFFICIENT_OBS =
    1u;
  static constexpr uint32_t NO_CONVERGECE =
    2u;
  static constexpr uint32_t SINGULARITY =
    3u;
  static constexpr uint32_t COV_TRACE =
    4u;
  static constexpr uint32_t TEST_DIST =
    5u;
  static constexpr uint32_t COLD_START =
    6u;
  static constexpr uint32_t V_H_LIMIT =
    7u;
  static constexpr uint32_t VARIANCE =
    8u;
  static constexpr uint32_t RESIDUALS =
    1u;
  static constexpr uint32_t INTEGRITY_WARNING =
    13u;
  static constexpr uint32_t PENDING =
    18u;
  static constexpr uint32_t INVALID_FIX =
    19u;
  static constexpr uint32_t UNAUTHORIZED =
    20u;
  static constexpr uint32_t INVALID_RATE =
    22u;

  // pointer types
  using RawPtr =
    novatel_oem7_msgs::msg::SolutionStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const novatel_oem7_msgs::msg::SolutionStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<novatel_oem7_msgs::msg::SolutionStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<novatel_oem7_msgs::msg::SolutionStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      novatel_oem7_msgs::msg::SolutionStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<novatel_oem7_msgs::msg::SolutionStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      novatel_oem7_msgs::msg::SolutionStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<novatel_oem7_msgs::msg::SolutionStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<novatel_oem7_msgs::msg::SolutionStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<novatel_oem7_msgs::msg::SolutionStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__novatel_oem7_msgs__msg__SolutionStatus
    std::shared_ptr<novatel_oem7_msgs::msg::SolutionStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__novatel_oem7_msgs__msg__SolutionStatus
    std::shared_ptr<novatel_oem7_msgs::msg::SolutionStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SolutionStatus_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    return true;
  }
  bool operator!=(const SolutionStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SolutionStatus_

// alias to use template instance with default allocator
using SolutionStatus =
  novatel_oem7_msgs::msg::SolutionStatus_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t SolutionStatus_<ContainerAllocator>::SOL_COMPUTED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t SolutionStatus_<ContainerAllocator>::INSUFFICIENT_OBS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t SolutionStatus_<ContainerAllocator>::NO_CONVERGECE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t SolutionStatus_<ContainerAllocator>::SINGULARITY;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t SolutionStatus_<ContainerAllocator>::COV_TRACE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t SolutionStatus_<ContainerAllocator>::TEST_DIST;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t SolutionStatus_<ContainerAllocator>::COLD_START;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t SolutionStatus_<ContainerAllocator>::V_H_LIMIT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t SolutionStatus_<ContainerAllocator>::VARIANCE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t SolutionStatus_<ContainerAllocator>::RESIDUALS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t SolutionStatus_<ContainerAllocator>::INTEGRITY_WARNING;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t SolutionStatus_<ContainerAllocator>::PENDING;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t SolutionStatus_<ContainerAllocator>::INVALID_FIX;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t SolutionStatus_<ContainerAllocator>::UNAUTHORIZED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t SolutionStatus_<ContainerAllocator>::INVALID_RATE;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace novatel_oem7_msgs

#endif  // NOVATEL_OEM7_MSGS__MSG__DETAIL__SOLUTION_STATUS__STRUCT_HPP_
