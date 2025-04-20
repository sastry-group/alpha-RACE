// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from novatel_oem7_msgs:msg/RotationalOffset.idl
// generated code does not contain a copyright notice

#ifndef NOVATEL_OEM7_MSGS__MSG__DETAIL__ROTATIONAL_OFFSET__STRUCT_HPP_
#define NOVATEL_OEM7_MSGS__MSG__DETAIL__ROTATIONAL_OFFSET__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__novatel_oem7_msgs__msg__RotationalOffset __attribute__((deprecated))
#else
# define DEPRECATED__novatel_oem7_msgs__msg__RotationalOffset __declspec(deprecated)
#endif

namespace novatel_oem7_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RotationalOffset_
{
  using Type = RotationalOffset_<ContainerAllocator>;

  explicit RotationalOffset_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->offset = 0ul;
    }
  }

  explicit RotationalOffset_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->offset = 0ul;
    }
  }

  // field types and members
  using _offset_type =
    uint32_t;
  _offset_type offset;

  // setters for named parameter idiom
  Type & set__offset(
    const uint32_t & _arg)
  {
    this->offset = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint32_t USER =
    4u;
  static constexpr uint32_t MARK1 =
    5u;
  static constexpr uint32_t MARK2 =
    6u;
  static constexpr uint32_t ALIGN =
    8u;
  static constexpr uint32_t MARK3 =
    9u;
  static constexpr uint32_t MARK4 =
    10u;
  static constexpr uint32_t RBV =
    11u;
  static constexpr uint32_t RBM =
    12u;

  // pointer types
  using RawPtr =
    novatel_oem7_msgs::msg::RotationalOffset_<ContainerAllocator> *;
  using ConstRawPtr =
    const novatel_oem7_msgs::msg::RotationalOffset_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<novatel_oem7_msgs::msg::RotationalOffset_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<novatel_oem7_msgs::msg::RotationalOffset_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      novatel_oem7_msgs::msg::RotationalOffset_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<novatel_oem7_msgs::msg::RotationalOffset_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      novatel_oem7_msgs::msg::RotationalOffset_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<novatel_oem7_msgs::msg::RotationalOffset_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<novatel_oem7_msgs::msg::RotationalOffset_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<novatel_oem7_msgs::msg::RotationalOffset_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__novatel_oem7_msgs__msg__RotationalOffset
    std::shared_ptr<novatel_oem7_msgs::msg::RotationalOffset_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__novatel_oem7_msgs__msg__RotationalOffset
    std::shared_ptr<novatel_oem7_msgs::msg::RotationalOffset_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RotationalOffset_ & other) const
  {
    if (this->offset != other.offset) {
      return false;
    }
    return true;
  }
  bool operator!=(const RotationalOffset_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RotationalOffset_

// alias to use template instance with default allocator
using RotationalOffset =
  novatel_oem7_msgs::msg::RotationalOffset_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t RotationalOffset_<ContainerAllocator>::USER;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t RotationalOffset_<ContainerAllocator>::MARK1;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t RotationalOffset_<ContainerAllocator>::MARK2;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t RotationalOffset_<ContainerAllocator>::ALIGN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t RotationalOffset_<ContainerAllocator>::MARK3;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t RotationalOffset_<ContainerAllocator>::MARK4;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t RotationalOffset_<ContainerAllocator>::RBV;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t RotationalOffset_<ContainerAllocator>::RBM;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace novatel_oem7_msgs

#endif  // NOVATEL_OEM7_MSGS__MSG__DETAIL__ROTATIONAL_OFFSET__STRUCT_HPP_
