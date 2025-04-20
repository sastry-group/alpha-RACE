// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from novatel_oem7_msgs:msg/INSReceiverStatus.idl
// generated code does not contain a copyright notice

#ifndef NOVATEL_OEM7_MSGS__MSG__DETAIL__INS_RECEIVER_STATUS__STRUCT_HPP_
#define NOVATEL_OEM7_MSGS__MSG__DETAIL__INS_RECEIVER_STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__novatel_oem7_msgs__msg__INSReceiverStatus __attribute__((deprecated))
#else
# define DEPRECATED__novatel_oem7_msgs__msg__INSReceiverStatus __declspec(deprecated)
#endif

namespace novatel_oem7_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct INSReceiverStatus_
{
  using Type = INSReceiverStatus_<ContainerAllocator>;

  explicit INSReceiverStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<uint8_t, 4>::iterator, uint8_t>(this->status.begin(), this->status.end(), 0);
    }
  }

  explicit INSReceiverStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : status(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<uint8_t, 4>::iterator, uint8_t>(this->status.begin(), this->status.end(), 0);
    }
  }

  // field types and members
  using _status_type =
    std::array<uint8_t, 4>;
  _status_type status;

  // setters for named parameter idiom
  Type & set__status(
    const std::array<uint8_t, 4> & _arg)
  {
    this->status = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t INS_RESET_BYTE =
    0u;
  static constexpr uint8_t BYTE_1 =
    1u;
  static constexpr uint8_t IMU_COMMUNICATION_ERROR =
    1u;

  // pointer types
  using RawPtr =
    novatel_oem7_msgs::msg::INSReceiverStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const novatel_oem7_msgs::msg::INSReceiverStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<novatel_oem7_msgs::msg::INSReceiverStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<novatel_oem7_msgs::msg::INSReceiverStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      novatel_oem7_msgs::msg::INSReceiverStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<novatel_oem7_msgs::msg::INSReceiverStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      novatel_oem7_msgs::msg::INSReceiverStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<novatel_oem7_msgs::msg::INSReceiverStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<novatel_oem7_msgs::msg::INSReceiverStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<novatel_oem7_msgs::msg::INSReceiverStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__novatel_oem7_msgs__msg__INSReceiverStatus
    std::shared_ptr<novatel_oem7_msgs::msg::INSReceiverStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__novatel_oem7_msgs__msg__INSReceiverStatus
    std::shared_ptr<novatel_oem7_msgs::msg::INSReceiverStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const INSReceiverStatus_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    return true;
  }
  bool operator!=(const INSReceiverStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct INSReceiverStatus_

// alias to use template instance with default allocator
using INSReceiverStatus =
  novatel_oem7_msgs::msg::INSReceiverStatus_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t INSReceiverStatus_<ContainerAllocator>::INS_RESET_BYTE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t INSReceiverStatus_<ContainerAllocator>::BYTE_1;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t INSReceiverStatus_<ContainerAllocator>::IMU_COMMUNICATION_ERROR;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace novatel_oem7_msgs

#endif  // NOVATEL_OEM7_MSGS__MSG__DETAIL__INS_RECEIVER_STATUS__STRUCT_HPP_
