// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from novatel_oem7_msgs:msg/BestExtendedSolutionStatus.idl
// generated code does not contain a copyright notice

#ifndef NOVATEL_OEM7_MSGS__MSG__DETAIL__BEST_EXTENDED_SOLUTION_STATUS__STRUCT_HPP_
#define NOVATEL_OEM7_MSGS__MSG__DETAIL__BEST_EXTENDED_SOLUTION_STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__novatel_oem7_msgs__msg__BestExtendedSolutionStatus __attribute__((deprecated))
#else
# define DEPRECATED__novatel_oem7_msgs__msg__BestExtendedSolutionStatus __declspec(deprecated)
#endif

namespace novatel_oem7_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct BestExtendedSolutionStatus_
{
  using Type = BestExtendedSolutionStatus_<ContainerAllocator>;

  explicit BestExtendedSolutionStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  explicit BestExtendedSolutionStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  // field types and members
  using _status_type =
    uint8_t;
  _status_type status;

  // setters for named parameter idiom
  Type & set__status(
    const uint8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t RTK_SOLUTION_VERIFIED =
    1u;
  static constexpr uint8_t PDP_SOLUTION_IS_GLIDE =
    1u;
  static constexpr uint8_t KLOBUCHAR_BROADCAST =
    2u;
  static constexpr uint8_t SBAS_BROADCAST =
    4u;
  static constexpr uint8_t MULTI_FREQUENCY_COMPUTED =
    6u;
  static constexpr uint8_t PSRDIFF_CORRECTION =
    8u;
  static constexpr uint8_t NOVATEL_BLENDED_IONO_VALUE =
    10u;
  static constexpr uint8_t RTK_ASSIST_ACTIVE =
    16u;
  static constexpr uint8_t ANTENNA_INFORMATION_IS_MISSING =
    32u;
  static constexpr uint8_t RESERVED =
    64u;
  static constexpr uint8_t POSITION_INCLUDES_TERRAIN_COMPENSATION_CORRECTIONS =
    128u;

  // pointer types
  using RawPtr =
    novatel_oem7_msgs::msg::BestExtendedSolutionStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const novatel_oem7_msgs::msg::BestExtendedSolutionStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<novatel_oem7_msgs::msg::BestExtendedSolutionStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<novatel_oem7_msgs::msg::BestExtendedSolutionStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      novatel_oem7_msgs::msg::BestExtendedSolutionStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<novatel_oem7_msgs::msg::BestExtendedSolutionStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      novatel_oem7_msgs::msg::BestExtendedSolutionStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<novatel_oem7_msgs::msg::BestExtendedSolutionStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<novatel_oem7_msgs::msg::BestExtendedSolutionStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<novatel_oem7_msgs::msg::BestExtendedSolutionStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__novatel_oem7_msgs__msg__BestExtendedSolutionStatus
    std::shared_ptr<novatel_oem7_msgs::msg::BestExtendedSolutionStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__novatel_oem7_msgs__msg__BestExtendedSolutionStatus
    std::shared_ptr<novatel_oem7_msgs::msg::BestExtendedSolutionStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const BestExtendedSolutionStatus_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    return true;
  }
  bool operator!=(const BestExtendedSolutionStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct BestExtendedSolutionStatus_

// alias to use template instance with default allocator
using BestExtendedSolutionStatus =
  novatel_oem7_msgs::msg::BestExtendedSolutionStatus_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t BestExtendedSolutionStatus_<ContainerAllocator>::RTK_SOLUTION_VERIFIED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t BestExtendedSolutionStatus_<ContainerAllocator>::PDP_SOLUTION_IS_GLIDE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t BestExtendedSolutionStatus_<ContainerAllocator>::KLOBUCHAR_BROADCAST;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t BestExtendedSolutionStatus_<ContainerAllocator>::SBAS_BROADCAST;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t BestExtendedSolutionStatus_<ContainerAllocator>::MULTI_FREQUENCY_COMPUTED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t BestExtendedSolutionStatus_<ContainerAllocator>::PSRDIFF_CORRECTION;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t BestExtendedSolutionStatus_<ContainerAllocator>::NOVATEL_BLENDED_IONO_VALUE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t BestExtendedSolutionStatus_<ContainerAllocator>::RTK_ASSIST_ACTIVE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t BestExtendedSolutionStatus_<ContainerAllocator>::ANTENNA_INFORMATION_IS_MISSING;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t BestExtendedSolutionStatus_<ContainerAllocator>::RESERVED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t BestExtendedSolutionStatus_<ContainerAllocator>::POSITION_INCLUDES_TERRAIN_COMPENSATION_CORRECTIONS;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace novatel_oem7_msgs

#endif  // NOVATEL_OEM7_MSGS__MSG__DETAIL__BEST_EXTENDED_SOLUTION_STATUS__STRUCT_HPP_
