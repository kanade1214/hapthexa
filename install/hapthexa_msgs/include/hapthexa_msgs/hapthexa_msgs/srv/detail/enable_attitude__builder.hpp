// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from hapthexa_msgs:srv/EnableAttitude.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "hapthexa_msgs/srv/enable_attitude.hpp"


#ifndef HAPTHEXA_MSGS__SRV__DETAIL__ENABLE_ATTITUDE__BUILDER_HPP_
#define HAPTHEXA_MSGS__SRV__DETAIL__ENABLE_ATTITUDE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "hapthexa_msgs/srv/detail/enable_attitude__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace hapthexa_msgs
{

namespace srv
{

namespace builder
{

class Init_EnableAttitude_Request_enable
{
public:
  Init_EnableAttitude_Request_enable()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::hapthexa_msgs::srv::EnableAttitude_Request enable(::hapthexa_msgs::srv::EnableAttitude_Request::_enable_type arg)
  {
    msg_.enable = std::move(arg);
    return std::move(msg_);
  }

private:
  ::hapthexa_msgs::srv::EnableAttitude_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::hapthexa_msgs::srv::EnableAttitude_Request>()
{
  return hapthexa_msgs::srv::builder::Init_EnableAttitude_Request_enable();
}

}  // namespace hapthexa_msgs


namespace hapthexa_msgs
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::hapthexa_msgs::srv::EnableAttitude_Response>()
{
  return ::hapthexa_msgs::srv::EnableAttitude_Response(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace hapthexa_msgs


namespace hapthexa_msgs
{

namespace srv
{

namespace builder
{

class Init_EnableAttitude_Event_response
{
public:
  explicit Init_EnableAttitude_Event_response(::hapthexa_msgs::srv::EnableAttitude_Event & msg)
  : msg_(msg)
  {}
  ::hapthexa_msgs::srv::EnableAttitude_Event response(::hapthexa_msgs::srv::EnableAttitude_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::hapthexa_msgs::srv::EnableAttitude_Event msg_;
};

class Init_EnableAttitude_Event_request
{
public:
  explicit Init_EnableAttitude_Event_request(::hapthexa_msgs::srv::EnableAttitude_Event & msg)
  : msg_(msg)
  {}
  Init_EnableAttitude_Event_response request(::hapthexa_msgs::srv::EnableAttitude_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_EnableAttitude_Event_response(msg_);
  }

private:
  ::hapthexa_msgs::srv::EnableAttitude_Event msg_;
};

class Init_EnableAttitude_Event_info
{
public:
  Init_EnableAttitude_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_EnableAttitude_Event_request info(::hapthexa_msgs::srv::EnableAttitude_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_EnableAttitude_Event_request(msg_);
  }

private:
  ::hapthexa_msgs::srv::EnableAttitude_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::hapthexa_msgs::srv::EnableAttitude_Event>()
{
  return hapthexa_msgs::srv::builder::Init_EnableAttitude_Event_info();
}

}  // namespace hapthexa_msgs

#endif  // HAPTHEXA_MSGS__SRV__DETAIL__ENABLE_ATTITUDE__BUILDER_HPP_
