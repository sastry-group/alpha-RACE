// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from npc_controller_msgs:msg/RcToCt.idl
// generated code does not contain a copyright notice

#ifndef NPC_CONTROLLER_MSGS__MSG__DETAIL__RC_TO_CT__STRUCT_HPP_
#define NPC_CONTROLLER_MSGS__MSG__DETAIL__RC_TO_CT__STRUCT_HPP_

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
# define DEPRECATED__npc_controller_msgs__msg__RcToCt __attribute__((deprecated))
#else
# define DEPRECATED__npc_controller_msgs__msg__RcToCt __declspec(deprecated)
#endif

namespace npc_controller_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RcToCt_
{
  using Type = RcToCt_<ContainerAllocator>;

  explicit RcToCt_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->track_flag = 0;
      this->veh_flag = 0;
      this->veh_rank = 0;
      this->lap_count = 0;
      this->lap_distance = 0;
      this->target_speed = 0;
      this->rolling_counter = 0;
    }
  }

  explicit RcToCt_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->track_flag = 0;
      this->veh_flag = 0;
      this->veh_rank = 0;
      this->lap_count = 0;
      this->lap_distance = 0;
      this->target_speed = 0;
      this->rolling_counter = 0;
    }
  }

  // field types and members
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;
  using _track_flag_type =
    uint8_t;
  _track_flag_type track_flag;
  using _veh_flag_type =
    uint8_t;
  _veh_flag_type veh_flag;
  using _veh_rank_type =
    uint8_t;
  _veh_rank_type veh_rank;
  using _lap_count_type =
    uint8_t;
  _lap_count_type lap_count;
  using _lap_distance_type =
    uint8_t;
  _lap_distance_type lap_distance;
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
  Type & set__lap_count(
    const uint8_t & _arg)
  {
    this->lap_count = _arg;
    return *this;
  }
  Type & set__lap_distance(
    const uint8_t & _arg)
  {
    this->lap_distance = _arg;
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
    npc_controller_msgs::msg::RcToCt_<ContainerAllocator> *;
  using ConstRawPtr =
    const npc_controller_msgs::msg::RcToCt_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<npc_controller_msgs::msg::RcToCt_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<npc_controller_msgs::msg::RcToCt_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      npc_controller_msgs::msg::RcToCt_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<npc_controller_msgs::msg::RcToCt_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      npc_controller_msgs::msg::RcToCt_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<npc_controller_msgs::msg::RcToCt_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<npc_controller_msgs::msg::RcToCt_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<npc_controller_msgs::msg::RcToCt_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__npc_controller_msgs__msg__RcToCt
    std::shared_ptr<npc_controller_msgs::msg::RcToCt_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__npc_controller_msgs__msg__RcToCt
    std::shared_ptr<npc_controller_msgs::msg::RcToCt_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RcToCt_ & other) const
  {
    if (this->stamp != other.stamp) {
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
    if (this->lap_count != other.lap_count) {
      return false;
    }
    if (this->lap_distance != other.lap_distance) {
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
  bool operator!=(const RcToCt_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RcToCt_

// alias to use template instance with default allocator
using RcToCt =
  npc_controller_msgs::msg::RcToCt_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace npc_controller_msgs

#endif  // NPC_CONTROLLER_MSGS__MSG__DETAIL__RC_TO_CT__STRUCT_HPP_
