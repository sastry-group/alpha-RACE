// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from raptor_dbw_msgs:msg/BrakeCmd.idl
// generated code does not contain a copyright notice

#ifndef RAPTOR_DBW_MSGS__MSG__DETAIL__BRAKE_CMD__STRUCT_HPP_
#define RAPTOR_DBW_MSGS__MSG__DETAIL__BRAKE_CMD__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'control_type'
#include "raptor_dbw_msgs/msg/detail/actuator_control_mode__struct.hpp"
// Member 'park_brake_cmd'
#include "raptor_dbw_msgs/msg/detail/parking_brake__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__raptor_dbw_msgs__msg__BrakeCmd __attribute__((deprecated))
#else
# define DEPRECATED__raptor_dbw_msgs__msg__BrakeCmd __declspec(deprecated)
#endif

namespace raptor_dbw_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct BrakeCmd_
{
  using Type = BrakeCmd_<ContainerAllocator>;

  explicit BrakeCmd_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : control_type(_init),
    park_brake_cmd(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->pedal_cmd = 0.0f;
      this->enable = false;
      this->rolling_counter = 0;
      this->torque_cmd = 0.0f;
      this->decel_limit = 0.0f;
      this->decel_negative_jerk_limit = 0.0f;
    }
  }

  explicit BrakeCmd_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : control_type(_alloc, _init),
    park_brake_cmd(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->pedal_cmd = 0.0f;
      this->enable = false;
      this->rolling_counter = 0;
      this->torque_cmd = 0.0f;
      this->decel_limit = 0.0f;
      this->decel_negative_jerk_limit = 0.0f;
    }
  }

  // field types and members
  using _pedal_cmd_type =
    float;
  _pedal_cmd_type pedal_cmd;
  using _enable_type =
    bool;
  _enable_type enable;
  using _rolling_counter_type =
    uint8_t;
  _rolling_counter_type rolling_counter;
  using _torque_cmd_type =
    float;
  _torque_cmd_type torque_cmd;
  using _decel_limit_type =
    float;
  _decel_limit_type decel_limit;
  using _control_type_type =
    raptor_dbw_msgs::msg::ActuatorControlMode_<ContainerAllocator>;
  _control_type_type control_type;
  using _decel_negative_jerk_limit_type =
    float;
  _decel_negative_jerk_limit_type decel_negative_jerk_limit;
  using _park_brake_cmd_type =
    raptor_dbw_msgs::msg::ParkingBrake_<ContainerAllocator>;
  _park_brake_cmd_type park_brake_cmd;

  // setters for named parameter idiom
  Type & set__pedal_cmd(
    const float & _arg)
  {
    this->pedal_cmd = _arg;
    return *this;
  }
  Type & set__enable(
    const bool & _arg)
  {
    this->enable = _arg;
    return *this;
  }
  Type & set__rolling_counter(
    const uint8_t & _arg)
  {
    this->rolling_counter = _arg;
    return *this;
  }
  Type & set__torque_cmd(
    const float & _arg)
  {
    this->torque_cmd = _arg;
    return *this;
  }
  Type & set__decel_limit(
    const float & _arg)
  {
    this->decel_limit = _arg;
    return *this;
  }
  Type & set__control_type(
    const raptor_dbw_msgs::msg::ActuatorControlMode_<ContainerAllocator> & _arg)
  {
    this->control_type = _arg;
    return *this;
  }
  Type & set__decel_negative_jerk_limit(
    const float & _arg)
  {
    this->decel_negative_jerk_limit = _arg;
    return *this;
  }
  Type & set__park_brake_cmd(
    const raptor_dbw_msgs::msg::ParkingBrake_<ContainerAllocator> & _arg)
  {
    this->park_brake_cmd = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    raptor_dbw_msgs::msg::BrakeCmd_<ContainerAllocator> *;
  using ConstRawPtr =
    const raptor_dbw_msgs::msg::BrakeCmd_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<raptor_dbw_msgs::msg::BrakeCmd_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<raptor_dbw_msgs::msg::BrakeCmd_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      raptor_dbw_msgs::msg::BrakeCmd_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<raptor_dbw_msgs::msg::BrakeCmd_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      raptor_dbw_msgs::msg::BrakeCmd_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<raptor_dbw_msgs::msg::BrakeCmd_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<raptor_dbw_msgs::msg::BrakeCmd_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<raptor_dbw_msgs::msg::BrakeCmd_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__raptor_dbw_msgs__msg__BrakeCmd
    std::shared_ptr<raptor_dbw_msgs::msg::BrakeCmd_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__raptor_dbw_msgs__msg__BrakeCmd
    std::shared_ptr<raptor_dbw_msgs::msg::BrakeCmd_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const BrakeCmd_ & other) const
  {
    if (this->pedal_cmd != other.pedal_cmd) {
      return false;
    }
    if (this->enable != other.enable) {
      return false;
    }
    if (this->rolling_counter != other.rolling_counter) {
      return false;
    }
    if (this->torque_cmd != other.torque_cmd) {
      return false;
    }
    if (this->decel_limit != other.decel_limit) {
      return false;
    }
    if (this->control_type != other.control_type) {
      return false;
    }
    if (this->decel_negative_jerk_limit != other.decel_negative_jerk_limit) {
      return false;
    }
    if (this->park_brake_cmd != other.park_brake_cmd) {
      return false;
    }
    return true;
  }
  bool operator!=(const BrakeCmd_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct BrakeCmd_

// alias to use template instance with default allocator
using BrakeCmd =
  raptor_dbw_msgs::msg::BrakeCmd_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace raptor_dbw_msgs

#endif  // RAPTOR_DBW_MSGS__MSG__DETAIL__BRAKE_CMD__STRUCT_HPP_
