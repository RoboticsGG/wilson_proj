// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from base_command_package:action/Carcontrol.idl
// generated code does not contain a copyright notice

#ifndef BASE_COMMAND_PACKAGE__ACTION__DETAIL__CARCONTROL__STRUCT_HPP_
#define BASE_COMMAND_PACKAGE__ACTION__DETAIL__CARCONTROL__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__base_command_package__action__Carcontrol_Goal __attribute__((deprecated))
#else
# define DEPRECATED__base_command_package__action__Carcontrol_Goal __declspec(deprecated)
#endif

namespace base_command_package
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Carcontrol_Goal_
{
  using Type = Carcontrol_Goal_<ContainerAllocator>;

  explicit Carcontrol_Goal_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->direction = "";
      this->timestop = 0l;
    }
  }

  explicit Carcontrol_Goal_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : direction(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->direction = "";
      this->timestop = 0l;
    }
  }

  // field types and members
  using _direction_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _direction_type direction;
  using _timestop_type =
    int32_t;
  _timestop_type timestop;

  // setters for named parameter idiom
  Type & set__direction(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->direction = _arg;
    return *this;
  }
  Type & set__timestop(
    const int32_t & _arg)
  {
    this->timestop = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    base_command_package::action::Carcontrol_Goal_<ContainerAllocator> *;
  using ConstRawPtr =
    const base_command_package::action::Carcontrol_Goal_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<base_command_package::action::Carcontrol_Goal_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<base_command_package::action::Carcontrol_Goal_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      base_command_package::action::Carcontrol_Goal_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<base_command_package::action::Carcontrol_Goal_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      base_command_package::action::Carcontrol_Goal_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<base_command_package::action::Carcontrol_Goal_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<base_command_package::action::Carcontrol_Goal_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<base_command_package::action::Carcontrol_Goal_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__base_command_package__action__Carcontrol_Goal
    std::shared_ptr<base_command_package::action::Carcontrol_Goal_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__base_command_package__action__Carcontrol_Goal
    std::shared_ptr<base_command_package::action::Carcontrol_Goal_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Carcontrol_Goal_ & other) const
  {
    if (this->direction != other.direction) {
      return false;
    }
    if (this->timestop != other.timestop) {
      return false;
    }
    return true;
  }
  bool operator!=(const Carcontrol_Goal_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Carcontrol_Goal_

// alias to use template instance with default allocator
using Carcontrol_Goal =
  base_command_package::action::Carcontrol_Goal_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace base_command_package


#ifndef _WIN32
# define DEPRECATED__base_command_package__action__Carcontrol_Result __attribute__((deprecated))
#else
# define DEPRECATED__base_command_package__action__Carcontrol_Result __declspec(deprecated)
#endif

namespace base_command_package
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Carcontrol_Result_
{
  using Type = Carcontrol_Result_<ContainerAllocator>;

  explicit Carcontrol_Result_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->result_msg = "";
    }
  }

  explicit Carcontrol_Result_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result_msg(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->result_msg = "";
    }
  }

  // field types and members
  using _result_msg_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _result_msg_type result_msg;

  // setters for named parameter idiom
  Type & set__result_msg(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->result_msg = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    base_command_package::action::Carcontrol_Result_<ContainerAllocator> *;
  using ConstRawPtr =
    const base_command_package::action::Carcontrol_Result_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<base_command_package::action::Carcontrol_Result_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<base_command_package::action::Carcontrol_Result_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      base_command_package::action::Carcontrol_Result_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<base_command_package::action::Carcontrol_Result_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      base_command_package::action::Carcontrol_Result_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<base_command_package::action::Carcontrol_Result_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<base_command_package::action::Carcontrol_Result_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<base_command_package::action::Carcontrol_Result_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__base_command_package__action__Carcontrol_Result
    std::shared_ptr<base_command_package::action::Carcontrol_Result_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__base_command_package__action__Carcontrol_Result
    std::shared_ptr<base_command_package::action::Carcontrol_Result_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Carcontrol_Result_ & other) const
  {
    if (this->result_msg != other.result_msg) {
      return false;
    }
    return true;
  }
  bool operator!=(const Carcontrol_Result_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Carcontrol_Result_

// alias to use template instance with default allocator
using Carcontrol_Result =
  base_command_package::action::Carcontrol_Result_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace base_command_package


#ifndef _WIN32
# define DEPRECATED__base_command_package__action__Carcontrol_Feedback __attribute__((deprecated))
#else
# define DEPRECATED__base_command_package__action__Carcontrol_Feedback __declspec(deprecated)
#endif

namespace base_command_package
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Carcontrol_Feedback_
{
  using Type = Carcontrol_Feedback_<ContainerAllocator>;

  explicit Carcontrol_Feedback_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit Carcontrol_Feedback_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _time_remaining_type =
    std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>>;
  _time_remaining_type time_remaining;

  // setters for named parameter idiom
  Type & set__time_remaining(
    const std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>> & _arg)
  {
    this->time_remaining = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    base_command_package::action::Carcontrol_Feedback_<ContainerAllocator> *;
  using ConstRawPtr =
    const base_command_package::action::Carcontrol_Feedback_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<base_command_package::action::Carcontrol_Feedback_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<base_command_package::action::Carcontrol_Feedback_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      base_command_package::action::Carcontrol_Feedback_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<base_command_package::action::Carcontrol_Feedback_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      base_command_package::action::Carcontrol_Feedback_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<base_command_package::action::Carcontrol_Feedback_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<base_command_package::action::Carcontrol_Feedback_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<base_command_package::action::Carcontrol_Feedback_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__base_command_package__action__Carcontrol_Feedback
    std::shared_ptr<base_command_package::action::Carcontrol_Feedback_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__base_command_package__action__Carcontrol_Feedback
    std::shared_ptr<base_command_package::action::Carcontrol_Feedback_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Carcontrol_Feedback_ & other) const
  {
    if (this->time_remaining != other.time_remaining) {
      return false;
    }
    return true;
  }
  bool operator!=(const Carcontrol_Feedback_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Carcontrol_Feedback_

// alias to use template instance with default allocator
using Carcontrol_Feedback =
  base_command_package::action::Carcontrol_Feedback_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace base_command_package


// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'goal'
#include "base_command_package/action/detail/carcontrol__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__base_command_package__action__Carcontrol_SendGoal_Request __attribute__((deprecated))
#else
# define DEPRECATED__base_command_package__action__Carcontrol_SendGoal_Request __declspec(deprecated)
#endif

namespace base_command_package
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Carcontrol_SendGoal_Request_
{
  using Type = Carcontrol_SendGoal_Request_<ContainerAllocator>;

  explicit Carcontrol_SendGoal_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    goal(_init)
  {
    (void)_init;
  }

  explicit Carcontrol_SendGoal_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    goal(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _goal_type =
    base_command_package::action::Carcontrol_Goal_<ContainerAllocator>;
  _goal_type goal;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__goal(
    const base_command_package::action::Carcontrol_Goal_<ContainerAllocator> & _arg)
  {
    this->goal = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    base_command_package::action::Carcontrol_SendGoal_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const base_command_package::action::Carcontrol_SendGoal_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<base_command_package::action::Carcontrol_SendGoal_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<base_command_package::action::Carcontrol_SendGoal_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      base_command_package::action::Carcontrol_SendGoal_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<base_command_package::action::Carcontrol_SendGoal_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      base_command_package::action::Carcontrol_SendGoal_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<base_command_package::action::Carcontrol_SendGoal_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<base_command_package::action::Carcontrol_SendGoal_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<base_command_package::action::Carcontrol_SendGoal_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__base_command_package__action__Carcontrol_SendGoal_Request
    std::shared_ptr<base_command_package::action::Carcontrol_SendGoal_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__base_command_package__action__Carcontrol_SendGoal_Request
    std::shared_ptr<base_command_package::action::Carcontrol_SendGoal_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Carcontrol_SendGoal_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->goal != other.goal) {
      return false;
    }
    return true;
  }
  bool operator!=(const Carcontrol_SendGoal_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Carcontrol_SendGoal_Request_

// alias to use template instance with default allocator
using Carcontrol_SendGoal_Request =
  base_command_package::action::Carcontrol_SendGoal_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace base_command_package


// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__base_command_package__action__Carcontrol_SendGoal_Response __attribute__((deprecated))
#else
# define DEPRECATED__base_command_package__action__Carcontrol_SendGoal_Response __declspec(deprecated)
#endif

namespace base_command_package
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Carcontrol_SendGoal_Response_
{
  using Type = Carcontrol_SendGoal_Response_<ContainerAllocator>;

  explicit Carcontrol_SendGoal_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  explicit Carcontrol_SendGoal_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  // field types and members
  using _accepted_type =
    bool;
  _accepted_type accepted;
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;

  // setters for named parameter idiom
  Type & set__accepted(
    const bool & _arg)
  {
    this->accepted = _arg;
    return *this;
  }
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    base_command_package::action::Carcontrol_SendGoal_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const base_command_package::action::Carcontrol_SendGoal_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<base_command_package::action::Carcontrol_SendGoal_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<base_command_package::action::Carcontrol_SendGoal_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      base_command_package::action::Carcontrol_SendGoal_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<base_command_package::action::Carcontrol_SendGoal_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      base_command_package::action::Carcontrol_SendGoal_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<base_command_package::action::Carcontrol_SendGoal_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<base_command_package::action::Carcontrol_SendGoal_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<base_command_package::action::Carcontrol_SendGoal_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__base_command_package__action__Carcontrol_SendGoal_Response
    std::shared_ptr<base_command_package::action::Carcontrol_SendGoal_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__base_command_package__action__Carcontrol_SendGoal_Response
    std::shared_ptr<base_command_package::action::Carcontrol_SendGoal_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Carcontrol_SendGoal_Response_ & other) const
  {
    if (this->accepted != other.accepted) {
      return false;
    }
    if (this->stamp != other.stamp) {
      return false;
    }
    return true;
  }
  bool operator!=(const Carcontrol_SendGoal_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Carcontrol_SendGoal_Response_

// alias to use template instance with default allocator
using Carcontrol_SendGoal_Response =
  base_command_package::action::Carcontrol_SendGoal_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace base_command_package

namespace base_command_package
{

namespace action
{

struct Carcontrol_SendGoal
{
  using Request = base_command_package::action::Carcontrol_SendGoal_Request;
  using Response = base_command_package::action::Carcontrol_SendGoal_Response;
};

}  // namespace action

}  // namespace base_command_package


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__base_command_package__action__Carcontrol_GetResult_Request __attribute__((deprecated))
#else
# define DEPRECATED__base_command_package__action__Carcontrol_GetResult_Request __declspec(deprecated)
#endif

namespace base_command_package
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Carcontrol_GetResult_Request_
{
  using Type = Carcontrol_GetResult_Request_<ContainerAllocator>;

  explicit Carcontrol_GetResult_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init)
  {
    (void)_init;
  }

  explicit Carcontrol_GetResult_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    base_command_package::action::Carcontrol_GetResult_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const base_command_package::action::Carcontrol_GetResult_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<base_command_package::action::Carcontrol_GetResult_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<base_command_package::action::Carcontrol_GetResult_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      base_command_package::action::Carcontrol_GetResult_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<base_command_package::action::Carcontrol_GetResult_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      base_command_package::action::Carcontrol_GetResult_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<base_command_package::action::Carcontrol_GetResult_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<base_command_package::action::Carcontrol_GetResult_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<base_command_package::action::Carcontrol_GetResult_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__base_command_package__action__Carcontrol_GetResult_Request
    std::shared_ptr<base_command_package::action::Carcontrol_GetResult_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__base_command_package__action__Carcontrol_GetResult_Request
    std::shared_ptr<base_command_package::action::Carcontrol_GetResult_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Carcontrol_GetResult_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const Carcontrol_GetResult_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Carcontrol_GetResult_Request_

// alias to use template instance with default allocator
using Carcontrol_GetResult_Request =
  base_command_package::action::Carcontrol_GetResult_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace base_command_package


// Include directives for member types
// Member 'result'
// already included above
// #include "base_command_package/action/detail/carcontrol__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__base_command_package__action__Carcontrol_GetResult_Response __attribute__((deprecated))
#else
# define DEPRECATED__base_command_package__action__Carcontrol_GetResult_Response __declspec(deprecated)
#endif

namespace base_command_package
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Carcontrol_GetResult_Response_
{
  using Type = Carcontrol_GetResult_Response_<ContainerAllocator>;

  explicit Carcontrol_GetResult_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  explicit Carcontrol_GetResult_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  // field types and members
  using _status_type =
    int8_t;
  _status_type status;
  using _result_type =
    base_command_package::action::Carcontrol_Result_<ContainerAllocator>;
  _result_type result;

  // setters for named parameter idiom
  Type & set__status(
    const int8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__result(
    const base_command_package::action::Carcontrol_Result_<ContainerAllocator> & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    base_command_package::action::Carcontrol_GetResult_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const base_command_package::action::Carcontrol_GetResult_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<base_command_package::action::Carcontrol_GetResult_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<base_command_package::action::Carcontrol_GetResult_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      base_command_package::action::Carcontrol_GetResult_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<base_command_package::action::Carcontrol_GetResult_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      base_command_package::action::Carcontrol_GetResult_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<base_command_package::action::Carcontrol_GetResult_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<base_command_package::action::Carcontrol_GetResult_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<base_command_package::action::Carcontrol_GetResult_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__base_command_package__action__Carcontrol_GetResult_Response
    std::shared_ptr<base_command_package::action::Carcontrol_GetResult_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__base_command_package__action__Carcontrol_GetResult_Response
    std::shared_ptr<base_command_package::action::Carcontrol_GetResult_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Carcontrol_GetResult_Response_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const Carcontrol_GetResult_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Carcontrol_GetResult_Response_

// alias to use template instance with default allocator
using Carcontrol_GetResult_Response =
  base_command_package::action::Carcontrol_GetResult_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace base_command_package

namespace base_command_package
{

namespace action
{

struct Carcontrol_GetResult
{
  using Request = base_command_package::action::Carcontrol_GetResult_Request;
  using Response = base_command_package::action::Carcontrol_GetResult_Response;
};

}  // namespace action

}  // namespace base_command_package


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'feedback'
// already included above
// #include "base_command_package/action/detail/carcontrol__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__base_command_package__action__Carcontrol_FeedbackMessage __attribute__((deprecated))
#else
# define DEPRECATED__base_command_package__action__Carcontrol_FeedbackMessage __declspec(deprecated)
#endif

namespace base_command_package
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Carcontrol_FeedbackMessage_
{
  using Type = Carcontrol_FeedbackMessage_<ContainerAllocator>;

  explicit Carcontrol_FeedbackMessage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    feedback(_init)
  {
    (void)_init;
  }

  explicit Carcontrol_FeedbackMessage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    feedback(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _feedback_type =
    base_command_package::action::Carcontrol_Feedback_<ContainerAllocator>;
  _feedback_type feedback;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__feedback(
    const base_command_package::action::Carcontrol_Feedback_<ContainerAllocator> & _arg)
  {
    this->feedback = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    base_command_package::action::Carcontrol_FeedbackMessage_<ContainerAllocator> *;
  using ConstRawPtr =
    const base_command_package::action::Carcontrol_FeedbackMessage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<base_command_package::action::Carcontrol_FeedbackMessage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<base_command_package::action::Carcontrol_FeedbackMessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      base_command_package::action::Carcontrol_FeedbackMessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<base_command_package::action::Carcontrol_FeedbackMessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      base_command_package::action::Carcontrol_FeedbackMessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<base_command_package::action::Carcontrol_FeedbackMessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<base_command_package::action::Carcontrol_FeedbackMessage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<base_command_package::action::Carcontrol_FeedbackMessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__base_command_package__action__Carcontrol_FeedbackMessage
    std::shared_ptr<base_command_package::action::Carcontrol_FeedbackMessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__base_command_package__action__Carcontrol_FeedbackMessage
    std::shared_ptr<base_command_package::action::Carcontrol_FeedbackMessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Carcontrol_FeedbackMessage_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->feedback != other.feedback) {
      return false;
    }
    return true;
  }
  bool operator!=(const Carcontrol_FeedbackMessage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Carcontrol_FeedbackMessage_

// alias to use template instance with default allocator
using Carcontrol_FeedbackMessage =
  base_command_package::action::Carcontrol_FeedbackMessage_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace base_command_package

#include "action_msgs/srv/cancel_goal.hpp"
#include "action_msgs/msg/goal_info.hpp"
#include "action_msgs/msg/goal_status_array.hpp"

namespace base_command_package
{

namespace action
{

struct Carcontrol
{
  /// The goal message defined in the action definition.
  using Goal = base_command_package::action::Carcontrol_Goal;
  /// The result message defined in the action definition.
  using Result = base_command_package::action::Carcontrol_Result;
  /// The feedback message defined in the action definition.
  using Feedback = base_command_package::action::Carcontrol_Feedback;

  struct Impl
  {
    /// The send_goal service using a wrapped version of the goal message as a request.
    using SendGoalService = base_command_package::action::Carcontrol_SendGoal;
    /// The get_result service using a wrapped version of the result message as a response.
    using GetResultService = base_command_package::action::Carcontrol_GetResult;
    /// The feedback message with generic fields which wraps the feedback message.
    using FeedbackMessage = base_command_package::action::Carcontrol_FeedbackMessage;

    /// The generic service to cancel a goal.
    using CancelGoalService = action_msgs::srv::CancelGoal;
    /// The generic message for the status of a goal.
    using GoalStatusMessage = action_msgs::msg::GoalStatusArray;
  };
};

typedef struct Carcontrol Carcontrol;

}  // namespace action

}  // namespace base_command_package

#endif  // BASE_COMMAND_PACKAGE__ACTION__DETAIL__CARCONTROL__STRUCT_HPP_
