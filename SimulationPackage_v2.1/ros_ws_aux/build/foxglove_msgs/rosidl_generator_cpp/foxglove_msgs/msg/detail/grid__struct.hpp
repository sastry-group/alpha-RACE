// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from foxglove_msgs:msg/Grid.idl
// generated code does not contain a copyright notice

#ifndef FOXGLOVE_MSGS__MSG__DETAIL__GRID__STRUCT_HPP_
#define FOXGLOVE_MSGS__MSG__DETAIL__GRID__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'timestamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__struct.hpp"
// Member 'cell_size'
#include "foxglove_msgs/msg/detail/vector2__struct.hpp"
// Member 'fields'
#include "foxglove_msgs/msg/detail/packed_element_field__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__foxglove_msgs__msg__Grid __attribute__((deprecated))
#else
# define DEPRECATED__foxglove_msgs__msg__Grid __declspec(deprecated)
#endif

namespace foxglove_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Grid_
{
  using Type = Grid_<ContainerAllocator>;

  explicit Grid_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : timestamp(_init),
    pose(_init),
    cell_size(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->frame_id = "";
      this->column_count = 0ul;
      this->row_stride = 0ul;
      this->cell_stride = 0ul;
    }
  }

  explicit Grid_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : timestamp(_alloc, _init),
    frame_id(_alloc),
    pose(_alloc, _init),
    cell_size(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->frame_id = "";
      this->column_count = 0ul;
      this->row_stride = 0ul;
      this->cell_stride = 0ul;
    }
  }

  // field types and members
  using _timestamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _timestamp_type timestamp;
  using _frame_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _frame_id_type frame_id;
  using _pose_type =
    geometry_msgs::msg::Pose_<ContainerAllocator>;
  _pose_type pose;
  using _column_count_type =
    uint32_t;
  _column_count_type column_count;
  using _cell_size_type =
    foxglove_msgs::msg::Vector2_<ContainerAllocator>;
  _cell_size_type cell_size;
  using _row_stride_type =
    uint32_t;
  _row_stride_type row_stride;
  using _cell_stride_type =
    uint32_t;
  _cell_stride_type cell_stride;
  using _fields_type =
    std::vector<foxglove_msgs::msg::PackedElementField_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<foxglove_msgs::msg::PackedElementField_<ContainerAllocator>>>;
  _fields_type fields;
  using _data_type =
    std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>>;
  _data_type data;

  // setters for named parameter idiom
  Type & set__timestamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__frame_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->frame_id = _arg;
    return *this;
  }
  Type & set__pose(
    const geometry_msgs::msg::Pose_<ContainerAllocator> & _arg)
  {
    this->pose = _arg;
    return *this;
  }
  Type & set__column_count(
    const uint32_t & _arg)
  {
    this->column_count = _arg;
    return *this;
  }
  Type & set__cell_size(
    const foxglove_msgs::msg::Vector2_<ContainerAllocator> & _arg)
  {
    this->cell_size = _arg;
    return *this;
  }
  Type & set__row_stride(
    const uint32_t & _arg)
  {
    this->row_stride = _arg;
    return *this;
  }
  Type & set__cell_stride(
    const uint32_t & _arg)
  {
    this->cell_stride = _arg;
    return *this;
  }
  Type & set__fields(
    const std::vector<foxglove_msgs::msg::PackedElementField_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<foxglove_msgs::msg::PackedElementField_<ContainerAllocator>>> & _arg)
  {
    this->fields = _arg;
    return *this;
  }
  Type & set__data(
    const std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>> & _arg)
  {
    this->data = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    foxglove_msgs::msg::Grid_<ContainerAllocator> *;
  using ConstRawPtr =
    const foxglove_msgs::msg::Grid_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<foxglove_msgs::msg::Grid_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<foxglove_msgs::msg::Grid_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      foxglove_msgs::msg::Grid_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<foxglove_msgs::msg::Grid_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      foxglove_msgs::msg::Grid_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<foxglove_msgs::msg::Grid_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<foxglove_msgs::msg::Grid_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<foxglove_msgs::msg::Grid_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__foxglove_msgs__msg__Grid
    std::shared_ptr<foxglove_msgs::msg::Grid_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__foxglove_msgs__msg__Grid
    std::shared_ptr<foxglove_msgs::msg::Grid_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Grid_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->frame_id != other.frame_id) {
      return false;
    }
    if (this->pose != other.pose) {
      return false;
    }
    if (this->column_count != other.column_count) {
      return false;
    }
    if (this->cell_size != other.cell_size) {
      return false;
    }
    if (this->row_stride != other.row_stride) {
      return false;
    }
    if (this->cell_stride != other.cell_stride) {
      return false;
    }
    if (this->fields != other.fields) {
      return false;
    }
    if (this->data != other.data) {
      return false;
    }
    return true;
  }
  bool operator!=(const Grid_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Grid_

// alias to use template instance with default allocator
using Grid =
  foxglove_msgs::msg::Grid_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace foxglove_msgs

#endif  // FOXGLOVE_MSGS__MSG__DETAIL__GRID__STRUCT_HPP_
