// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from hapthexa_msgs:msg/Empty.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "hapthexa_msgs/msg/empty.hpp"


#ifndef HAPTHEXA_MSGS__MSG__DETAIL__EMPTY__BUILDER_HPP_
#define HAPTHEXA_MSGS__MSG__DETAIL__EMPTY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "hapthexa_msgs/msg/detail/empty__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace hapthexa_msgs
{

namespace msg
{


}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::hapthexa_msgs::msg::Empty>()
{
  return ::hapthexa_msgs::msg::Empty(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace hapthexa_msgs

#endif  // HAPTHEXA_MSGS__MSG__DETAIL__EMPTY__BUILDER_HPP_
