// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from npc_controller_msgs:msg/NPCDebug.idl
// generated code does not contain a copyright notice

#ifndef NPC_CONTROLLER_MSGS__MSG__DETAIL__NPC_DEBUG__STRUCT_HPP_
#define NPC_CONTROLLER_MSGS__MSG__DETAIL__NPC_DEBUG__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__npc_controller_msgs__msg__NPCDebug __attribute__((deprecated))
#else
# define DEPRECATED__npc_controller_msgs__msg__NPCDebug __declspec(deprecated)
#endif

namespace npc_controller_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct NPCDebug_
{
  using Type = NPCDebug_<ContainerAllocator>;

  explicit NPCDebug_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->desired_acceleration = 0.0;
      this->desired_velocity = 0.0;
      this->current_acceleration = 0.0;
      this->current_velocity = 0.0;
      this->error_acceleration = 0.0;
      this->error_velocity = 0.0;
      this->output_throttle = 0.0;
      this->output_brake = 0.0;
      this->vel_p = 0.0;
      this->vel_i = 0.0;
      this->vel_d = 0.0;
      this->thr_p = 0.0;
      this->thr_i = 0.0;
      this->thr_d = 0.0;
      this->brk_p = 0.0;
      this->brk_i = 0.0;
      this->brk_d = 0.0;
      this->throttle_deadband = 0.0;
      this->brake_deadband = 0.0;
      this->max_throttle = 0.0;
      this->ct_state = 0;
      this->vehicle_flag = 0;
      this->track_flag = 0;
      this->lap_state = 0;
      this->track_loc = 0;
      this->center_s = 0.0;
      this->pit_s = 0.0;
      this->sys_state = 0;
    }
  }

  explicit NPCDebug_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->desired_acceleration = 0.0;
      this->desired_velocity = 0.0;
      this->current_acceleration = 0.0;
      this->current_velocity = 0.0;
      this->error_acceleration = 0.0;
      this->error_velocity = 0.0;
      this->output_throttle = 0.0;
      this->output_brake = 0.0;
      this->vel_p = 0.0;
      this->vel_i = 0.0;
      this->vel_d = 0.0;
      this->thr_p = 0.0;
      this->thr_i = 0.0;
      this->thr_d = 0.0;
      this->brk_p = 0.0;
      this->brk_i = 0.0;
      this->brk_d = 0.0;
      this->throttle_deadband = 0.0;
      this->brake_deadband = 0.0;
      this->max_throttle = 0.0;
      this->ct_state = 0;
      this->vehicle_flag = 0;
      this->track_flag = 0;
      this->lap_state = 0;
      this->track_loc = 0;
      this->center_s = 0.0;
      this->pit_s = 0.0;
      this->sys_state = 0;
    }
  }

  // field types and members
  using _desired_acceleration_type =
    double;
  _desired_acceleration_type desired_acceleration;
  using _desired_velocity_type =
    double;
  _desired_velocity_type desired_velocity;
  using _current_acceleration_type =
    double;
  _current_acceleration_type current_acceleration;
  using _current_velocity_type =
    double;
  _current_velocity_type current_velocity;
  using _error_acceleration_type =
    double;
  _error_acceleration_type error_acceleration;
  using _error_velocity_type =
    double;
  _error_velocity_type error_velocity;
  using _output_throttle_type =
    double;
  _output_throttle_type output_throttle;
  using _output_brake_type =
    double;
  _output_brake_type output_brake;
  using _vel_p_type =
    double;
  _vel_p_type vel_p;
  using _vel_i_type =
    double;
  _vel_i_type vel_i;
  using _vel_d_type =
    double;
  _vel_d_type vel_d;
  using _thr_p_type =
    double;
  _thr_p_type thr_p;
  using _thr_i_type =
    double;
  _thr_i_type thr_i;
  using _thr_d_type =
    double;
  _thr_d_type thr_d;
  using _brk_p_type =
    double;
  _brk_p_type brk_p;
  using _brk_i_type =
    double;
  _brk_i_type brk_i;
  using _brk_d_type =
    double;
  _brk_d_type brk_d;
  using _throttle_deadband_type =
    double;
  _throttle_deadband_type throttle_deadband;
  using _brake_deadband_type =
    double;
  _brake_deadband_type brake_deadband;
  using _max_throttle_type =
    double;
  _max_throttle_type max_throttle;
  using _ct_state_type =
    uint8_t;
  _ct_state_type ct_state;
  using _vehicle_flag_type =
    uint8_t;
  _vehicle_flag_type vehicle_flag;
  using _track_flag_type =
    uint8_t;
  _track_flag_type track_flag;
  using _lap_state_type =
    uint8_t;
  _lap_state_type lap_state;
  using _track_loc_type =
    uint8_t;
  _track_loc_type track_loc;
  using _center_s_type =
    double;
  _center_s_type center_s;
  using _pit_s_type =
    double;
  _pit_s_type pit_s;
  using _sys_state_type =
    uint8_t;
  _sys_state_type sys_state;

  // setters for named parameter idiom
  Type & set__desired_acceleration(
    const double & _arg)
  {
    this->desired_acceleration = _arg;
    return *this;
  }
  Type & set__desired_velocity(
    const double & _arg)
  {
    this->desired_velocity = _arg;
    return *this;
  }
  Type & set__current_acceleration(
    const double & _arg)
  {
    this->current_acceleration = _arg;
    return *this;
  }
  Type & set__current_velocity(
    const double & _arg)
  {
    this->current_velocity = _arg;
    return *this;
  }
  Type & set__error_acceleration(
    const double & _arg)
  {
    this->error_acceleration = _arg;
    return *this;
  }
  Type & set__error_velocity(
    const double & _arg)
  {
    this->error_velocity = _arg;
    return *this;
  }
  Type & set__output_throttle(
    const double & _arg)
  {
    this->output_throttle = _arg;
    return *this;
  }
  Type & set__output_brake(
    const double & _arg)
  {
    this->output_brake = _arg;
    return *this;
  }
  Type & set__vel_p(
    const double & _arg)
  {
    this->vel_p = _arg;
    return *this;
  }
  Type & set__vel_i(
    const double & _arg)
  {
    this->vel_i = _arg;
    return *this;
  }
  Type & set__vel_d(
    const double & _arg)
  {
    this->vel_d = _arg;
    return *this;
  }
  Type & set__thr_p(
    const double & _arg)
  {
    this->thr_p = _arg;
    return *this;
  }
  Type & set__thr_i(
    const double & _arg)
  {
    this->thr_i = _arg;
    return *this;
  }
  Type & set__thr_d(
    const double & _arg)
  {
    this->thr_d = _arg;
    return *this;
  }
  Type & set__brk_p(
    const double & _arg)
  {
    this->brk_p = _arg;
    return *this;
  }
  Type & set__brk_i(
    const double & _arg)
  {
    this->brk_i = _arg;
    return *this;
  }
  Type & set__brk_d(
    const double & _arg)
  {
    this->brk_d = _arg;
    return *this;
  }
  Type & set__throttle_deadband(
    const double & _arg)
  {
    this->throttle_deadband = _arg;
    return *this;
  }
  Type & set__brake_deadband(
    const double & _arg)
  {
    this->brake_deadband = _arg;
    return *this;
  }
  Type & set__max_throttle(
    const double & _arg)
  {
    this->max_throttle = _arg;
    return *this;
  }
  Type & set__ct_state(
    const uint8_t & _arg)
  {
    this->ct_state = _arg;
    return *this;
  }
  Type & set__vehicle_flag(
    const uint8_t & _arg)
  {
    this->vehicle_flag = _arg;
    return *this;
  }
  Type & set__track_flag(
    const uint8_t & _arg)
  {
    this->track_flag = _arg;
    return *this;
  }
  Type & set__lap_state(
    const uint8_t & _arg)
  {
    this->lap_state = _arg;
    return *this;
  }
  Type & set__track_loc(
    const uint8_t & _arg)
  {
    this->track_loc = _arg;
    return *this;
  }
  Type & set__center_s(
    const double & _arg)
  {
    this->center_s = _arg;
    return *this;
  }
  Type & set__pit_s(
    const double & _arg)
  {
    this->pit_s = _arg;
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
    npc_controller_msgs::msg::NPCDebug_<ContainerAllocator> *;
  using ConstRawPtr =
    const npc_controller_msgs::msg::NPCDebug_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<npc_controller_msgs::msg::NPCDebug_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<npc_controller_msgs::msg::NPCDebug_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      npc_controller_msgs::msg::NPCDebug_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<npc_controller_msgs::msg::NPCDebug_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      npc_controller_msgs::msg::NPCDebug_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<npc_controller_msgs::msg::NPCDebug_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<npc_controller_msgs::msg::NPCDebug_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<npc_controller_msgs::msg::NPCDebug_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__npc_controller_msgs__msg__NPCDebug
    std::shared_ptr<npc_controller_msgs::msg::NPCDebug_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__npc_controller_msgs__msg__NPCDebug
    std::shared_ptr<npc_controller_msgs::msg::NPCDebug_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const NPCDebug_ & other) const
  {
    if (this->desired_acceleration != other.desired_acceleration) {
      return false;
    }
    if (this->desired_velocity != other.desired_velocity) {
      return false;
    }
    if (this->current_acceleration != other.current_acceleration) {
      return false;
    }
    if (this->current_velocity != other.current_velocity) {
      return false;
    }
    if (this->error_acceleration != other.error_acceleration) {
      return false;
    }
    if (this->error_velocity != other.error_velocity) {
      return false;
    }
    if (this->output_throttle != other.output_throttle) {
      return false;
    }
    if (this->output_brake != other.output_brake) {
      return false;
    }
    if (this->vel_p != other.vel_p) {
      return false;
    }
    if (this->vel_i != other.vel_i) {
      return false;
    }
    if (this->vel_d != other.vel_d) {
      return false;
    }
    if (this->thr_p != other.thr_p) {
      return false;
    }
    if (this->thr_i != other.thr_i) {
      return false;
    }
    if (this->thr_d != other.thr_d) {
      return false;
    }
    if (this->brk_p != other.brk_p) {
      return false;
    }
    if (this->brk_i != other.brk_i) {
      return false;
    }
    if (this->brk_d != other.brk_d) {
      return false;
    }
    if (this->throttle_deadband != other.throttle_deadband) {
      return false;
    }
    if (this->brake_deadband != other.brake_deadband) {
      return false;
    }
    if (this->max_throttle != other.max_throttle) {
      return false;
    }
    if (this->ct_state != other.ct_state) {
      return false;
    }
    if (this->vehicle_flag != other.vehicle_flag) {
      return false;
    }
    if (this->track_flag != other.track_flag) {
      return false;
    }
    if (this->lap_state != other.lap_state) {
      return false;
    }
    if (this->track_loc != other.track_loc) {
      return false;
    }
    if (this->center_s != other.center_s) {
      return false;
    }
    if (this->pit_s != other.pit_s) {
      return false;
    }
    if (this->sys_state != other.sys_state) {
      return false;
    }
    return true;
  }
  bool operator!=(const NPCDebug_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct NPCDebug_

// alias to use template instance with default allocator
using NPCDebug =
  npc_controller_msgs::msg::NPCDebug_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace npc_controller_msgs

#endif  // NPC_CONTROLLER_MSGS__MSG__DETAIL__NPC_DEBUG__STRUCT_HPP_
