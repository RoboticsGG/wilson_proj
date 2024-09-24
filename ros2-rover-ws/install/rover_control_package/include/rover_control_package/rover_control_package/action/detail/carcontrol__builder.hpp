// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rover_control_package:action/Carcontrol.idl
// generated code does not contain a copyright notice

#ifndef ROVER_CONTROL_PACKAGE__ACTION__DETAIL__CARCONTROL__BUILDER_HPP_
#define ROVER_CONTROL_PACKAGE__ACTION__DETAIL__CARCONTROL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rover_control_package/action/detail/carcontrol__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rover_control_package
{

namespace action
{

namespace builder
{

class Init_Carcontrol_Goal_timestop
{
public:
  explicit Init_Carcontrol_Goal_timestop(::rover_control_package::action::Carcontrol_Goal & msg)
  : msg_(msg)
  {}
  ::rover_control_package::action::Carcontrol_Goal timestop(::rover_control_package::action::Carcontrol_Goal::_timestop_type arg)
  {
    msg_.timestop = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rover_control_package::action::Carcontrol_Goal msg_;
};

class Init_Carcontrol_Goal_direction
{
public:
  Init_Carcontrol_Goal_direction()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Carcontrol_Goal_timestop direction(::rover_control_package::action::Carcontrol_Goal::_direction_type arg)
  {
    msg_.direction = std::move(arg);
    return Init_Carcontrol_Goal_timestop(msg_);
  }

private:
  ::rover_control_package::action::Carcontrol_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::rover_control_package::action::Carcontrol_Goal>()
{
  return rover_control_package::action::builder::Init_Carcontrol_Goal_direction();
}

}  // namespace rover_control_package


namespace rover_control_package
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
  ::rover_control_package::action::Carcontrol_Result result_msg(::rover_control_package::action::Carcontrol_Result::_result_msg_type arg)
  {
    msg_.result_msg = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rover_control_package::action::Carcontrol_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::rover_control_package::action::Carcontrol_Result>()
{
  return rover_control_package::action::builder::Init_Carcontrol_Result_result_msg();
}

}  // namespace rover_control_package


namespace rover_control_package
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
  ::rover_control_package::action::Carcontrol_Feedback time_remaining(::rover_control_package::action::Carcontrol_Feedback::_time_remaining_type arg)
  {
    msg_.time_remaining = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rover_control_package::action::Carcontrol_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::rover_control_package::action::Carcontrol_Feedback>()
{
  return rover_control_package::action::builder::Init_Carcontrol_Feedback_time_remaining();
}

}  // namespace rover_control_package


namespace rover_control_package
{

namespace action
{

namespace builder
{

class Init_Carcontrol_SendGoal_Request_goal
{
public:
  explicit Init_Carcontrol_SendGoal_Request_goal(::rover_control_package::action::Carcontrol_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::rover_control_package::action::Carcontrol_SendGoal_Request goal(::rover_control_package::action::Carcontrol_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rover_control_package::action::Carcontrol_SendGoal_Request msg_;
};

class Init_Carcontrol_SendGoal_Request_goal_id
{
public:
  Init_Carcontrol_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Carcontrol_SendGoal_Request_goal goal_id(::rover_control_package::action::Carcontrol_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Carcontrol_SendGoal_Request_goal(msg_);
  }

private:
  ::rover_control_package::action::Carcontrol_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::rover_control_package::action::Carcontrol_SendGoal_Request>()
{
  return rover_control_package::action::builder::Init_Carcontrol_SendGoal_Request_goal_id();
}

}  // namespace rover_control_package


namespace rover_control_package
{

namespace action
{

namespace builder
{

class Init_Carcontrol_SendGoal_Response_stamp
{
public:
  explicit Init_Carcontrol_SendGoal_Response_stamp(::rover_control_package::action::Carcontrol_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::rover_control_package::action::Carcontrol_SendGoal_Response stamp(::rover_control_package::action::Carcontrol_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rover_control_package::action::Carcontrol_SendGoal_Response msg_;
};

class Init_Carcontrol_SendGoal_Response_accepted
{
public:
  Init_Carcontrol_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Carcontrol_SendGoal_Response_stamp accepted(::rover_control_package::action::Carcontrol_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_Carcontrol_SendGoal_Response_stamp(msg_);
  }

private:
  ::rover_control_package::action::Carcontrol_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::rover_control_package::action::Carcontrol_SendGoal_Response>()
{
  return rover_control_package::action::builder::Init_Carcontrol_SendGoal_Response_accepted();
}

}  // namespace rover_control_package


namespace rover_control_package
{

namespace action
{

namespace builder
{

class Init_Carcontrol_SendGoal_Event_response
{
public:
  explicit Init_Carcontrol_SendGoal_Event_response(::rover_control_package::action::Carcontrol_SendGoal_Event & msg)
  : msg_(msg)
  {}
  ::rover_control_package::action::Carcontrol_SendGoal_Event response(::rover_control_package::action::Carcontrol_SendGoal_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rover_control_package::action::Carcontrol_SendGoal_Event msg_;
};

class Init_Carcontrol_SendGoal_Event_request
{
public:
  explicit Init_Carcontrol_SendGoal_Event_request(::rover_control_package::action::Carcontrol_SendGoal_Event & msg)
  : msg_(msg)
  {}
  Init_Carcontrol_SendGoal_Event_response request(::rover_control_package::action::Carcontrol_SendGoal_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_Carcontrol_SendGoal_Event_response(msg_);
  }

private:
  ::rover_control_package::action::Carcontrol_SendGoal_Event msg_;
};

class Init_Carcontrol_SendGoal_Event_info
{
public:
  Init_Carcontrol_SendGoal_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Carcontrol_SendGoal_Event_request info(::rover_control_package::action::Carcontrol_SendGoal_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_Carcontrol_SendGoal_Event_request(msg_);
  }

private:
  ::rover_control_package::action::Carcontrol_SendGoal_Event msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::rover_control_package::action::Carcontrol_SendGoal_Event>()
{
  return rover_control_package::action::builder::Init_Carcontrol_SendGoal_Event_info();
}

}  // namespace rover_control_package


namespace rover_control_package
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
  ::rover_control_package::action::Carcontrol_GetResult_Request goal_id(::rover_control_package::action::Carcontrol_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rover_control_package::action::Carcontrol_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::rover_control_package::action::Carcontrol_GetResult_Request>()
{
  return rover_control_package::action::builder::Init_Carcontrol_GetResult_Request_goal_id();
}

}  // namespace rover_control_package


namespace rover_control_package
{

namespace action
{

namespace builder
{

class Init_Carcontrol_GetResult_Response_result
{
public:
  explicit Init_Carcontrol_GetResult_Response_result(::rover_control_package::action::Carcontrol_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::rover_control_package::action::Carcontrol_GetResult_Response result(::rover_control_package::action::Carcontrol_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rover_control_package::action::Carcontrol_GetResult_Response msg_;
};

class Init_Carcontrol_GetResult_Response_status
{
public:
  Init_Carcontrol_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Carcontrol_GetResult_Response_result status(::rover_control_package::action::Carcontrol_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_Carcontrol_GetResult_Response_result(msg_);
  }

private:
  ::rover_control_package::action::Carcontrol_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::rover_control_package::action::Carcontrol_GetResult_Response>()
{
  return rover_control_package::action::builder::Init_Carcontrol_GetResult_Response_status();
}

}  // namespace rover_control_package


namespace rover_control_package
{

namespace action
{

namespace builder
{

class Init_Carcontrol_GetResult_Event_response
{
public:
  explicit Init_Carcontrol_GetResult_Event_response(::rover_control_package::action::Carcontrol_GetResult_Event & msg)
  : msg_(msg)
  {}
  ::rover_control_package::action::Carcontrol_GetResult_Event response(::rover_control_package::action::Carcontrol_GetResult_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rover_control_package::action::Carcontrol_GetResult_Event msg_;
};

class Init_Carcontrol_GetResult_Event_request
{
public:
  explicit Init_Carcontrol_GetResult_Event_request(::rover_control_package::action::Carcontrol_GetResult_Event & msg)
  : msg_(msg)
  {}
  Init_Carcontrol_GetResult_Event_response request(::rover_control_package::action::Carcontrol_GetResult_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_Carcontrol_GetResult_Event_response(msg_);
  }

private:
  ::rover_control_package::action::Carcontrol_GetResult_Event msg_;
};

class Init_Carcontrol_GetResult_Event_info
{
public:
  Init_Carcontrol_GetResult_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Carcontrol_GetResult_Event_request info(::rover_control_package::action::Carcontrol_GetResult_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_Carcontrol_GetResult_Event_request(msg_);
  }

private:
  ::rover_control_package::action::Carcontrol_GetResult_Event msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::rover_control_package::action::Carcontrol_GetResult_Event>()
{
  return rover_control_package::action::builder::Init_Carcontrol_GetResult_Event_info();
}

}  // namespace rover_control_package


namespace rover_control_package
{

namespace action
{

namespace builder
{

class Init_Carcontrol_FeedbackMessage_feedback
{
public:
  explicit Init_Carcontrol_FeedbackMessage_feedback(::rover_control_package::action::Carcontrol_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::rover_control_package::action::Carcontrol_FeedbackMessage feedback(::rover_control_package::action::Carcontrol_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rover_control_package::action::Carcontrol_FeedbackMessage msg_;
};

class Init_Carcontrol_FeedbackMessage_goal_id
{
public:
  Init_Carcontrol_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Carcontrol_FeedbackMessage_feedback goal_id(::rover_control_package::action::Carcontrol_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Carcontrol_FeedbackMessage_feedback(msg_);
  }

private:
  ::rover_control_package::action::Carcontrol_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::rover_control_package::action::Carcontrol_FeedbackMessage>()
{
  return rover_control_package::action::builder::Init_Carcontrol_FeedbackMessage_goal_id();
}

}  // namespace rover_control_package

#endif  // ROVER_CONTROL_PACKAGE__ACTION__DETAIL__CARCONTROL__BUILDER_HPP_
