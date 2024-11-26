// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from hapthexa_msgs:srv/GetLegArgs.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "hapthexa_msgs/srv/get_leg_args.hpp"


#ifndef HAPTHEXA_MSGS__SRV__DETAIL__GET_LEG_ARGS__BUILDER_HPP_
#define HAPTHEXA_MSGS__SRV__DETAIL__GET_LEG_ARGS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "hapthexa_msgs/srv/detail/get_leg_args__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace hapthexa_msgs
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::hapthexa_msgs::srv::GetLegArgs_Request>()
{
  return ::hapthexa_msgs::srv::GetLegArgs_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace hapthexa_msgs


namespace hapthexa_msgs
{

namespace srv
{

namespace builder
{

class Init_GetLegArgs_Response_tibia_arg
{
public:
  explicit Init_GetLegArgs_Response_tibia_arg(::hapthexa_msgs::srv::GetLegArgs_Response & msg)
  : msg_(msg)
  {}
  ::hapthexa_msgs::srv::GetLegArgs_Response tibia_arg(::hapthexa_msgs::srv::GetLegArgs_Response::_tibia_arg_type arg)
  {
    msg_.tibia_arg = std::move(arg);
    return std::move(msg_);
  }

private:
  ::hapthexa_msgs::srv::GetLegArgs_Response msg_;
};

class Init_GetLegArgs_Response_femur_arg
{
public:
  explicit Init_GetLegArgs_Response_femur_arg(::hapthexa_msgs::srv::GetLegArgs_Response & msg)
  : msg_(msg)
  {}
  Init_GetLegArgs_Response_tibia_arg femur_arg(::hapthexa_msgs::srv::GetLegArgs_Response::_femur_arg_type arg)
  {
    msg_.femur_arg = std::move(arg);
    return Init_GetLegArgs_Response_tibia_arg(msg_);
  }

private:
  ::hapthexa_msgs::srv::GetLegArgs_Response msg_;
};

class Init_GetLegArgs_Response_coxa_arg
{
public:
  Init_GetLegArgs_Response_coxa_arg()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetLegArgs_Response_femur_arg coxa_arg(::hapthexa_msgs::srv::GetLegArgs_Response::_coxa_arg_type arg)
  {
    msg_.coxa_arg = std::move(arg);
    return Init_GetLegArgs_Response_femur_arg(msg_);
  }

private:
  ::hapthexa_msgs::srv::GetLegArgs_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::hapthexa_msgs::srv::GetLegArgs_Response>()
{
  return hapthexa_msgs::srv::builder::Init_GetLegArgs_Response_coxa_arg();
}

}  // namespace hapthexa_msgs


namespace hapthexa_msgs
{

namespace srv
{

namespace builder
{

class Init_GetLegArgs_Event_response
{
public:
  explicit Init_GetLegArgs_Event_response(::hapthexa_msgs::srv::GetLegArgs_Event & msg)
  : msg_(msg)
  {}
  ::hapthexa_msgs::srv::GetLegArgs_Event response(::hapthexa_msgs::srv::GetLegArgs_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::hapthexa_msgs::srv::GetLegArgs_Event msg_;
};

class Init_GetLegArgs_Event_request
{
public:
  explicit Init_GetLegArgs_Event_request(::hapthexa_msgs::srv::GetLegArgs_Event & msg)
  : msg_(msg)
  {}
  Init_GetLegArgs_Event_response request(::hapthexa_msgs::srv::GetLegArgs_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_GetLegArgs_Event_response(msg_);
  }

private:
  ::hapthexa_msgs::srv::GetLegArgs_Event msg_;
};

class Init_GetLegArgs_Event_info
{
public:
  Init_GetLegArgs_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetLegArgs_Event_request info(::hapthexa_msgs::srv::GetLegArgs_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_GetLegArgs_Event_request(msg_);
  }

private:
  ::hapthexa_msgs::srv::GetLegArgs_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::hapthexa_msgs::srv::GetLegArgs_Event>()
{
  return hapthexa_msgs::srv::builder::Init_GetLegArgs_Event_info();
}

}  // namespace hapthexa_msgs

#endif  // HAPTHEXA_MSGS__SRV__DETAIL__GET_LEG_ARGS__BUILDER_HPP_
