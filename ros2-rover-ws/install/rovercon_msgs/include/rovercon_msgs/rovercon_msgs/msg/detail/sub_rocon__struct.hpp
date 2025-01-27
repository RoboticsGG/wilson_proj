// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rovercon_msgs:msg/SubRocon.idl
// generated code does not contain a copyright notice

#ifndef ROVERCON_MSGS__MSG__DETAIL__SUB_ROCON__STRUCT_HPP_
#define ROVERCON_MSGS__MSG__DETAIL__SUB_ROCON__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__rovercon_msgs__msg__SubRocon __attribute__((deprecated))
#else
# define DEPRECATED__rovercon_msgs__msg__SubRocon __declspec(deprecated)
#endif

namespace rovercon_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SubRocon_
{
  using Type = SubRocon_<ContainerAllocator>;

  explicit SubRocon_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->roctrl_msg1 = 0;
      this->roctrl_msg2 = 0.0f;
      this->spd_msg = 0;
      this->b_dr_msg = 0;
    }
  }

  explicit SubRocon_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->roctrl_msg1 = 0;
      this->roctrl_msg2 = 0.0f;
      this->spd_msg = 0;
      this->b_dr_msg = 0;
    }
  }

  // field types and members
  using _roctrl_msg1_type =
    uint16_t;
  _roctrl_msg1_type roctrl_msg1;
  using _roctrl_msg2_type =
    float;
  _roctrl_msg2_type roctrl_msg2;
  using _spd_msg_type =
    uint16_t;
  _spd_msg_type spd_msg;
  using _b_dr_msg_type =
    uint16_t;
  _b_dr_msg_type b_dr_msg;

  // setters for named parameter idiom
  Type & set__roctrl_msg1(
    const uint16_t & _arg)
  {
    this->roctrl_msg1 = _arg;
    return *this;
  }
  Type & set__roctrl_msg2(
    const float & _arg)
  {
    this->roctrl_msg2 = _arg;
    return *this;
  }
  Type & set__spd_msg(
    const uint16_t & _arg)
  {
    this->spd_msg = _arg;
    return *this;
  }
  Type & set__b_dr_msg(
    const uint16_t & _arg)
  {
    this->b_dr_msg = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rovercon_msgs::msg::SubRocon_<ContainerAllocator> *;
  using ConstRawPtr =
    const rovercon_msgs::msg::SubRocon_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rovercon_msgs::msg::SubRocon_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rovercon_msgs::msg::SubRocon_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rovercon_msgs::msg::SubRocon_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rovercon_msgs::msg::SubRocon_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rovercon_msgs::msg::SubRocon_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rovercon_msgs::msg::SubRocon_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rovercon_msgs::msg::SubRocon_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rovercon_msgs::msg::SubRocon_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rovercon_msgs__msg__SubRocon
    std::shared_ptr<rovercon_msgs::msg::SubRocon_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rovercon_msgs__msg__SubRocon
    std::shared_ptr<rovercon_msgs::msg::SubRocon_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SubRocon_ & other) const
  {
    if (this->roctrl_msg1 != other.roctrl_msg1) {
      return false;
    }
    if (this->roctrl_msg2 != other.roctrl_msg2) {
      return false;
    }
    if (this->spd_msg != other.spd_msg) {
      return false;
    }
    if (this->b_dr_msg != other.b_dr_msg) {
      return false;
    }
    return true;
  }
  bool operator!=(const SubRocon_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SubRocon_

// alias to use template instance with default allocator
using SubRocon =
  rovercon_msgs::msg::SubRocon_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace rovercon_msgs

#endif  // ROVERCON_MSGS__MSG__DETAIL__SUB_ROCON__STRUCT_HPP_
