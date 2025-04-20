// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from raptor_dbw_msgs:msg/DriverInputReport.idl
// generated code does not contain a copyright notice

#ifndef RAPTOR_DBW_MSGS__MSG__DETAIL__DRIVER_INPUT_REPORT__STRUCT_HPP_
#define RAPTOR_DBW_MSGS__MSG__DETAIL__DRIVER_INPUT_REPORT__STRUCT_HPP_

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
// Member 'turn_signal'
#include "raptor_dbw_msgs/msg/detail/turn_signal__struct.hpp"
// Member 'high_beam_headlights'
#include "raptor_dbw_msgs/msg/detail/high_beam__struct.hpp"
// Member 'wiper'
#include "raptor_dbw_msgs/msg/detail/wiper_front__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__raptor_dbw_msgs__msg__DriverInputReport __attribute__((deprecated))
#else
# define DEPRECATED__raptor_dbw_msgs__msg__DriverInputReport __declspec(deprecated)
#endif

namespace raptor_dbw_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct DriverInputReport_
{
  using Type = DriverInputReport_<ContainerAllocator>;

  explicit DriverInputReport_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    turn_signal(_init),
    high_beam_headlights(_init),
    wiper(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->cruise_resume_button = false;
      this->cruise_cancel_button = false;
      this->cruise_accel_button = false;
      this->cruise_decel_button = false;
      this->cruise_on_off_button = false;
      this->adaptive_cruise_on_off_button = false;
      this->adaptive_cruise_increase_distance_button = false;
      this->adaptive_cruise_decrease_distance_button = false;
      this->driver_door_ajar = false;
      this->passenger_door_ajar = false;
      this->rear_left_door_ajar = false;
      this->rear_right_door_ajar = false;
      this->liftgate_ajar = false;
      this->any_seatbelt_unbuckled = false;
      this->airbag_deployed = false;
      this->door_or_hood_ajar = false;
    }
  }

  explicit DriverInputReport_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    turn_signal(_alloc, _init),
    high_beam_headlights(_alloc, _init),
    wiper(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->cruise_resume_button = false;
      this->cruise_cancel_button = false;
      this->cruise_accel_button = false;
      this->cruise_decel_button = false;
      this->cruise_on_off_button = false;
      this->adaptive_cruise_on_off_button = false;
      this->adaptive_cruise_increase_distance_button = false;
      this->adaptive_cruise_decrease_distance_button = false;
      this->driver_door_ajar = false;
      this->passenger_door_ajar = false;
      this->rear_left_door_ajar = false;
      this->rear_right_door_ajar = false;
      this->liftgate_ajar = false;
      this->any_seatbelt_unbuckled = false;
      this->airbag_deployed = false;
      this->door_or_hood_ajar = false;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _turn_signal_type =
    raptor_dbw_msgs::msg::TurnSignal_<ContainerAllocator>;
  _turn_signal_type turn_signal;
  using _high_beam_headlights_type =
    raptor_dbw_msgs::msg::HighBeam_<ContainerAllocator>;
  _high_beam_headlights_type high_beam_headlights;
  using _wiper_type =
    raptor_dbw_msgs::msg::WiperFront_<ContainerAllocator>;
  _wiper_type wiper;
  using _cruise_resume_button_type =
    bool;
  _cruise_resume_button_type cruise_resume_button;
  using _cruise_cancel_button_type =
    bool;
  _cruise_cancel_button_type cruise_cancel_button;
  using _cruise_accel_button_type =
    bool;
  _cruise_accel_button_type cruise_accel_button;
  using _cruise_decel_button_type =
    bool;
  _cruise_decel_button_type cruise_decel_button;
  using _cruise_on_off_button_type =
    bool;
  _cruise_on_off_button_type cruise_on_off_button;
  using _adaptive_cruise_on_off_button_type =
    bool;
  _adaptive_cruise_on_off_button_type adaptive_cruise_on_off_button;
  using _adaptive_cruise_increase_distance_button_type =
    bool;
  _adaptive_cruise_increase_distance_button_type adaptive_cruise_increase_distance_button;
  using _adaptive_cruise_decrease_distance_button_type =
    bool;
  _adaptive_cruise_decrease_distance_button_type adaptive_cruise_decrease_distance_button;
  using _driver_door_ajar_type =
    bool;
  _driver_door_ajar_type driver_door_ajar;
  using _passenger_door_ajar_type =
    bool;
  _passenger_door_ajar_type passenger_door_ajar;
  using _rear_left_door_ajar_type =
    bool;
  _rear_left_door_ajar_type rear_left_door_ajar;
  using _rear_right_door_ajar_type =
    bool;
  _rear_right_door_ajar_type rear_right_door_ajar;
  using _liftgate_ajar_type =
    bool;
  _liftgate_ajar_type liftgate_ajar;
  using _any_seatbelt_unbuckled_type =
    bool;
  _any_seatbelt_unbuckled_type any_seatbelt_unbuckled;
  using _airbag_deployed_type =
    bool;
  _airbag_deployed_type airbag_deployed;
  using _door_or_hood_ajar_type =
    bool;
  _door_or_hood_ajar_type door_or_hood_ajar;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__turn_signal(
    const raptor_dbw_msgs::msg::TurnSignal_<ContainerAllocator> & _arg)
  {
    this->turn_signal = _arg;
    return *this;
  }
  Type & set__high_beam_headlights(
    const raptor_dbw_msgs::msg::HighBeam_<ContainerAllocator> & _arg)
  {
    this->high_beam_headlights = _arg;
    return *this;
  }
  Type & set__wiper(
    const raptor_dbw_msgs::msg::WiperFront_<ContainerAllocator> & _arg)
  {
    this->wiper = _arg;
    return *this;
  }
  Type & set__cruise_resume_button(
    const bool & _arg)
  {
    this->cruise_resume_button = _arg;
    return *this;
  }
  Type & set__cruise_cancel_button(
    const bool & _arg)
  {
    this->cruise_cancel_button = _arg;
    return *this;
  }
  Type & set__cruise_accel_button(
    const bool & _arg)
  {
    this->cruise_accel_button = _arg;
    return *this;
  }
  Type & set__cruise_decel_button(
    const bool & _arg)
  {
    this->cruise_decel_button = _arg;
    return *this;
  }
  Type & set__cruise_on_off_button(
    const bool & _arg)
  {
    this->cruise_on_off_button = _arg;
    return *this;
  }
  Type & set__adaptive_cruise_on_off_button(
    const bool & _arg)
  {
    this->adaptive_cruise_on_off_button = _arg;
    return *this;
  }
  Type & set__adaptive_cruise_increase_distance_button(
    const bool & _arg)
  {
    this->adaptive_cruise_increase_distance_button = _arg;
    return *this;
  }
  Type & set__adaptive_cruise_decrease_distance_button(
    const bool & _arg)
  {
    this->adaptive_cruise_decrease_distance_button = _arg;
    return *this;
  }
  Type & set__driver_door_ajar(
    const bool & _arg)
  {
    this->driver_door_ajar = _arg;
    return *this;
  }
  Type & set__passenger_door_ajar(
    const bool & _arg)
  {
    this->passenger_door_ajar = _arg;
    return *this;
  }
  Type & set__rear_left_door_ajar(
    const bool & _arg)
  {
    this->rear_left_door_ajar = _arg;
    return *this;
  }
  Type & set__rear_right_door_ajar(
    const bool & _arg)
  {
    this->rear_right_door_ajar = _arg;
    return *this;
  }
  Type & set__liftgate_ajar(
    const bool & _arg)
  {
    this->liftgate_ajar = _arg;
    return *this;
  }
  Type & set__any_seatbelt_unbuckled(
    const bool & _arg)
  {
    this->any_seatbelt_unbuckled = _arg;
    return *this;
  }
  Type & set__airbag_deployed(
    const bool & _arg)
  {
    this->airbag_deployed = _arg;
    return *this;
  }
  Type & set__door_or_hood_ajar(
    const bool & _arg)
  {
    this->door_or_hood_ajar = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    raptor_dbw_msgs::msg::DriverInputReport_<ContainerAllocator> *;
  using ConstRawPtr =
    const raptor_dbw_msgs::msg::DriverInputReport_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<raptor_dbw_msgs::msg::DriverInputReport_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<raptor_dbw_msgs::msg::DriverInputReport_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      raptor_dbw_msgs::msg::DriverInputReport_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<raptor_dbw_msgs::msg::DriverInputReport_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      raptor_dbw_msgs::msg::DriverInputReport_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<raptor_dbw_msgs::msg::DriverInputReport_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<raptor_dbw_msgs::msg::DriverInputReport_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<raptor_dbw_msgs::msg::DriverInputReport_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__raptor_dbw_msgs__msg__DriverInputReport
    std::shared_ptr<raptor_dbw_msgs::msg::DriverInputReport_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__raptor_dbw_msgs__msg__DriverInputReport
    std::shared_ptr<raptor_dbw_msgs::msg::DriverInputReport_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DriverInputReport_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->turn_signal != other.turn_signal) {
      return false;
    }
    if (this->high_beam_headlights != other.high_beam_headlights) {
      return false;
    }
    if (this->wiper != other.wiper) {
      return false;
    }
    if (this->cruise_resume_button != other.cruise_resume_button) {
      return false;
    }
    if (this->cruise_cancel_button != other.cruise_cancel_button) {
      return false;
    }
    if (this->cruise_accel_button != other.cruise_accel_button) {
      return false;
    }
    if (this->cruise_decel_button != other.cruise_decel_button) {
      return false;
    }
    if (this->cruise_on_off_button != other.cruise_on_off_button) {
      return false;
    }
    if (this->adaptive_cruise_on_off_button != other.adaptive_cruise_on_off_button) {
      return false;
    }
    if (this->adaptive_cruise_increase_distance_button != other.adaptive_cruise_increase_distance_button) {
      return false;
    }
    if (this->adaptive_cruise_decrease_distance_button != other.adaptive_cruise_decrease_distance_button) {
      return false;
    }
    if (this->driver_door_ajar != other.driver_door_ajar) {
      return false;
    }
    if (this->passenger_door_ajar != other.passenger_door_ajar) {
      return false;
    }
    if (this->rear_left_door_ajar != other.rear_left_door_ajar) {
      return false;
    }
    if (this->rear_right_door_ajar != other.rear_right_door_ajar) {
      return false;
    }
    if (this->liftgate_ajar != other.liftgate_ajar) {
      return false;
    }
    if (this->any_seatbelt_unbuckled != other.any_seatbelt_unbuckled) {
      return false;
    }
    if (this->airbag_deployed != other.airbag_deployed) {
      return false;
    }
    if (this->door_or_hood_ajar != other.door_or_hood_ajar) {
      return false;
    }
    return true;
  }
  bool operator!=(const DriverInputReport_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DriverInputReport_

// alias to use template instance with default allocator
using DriverInputReport =
  raptor_dbw_msgs::msg::DriverInputReport_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace raptor_dbw_msgs

#endif  // RAPTOR_DBW_MSGS__MSG__DETAIL__DRIVER_INPUT_REPORT__STRUCT_HPP_
