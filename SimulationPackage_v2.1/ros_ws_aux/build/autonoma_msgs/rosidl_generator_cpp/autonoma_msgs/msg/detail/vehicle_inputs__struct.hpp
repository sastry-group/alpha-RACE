// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from autonoma_msgs:msg/VehicleInputs.idl
// generated code does not contain a copyright notice

#ifndef AUTONOMA_MSGS__MSG__DETAIL__VEHICLE_INPUTS__STRUCT_HPP_
#define AUTONOMA_MSGS__MSG__DETAIL__VEHICLE_INPUTS__STRUCT_HPP_

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
# define DEPRECATED__autonoma_msgs__msg__VehicleInputs __attribute__((deprecated))
#else
# define DEPRECATED__autonoma_msgs__msg__VehicleInputs __declspec(deprecated)
#endif

namespace autonoma_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct VehicleInputs_
{
  using Type = VehicleInputs_<ContainerAllocator>;

  explicit VehicleInputs_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->throttle_cmd = 0.0f;
      this->throttle_cmd_count = 0;
      this->brake_cmd = 0.0f;
      this->brake_cmd_count = 0;
      this->steering_cmd = 0.0f;
      this->steering_cmd_count = 0;
      this->gear_cmd = 0;
    }
  }

  explicit VehicleInputs_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->throttle_cmd = 0.0f;
      this->throttle_cmd_count = 0;
      this->brake_cmd = 0.0f;
      this->brake_cmd_count = 0;
      this->steering_cmd = 0.0f;
      this->steering_cmd_count = 0;
      this->gear_cmd = 0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _throttle_cmd_type =
    float;
  _throttle_cmd_type throttle_cmd;
  using _throttle_cmd_count_type =
    uint8_t;
  _throttle_cmd_count_type throttle_cmd_count;
  using _brake_cmd_type =
    float;
  _brake_cmd_type brake_cmd;
  using _brake_cmd_count_type =
    uint8_t;
  _brake_cmd_count_type brake_cmd_count;
  using _steering_cmd_type =
    float;
  _steering_cmd_type steering_cmd;
  using _steering_cmd_count_type =
    uint8_t;
  _steering_cmd_count_type steering_cmd_count;
  using _gear_cmd_type =
    uint8_t;
  _gear_cmd_type gear_cmd;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__throttle_cmd(
    const float & _arg)
  {
    this->throttle_cmd = _arg;
    return *this;
  }
  Type & set__throttle_cmd_count(
    const uint8_t & _arg)
  {
    this->throttle_cmd_count = _arg;
    return *this;
  }
  Type & set__brake_cmd(
    const float & _arg)
  {
    this->brake_cmd = _arg;
    return *this;
  }
  Type & set__brake_cmd_count(
    const uint8_t & _arg)
  {
    this->brake_cmd_count = _arg;
    return *this;
  }
  Type & set__steering_cmd(
    const float & _arg)
  {
    this->steering_cmd = _arg;
    return *this;
  }
  Type & set__steering_cmd_count(
    const uint8_t & _arg)
  {
    this->steering_cmd_count = _arg;
    return *this;
  }
  Type & set__gear_cmd(
    const uint8_t & _arg)
  {
    this->gear_cmd = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    autonoma_msgs::msg::VehicleInputs_<ContainerAllocator> *;
  using ConstRawPtr =
    const autonoma_msgs::msg::VehicleInputs_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<autonoma_msgs::msg::VehicleInputs_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<autonoma_msgs::msg::VehicleInputs_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      autonoma_msgs::msg::VehicleInputs_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<autonoma_msgs::msg::VehicleInputs_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      autonoma_msgs::msg::VehicleInputs_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<autonoma_msgs::msg::VehicleInputs_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<autonoma_msgs::msg::VehicleInputs_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<autonoma_msgs::msg::VehicleInputs_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__autonoma_msgs__msg__VehicleInputs
    std::shared_ptr<autonoma_msgs::msg::VehicleInputs_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__autonoma_msgs__msg__VehicleInputs
    std::shared_ptr<autonoma_msgs::msg::VehicleInputs_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const VehicleInputs_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->throttle_cmd != other.throttle_cmd) {
      return false;
    }
    if (this->throttle_cmd_count != other.throttle_cmd_count) {
      return false;
    }
    if (this->brake_cmd != other.brake_cmd) {
      return false;
    }
    if (this->brake_cmd_count != other.brake_cmd_count) {
      return false;
    }
    if (this->steering_cmd != other.steering_cmd) {
      return false;
    }
    if (this->steering_cmd_count != other.steering_cmd_count) {
      return false;
    }
    if (this->gear_cmd != other.gear_cmd) {
      return false;
    }
    return true;
  }
  bool operator!=(const VehicleInputs_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct VehicleInputs_

// alias to use template instance with default allocator
using VehicleInputs =
  autonoma_msgs::msg::VehicleInputs_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace autonoma_msgs

#endif  // AUTONOMA_MSGS__MSG__DETAIL__VEHICLE_INPUTS__STRUCT_HPP_
