// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from novatel_oem7_msgs:msg/SolutionSource.idl
// generated code does not contain a copyright notice

#ifndef NOVATEL_OEM7_MSGS__MSG__DETAIL__SOLUTION_SOURCE__STRUCT_HPP_
#define NOVATEL_OEM7_MSGS__MSG__DETAIL__SOLUTION_SOURCE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__novatel_oem7_msgs__msg__SolutionSource __attribute__((deprecated))
#else
# define DEPRECATED__novatel_oem7_msgs__msg__SolutionSource __declspec(deprecated)
#endif

namespace novatel_oem7_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SolutionSource_
{
  using Type = SolutionSource_<ContainerAllocator>;

  explicit SolutionSource_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->source = 0;
    }
  }

  explicit SolutionSource_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->source = 0;
    }
  }

  // field types and members
  using _source_type =
    uint8_t;
  _source_type source;

  // setters for named parameter idiom
  Type & set__source(
    const uint8_t & _arg)
  {
    this->source = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t RESERVED1 =
    3u;
  static constexpr uint8_t SOURCE_ANTENNA_MASK =
    12u;
  static constexpr uint8_t PRIMARY_ANTENNA =
    0u;
  static constexpr uint8_t SECONDARY_ANTENNA =
    0u;
  static constexpr uint8_t RESERVED2 =
    240u;

  // pointer types
  using RawPtr =
    novatel_oem7_msgs::msg::SolutionSource_<ContainerAllocator> *;
  using ConstRawPtr =
    const novatel_oem7_msgs::msg::SolutionSource_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<novatel_oem7_msgs::msg::SolutionSource_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<novatel_oem7_msgs::msg::SolutionSource_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      novatel_oem7_msgs::msg::SolutionSource_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<novatel_oem7_msgs::msg::SolutionSource_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      novatel_oem7_msgs::msg::SolutionSource_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<novatel_oem7_msgs::msg::SolutionSource_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<novatel_oem7_msgs::msg::SolutionSource_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<novatel_oem7_msgs::msg::SolutionSource_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__novatel_oem7_msgs__msg__SolutionSource
    std::shared_ptr<novatel_oem7_msgs::msg::SolutionSource_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__novatel_oem7_msgs__msg__SolutionSource
    std::shared_ptr<novatel_oem7_msgs::msg::SolutionSource_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SolutionSource_ & other) const
  {
    if (this->source != other.source) {
      return false;
    }
    return true;
  }
  bool operator!=(const SolutionSource_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SolutionSource_

// alias to use template instance with default allocator
using SolutionSource =
  novatel_oem7_msgs::msg::SolutionSource_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SolutionSource_<ContainerAllocator>::RESERVED1;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SolutionSource_<ContainerAllocator>::SOURCE_ANTENNA_MASK;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SolutionSource_<ContainerAllocator>::PRIMARY_ANTENNA;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SolutionSource_<ContainerAllocator>::SECONDARY_ANTENNA;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SolutionSource_<ContainerAllocator>::RESERVED2;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace novatel_oem7_msgs

#endif  // NOVATEL_OEM7_MSGS__MSG__DETAIL__SOLUTION_SOURCE__STRUCT_HPP_
