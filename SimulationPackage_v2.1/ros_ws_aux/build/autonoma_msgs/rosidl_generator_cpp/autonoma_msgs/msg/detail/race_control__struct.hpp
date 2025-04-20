// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from autonoma_msgs:msg/RaceControl.idl
// generated code does not contain a copyright notice

#ifndef AUTONOMA_MSGS__MSG__DETAIL__RACE_CONTROL__STRUCT_HPP_
#define AUTONOMA_MSGS__MSG__DETAIL__RACE_CONTROL__STRUCT_HPP_

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
# define DEPRECATED__autonoma_msgs__msg__RaceControl __attribute__((deprecated))
#else
# define DEPRECATED__autonoma_msgs__msg__RaceControl __declspec(deprecated)
#endif

namespace autonoma_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RaceControl_
{
  using Type = RaceControl_<ContainerAllocator>;

  explicit RaceControl_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->base_to_car_heartbeat = 0;
      this->track_flag = 0;
      this->veh_flag = 0;
      this->veh_rank = 0;
      this->sys_state = 0;
      this->lap_count = 0;
      this->lap_distance = 0.0f;
      this->round_target_speed = 0;
      this->laps = 0;
      this->lap_time = 0.0f;
      this->time_stamp = 0.0f;
    }
  }

  explicit RaceControl_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->base_to_car_heartbeat = 0;
      this->track_flag = 0;
      this->veh_flag = 0;
      this->veh_rank = 0;
      this->sys_state = 0;
      this->lap_count = 0;
      this->lap_distance = 0.0f;
      this->round_target_speed = 0;
      this->laps = 0;
      this->lap_time = 0.0f;
      this->time_stamp = 0.0f;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _base_to_car_heartbeat_type =
    uint8_t;
  _base_to_car_heartbeat_type base_to_car_heartbeat;
  using _track_flag_type =
    uint8_t;
  _track_flag_type track_flag;
  using _veh_flag_type =
    uint8_t;
  _veh_flag_type veh_flag;
  using _veh_rank_type =
    uint8_t;
  _veh_rank_type veh_rank;
  using _sys_state_type =
    uint8_t;
  _sys_state_type sys_state;
  using _lap_count_type =
    uint8_t;
  _lap_count_type lap_count;
  using _lap_distance_type =
    float;
  _lap_distance_type lap_distance;
  using _round_target_speed_type =
    uint8_t;
  _round_target_speed_type round_target_speed;
  using _laps_type =
    uint8_t;
  _laps_type laps;
  using _lap_time_type =
    float;
  _lap_time_type lap_time;
  using _time_stamp_type =
    float;
  _time_stamp_type time_stamp;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__base_to_car_heartbeat(
    const uint8_t & _arg)
  {
    this->base_to_car_heartbeat = _arg;
    return *this;
  }
  Type & set__track_flag(
    const uint8_t & _arg)
  {
    this->track_flag = _arg;
    return *this;
  }
  Type & set__veh_flag(
    const uint8_t & _arg)
  {
    this->veh_flag = _arg;
    return *this;
  }
  Type & set__veh_rank(
    const uint8_t & _arg)
  {
    this->veh_rank = _arg;
    return *this;
  }
  Type & set__sys_state(
    const uint8_t & _arg)
  {
    this->sys_state = _arg;
    return *this;
  }
  Type & set__lap_count(
    const uint8_t & _arg)
  {
    this->lap_count = _arg;
    return *this;
  }
  Type & set__lap_distance(
    const float & _arg)
  {
    this->lap_distance = _arg;
    return *this;
  }
  Type & set__round_target_speed(
    const uint8_t & _arg)
  {
    this->round_target_speed = _arg;
    return *this;
  }
  Type & set__laps(
    const uint8_t & _arg)
  {
    this->laps = _arg;
    return *this;
  }
  Type & set__lap_time(
    const float & _arg)
  {
    this->lap_time = _arg;
    return *this;
  }
  Type & set__time_stamp(
    const float & _arg)
  {
    this->time_stamp = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    autonoma_msgs::msg::RaceControl_<ContainerAllocator> *;
  using ConstRawPtr =
    const autonoma_msgs::msg::RaceControl_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<autonoma_msgs::msg::RaceControl_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<autonoma_msgs::msg::RaceControl_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      autonoma_msgs::msg::RaceControl_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<autonoma_msgs::msg::RaceControl_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      autonoma_msgs::msg::RaceControl_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<autonoma_msgs::msg::RaceControl_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<autonoma_msgs::msg::RaceControl_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<autonoma_msgs::msg::RaceControl_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__autonoma_msgs__msg__RaceControl
    std::shared_ptr<autonoma_msgs::msg::RaceControl_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__autonoma_msgs__msg__RaceControl
    std::shared_ptr<autonoma_msgs::msg::RaceControl_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RaceControl_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->base_to_car_heartbeat != other.base_to_car_heartbeat) {
      return false;
    }
    if (this->track_flag != other.track_flag) {
      return false;
    }
    if (this->veh_flag != other.veh_flag) {
      return false;
    }
    if (this->veh_rank != other.veh_rank) {
      return false;
    }
    if (this->sys_state != other.sys_state) {
      return false;
    }
    if (this->lap_count != other.lap_count) {
      return false;
    }
    if (this->lap_distance != other.lap_distance) {
      return false;
    }
    if (this->round_target_speed != other.round_target_speed) {
      return false;
    }
    if (this->laps != other.laps) {
      return false;
    }
    if (this->lap_time != other.lap_time) {
      return false;
    }
    if (this->time_stamp != other.time_stamp) {
      return false;
    }
    return true;
  }
  bool operator!=(const RaceControl_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RaceControl_

// alias to use template instance with default allocator
using RaceControl =
  autonoma_msgs::msg::RaceControl_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace autonoma_msgs

#endif  // AUTONOMA_MSGS__MSG__DETAIL__RACE_CONTROL__STRUCT_HPP_
