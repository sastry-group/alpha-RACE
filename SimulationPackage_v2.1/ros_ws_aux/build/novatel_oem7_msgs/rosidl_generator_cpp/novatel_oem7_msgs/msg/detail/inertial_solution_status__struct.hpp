// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from novatel_oem7_msgs:msg/InertialSolutionStatus.idl
// generated code does not contain a copyright notice

#ifndef NOVATEL_OEM7_MSGS__MSG__DETAIL__INERTIAL_SOLUTION_STATUS__STRUCT_HPP_
#define NOVATEL_OEM7_MSGS__MSG__DETAIL__INERTIAL_SOLUTION_STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__novatel_oem7_msgs__msg__InertialSolutionStatus __attribute__((deprecated))
#else
# define DEPRECATED__novatel_oem7_msgs__msg__InertialSolutionStatus __declspec(deprecated)
#endif

namespace novatel_oem7_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct InertialSolutionStatus_
{
  using Type = InertialSolutionStatus_<ContainerAllocator>;

  explicit InertialSolutionStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0ul;
    }
  }

  explicit InertialSolutionStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
  static constexpr uint32_t INS_INACTIVE =
    0u;
  static constexpr uint32_t INS_ALIGNING =
    1u;
  static constexpr uint32_t INS_HIGH_VARIANCE =
    2u;
  static constexpr uint32_t INS_SOLUTION_GOOD =
    3u;
  static constexpr uint32_t INS_SOLUTION_FREE =
    6u;
  static constexpr uint32_t INS_ALIGNMENT_COMPLETE =
    7u;
  static constexpr uint32_t DETERMINING_ORIENTATION =
    8u;
  static constexpr uint32_t WAITING_INITIAL_POS =
    9u;
  static constexpr uint32_t WAITING_AZIMUTH =
    10u;
  static constexpr uint32_t INITIALIZING_BIASES =
    11u;
  static constexpr uint32_t MOTION_DETECT =
    12u;

  // pointer types
  using RawPtr =
    novatel_oem7_msgs::msg::InertialSolutionStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const novatel_oem7_msgs::msg::InertialSolutionStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<novatel_oem7_msgs::msg::InertialSolutionStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<novatel_oem7_msgs::msg::InertialSolutionStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      novatel_oem7_msgs::msg::InertialSolutionStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<novatel_oem7_msgs::msg::InertialSolutionStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      novatel_oem7_msgs::msg::InertialSolutionStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<novatel_oem7_msgs::msg::InertialSolutionStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<novatel_oem7_msgs::msg::InertialSolutionStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<novatel_oem7_msgs::msg::InertialSolutionStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__novatel_oem7_msgs__msg__InertialSolutionStatus
    std::shared_ptr<novatel_oem7_msgs::msg::InertialSolutionStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__novatel_oem7_msgs__msg__InertialSolutionStatus
    std::shared_ptr<novatel_oem7_msgs::msg::InertialSolutionStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const InertialSolutionStatus_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    return true;
  }
  bool operator!=(const InertialSolutionStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct InertialSolutionStatus_

// alias to use template instance with default allocator
using InertialSolutionStatus =
  novatel_oem7_msgs::msg::InertialSolutionStatus_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t InertialSolutionStatus_<ContainerAllocator>::INS_INACTIVE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t InertialSolutionStatus_<ContainerAllocator>::INS_ALIGNING;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t InertialSolutionStatus_<ContainerAllocator>::INS_HIGH_VARIANCE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t InertialSolutionStatus_<ContainerAllocator>::INS_SOLUTION_GOOD;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t InertialSolutionStatus_<ContainerAllocator>::INS_SOLUTION_FREE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t InertialSolutionStatus_<ContainerAllocator>::INS_ALIGNMENT_COMPLETE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t InertialSolutionStatus_<ContainerAllocator>::DETERMINING_ORIENTATION;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t InertialSolutionStatus_<ContainerAllocator>::WAITING_INITIAL_POS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t InertialSolutionStatus_<ContainerAllocator>::WAITING_AZIMUTH;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t InertialSolutionStatus_<ContainerAllocator>::INITIALIZING_BIASES;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t InertialSolutionStatus_<ContainerAllocator>::MOTION_DETECT;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace novatel_oem7_msgs

#endif  // NOVATEL_OEM7_MSGS__MSG__DETAIL__INERTIAL_SOLUTION_STATUS__STRUCT_HPP_
