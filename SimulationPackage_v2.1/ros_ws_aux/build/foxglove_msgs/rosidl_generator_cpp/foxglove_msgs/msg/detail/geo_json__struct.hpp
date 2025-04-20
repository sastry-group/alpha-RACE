// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from foxglove_msgs:msg/GeoJSON.idl
// generated code does not contain a copyright notice

#ifndef FOXGLOVE_MSGS__MSG__DETAIL__GEO_JSON__STRUCT_HPP_
#define FOXGLOVE_MSGS__MSG__DETAIL__GEO_JSON__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__foxglove_msgs__msg__GeoJSON __attribute__((deprecated))
#else
# define DEPRECATED__foxglove_msgs__msg__GeoJSON __declspec(deprecated)
#endif

namespace foxglove_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct GeoJSON_
{
  using Type = GeoJSON_<ContainerAllocator>;

  explicit GeoJSON_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->geojson = "";
    }
  }

  explicit GeoJSON_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : geojson(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->geojson = "";
    }
  }

  // field types and members
  using _geojson_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _geojson_type geojson;

  // setters for named parameter idiom
  Type & set__geojson(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->geojson = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    foxglove_msgs::msg::GeoJSON_<ContainerAllocator> *;
  using ConstRawPtr =
    const foxglove_msgs::msg::GeoJSON_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<foxglove_msgs::msg::GeoJSON_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<foxglove_msgs::msg::GeoJSON_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      foxglove_msgs::msg::GeoJSON_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<foxglove_msgs::msg::GeoJSON_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      foxglove_msgs::msg::GeoJSON_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<foxglove_msgs::msg::GeoJSON_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<foxglove_msgs::msg::GeoJSON_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<foxglove_msgs::msg::GeoJSON_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__foxglove_msgs__msg__GeoJSON
    std::shared_ptr<foxglove_msgs::msg::GeoJSON_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__foxglove_msgs__msg__GeoJSON
    std::shared_ptr<foxglove_msgs::msg::GeoJSON_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GeoJSON_ & other) const
  {
    if (this->geojson != other.geojson) {
      return false;
    }
    return true;
  }
  bool operator!=(const GeoJSON_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GeoJSON_

// alias to use template instance with default allocator
using GeoJSON =
  foxglove_msgs::msg::GeoJSON_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace foxglove_msgs

#endif  // FOXGLOVE_MSGS__MSG__DETAIL__GEO_JSON__STRUCT_HPP_
