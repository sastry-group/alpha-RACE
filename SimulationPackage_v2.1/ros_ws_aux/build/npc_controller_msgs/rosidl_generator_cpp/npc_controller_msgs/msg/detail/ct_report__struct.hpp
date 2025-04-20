// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from npc_controller_msgs:msg/CtReport.idl
// generated code does not contain a copyright notice

#ifndef NPC_CONTROLLER_MSGS__MSG__DETAIL__CT_REPORT__STRUCT_HPP_
#define NPC_CONTROLLER_MSGS__MSG__DETAIL__CT_REPORT__STRUCT_HPP_

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
# define DEPRECATED__npc_controller_msgs__msg__CtReport __attribute__((deprecated))
#else
# define DEPRECATED__npc_controller_msgs__msg__CtReport __declspec(deprecated)
#endif

namespace npc_controller_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct CtReport_
{
  using Type = CtReport_<ContainerAllocator>;

  explicit CtReport_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->track_flag_ack = 0;
      this->veh_flag_ack = 0;
      this->ct_state = 0;
      this->target_speed = 0;
      this->rolling_counter = 0;
    }
  }

  explicit CtReport_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->track_flag_ack = 0;
      this->veh_flag_ack = 0;
      this->ct_state = 0;
      this->target_speed = 0;
      this->rolling_counter = 0;
    }
  }

  // field types and members
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;
  using _track_flag_ack_type =
    uint8_t;
  _track_flag_ack_type track_flag_ack;
  using _veh_flag_ack_type =
    uint8_t;
  _veh_flag_ack_type veh_flag_ack;
  using _ct_state_type =
    uint8_t;
  _ct_state_type ct_state;
  using _target_speed_type =
    uint8_t;
  _target_speed_type target_speed;
  using _rolling_counter_type =
    uint8_t;
  _rolling_counter_type rolling_counter;

  // setters for named parameter idiom
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }
  Type & set__track_flag_ack(
    const uint8_t & _arg)
  {
    this->track_flag_ack = _arg;
    return *this;
  }
  Type & set__veh_flag_ack(
    const uint8_t & _arg)
  {
    this->veh_flag_ack = _arg;
    return *this;
  }
  Type & set__ct_state(
    const uint8_t & _arg)
  {
    this->ct_state = _arg;
    return *this;
  }
  Type & set__target_speed(
    const uint8_t & _arg)
  {
    this->target_speed = _arg;
    return *this;
  }
  Type & set__rolling_counter(
    const uint8_t & _arg)
  {
    this->rolling_counter = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    npc_controller_msgs::msg::CtReport_<ContainerAllocator> *;
  using ConstRawPtr =
    const npc_controller_msgs::msg::CtReport_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<npc_controller_msgs::msg::CtReport_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<npc_controller_msgs::msg::CtReport_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      npc_controller_msgs::msg::CtReport_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<npc_controller_msgs::msg::CtReport_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      npc_controller_msgs::msg::CtReport_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<npc_controller_msgs::msg::CtReport_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<npc_controller_msgs::msg::CtReport_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<npc_controller_msgs::msg::CtReport_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__npc_controller_msgs__msg__CtReport
    std::shared_ptr<npc_controller_msgs::msg::CtReport_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__npc_controller_msgs__msg__CtReport
    std::shared_ptr<npc_controller_msgs::msg::CtReport_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CtReport_ & other) const
  {
    if (this->stamp != other.stamp) {
      return false;
    }
    if (this->track_flag_ack != other.track_flag_ack) {
      return false;
    }
    if (this->veh_flag_ack != other.veh_flag_ack) {
      return false;
    }
    if (this->ct_state != other.ct_state) {
      return false;
    }
    if (this->target_speed != other.target_speed) {
      return false;
    }
    if (this->rolling_counter != other.rolling_counter) {
      return false;
    }
    return true;
  }
  bool operator!=(const CtReport_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CtReport_

// alias to use template instance with default allocator
using CtReport =
  npc_controller_msgs::msg::CtReport_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace npc_controller_msgs

#endif  // NPC_CONTROLLER_MSGS__MSG__DETAIL__CT_REPORT__STRUCT_HPP_
