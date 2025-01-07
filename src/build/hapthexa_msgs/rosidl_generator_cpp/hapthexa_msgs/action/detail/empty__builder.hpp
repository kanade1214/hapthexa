// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from hapthexa_msgs:action/Empty.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "hapthexa_msgs/action/empty.hpp"


#ifndef HAPTHEXA_MSGS__ACTION__DETAIL__EMPTY__BUILDER_HPP_
#define HAPTHEXA_MSGS__ACTION__DETAIL__EMPTY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "hapthexa_msgs/action/detail/empty__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace hapthexa_msgs
{

namespace action
{


}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::hapthexa_msgs::action::Empty_Goal>()
{
  return ::hapthexa_msgs::action::Empty_Goal(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace hapthexa_msgs


namespace hapthexa_msgs
{

namespace action
{


}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::hapthexa_msgs::action::Empty_Result>()
{
  return ::hapthexa_msgs::action::Empty_Result(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace hapthexa_msgs


namespace hapthexa_msgs
{

namespace action
{


}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::hapthexa_msgs::action::Empty_Feedback>()
{
  return ::hapthexa_msgs::action::Empty_Feedback(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace hapthexa_msgs


namespace hapthexa_msgs
{

namespace action
{

namespace builder
{

class Init_Empty_SendGoal_Request_goal
{
public:
  explicit Init_Empty_SendGoal_Request_goal(::hapthexa_msgs::action::Empty_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::hapthexa_msgs::action::Empty_SendGoal_Request goal(::hapthexa_msgs::action::Empty_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::hapthexa_msgs::action::Empty_SendGoal_Request msg_;
};

class Init_Empty_SendGoal_Request_goal_id
{
public:
  Init_Empty_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Empty_SendGoal_Request_goal goal_id(::hapthexa_msgs::action::Empty_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Empty_SendGoal_Request_goal(msg_);
  }

private:
  ::hapthexa_msgs::action::Empty_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::hapthexa_msgs::action::Empty_SendGoal_Request>()
{
  return hapthexa_msgs::action::builder::Init_Empty_SendGoal_Request_goal_id();
}

}  // namespace hapthexa_msgs


namespace hapthexa_msgs
{

namespace action
{

namespace builder
{

class Init_Empty_SendGoal_Response_stamp
{
public:
  explicit Init_Empty_SendGoal_Response_stamp(::hapthexa_msgs::action::Empty_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::hapthexa_msgs::action::Empty_SendGoal_Response stamp(::hapthexa_msgs::action::Empty_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::hapthexa_msgs::action::Empty_SendGoal_Response msg_;
};

class Init_Empty_SendGoal_Response_accepted
{
public:
  Init_Empty_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Empty_SendGoal_Response_stamp accepted(::hapthexa_msgs::action::Empty_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_Empty_SendGoal_Response_stamp(msg_);
  }

private:
  ::hapthexa_msgs::action::Empty_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::hapthexa_msgs::action::Empty_SendGoal_Response>()
{
  return hapthexa_msgs::action::builder::Init_Empty_SendGoal_Response_accepted();
}

}  // namespace hapthexa_msgs


namespace hapthexa_msgs
{

namespace action
{

namespace builder
{

class Init_Empty_SendGoal_Event_response
{
public:
  explicit Init_Empty_SendGoal_Event_response(::hapthexa_msgs::action::Empty_SendGoal_Event & msg)
  : msg_(msg)
  {}
  ::hapthexa_msgs::action::Empty_SendGoal_Event response(::hapthexa_msgs::action::Empty_SendGoal_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::hapthexa_msgs::action::Empty_SendGoal_Event msg_;
};

class Init_Empty_SendGoal_Event_request
{
public:
  explicit Init_Empty_SendGoal_Event_request(::hapthexa_msgs::action::Empty_SendGoal_Event & msg)
  : msg_(msg)
  {}
  Init_Empty_SendGoal_Event_response request(::hapthexa_msgs::action::Empty_SendGoal_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_Empty_SendGoal_Event_response(msg_);
  }

private:
  ::hapthexa_msgs::action::Empty_SendGoal_Event msg_;
};

class Init_Empty_SendGoal_Event_info
{
public:
  Init_Empty_SendGoal_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Empty_SendGoal_Event_request info(::hapthexa_msgs::action::Empty_SendGoal_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_Empty_SendGoal_Event_request(msg_);
  }

private:
  ::hapthexa_msgs::action::Empty_SendGoal_Event msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::hapthexa_msgs::action::Empty_SendGoal_Event>()
{
  return hapthexa_msgs::action::builder::Init_Empty_SendGoal_Event_info();
}

}  // namespace hapthexa_msgs


namespace hapthexa_msgs
{

namespace action
{

namespace builder
{

class Init_Empty_GetResult_Request_goal_id
{
public:
  Init_Empty_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::hapthexa_msgs::action::Empty_GetResult_Request goal_id(::hapthexa_msgs::action::Empty_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::hapthexa_msgs::action::Empty_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::hapthexa_msgs::action::Empty_GetResult_Request>()
{
  return hapthexa_msgs::action::builder::Init_Empty_GetResult_Request_goal_id();
}

}  // namespace hapthexa_msgs


namespace hapthexa_msgs
{

namespace action
{

namespace builder
{

class Init_Empty_GetResult_Response_result
{
public:
  explicit Init_Empty_GetResult_Response_result(::hapthexa_msgs::action::Empty_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::hapthexa_msgs::action::Empty_GetResult_Response result(::hapthexa_msgs::action::Empty_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::hapthexa_msgs::action::Empty_GetResult_Response msg_;
};

class Init_Empty_GetResult_Response_status
{
public:
  Init_Empty_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Empty_GetResult_Response_result status(::hapthexa_msgs::action::Empty_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_Empty_GetResult_Response_result(msg_);
  }

private:
  ::hapthexa_msgs::action::Empty_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::hapthexa_msgs::action::Empty_GetResult_Response>()
{
  return hapthexa_msgs::action::builder::Init_Empty_GetResult_Response_status();
}

}  // namespace hapthexa_msgs


namespace hapthexa_msgs
{

namespace action
{

namespace builder
{

class Init_Empty_GetResult_Event_response
{
public:
  explicit Init_Empty_GetResult_Event_response(::hapthexa_msgs::action::Empty_GetResult_Event & msg)
  : msg_(msg)
  {}
  ::hapthexa_msgs::action::Empty_GetResult_Event response(::hapthexa_msgs::action::Empty_GetResult_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::hapthexa_msgs::action::Empty_GetResult_Event msg_;
};

class Init_Empty_GetResult_Event_request
{
public:
  explicit Init_Empty_GetResult_Event_request(::hapthexa_msgs::action::Empty_GetResult_Event & msg)
  : msg_(msg)
  {}
  Init_Empty_GetResult_Event_response request(::hapthexa_msgs::action::Empty_GetResult_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_Empty_GetResult_Event_response(msg_);
  }

private:
  ::hapthexa_msgs::action::Empty_GetResult_Event msg_;
};

class Init_Empty_GetResult_Event_info
{
public:
  Init_Empty_GetResult_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Empty_GetResult_Event_request info(::hapthexa_msgs::action::Empty_GetResult_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_Empty_GetResult_Event_request(msg_);
  }

private:
  ::hapthexa_msgs::action::Empty_GetResult_Event msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::hapthexa_msgs::action::Empty_GetResult_Event>()
{
  return hapthexa_msgs::action::builder::Init_Empty_GetResult_Event_info();
}

}  // namespace hapthexa_msgs


namespace hapthexa_msgs
{

namespace action
{

namespace builder
{

class Init_Empty_FeedbackMessage_feedback
{
public:
  explicit Init_Empty_FeedbackMessage_feedback(::hapthexa_msgs::action::Empty_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::hapthexa_msgs::action::Empty_FeedbackMessage feedback(::hapthexa_msgs::action::Empty_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::hapthexa_msgs::action::Empty_FeedbackMessage msg_;
};

class Init_Empty_FeedbackMessage_goal_id
{
public:
  Init_Empty_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Empty_FeedbackMessage_feedback goal_id(::hapthexa_msgs::action::Empty_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Empty_FeedbackMessage_feedback(msg_);
  }

private:
  ::hapthexa_msgs::action::Empty_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::hapthexa_msgs::action::Empty_FeedbackMessage>()
{
  return hapthexa_msgs::action::builder::Init_Empty_FeedbackMessage_goal_id();
}

}  // namespace hapthexa_msgs

#endif  // HAPTHEXA_MSGS__ACTION__DETAIL__EMPTY__BUILDER_HPP_
