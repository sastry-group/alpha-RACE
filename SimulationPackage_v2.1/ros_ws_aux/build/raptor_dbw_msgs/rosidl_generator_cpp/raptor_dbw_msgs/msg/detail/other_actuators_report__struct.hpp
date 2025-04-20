// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from raptor_dbw_msgs:msg/OtherActuatorsReport.idl
// generated code does not contain a copyright notice

#ifndef RAPTOR_DBW_MSGS__MSG__DETAIL__OTHER_ACTUATORS_REPORT__STRUCT_HPP_
#define RAPTOR_DBW_MSGS__MSG__DETAIL__OTHER_ACTUATORS_REPORT__STRUCT_HPP_

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
// Member 'turn_signal_state'
#include "raptor_dbw_msgs/msg/detail/turn_signal__struct.hpp"
// Member 'right_rear_door_state'
// Member 'left_rear_door_state'
// Member 'liftgate_door_state'
#include "raptor_dbw_msgs/msg/detail/door_state__struct.hpp"
// Member 'high_beam_state'
#include "raptor_dbw_msgs/msg/detail/high_beam_state__struct.hpp"
// Member 'front_wiper_state'
#include "raptor_dbw_msgs/msg/detail/wiper_front__struct.hpp"
// Member 'rear_wiper_state'
#include "raptor_dbw_msgs/msg/detail/wiper_rear__struct.hpp"
// Member 'ignition_state'
#include "raptor_dbw_msgs/msg/detail/ignition__struct.hpp"
// Member 'horn_state'
#include "raptor_dbw_msgs/msg/detail/horn_state__struct.hpp"
// Member 'low_beam_state'
#include "raptor_dbw_msgs/msg/detail/low_beam__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__raptor_dbw_msgs__msg__OtherActuatorsReport __attribute__((deprecated))
#else
# define DEPRECATED__raptor_dbw_msgs__msg__OtherActuatorsReport __declspec(deprecated)
#endif

namespace raptor_dbw_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct OtherActuatorsReport_
{
  using Type = OtherActuatorsReport_<ContainerAllocator>;

