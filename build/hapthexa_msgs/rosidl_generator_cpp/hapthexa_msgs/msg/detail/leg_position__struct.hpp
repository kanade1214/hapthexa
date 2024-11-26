// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from hapthexa_msgs:msg/LegPosition.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "hapthexa_msgs/msg/leg_position.hpp"


#ifndef HAPTHEXA_MSGS__MSG__DETAIL__LEG_POSITION__STRUCT_HPP_
#define HAPTHEXA_MSGS__MSG__DETAIL__LEG_POSITION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__hapthexa_msgs__msg__LegPosition __attribute__((deprecated))
#else
# define DEPRECATED__hapthexa_msgs__msg__LegPosition __declspec(deprecated)
#endif

namespace hapthexa_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct LegPosition_
{
  using Type = LegPosition_<ContainerAllocator>;

  explicit LegPosition_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0.0;
      this->y = 0.0;
      this->z = 0.0;
    }
  }

  explicit LegPosition_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0.0;
      this->y = 0.0;
      this->z = 0.0;
    }
  }

  // field types and members
  using _x_type =
    double;
  _x_type x;
  using _y_type =
    double;
  _y_type y;
  using _z_type =
    double;
  _z_type z;

  // setters for named parameter idiom
  Type & set__x(
    const double & _arg)
  {
    this->x = _arg;
    return *this;
  }
  Type & set__y(
    const double & _arg)
  {
    this->y = _arg;
    return *this;
  }
  Type & set__z(
    const double & _arg)
  {
    this->z = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    hapthexa_msgs::msg::LegPosition_<ContainerAllocator> *;
  using ConstRawPtr =
    const hapthexa_msgs::msg::LegPosition_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<hapthexa_msgs::msg::LegPosition_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<hapthexa_msgs::msg::LegPosition_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      hapthexa_msgs::msg::LegPosition_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<hapthexa_msgs::msg::LegPosition_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      hapthexa_msgs::msg::LegPosition_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<hapthexa_msgs::msg::LegPosition_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<hapthexa_msgs::msg::LegPosition_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<hapthexa_msgs::msg::LegPosition_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__hapthexa_msgs__msg__LegPosition
    std::shared_ptr<hapthexa_msgs::msg::LegPosition_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__hapthexa_msgs__msg__LegPosition
    std::shared_ptr<hapthexa_msgs::msg::LegPosition_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LegPosition_ & other) const
  {
    if (this->x != other.x) {
      return false;
    }
    if (this->y != other.y) {
      return false;
    }
    if (this->z != other.z) {
      return false;
    }
    return true;
  }
  bool operator!=(const LegPosition_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LegPosition_

// alias to use template instance with default allocator
using LegPosition =
  hapthexa_msgs::msg::LegPosition_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace hapthexa_msgs

#endif  // HAPTHEXA_MSGS__MSG__DETAIL__LEG_POSITION__STRUCT_HPP_
