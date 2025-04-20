// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from raptor_dbw_msgs:msg/MiscCmd.idl
// generated code does not contain a copyright notice

#ifndef RAPTOR_DBW_MSGS__MSG__DETAIL__MISC_CMD__STRUCT_HPP_
#define RAPTOR_DBW_MSGS__MSG__DETAIL__MISC_CMD__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'cmd'
#include "raptor_dbw_msgs/msg/detail/turn_signal__struct.hpp"
// Member 'door_request_right_rear'
// Member 'door_request_left_rear'
// Member 'door_request_lift_gate'
#include "raptor_dbw_msgs/msg/detail/door_request__struct.hpp"
// Member 'high_beam_cmd'
#include "raptor_dbw_msgs/msg/detail/high_beam__struct.hpp"
// Member 'front_wiper_cmd'
#include "raptor_dbw_msgs/msg/detail/wiper_front__struct.hpp"
// Member 'rear_wiper_cmd'
#include "raptor_dbw_msgs/msg/detail/wiper_rear__struct.hpp"
// Member 'ignition_cmd'
#include "raptor_dbw_msgs/msg/detail/ignition__struct.hpp"
// Member 'low_beam_cmd'
#include "raptor_dbw_msgs/msg/detail/low_beam__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__raptor_dbw_msgs__msg__MiscCmd __attribute__((deprecated))
#else
# define DEPRECATED__raptor_dbw_msgs__msg__MiscCmd __declspec(deprecated)
#endif

namespace raptor_dbw_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MiscCmd_
{
  using Type = MiscCmd_<ContainerAllocator>;

