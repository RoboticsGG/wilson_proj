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
      this->fdr_msg = 0;
      this->ro_ctrl_msg = 0.0f;
      this->spd_msg = 0;
      this->bdr_msg = 0;
    }
  }

  explicit SubRocon_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->fdr_msg = 0;
      this->ro_ctrl_msg = 0.0f;
      this->spd_msg = 0;
      this->bdr_msg = 0;
    }
  }

  // field types and members
  using _fdr_msg_type =
    uint8_t;
  _fdr_msg_type fdr_msg;
  using _ro_ctrl_msg_type =
    float;
  _ro_ctrl_msg_type ro_ctrl_msg;
  using _spd_msg_type =
    uint8_t;
  _spd_msg_type spd_msg;
  using _bdr_msg_type =
    uint8_t;
  _bdr_msg_type bdr_msg;

  // setters for named parameter idiom
  Type & set__fdr_msg(
    const uint8_t & _arg)
  {
    this->fdr_msg = _arg;
    return *this;
  }
  Type & set__ro_ctrl_msg(
    const float & _arg)
  {
    this->ro_ctrl_msg = _arg;
    return *this;
  }
  Type & set__spd_msg(
    const uint8_t & _arg)
  {
    this->spd_msg = _arg;
    return *this;
  }
  Type & set__bdr_msg(
    const uint8_t & _arg)
  {
    this->bdr_msg = _arg;
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
    if (this->fdr_msg != other.fdr_msg) {
      return false;
    }
    if (this->ro_ctrl_msg != other.ro_ctrl_msg) {
      return false;
    }
    if (this->spd_msg != other.spd_msg) {
      return false;
    }
    if (this->bdr_msg != other.bdr_msg) {
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