  explicit OtherActuatorsReport_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    turn_signal_state(_init),
    right_rear_door_state(_init),
    high_beam_state(_init),
    front_wiper_state(_init),
    rear_wiper_state(_init),
    ignition_state(_init),
    left_rear_door_state(_init),
    liftgate_door_state(_init),
    horn_state(_init),
    low_beam_state(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->rolling_counter = 0;
    }
  }

  explicit OtherActuatorsReport_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    turn_signal_state(_alloc, _init),
    right_rear_door_state(_alloc, _init),
    high_beam_state(_alloc, _init),
    front_wiper_state(_alloc, _init),
    rear_wiper_state(_alloc, _init),
    ignition_state(_alloc, _init),
    left_rear_door_state(_alloc, _init),
    liftgate_door_state(_alloc, _init),
    horn_state(_alloc, _init),
    low_beam_state(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->rolling_counter = 0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _turn_signal_state_type =
    raptor_dbw_msgs::msg::TurnSignal_<ContainerAllocator>;
  _turn_signal_state_type turn_signal_state;
  using _right_rear_door_state_type =
    raptor_dbw_msgs::msg::DoorState_<ContainerAllocator>;
  _right_rear_door_state_type right_rear_door_state;
  using _high_beam_state_type =
    raptor_dbw_msgs::msg::HighBeamState_<ContainerAllocator>;
  _high_beam_state_type high_beam_state;
  using _front_wiper_state_type =
    raptor_dbw_msgs::msg::WiperFront_<ContainerAllocator>;
  _front_wiper_state_type front_wiper_state;
  using _rear_wiper_state_type =
    raptor_dbw_msgs::msg::WiperRear_<ContainerAllocator>;
  _rear_wiper_state_type rear_wiper_state;
  using _ignition_state_type =
    raptor_dbw_msgs::msg::Ignition_<ContainerAllocator>;
  _ignition_state_type ignition_state;
  using _left_rear_door_state_type =
    raptor_dbw_msgs::msg::DoorState_<ContainerAllocator>;
  _left_rear_door_state_type left_rear_door_state;
  using _liftgate_door_state_type =
    raptor_dbw_msgs::msg::DoorState_<ContainerAllocator>;
  _liftgate_door_state_type liftgate_door_state;
  using _horn_state_type =
    raptor_dbw_msgs::msg::HornState_<ContainerAllocator>;
  _horn_state_type horn_state;
  using _low_beam_state_type =
    raptor_dbw_msgs::msg::LowBeam_<ContainerAllocator>;
  _low_beam_state_type low_beam_state;
  using _rolling_counter_type =
    uint8_t;
  _rolling_counter_type rolling_counter;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__turn_signal_state(
    const raptor_dbw_msgs::msg::TurnSignal_<ContainerAllocator> & _arg)
  {
    this->turn_signal_state = _arg;
    return *this;
  }
  Type & set__right_rear_door_state(
    const raptor_dbw_msgs::msg::DoorState_<ContainerAllocator> & _arg)
  {
    this->right_rear_door_state = _arg;
    return *this;
  }
  Type & set__high_beam_state(
    const raptor_dbw_msgs::msg::HighBeamState_<ContainerAllocator> & _arg)
  {
    this->high_beam_state = _arg;
    return *this;
  }
  Type & set__front_wiper_state(
    const raptor_dbw_msgs::msg::WiperFront_<ContainerAllocator> & _arg)
  {
    this->front_wiper_state = _arg;
    return *this;
  }
  Type & set__rear_wiper_state(
    const raptor_dbw_msgs::msg::WiperRear_<ContainerAllocator> & _arg)
  {
    this->rear_wiper_state = _arg;
    return *this;
  }
  Type & set__ignition_state(
    const raptor_dbw_msgs::msg::Ignition_<ContainerAllocator> & _arg)
  {
    this->ignition_state = _arg;
    return *this;
  }
  Type & set__left_rear_door_state(
    const raptor_dbw_msgs::msg::DoorState_<ContainerAllocator> & _arg)
  {
    this->left_rear_door_state = _arg;
    return *this;
  }
  Type & set__liftgate_door_state(
    const raptor_dbw_msgs::msg::DoorState_<ContainerAllocator> & _arg)
  {
    this->liftgate_door_state = _arg;
    return *this;
  }
  Type & set__horn_state(
    const raptor_dbw_msgs::msg::HornState_<ContainerAllocator> & _arg)
  {
    this->horn_state = _arg;
    return *this;
  }
  Type & set__low_beam_state(
    const raptor_dbw_msgs::msg::LowBeam_<ContainerAllocator> & _arg)
  {
    this->low_beam_state = _arg;
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
    raptor_dbw_msgs::msg::OtherActuatorsReport_<ContainerAllocator> *;
  using ConstRawPtr =
    const raptor_dbw_msgs::msg::OtherActuatorsReport_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<raptor_dbw_msgs::msg::OtherActuatorsReport_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<raptor_dbw_msgs::msg::OtherActuatorsReport_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      raptor_dbw_msgs::msg::OtherActuatorsReport_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<raptor_dbw_msgs::msg::OtherActuatorsReport_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      raptor_dbw_msgs::msg::OtherActuatorsReport_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<raptor_dbw_msgs::msg::OtherActuatorsReport_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<raptor_dbw_msgs::msg::OtherActuatorsReport_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<raptor_dbw_msgs::msg::OtherActuatorsReport_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__raptor_dbw_msgs__msg__OtherActuatorsReport
    std::shared_ptr<raptor_dbw_msgs::msg::OtherActuatorsReport_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__raptor_dbw_msgs__msg__OtherActuatorsReport
    std::shared_ptr<raptor_dbw_msgs::msg::OtherActuatorsReport_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const OtherActuatorsReport_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->turn_signal_state != other.turn_signal_state) {
      return false;
    }
    if (this->right_rear_door_state != other.right_rear_door_state) {
      return false;
    }
    if (this->high_beam_state != other.high_beam_state) {
      return false;
    }
    if (this->front_wiper_state != other.front_wiper_state) {
      return false;
    }
    if (this->rear_wiper_state != other.rear_wiper_state) {
      return false;
    }
    if (this->ignition_state != other.ignition_state) {
      return false;
    }
    if (this->left_rear_door_state != other.left_rear_door_state) {
      return false;
    }
    if (this->liftgate_door_state != other.liftgate_door_state) {
      return false;
    }
    if (this->horn_state != other.horn_state) {
      return false;
    }
    if (this->low_beam_state != other.low_beam_state) {
      return false;
    }
    if (this->rolling_counter != other.rolling_counter) {
      return false;
    }
    return true;
  }
  bool operator!=(const OtherActuatorsReport_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct OtherActuatorsReport_

// alias to use template instance with default allocator
using OtherActuatorsReport =
  raptor_dbw_msgs::msg::OtherActuatorsReport_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace raptor_dbw_msgs

#endif  // RAPTOR_DBW_MSGS__MSG__DETAIL__OTHER_ACTUATORS_REPORT__STRUCT_HPP_
