// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from novatel_oem7_msgs:msg/INSExtendedSolutionStatus.idl
// generated code does not contain a copyright notice

#ifndef NOVATEL_OEM7_MSGS__MSG__DETAIL__INS_EXTENDED_SOLUTION_STATUS__STRUCT_HPP_
#define NOVATEL_OEM7_MSGS__MSG__DETAIL__INS_EXTENDED_SOLUTION_STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__novatel_oem7_msgs__msg__INSExtendedSolutionStatus __attribute__((deprecated))
#else
# define DEPRECATED__novatel_oem7_msgs__msg__INSExtendedSolutionStatus __declspec(deprecated)
#endif

namespace novatel_oem7_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct INSExtendedSolutionStatus_
{
  using Type = INSExtendedSolutionStatus_<ContainerAllocator>;

  explicit INSExtendedSolutionStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0ul;
    }
  }

  explicit INSExtendedSolutionStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
  static constexpr uint32_t POSITION_UPDATE =
    1u;
  static constexpr uint32_t PHASE_UPDATE =
    2u;
  static constexpr uint32_t ZERO_VELOCITY_UPDATE =
    4u;
  static constexpr uint32_t WHEEL_SEONSOR_UPDATE =
    8u;
  static constexpr uint32_t ALIGN_UPDATE =
    16u;
  static constexpr uint32_t EXTERNAL_POSITION_UPDATE =
    32u;
  static constexpr uint32_t INS_SOLUTIN_CONVERGENCE_FLAG =
    64u;
  static constexpr uint32_t DOPPLER_UPDATE =
    128u;
  static constexpr uint32_t PSEUDORANGE_UPDATE =
    256u;
  static constexpr uint32_t VELOCITY_UPDATE =
    512u;
  static constexpr uint32_t RESERVED_1 =
    1024u;
  static constexpr uint32_t DEAD_RECONING_UPDATE =
    2048u;
  static constexpr uint32_t PHASE_WIND_UP_UPDATE =
    4096u;
  static constexpr uint32_t COURSE_OVER_GROUND_UPDATE =
    8192u;
  static constexpr uint32_t EXTERNAL_VELOCITY_UPDATE =
    16384u;
  static constexpr uint32_t EXTERNAL_ATTITUDE_UPDATE =
    32768u;
  static constexpr uint32_t EXTERNAL_HEADING_UPDATE =
    65535u;
  static constexpr uint32_t EXTERNAL_HEIGHT_UPDATE =
    131072u;
  static constexpr uint32_t RESERVED_2 =
    262144u;
  static constexpr uint32_t RESERVED_3 =
    524288u;
  static constexpr uint32_t ROVER_POSITION_UPDATE =
    1048576u;
  static constexpr uint32_t ROVER_POSITION_UPDATE_TYPE =
    2097152u;
  static constexpr uint32_t RESERVED_4 =
    4194304u;
  static constexpr uint32_t RESERVED_5 =
    8388608u;
  static constexpr uint32_t TURN_ON_BIASES_ESTIMATED =
    16777216u;
  static constexpr uint32_t ALIGNMENT_DIRECTION_VERIFIED =
    33554432u;
  static constexpr uint32_t ALIGNMENT_INDICATION_1 =
    67108864u;
  static constexpr uint32_t ALIGNMENT_INDICATION_2 =
    134217728u;
  static constexpr uint32_t ALIGNMENT_INDICATION_3 =
    268435456u;
  static constexpr uint32_t NVM_SEED_INDICATION_1 =
    538870912u;
  static constexpr uint32_t NVM_SEED_INDICATION_2 =
    1073741824u;
  static constexpr uint32_t NVM_SEED_INDICATION_3 =
    2147483648u;
  static constexpr uint32_t ALIGNMENT_INCOMPLETE_ALIGNMENT =
    0u;
  static constexpr uint32_t ALIGNMENT_STATIC =
    1u;
  static constexpr uint32_t ALIGNMENT_KINETMATIC =
    2u;
  static constexpr uint32_t ALIGNMENT_DUAL_ANTENNA =
    3u;
  static constexpr uint32_t ALIGNMENT_USER_COMMAND =
    4u;
  static constexpr uint32_t ALIGNMENT_NVM_SEED =
    5u;
  static constexpr uint32_t NVM_SEED_INACTIVE =
    0u;
  static constexpr uint32_t NVM_SEED_STORED_INVALID =
    1u;
  static constexpr uint32_t NVM_SEED_PENDING_VALIDATION =
    2u;
  static constexpr uint32_t NVM_SEED_INJECTED =
    4u;
  static constexpr uint32_t NVM_SEEED_DATA_IGNORED =
    5u;
  static constexpr uint32_t NVM_SEED_ERROR_MODEL_DATA_INJECTED =
    6u;

  // pointer types
  using RawPtr =
    novatel_oem7_msgs::msg::INSExtendedSolutionStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const novatel_oem7_msgs::msg::INSExtendedSolutionStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<novatel_oem7_msgs::msg::INSExtendedSolutionStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<novatel_oem7_msgs::msg::INSExtendedSolutionStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      novatel_oem7_msgs::msg::INSExtendedSolutionStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<novatel_oem7_msgs::msg::INSExtendedSolutionStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      novatel_oem7_msgs::msg::INSExtendedSolutionStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<novatel_oem7_msgs::msg::INSExtendedSolutionStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<novatel_oem7_msgs::msg::INSExtendedSolutionStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<novatel_oem7_msgs::msg::INSExtendedSolutionStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__novatel_oem7_msgs__msg__INSExtendedSolutionStatus
    std::shared_ptr<novatel_oem7_msgs::msg::INSExtendedSolutionStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__novatel_oem7_msgs__msg__INSExtendedSolutionStatus
    std::shared_ptr<novatel_oem7_msgs::msg::INSExtendedSolutionStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const INSExtendedSolutionStatus_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    return true;
  }
  bool operator!=(const INSExtendedSolutionStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct INSExtendedSolutionStatus_

// alias to use template instance with default allocator
using INSExtendedSolutionStatus =
  novatel_oem7_msgs::msg::INSExtendedSolutionStatus_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t INSExtendedSolutionStatus_<ContainerAllocator>::POSITION_UPDATE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t INSExtendedSolutionStatus_<ContainerAllocator>::PHASE_UPDATE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t INSExtendedSolutionStatus_<ContainerAllocator>::ZERO_VELOCITY_UPDATE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t INSExtendedSolutionStatus_<ContainerAllocator>::WHEEL_SEONSOR_UPDATE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t INSExtendedSolutionStatus_<ContainerAllocator>::ALIGN_UPDATE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t INSExtendedSolutionStatus_<ContainerAllocator>::EXTERNAL_POSITION_UPDATE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t INSExtendedSolutionStatus_<ContainerAllocator>::INS_SOLUTIN_CONVERGENCE_FLAG;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t INSExtendedSolutionStatus_<ContainerAllocator>::DOPPLER_UPDATE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t INSExtendedSolutionStatus_<ContainerAllocator>::PSEUDORANGE_UPDATE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t INSExtendedSolutionStatus_<ContainerAllocator>::VELOCITY_UPDATE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t INSExtendedSolutionStatus_<ContainerAllocator>::RESERVED_1;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t INSExtendedSolutionStatus_<ContainerAllocator>::DEAD_RECONING_UPDATE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t INSExtendedSolutionStatus_<ContainerAllocator>::PHASE_WIND_UP_UPDATE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t INSExtendedSolutionStatus_<ContainerAllocator>::COURSE_OVER_GROUND_UPDATE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t INSExtendedSolutionStatus_<ContainerAllocator>::EXTERNAL_VELOCITY_UPDATE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t INSExtendedSolutionStatus_<ContainerAllocator>::EXTERNAL_ATTITUDE_UPDATE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t INSExtendedSolutionStatus_<ContainerAllocator>::EXTERNAL_HEADING_UPDATE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t INSExtendedSolutionStatus_<ContainerAllocator>::EXTERNAL_HEIGHT_UPDATE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t INSExtendedSolutionStatus_<ContainerAllocator>::RESERVED_2;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t INSExtendedSolutionStatus_<ContainerAllocator>::RESERVED_3;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t INSExtendedSolutionStatus_<ContainerAllocator>::ROVER_POSITION_UPDATE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t INSExtendedSolutionStatus_<ContainerAllocator>::ROVER_POSITION_UPDATE_TYPE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t INSExtendedSolutionStatus_<ContainerAllocator>::RESERVED_4;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t INSExtendedSolutionStatus_<ContainerAllocator>::RESERVED_5;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t INSExtendedSolutionStatus_<ContainerAllocator>::TURN_ON_BIASES_ESTIMATED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t INSExtendedSolutionStatus_<ContainerAllocator>::ALIGNMENT_DIRECTION_VERIFIED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t INSExtendedSolutionStatus_<ContainerAllocator>::ALIGNMENT_INDICATION_1;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t INSExtendedSolutionStatus_<ContainerAllocator>::ALIGNMENT_INDICATION_2;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t INSExtendedSolutionStatus_<ContainerAllocator>::ALIGNMENT_INDICATION_3;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t INSExtendedSolutionStatus_<ContainerAllocator>::NVM_SEED_INDICATION_1;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t INSExtendedSolutionStatus_<ContainerAllocator>::NVM_SEED_INDICATION_2;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t INSExtendedSolutionStatus_<ContainerAllocator>::NVM_SEED_INDICATION_3;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t INSExtendedSolutionStatus_<ContainerAllocator>::ALIGNMENT_INCOMPLETE_ALIGNMENT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t INSExtendedSolutionStatus_<ContainerAllocator>::ALIGNMENT_STATIC;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t INSExtendedSolutionStatus_<ContainerAllocator>::ALIGNMENT_KINETMATIC;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t INSExtendedSolutionStatus_<ContainerAllocator>::ALIGNMENT_DUAL_ANTENNA;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t INSExtendedSolutionStatus_<ContainerAllocator>::ALIGNMENT_USER_COMMAND;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t INSExtendedSolutionStatus_<ContainerAllocator>::ALIGNMENT_NVM_SEED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t INSExtendedSolutionStatus_<ContainerAllocator>::NVM_SEED_INACTIVE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t INSExtendedSolutionStatus_<ContainerAllocator>::NVM_SEED_STORED_INVALID;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t INSExtendedSolutionStatus_<ContainerAllocator>::NVM_SEED_PENDING_VALIDATION;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t INSExtendedSolutionStatus_<ContainerAllocator>::NVM_SEED_INJECTED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t INSExtendedSolutionStatus_<ContainerAllocator>::NVM_SEEED_DATA_IGNORED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t INSExtendedSolutionStatus_<ContainerAllocator>::NVM_SEED_ERROR_MODEL_DATA_INJECTED;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace novatel_oem7_msgs

#endif  // NOVATEL_OEM7_MSGS__MSG__DETAIL__INS_EXTENDED_SOLUTION_STATUS__STRUCT_HPP_
