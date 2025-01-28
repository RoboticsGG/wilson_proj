// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from action_interfaces:action/Rovercontrol.idl
// generated code does not contain a copyright notice

#ifndef ACTION_INTERFACES__ACTION__DETAIL__ROVERCONTROL__BUILDER_HPP_
#define ACTION_INTERFACES__ACTION__DETAIL__ROVERCONTROL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "action_interfaces/action/detail/rovercontrol__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace action_interfaces
{

namespace action
{

namespace builder
{

class Init_Rovercontrol_Goal_timestop
{
public:
  explicit Init_Rovercontrol_Goal_timestop(::action_interfaces::action::Rovercontrol_Goal & msg)
  : msg_(msg)
  {}
  ::action_interfaces::action::Rovercontrol_Goal timestop(::action_interfaces::action::Rovercontrol_Goal::_timestop_type arg)
  {
    msg_.timestop = std::move(arg);
    return std::move(msg_);
  }

private:
  ::action_interfaces::action::Rovercontrol_Goal msg_;
};

class Init_Rovercontrol_Goal_direction
{
public:
  Init_Rovercontrol_Goal_direction()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Rovercontrol_Goal_timestop direction(::action_interfaces::action::Rovercontrol_Goal::_direction_type arg)
  {
    msg_.direction = std::move(arg);
    return Init_Rovercontrol_Goal_timestop(msg_);
  }

private:
  ::action_interfaces::action::Rovercontrol_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::action_interfaces::action::Rovercontrol_Goal>()
{
  return action_interfaces::action::builder::Init_Rovercontrol_Goal_direction();
}

}  // namespace action_interfaces


namespace action_interfaces
{

namespace action
{

namespace builder
{

class Init_Rovercontrol_Result_result_msg
{
public:
  Init_Rovercontrol_Result_result_msg()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::action_interfaces::action::Rovercontrol_Result result_msg(::action_interfaces::action::Rovercontrol_Result::_result_msg_type arg)
  {
    msg_.result_msg = std::move(arg);
    return std::move(msg_);
  }

private:
  ::action_interfaces::action::Rovercontrol_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::action_interfaces::action::Rovercontrol_Result>()
{
  return action_interfaces::action::builder::Init_Rovercontrol_Result_result_msg();
}

}  // namespace action_interfaces


namespace action_interfaces
{

namespace action
{

namespace builder
{

class Init_Rovercontrol_Feedback_time_remaining
{
public:
  Init_Rovercontrol_Feedback_time_remaining()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::action_interfaces::action::Rovercontrol_Feedback time_remaining(::action_interfaces::action::Rovercontrol_Feedback::_time_remaining_type arg)
  {
    msg_.time_remaining = std::move(arg);
    return std::move(msg_);
  }

private:
  ::action_interfaces::action::Rovercontrol_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::action_interfaces::action::Rovercontrol_Feedback>()
{
  return action_interfaces::action::builder::Init_Rovercontrol_Feedback_time_remaining();
}

}  // namespace action_interfaces


namespace action_interfaces
{

namespace action
{

namespace builder
{

class Init_Rovercontrol_SendGoal_Request_goal
{
public:
  explicit Init_Rovercontrol_SendGoal_Request_goal(::action_interfaces::action::Rovercontrol_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::action_interfaces::action::Rovercontrol_SendGoal_Request goal(::action_interfaces::action::Rovercontrol_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::action_interfaces::action::Rovercontrol_SendGoal_Request msg_;
};

class Init_Rovercontrol_SendGoal_Request_goal_id
{
public:
  Init_Rovercontrol_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Rovercontrol_SendGoal_Request_goal goal_id(::action_interfaces::action::Rovercontrol_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Rovercontrol_SendGoal_Request_goal(msg_);
  }

private:
  ::action_interfaces::action::Rovercontrol_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::action_interfaces::action::Rovercontrol_SendGoal_Request>()
{
  return action_interfaces::action::builder::Init_Rovercontrol_SendGoal_Request_goal_id();
}

}  // namespace action_interfaces


namespace action_interfaces
{

namespace action
{

namespace builder
{

class Init_Rovercontrol_SendGoal_Response_stamp
{
public:
  explicit Init_Rovercontrol_SendGoal_Response_stamp(::action_interfaces::action::Rovercontrol_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::action_interfaces::action::Rovercontrol_SendGoal_Response stamp(::action_interfaces::action::Rovercontrol_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::action_interfaces::action::Rovercontrol_SendGoal_Response msg_;
};

class Init_Rovercontrol_SendGoal_Response_accepted
{
public:
  Init_Rovercontrol_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Rovercontrol_SendGoal_Response_stamp accepted(::action_interfaces::action::Rovercontrol_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_Rovercontrol_SendGoal_Response_stamp(msg_);
  }

private:
  ::action_interfaces::action::Rovercontrol_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::action_interfaces::action::Rovercontrol_SendGoal_Response>()
{
  return action_interfaces::action::builder::Init_Rovercontrol_SendGoal_Response_accepted();
}

}  // namespace action_interfaces


namespace action_interfaces
{

namespace action
{

namespace builder
{

class Init_Rovercontrol_GetResult_Request_goal_id
{
public:
  Init_Rovercontrol_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::action_interfaces::action::Rovercontrol_GetResult_Request goal_id(::action_interfaces::action::Rovercontrol_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::action_interfaces::action::Rovercontrol_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::action_interfaces::action::Rovercontrol_GetResult_Request>()
{
  return action_interfaces::action::builder::Init_Rovercontrol_GetResult_Request_goal_id();
}

}  // namespace action_interfaces


namespace action_interfaces
{

namespace action
{

namespace builder
{

class Init_Rovercontrol_GetResult_Response_result
{
public:
  explicit Init_Rovercontrol_GetResult_Response_result(::action_interfaces::action::Rovercontrol_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::action_interfaces::action::Rovercontrol_GetResult_Response result(::action_interfaces::action::Rovercontrol_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::action_interfaces::action::Rovercontrol_GetResult_Response msg_;
};

class Init_Rovercontrol_GetResult_Response_status
{
public:
  Init_Rovercontrol_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Rovercontrol_GetResult_Response_result status(::action_interfaces::action::Rovercontrol_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_Rovercontrol_GetResult_Response_result(msg_);
  }

private:
  ::action_interfaces::action::Rovercontrol_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::action_interfaces::action::Rovercontrol_GetResult_Response>()
{
  return action_interfaces::action::builder::Init_Rovercontrol_GetResult_Response_status();
}

}  // namespace action_interfaces


namespace action_interfaces
{

namespace action
{

namespace builder
{

class Init_Rovercontrol_FeedbackMessage_feedback
{
public:
  explicit Init_Rovercontrol_FeedbackMessage_feedback(::action_interfaces::action::Rovercontrol_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::action_interfaces::action::Rovercontrol_FeedbackMessage feedback(::action_interfaces::action::Rovercontrol_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::action_interfaces::action::Rovercontrol_FeedbackMessage msg_;
};

class Init_Rovercontrol_FeedbackMessage_goal_id
{
public:
  Init_Rovercontrol_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Rovercontrol_FeedbackMessage_feedback goal_id(::action_interfaces::action::Rovercontrol_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Rovercontrol_FeedbackMessage_feedback(msg_);
  }

private:
  ::action_interfaces::action::Rovercontrol_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::action_interfaces::action::Rovercontrol_FeedbackMessage>()
{
  return action_interfaces::action::builder::Init_Rovercontrol_FeedbackMessage_goal_id();
}

}  // namespace action_interfaces

#endif  // ACTION_INTERFACES__ACTION__DETAIL__ROVERCONTROL__BUILDER_HPP_
