// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from foxglove_msgs:msg/Markers.idl
// generated code does not contain a copyright notice

#ifndef FOXGLOVE_MSGS__MSG__DETAIL__MARKERS__STRUCT_HPP_
#define FOXGLOVE_MSGS__MSG__DETAIL__MARKERS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'deletions'
#include "foxglove_msgs/msg/detail/marker_deletion__struct.hpp"
// Member 'arrows'
#include "foxglove_msgs/msg/detail/arrow_marker__struct.hpp"
// Member 'cubes'
#include "foxglove_msgs/msg/detail/cube_list_marker__struct.hpp"
// Member 'spheres'
#include "foxglove_msgs/msg/detail/sphere_list_marker__struct.hpp"
// Member 'cones'
#include "foxglove_msgs/msg/detail/cone_list_marker__struct.hpp"
// Member 'lines'
#include "foxglove_msgs/msg/detail/line_marker__struct.hpp"
// Member 'triangles'
#include "foxglove_msgs/msg/detail/triangle_list_marker__struct.hpp"
// Member 'texts'
#include "foxglove_msgs/msg/detail/text_marker__struct.hpp"
// Member 'models'
#include "foxglove_msgs/msg/detail/model_marker__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__foxglove_msgs__msg__Markers __attribute__((deprecated))
#else
# define DEPRECATED__foxglove_msgs__msg__Markers __declspec(deprecated)
#endif

namespace foxglove_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Markers_
{
  using Type = Markers_<ContainerAllocator>;

  explicit Markers_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit Markers_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _deletions_type =
    std::vector<foxglove_msgs::msg::MarkerDeletion_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<foxglove_msgs::msg::MarkerDeletion_<ContainerAllocator>>>;
  _deletions_type deletions;
  using _arrows_type =
    std::vector<foxglove_msgs::msg::ArrowMarker_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<foxglove_msgs::msg::ArrowMarker_<ContainerAllocator>>>;
  _arrows_type arrows;
  using _cubes_type =
    std::vector<foxglove_msgs::msg::CubeListMarker_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<foxglove_msgs::msg::CubeListMarker_<ContainerAllocator>>>;
  _cubes_type cubes;
  using _spheres_type =
    std::vector<foxglove_msgs::msg::SphereListMarker_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<foxglove_msgs::msg::SphereListMarker_<ContainerAllocator>>>;
  _spheres_type spheres;
  using _cones_type =
    std::vector<foxglove_msgs::msg::ConeListMarker_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<foxglove_msgs::msg::ConeListMarker_<ContainerAllocator>>>;
  _cones_type cones;
  using _lines_type =
    std::vector<foxglove_msgs::msg::LineMarker_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<foxglove_msgs::msg::LineMarker_<ContainerAllocator>>>;
  _lines_type lines;
  using _triangles_type =
    std::vector<foxglove_msgs::msg::TriangleListMarker_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<foxglove_msgs::msg::TriangleListMarker_<ContainerAllocator>>>;
  _triangles_type triangles;
  using _texts_type =
    std::vector<foxglove_msgs::msg::TextMarker_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<foxglove_msgs::msg::TextMarker_<ContainerAllocator>>>;
  _texts_type texts;
  using _models_type =
    std::vector<foxglove_msgs::msg::ModelMarker_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<foxglove_msgs::msg::ModelMarker_<ContainerAllocator>>>;
  _models_type models;

  // setters for named parameter idiom
  Type & set__deletions(
    const std::vector<foxglove_msgs::msg::MarkerDeletion_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<foxglove_msgs::msg::MarkerDeletion_<ContainerAllocator>>> & _arg)
  {
    this->deletions = _arg;
    return *this;
  }
  Type & set__arrows(
    const std::vector<foxglove_msgs::msg::ArrowMarker_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<foxglove_msgs::msg::ArrowMarker_<ContainerAllocator>>> & _arg)
  {
    this->arrows = _arg;
    return *this;
  }
  Type & set__cubes(
    const std::vector<foxglove_msgs::msg::CubeListMarker_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<foxglove_msgs::msg::CubeListMarker_<ContainerAllocator>>> & _arg)
  {
    this->cubes = _arg;
    return *this;
  }
  Type & set__spheres(
    const std::vector<foxglove_msgs::msg::SphereListMarker_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<foxglove_msgs::msg::SphereListMarker_<ContainerAllocator>>> & _arg)
  {
    this->spheres = _arg;
    return *this;
  }
  Type & set__cones(
    const std::vector<foxglove_msgs::msg::ConeListMarker_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<foxglove_msgs::msg::ConeListMarker_<ContainerAllocator>>> & _arg)
  {
    this->cones = _arg;
    return *this;
  }
  Type & set__lines(
    const std::vector<foxglove_msgs::msg::LineMarker_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<foxglove_msgs::msg::LineMarker_<ContainerAllocator>>> & _arg)
  {
    this->lines = _arg;
    return *this;
  }
  Type & set__triangles(
    const std::vector<foxglove_msgs::msg::TriangleListMarker_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<foxglove_msgs::msg::TriangleListMarker_<ContainerAllocator>>> & _arg)
  {
    this->triangles = _arg;
    return *this;
  }
  Type & set__texts(
    const std::vector<foxglove_msgs::msg::TextMarker_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<foxglove_msgs::msg::TextMarker_<ContainerAllocator>>> & _arg)
  {
    this->texts = _arg;
    return *this;
  }
  Type & set__models(
    const std::vector<foxglove_msgs::msg::ModelMarker_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<foxglove_msgs::msg::ModelMarker_<ContainerAllocator>>> & _arg)
  {
    this->models = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    foxglove_msgs::msg::Markers_<ContainerAllocator> *;
  using ConstRawPtr =
    const foxglove_msgs::msg::Markers_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<foxglove_msgs::msg::Markers_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<foxglove_msgs::msg::Markers_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      foxglove_msgs::msg::Markers_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<foxglove_msgs::msg::Markers_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      foxglove_msgs::msg::Markers_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<foxglove_msgs::msg::Markers_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<foxglove_msgs::msg::Markers_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<foxglove_msgs::msg::Markers_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__foxglove_msgs__msg__Markers
    std::shared_ptr<foxglove_msgs::msg::Markers_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__foxglove_msgs__msg__Markers
    std::shared_ptr<foxglove_msgs::msg::Markers_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Markers_ & other) const
  {
    if (this->deletions != other.deletions) {
      return false;
    }
    if (this->arrows != other.arrows) {
      return false;
    }
    if (this->cubes != other.cubes) {
      return false;
    }
    if (this->spheres != other.spheres) {
      return false;
    }
    if (this->cones != other.cones) {
      return false;
    }
    if (this->lines != other.lines) {
      return false;
    }
    if (this->triangles != other.triangles) {
      return false;
    }
    if (this->texts != other.texts) {
      return false;
    }
    if (this->models != other.models) {
      return false;
    }
    return true;
  }
  bool operator!=(const Markers_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Markers_

// alias to use template instance with default allocator
using Markers =
  foxglove_msgs::msg::Markers_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace foxglove_msgs

#endif  // FOXGLOVE_MSGS__MSG__DETAIL__MARKERS__STRUCT_HPP_
