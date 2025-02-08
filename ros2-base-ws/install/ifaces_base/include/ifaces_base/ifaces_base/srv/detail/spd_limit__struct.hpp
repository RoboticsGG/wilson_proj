// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ifaces_base:srv/SpdLimit.idl
// generated code does not contain a copyright notice

#ifndef IFACES_BASE__SRV__DETAIL__SPD_LIMIT__STRUCT_HPP_
#define IFACES_BASE__SRV__DETAIL__SPD_LIMIT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__ifaces_base__srv__SpdLimit_Request __attribute__((deprecated))
#else
# define DEPRECATED__ifaces_base__srv__SpdLimit_Request __declspec(deprecated)
#endif

namespace ifaces_base
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SpdLimit_Request_
{
  using Type = SpdLimit_Request_<ContainerAllocator>;

  explicit SpdLimit_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->rover_spd = 0;
    }
  }

  explicit SpdLimit_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->rover_spd = 0;
    }
  }

  // field types and members
  using _rover_spd_type =
    uint8_t;
  _rover_spd_type rover_spd;

  // setters for named parameter idiom
  Type & set__rover_spd(
    const uint8_t & _arg)
  {
    this->rover_spd = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ifaces_base::srv::SpdLimit_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const ifaces_base::srv::SpdLimit_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ifaces_base::srv::SpdLimit_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ifaces_base::srv::SpdLimit_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ifaces_base::srv::SpdLimit_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ifaces_base::srv::SpdLimit_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ifaces_base::srv::SpdLimit_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ifaces_base::srv::SpdLimit_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ifaces_base::srv::SpdLimit_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ifaces_base::srv::SpdLimit_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ifaces_base__srv__SpdLimit_Request
    std::shared_ptr<ifaces_base::srv::SpdLimit_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ifaces_base__srv__SpdLimit_Request
    std::shared_ptr<ifaces_base::srv::SpdLimit_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SpdLimit_Request_ & other) const
  {
    if (this->rover_spd != other.rover_spd) {
      return false;
    }
    return true;
  }
  bool operator!=(const SpdLimit_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SpdLimit_Request_

// alias to use template instance with default allocator
using SpdLimit_Request =
  ifaces_base::srv::SpdLimit_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace ifaces_base


#ifndef _WIN32
# define DEPRECATED__ifaces_base__srv__SpdLimit_Response __attribute__((deprecated))
#else
# define DEPRECATED__ifaces_base__srv__SpdLimit_Response __declspec(deprecated)
#endif

namespace ifaces_base
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SpdLimit_Response_
{
  using Type = SpdLimit_Response_<ContainerAllocator>;

  explicit SpdLimit_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->spd_result = "";
    }
  }

  explicit SpdLimit_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : spd_result(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->spd_result = "";
    }
  }

  // field types and members
  using _spd_result_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _spd_result_type spd_result;

  // setters for named parameter idiom
  Type & set__spd_result(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->spd_result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ifaces_base::srv::SpdLimit_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const ifaces_base::srv::SpdLimit_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ifaces_base::srv::SpdLimit_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ifaces_base::srv::SpdLimit_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ifaces_base::srv::SpdLimit_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ifaces_base::srv::SpdLimit_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ifaces_base::srv::SpdLimit_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ifaces_base::srv::SpdLimit_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ifaces_base::srv::SpdLimit_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ifaces_base::srv::SpdLimit_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ifaces_base__srv__SpdLimit_Response
    std::shared_ptr<ifaces_base::srv::SpdLimit_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ifaces_base__srv__SpdLimit_Response
    std::shared_ptr<ifaces_base::srv::SpdLimit_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SpdLimit_Response_ & other) const
  {
    if (this->spd_result != other.spd_result) {
      return false;
    }
    return true;
  }
  bool operator!=(const SpdLimit_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SpdLimit_Response_

// alias to use template instance with default allocator
using SpdLimit_Response =
  ifaces_base::srv::SpdLimit_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace ifaces_base

namespace ifaces_base
{

namespace srv
{

struct SpdLimit
{
  using Request = ifaces_base::srv::SpdLimit_Request;
  using Response = ifaces_base::srv::SpdLimit_Response;
};

}  // namespace srv

}  // namespace ifaces_base

#endif  // IFACES_BASE__SRV__DETAIL__SPD_LIMIT__STRUCT_HPP_