  explicit MiscCmd_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : cmd(_init),
    door_request_right_rear(_init),
    high_beam_cmd(_init),
    front_wiper_cmd(_init),
    rear_wiper_cmd(_init),
    ignition_cmd(_init),
    door_request_left_rear(_init),
    door_request_lift_gate(_init),
    low_beam_cmd(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->rolling_counter = 0;
      this->block_standard_cruise_buttons = false;
      this->block_adaptive_cruise_buttons = false;
      this->block_turn_signal_stalk = false;
      this->horn_cmd = false;
    }
  }

  explicit MiscCmd_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : cmd(_alloc, _init),
    door_request_right_rear(_alloc, _init),
    high_beam_cmd(_alloc, _init),
    front_wiper_cmd(_alloc, _init),
    rear_wiper_cmd(_alloc, _init),
    ignition_cmd(_alloc, _init),
    door_request_left_rear(_alloc, _init),
    door_request_lift_gate(_alloc, _init),
    low_beam_cmd(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->rolling_counter = 0;
      this->block_standard_cruise_buttons = false;
      this->block_adaptive_cruise_buttons = false;
      this->block_turn_signal_stalk = false;
      this->horn_cmd = false;
    }
  }

  // field types and members
  using _cmd_type =
    raptor_dbw_msgs::msg::TurnSignal_<ContainerAllocator>;
  _cmd_type cmd;
  using _door_request_right_rear_type =
    raptor_dbw_msgs::msg::DoorRequest_<ContainerAllocator>;
  _door_request_right_rear_type door_request_right_rear;
  using _rolling_counter_type =
    uint8_t;
  _rolling_counter_type rolling_counter;
  using _high_beam_cmd_type =
    raptor_dbw_msgs::msg::HighBeam_<ContainerAllocator>;
  _high_beam_cmd_type high_beam_cmd;
  using _front_wiper_cmd_type =
    raptor_dbw_msgs::msg::WiperFront_<ContainerAllocator>;
  _front_wiper_cmd_type front_wiper_cmd;
  using _rear_wiper_cmd_type =
    raptor_dbw_msgs::msg::WiperRear_<ContainerAllocator>;
  _rear_wiper_cmd_type rear_wiper_cmd;
  using _ignition_cmd_type =
    raptor_dbw_msgs::msg::Ignition_<ContainerAllocator>;
  _ignition_cmd_type ignition_cmd;
  using _door_request_left_rear_type =
    raptor_dbw_msgs::msg::DoorRequest_<ContainerAllocator>;
  _door_request_left_rear_type door_request_left_rear;
  using _door_request_lift_gate_type =
    raptor_dbw_msgs::msg::DoorRequest_<ContainerAllocator>;
  _door_request_lift_gate_type door_request_lift_gate;
  using _block_standard_cruise_buttons_type =
    bool;
  _block_standard_cruise_buttons_type block_standard_cruise_buttons;
  using _block_adaptive_cruise_buttons_type =
    bool;
  _block_adaptive_cruise_buttons_type block_adaptive_cruise_buttons;
  using _block_turn_signal_stalk_type =
    bool;
  _block_turn_signal_stalk_type block_turn_signal_stalk;
  using _horn_cmd_type =
    bool;
  _horn_cmd_type horn_cmd;
  using _low_beam_cmd_type =
    raptor_dbw_msgs::msg::LowBeam_<ContainerAllocator>;
  _low_beam_cmd_type low_beam_cmd;

  // setters for named parameter idiom
  Type & set__cmd(
    const raptor_dbw_msgs::msg::TurnSignal_<ContainerAllocator> & _arg)
  {
    this->cmd = _arg;
    return *this;
  }
  Type & set__door_request_right_rear(
    const raptor_dbw_msgs::msg::DoorRequest_<ContainerAllocator> & _arg)
  {
    this->door_request_right_rear = _arg;
    return *this;
  }
  Type & set__rolling_counter(
    const uint8_t & _arg)
  {
    this->rolling_counter = _arg;
    return *this;
  }
  Type & set__high_beam_cmd(
    const raptor_dbw_msgs::msg::HighBeam_<ContainerAllocator> & _arg)
  {
    this->high_beam_cmd = _arg;
    return *this;
  }
  Type & set__front_wiper_cmd(
    const raptor_dbw_msgs::msg::WiperFront_<ContainerAllocator> & _arg)
  {
    this->front_wiper_cmd = _arg;
    return *this;
  }
  Type & set__rear_wiper_cmd(
    const raptor_dbw_msgs::msg::WiperRear_<ContainerAllocator> & _arg)
  {
    this->rear_wiper_cmd = _arg;
    return *this;
  }
  Type & set__ignition_cmd(
    const raptor_dbw_msgs::msg::Ignition_<ContainerAllocator> & _arg)
  {
    this->ignition_cmd = _arg;
    return *this;
  }
  Type & set__door_request_left_rear(
    const raptor_dbw_msgs::msg::DoorRequest_<ContainerAllocator> & _arg)
  {
    this->door_request_left_rear = _arg;
    return *this;
  }
  Type & set__door_request_lift_gate(
    const raptor_dbw_msgs::msg::DoorRequest_<ContainerAllocator> & _arg)
  {
    this->door_request_lift_gate = _arg;
    return *this;
  }
  Type & set__block_standard_cruise_buttons(
    const bool & _arg)
  {
    this->block_standard_cruise_buttons = _arg;
    return *this;
  }
  Type & set__block_adaptive_cruise_buttons(
    const bool & _arg)
  {
    this->block_adaptive_cruise_buttons = _arg;
    return *this;
  }
  Type & set__block_turn_signal_stalk(
    const bool & _arg)
  {
    this->block_turn_signal_stalk = _arg;
    return *this;
  }
  Type & set__horn_cmd(
    const bool & _arg)
  {
    this->horn_cmd = _arg;
    return *this;
  }
  Type & set__low_beam_cmd(
    const raptor_dbw_msgs::msg::LowBeam_<ContainerAllocator> & _arg)
  {
    this->low_beam_cmd = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    raptor_dbw_msgs::msg::MiscCmd_<ContainerAllocator> *;
  using ConstRawPtr =
    const raptor_dbw_msgs::msg::MiscCmd_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<raptor_dbw_msgs::msg::MiscCmd_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<raptor_dbw_msgs::msg::MiscCmd_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      raptor_dbw_msgs::msg::MiscCmd_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<raptor_dbw_msgs::msg::MiscCmd_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      raptor_dbw_msgs::msg::MiscCmd_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<raptor_dbw_msgs::msg::MiscCmd_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<raptor_dbw_msgs::msg::MiscCmd_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<raptor_dbw_msgs::msg::MiscCmd_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__raptor_dbw_msgs__msg__MiscCmd
    std::shared_ptr<raptor_dbw_msgs::msg::MiscCmd_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__raptor_dbw_msgs__msg__MiscCmd
    std::shared_ptr<raptor_dbw_msgs::msg::MiscCmd_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MiscCmd_ & other) const
  {
    if (this->cmd != other.cmd) {
      return false;
    }
    if (this->door_request_right_rear != other.door_request_right_rear) {
      return false;
    }
    if (this->rolling_counter != other.rolling_counter) {
      return false;
    }
    if (this->high_beam_cmd != other.high_beam_cmd) {
      return false;
    }
    if (this->front_wiper_cmd != other.front_wiper_cmd) {
      return false;
    }
    if (this->rear_wiper_cmd != other.rear_wiper_cmd) {
      return false;
    }
    if (this->ignition_cmd != other.ignition_cmd) {
      return false;
    }
    if (this->door_request_left_rear != other.door_request_left_rear) {
      return false;
    }
    if (this->door_request_lift_gate != other.door_request_lift_gate) {
      return false;
    }
    if (this->block_standard_cruise_buttons != other.block_standard_cruise_buttons) {
      return false;
    }
    if (this->block_adaptive_cruise_buttons != other.block_adaptive_cruise_buttons) {
      return false;
    }
    if (this->block_turn_signal_stalk != other.block_turn_signal_stalk) {
      return false;
    }
    if (this->horn_cmd != other.horn_cmd) {
      return false;
    }
    if (this->low_beam_cmd != other.low_beam_cmd) {
      return false;
    }
    return true;
  }
  bool operator!=(const MiscCmd_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MiscCmd_

// alias to use template instance with default allocator
using MiscCmd =
  raptor_dbw_msgs::msg::MiscCmd_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace raptor_dbw_msgs

#endif  // RAPTOR_DBW_MSGS__MSG__DETAIL__MISC_CMD__STRUCT_HPP_
