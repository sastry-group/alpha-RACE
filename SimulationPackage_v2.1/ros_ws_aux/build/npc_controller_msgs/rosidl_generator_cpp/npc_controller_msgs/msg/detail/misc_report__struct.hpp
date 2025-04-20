// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from npc_controller_msgs:msg/MiscReport.idl
// generated code does not contain a copyright notice

#ifndef NPC_CONTROLLER_MSGS__MSG__DETAIL__MISC_REPORT__STRUCT_HPP_
#define NPC_CONTROLLER_MSGS__MSG__DETAIL__MISC_REPORT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__npc_controller_msgs__msg__MiscReport __attribute__((deprecated))
#else
# define DEPRECATED__npc_controller_msgs__msg__MiscReport __declspec(deprecated)
#endif

namespace npc_controller_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MiscReport_
{
  using Type = MiscReport_<ContainerAllocator>;

  explicit MiscReport_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->battery_voltage = 0.0f;
      this->off_grid_power_connection = false;
      this->safety_switch_state = 0;
      this->mode_switch_state = false;
      this->sys_state = 0;
    }
  }

  explicit MiscReport_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->battery_voltage = 0.0f;
      this->off_grid_power_connection = false;
      this->safety_switch_state = 0;
      this->mode_switch_state = false;
      this->sys_state = 0;
    }
  }

  // field types and members
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;
  using _battery_voltage_type =
    float;
  _battery_voltage_type battery_voltage;
  using _off_grid_power_connection_type =
    bool;
  _off_grid_power_connection_type off_grid_power_connection;
  using _safety_switch_state_type =
    uint8_t;
  _safety_switch_state_type safety_switch_state;
  using _mode_switch_state_type =
    bool;
  _mode_switch_state_type mode_switch_state;
  using _sys_state_type =
    uint8_t;
  _sys_state_type sys_state;

  // setters for named parameter idiom
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }
  Type & set__battery_voltage(
    const float & _arg)
  {
    this->battery_voltage = _arg;
    return *this;
  }
  Type & set__off_grid_power_connection(
    const bool & _arg)
  {
    this->off_grid_power_connection = _arg;
    return *this;
  }
  Type & set__safety_switch_state(
    const uint8_t & _arg)
  {
    this->safety_switch_state = _arg;
    return *this;
  }
  Type & set__mode_switch_state(
    const bool & _arg)
  {
    this->mode_switch_state = _arg;
    return *this;
  }
  Type & set__sys_state(
    const uint8_t & _arg)
  {
    this->sys_state = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    npc_controller_msgs::msg::MiscReport_<ContainerAllocator> *;
  using ConstRawPtr =
    const npc_controller_msgs::msg::MiscReport_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<npc_controller_msgs::msg::MiscReport_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<npc_controller_msgs::msg::MiscReport_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      npc_controller_msgs::msg::MiscReport_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<npc_controller_msgs::msg::MiscReport_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      npc_controller_msgs::msg::MiscReport_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<npc_controller_msgs::msg::MiscReport_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<npc_controller_msgs::msg::MiscReport_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<npc_controller_msgs::msg::MiscReport_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__npc_controller_msgs__msg__MiscReport
    std::shared_ptr<npc_controller_msgs::msg::MiscReport_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__npc_controller_msgs__msg__MiscReport
    std::shared_ptr<npc_controller_msgs::msg::MiscReport_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MiscReport_ & other) const
  {
    if (this->stamp != other.stamp) {
      return false;
    }
    if (this->battery_voltage != other.battery_voltage) {
      return false;
    }
    if (this->off_grid_power_connection != other.off_grid_power_connection) {
      return false;
    }
    if (this->safety_switch_state != other.safety_switch_state) {
      return false;
    }
    if (this->mode_switch_state != other.mode_switch_state) {
      return false;
    }
    if (this->sys_state != other.sys_state) {
      return false;
    }
    return true;
  }
  bool operator!=(const MiscReport_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MiscReport_

// alias to use template instance with default allocator
using MiscReport =
  npc_controller_msgs::msg::MiscReport_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace npc_controller_msgs

#endif  // NPC_CONTROLLER_MSGS__MSG__DETAIL__MISC_REPORT__STRUCT_HPP_
