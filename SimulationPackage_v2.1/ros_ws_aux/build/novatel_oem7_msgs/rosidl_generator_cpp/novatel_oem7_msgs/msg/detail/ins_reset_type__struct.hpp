// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from novatel_oem7_msgs:msg/INSResetType.idl
// generated code does not contain a copyright notice

#ifndef NOVATEL_OEM7_MSGS__MSG__DETAIL__INS_RESET_TYPE__STRUCT_HPP_
#define NOVATEL_OEM7_MSGS__MSG__DETAIL__INS_RESET_TYPE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__novatel_oem7_msgs__msg__INSResetType __attribute__((deprecated))
#else
# define DEPRECATED__novatel_oem7_msgs__msg__INSResetType __declspec(deprecated)
#endif

namespace novatel_oem7_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct INSResetType_
{
  using Type = INSResetType_<ContainerAllocator>;

  explicit INSResetType_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->type = 0;
    }
  }

  explicit INSResetType_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->type = 0;
    }
  }

  // field types and members
  using _type_type =
    uint8_t;
  _type_type type;

  // setters for named parameter idiom
  Type & set__type(
    const uint8_t & _arg)
  {
    this->type = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t INITIALIZED =
    0u;
  static constexpr uint8_t INS_TIMING_ERROR =
    1u;
  static constexpr uint8_t INVALID_SOLUTION =
    2u;
  static constexpr uint8_t INS_ORIENT_CHANGED =
    3u;
  static constexpr uint8_t INS_USER_COMMAND =
    4u;
  static constexpr uint8_t INS_CALIBRATION =
    5u;
  static constexpr uint8_t INIT_ATTITUDE_RECEIVED =
    6u;
  static constexpr uint8_t ALIGNMENT_MODE_CHANGED =
    8u;
  static constexpr uint8_t EXPT_RESTRICTS_EXCEEDED =
    9u;
  static constexpr uint8_t DATA_GAP =
    10u;
  static constexpr uint8_t RECEIVED_IMU_SPECS =
    11u;
  static constexpr uint8_t ACCEL_RESTRICTIONS_EXCEEDED =
    12u;
  static constexpr uint8_t ROTATION_RESTRICTIONS_EXCEEDED =
    13u;
  static constexpr uint8_t RAWIMU_STATUS_INVALID =
    14u;
  static constexpr uint8_t IMU_CONFIGURED =
    15u;
  static constexpr uint8_t IMU_UNUSPPORTED =
    16u;
  static constexpr uint8_t INS_SEED_INVALID =
    17u;
  static constexpr uint8_t INS_SEED_VALIDATION_FAILED =
    18u;
  static constexpr uint8_t USER_COMMAND_RESTART =
    19u;

  // pointer types
  using RawPtr =
    novatel_oem7_msgs::msg::INSResetType_<ContainerAllocator> *;
  using ConstRawPtr =
    const novatel_oem7_msgs::msg::INSResetType_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<novatel_oem7_msgs::msg::INSResetType_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<novatel_oem7_msgs::msg::INSResetType_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      novatel_oem7_msgs::msg::INSResetType_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<novatel_oem7_msgs::msg::INSResetType_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      novatel_oem7_msgs::msg::INSResetType_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<novatel_oem7_msgs::msg::INSResetType_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<novatel_oem7_msgs::msg::INSResetType_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<novatel_oem7_msgs::msg::INSResetType_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__novatel_oem7_msgs__msg__INSResetType
    std::shared_ptr<novatel_oem7_msgs::msg::INSResetType_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__novatel_oem7_msgs__msg__INSResetType
    std::shared_ptr<novatel_oem7_msgs::msg::INSResetType_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const INSResetType_ & other) const
  {
    if (this->type != other.type) {
      return false;
    }
    return true;
  }
  bool operator!=(const INSResetType_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct INSResetType_

// alias to use template instance with default allocator
using INSResetType =
  novatel_oem7_msgs::msg::INSResetType_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t INSResetType_<ContainerAllocator>::INITIALIZED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t INSResetType_<ContainerAllocator>::INS_TIMING_ERROR;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t INSResetType_<ContainerAllocator>::INVALID_SOLUTION;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t INSResetType_<ContainerAllocator>::INS_ORIENT_CHANGED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t INSResetType_<ContainerAllocator>::INS_USER_COMMAND;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t INSResetType_<ContainerAllocator>::INS_CALIBRATION;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t INSResetType_<ContainerAllocator>::INIT_ATTITUDE_RECEIVED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t INSResetType_<ContainerAllocator>::ALIGNMENT_MODE_CHANGED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t INSResetType_<ContainerAllocator>::EXPT_RESTRICTS_EXCEEDED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t INSResetType_<ContainerAllocator>::DATA_GAP;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t INSResetType_<ContainerAllocator>::RECEIVED_IMU_SPECS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t INSResetType_<ContainerAllocator>::ACCEL_RESTRICTIONS_EXCEEDED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t INSResetType_<ContainerAllocator>::ROTATION_RESTRICTIONS_EXCEEDED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t INSResetType_<ContainerAllocator>::RAWIMU_STATUS_INVALID;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t INSResetType_<ContainerAllocator>::IMU_CONFIGURED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t INSResetType_<ContainerAllocator>::IMU_UNUSPPORTED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t INSResetType_<ContainerAllocator>::INS_SEED_INVALID;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t INSResetType_<ContainerAllocator>::INS_SEED_VALIDATION_FAILED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t INSResetType_<ContainerAllocator>::USER_COMMAND_RESTART;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace novatel_oem7_msgs

#endif  // NOVATEL_OEM7_MSGS__MSG__DETAIL__INS_RESET_TYPE__STRUCT_HPP_
