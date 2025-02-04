// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from msgs_mainrocon:msg/MainRocon.idl
// generated code does not contain a copyright notice

#ifndef MSGS_MAINROCON__MSG__DETAIL__MAIN_ROCON__STRUCT_HPP_
#define MSGS_MAINROCON__MSG__DETAIL__MAIN_ROCON__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'mainrocon_msg'
#include "msgs_rovercon/msg/detail/sub_rocon__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__msgs_mainrocon__msg__MainRocon __attribute__((deprecated))
#else
# define DEPRECATED__msgs_mainrocon__msg__MainRocon __declspec(deprecated)
#endif

namespace msgs_mainrocon
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MainRocon_
{
  using Type = MainRocon_<ContainerAllocator>;

  explicit MainRocon_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : mainrocon_msg(_init)
  {
    (void)_init;
  }

  explicit MainRocon_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : mainrocon_msg(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _mainrocon_msg_type =
    msgs_rovercon::msg::SubRocon_<ContainerAllocator>;
  _mainrocon_msg_type mainrocon_msg;

  // setters for named parameter idiom
  Type & set__mainrocon_msg(
    const msgs_rovercon::msg::SubRocon_<ContainerAllocator> & _arg)
  {
    this->mainrocon_msg = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    msgs_mainrocon::msg::MainRocon_<ContainerAllocator> *;
  using ConstRawPtr =
    const msgs_mainrocon::msg::MainRocon_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<msgs_mainrocon::msg::MainRocon_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<msgs_mainrocon::msg::MainRocon_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      msgs_mainrocon::msg::MainRocon_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<msgs_mainrocon::msg::MainRocon_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      msgs_mainrocon::msg::MainRocon_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<msgs_mainrocon::msg::MainRocon_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<msgs_mainrocon::msg::MainRocon_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<msgs_mainrocon::msg::MainRocon_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__msgs_mainrocon__msg__MainRocon
    std::shared_ptr<msgs_mainrocon::msg::MainRocon_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__msgs_mainrocon__msg__MainRocon
    std::shared_ptr<msgs_mainrocon::msg::MainRocon_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MainRocon_ & other) const
  {
    if (this->mainrocon_msg != other.mainrocon_msg) {
      return false;
    }
    return true;
  }
  bool operator!=(const MainRocon_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MainRocon_

// alias to use template instance with default allocator
using MainRocon =
  msgs_mainrocon::msg::MainRocon_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace msgs_mainrocon

#endif  // MSGS_MAINROCON__MSG__DETAIL__MAIN_ROCON__STRUCT_HPP_
