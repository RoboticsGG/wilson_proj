// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from base_command_package:action/Carcontrol.idl
// generated code does not contain a copyright notice

#ifndef BASE_COMMAND_PACKAGE__ACTION__DETAIL__CARCONTROL__BUILDER_HPP_
#define BASE_COMMAND_PACKAGE__ACTION__DETAIL__CARCONTROL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "base_command_package/action/detail/carcontrol__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace base_command_package
{

namespace action
{

namespace builder
{

class Init_Carcontrol_Goal_timestop
{
public:
  explicit Init_Carcontrol_Goal_timestop(::base_command_package::action::Carcontrol_Goal & msg)
  : msg_(msg)
  {}
  ::base_command_package::action::Carcontrol_Goal timestop(::base_command_package::action::Carcontrol_Goal::_timestop_type arg)
  {
    msg_.timestop = std::move(arg);
    return std::move(msg_);
  }

private:
  ::base_command_package::action::Carcontrol_Goal msg_;
};

class Init_Carcontrol_Goal_direction
{
public:
  Init_Carcontrol_Goal_direction()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Carcontrol_Goal_timestop direction(::base_command_package::action::Carcontrol_Goal::_direction_type arg)
  {
    msg_.direction = std::move(arg);
    return Init_Carcontrol_Goal_timestop(msg_);
  }

private:
  ::base_command_package::action::Carcontrol_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::base_command_package::action::Carcontrol_Goal>()
{
  return base_command_package::action::builder::Init_Carcontrol_Goal_direction();
}

}  // namespace base_command_package


namespace base_command_package
{

namespace action
{

namespace builder
{

class Init_Carcontrol_Result_result_msg
{
public:
  Init_Carcontrol_Result_result_msg()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::base_command_package::action::Carcontrol_Result result_msg(::base_command_package::action::Carcontrol_Result::_result_msg_type arg)
  {
    msg_.result_msg = std::move(arg);
    return std::move(msg_);
  }

private:
  ::base_command_package::action::Carcontrol_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::base_command_package::action::Carcontrol_Result>()
{
  return base_command_package::action::builder::Init_Carcontrol_Result_result_msg();
}

}  // namespace base_command_package


namespace base_command_package
{

namespace action
{

namespace builder
{

class Init_Carcontrol_Feedback_time_remaining
{
public:
  Init_Carcontrol_Feedback_time_remaining()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::base_command_package::action::Carcontrol_Feedback time_remaining(::base_command_package::action::Carcontrol_Feedback::_time_remaining_type arg)
  {
    msg_.time_remaining = std::move(arg);
    return std::move(msg_);
  }

private:
  ::base_command_package::action::Carcontrol_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::base_command_package::action::Carcontrol_Feedback>()
{
  return base_command_package::action::builder::Init_Carcontrol_Feedback_time_remaining();
}

}  // namespace base_command_package


namespace base_command_package
{

namespace action
{

namespace builder
{

class Init_Carcontrol_SendGoal_Request_goal
{
public:
  explicit Init_Carcontrol_SendGoal_Request_goal(::base_command_package::action::Carcontrol_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::base_command_package::action::Carcontrol_SendGoal_Request goal(::base_command_package::action::Carcontrol_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::base_command_package::action::Carcontrol_SendGoal_Request msg_;
};

class Init_Carcontrol_SendGoal_Request_goal_id
{
public:
  Init_Carcontrol_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Carcontrol_SendGoal_Request_goal goal_id(::base_command_package::action::Carcontrol_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Carcontrol_SendGoal_Request_goal(msg_);
  }

private:
  ::base_command_package::action::Carcontrol_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::base_command_package::action::Carcontrol_SendGoal_Request>()
{
  return base_command_package::action::builder::Init_Carcontrol_SendGoal_Request_goal_id();
}

}  // namespace base_command_package


namespace base_command_package
{

namespace action
{

namespace builder
{

class Init_Carcontrol_SendGoal_Response_stamp
{
public:
  explicit Init_Carcontrol_SendGoal_Response_stamp(::base_command_package::action::Carcontrol_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::base_command_package::action::Carcontrol_SendGoal_Response stamp(::base_command_package::action::Carcontrol_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::base_command_package::action::Carcontrol_SendGoal_Response msg_;
};

class Init_Carcontrol_SendGoal_Response_accepted
{
public:
  Init_Carcontrol_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Carcontrol_SendGoal_Response_stamp accepted(::base_command_package::action::Carcontrol_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_Carcontrol_SendGoal_Response_stamp(msg_);
  }

private:
  ::base_command_package::action::Carcontrol_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::base_command_package::action::Carcontrol_SendGoal_Response>()
{
  return base_command_package::action::builder::Init_Carcontrol_SendGoal_Response_accepted();
}

}  // namespace base_command_package


namespace base_command_package
{

namespace action
{

namespace builder
{

class Init_Carcontrol_GetResult_Request_goal_id
{
public:
  Init_Carcontrol_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::base_command_package::action::Carcontrol_GetResult_Request goal_id(::base_command_package::action::Carcontrol_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::base_command_package::action::Carcontrol_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::base_command_package::action::Carcontrol_GetResult_Request>()
{
  return base_command_package::action::builder::Init_Carcontrol_GetResult_Request_goal_id();
}

}  // namespace base_command_package


namespace base_command_package
{

namespace action
{

namespace builder
{

class Init_Carcontrol_GetResult_Response_result
{
public:
  explicit Init_Carcontrol_GetResult_Response_result(::base_command_package::action::Carcontrol_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::base_command_package::action::Carcontrol_GetResult_Response result(::base_command_package::action::Carcontrol_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::base_command_package::action::Carcontrol_GetResult_Response msg_;
};

class Init_Carcontrol_GetResult_Response_status
{
public:
  Init_Carcontrol_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Carcontrol_GetResult_Response_result status(::base_command_package::action::Carcontrol_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_Carcontrol_GetResult_Response_result(msg_);
  }

private:
  ::base_command_package::action::Carcontrol_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::base_command_package::action::Carcontrol_GetResult_Response>()
{
  return base_command_package::action::builder::Init_Carcontrol_GetResult_Response_status();
}

}  // namespace base_command_package


namespace base_command_package
{

namespace action
{

namespace builder
{

class Init_Carcontrol_FeedbackMessage_feedback
{
public:
  explicit Init_Carcontrol_FeedbackMessage_feedback(::base_command_package::action::Carcontrol_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::base_command_package::action::Carcontrol_FeedbackMessage feedback(::base_command_package::action::Carcontrol_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::base_command_package::action::Carcontrol_FeedbackMessage msg_;
};

class Init_Carcontrol_FeedbackMessage_goal_id
{
public:
  Init_Carcontrol_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Carcontrol_FeedbackMessage_feedback goal_id(::base_command_package::action::Carcontrol_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Carcontrol_FeedbackMessage_feedback(msg_);
  }

private:
  ::base_command_package::action::Carcontrol_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::base_command_package::action::Carcontrol_FeedbackMessage>()
{
  return base_command_package::action::builder::Init_Carcontrol_FeedbackMessage_goal_id();
}

}  // namespace base_command_package

#endif  // BASE_COMMAND_PACKAGE__ACTION__DETAIL__CARCONTROL__BUILDER_HPP_
