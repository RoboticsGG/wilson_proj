// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from service_ifaces:srv/DesData.idl
// generated code does not contain a copyright notice

#ifndef SERVICE_IFACES__SRV__DETAIL__DES_DATA__STRUCT_HPP_
#define SERVICE_IFACES__SRV__DETAIL__DES_DATA__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__service_ifaces__srv__DesData_Request __attribute__((deprecated))
#else
# define DEPRECATED__service_ifaces__srv__DesData_Request __declspec(deprecated)
#endif

namespace service_ifaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct DesData_Request_
{
  using Type = DesData_Request_<ContainerAllocator>;

  explicit DesData_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->des_lat = 0.0;
      this->des_long = 0.0;
    }
  }

  explicit DesData_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->des_lat = 0.0;
      this->des_long = 0.0;
    }
  }

  // field types and members
  using _des_lat_type =
    double;
  _des_lat_type des_lat;
  using _des_long_type =
    double;
  _des_long_type des_long;

  // setters for named parameter idiom
  Type & set__des_lat(
    const double & _arg)
  {
    this->des_lat = _arg;
    return *this;
  }
  Type & set__des_long(
    const double & _arg)
  {
    this->des_long = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    service_ifaces::srv::DesData_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const service_ifaces::srv::DesData_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<service_ifaces::srv::DesData_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<service_ifaces::srv::DesData_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      service_ifaces::srv::DesData_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<service_ifaces::srv::DesData_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      service_ifaces::srv::DesData_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<service_ifaces::srv::DesData_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<service_ifaces::srv::DesData_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<service_ifaces::srv::DesData_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__service_ifaces__srv__DesData_Request
    std::shared_ptr<service_ifaces::srv::DesData_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__service_ifaces__srv__DesData_Request
    std::shared_ptr<service_ifaces::srv::DesData_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DesData_Request_ & other) const
  {
    if (this->des_lat != other.des_lat) {
      return false;
    }
    if (this->des_long != other.des_long) {
      return false;
    }
    return true;
  }
  bool operator!=(const DesData_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DesData_Request_

// alias to use template instance with default allocator
using DesData_Request =
  service_ifaces::srv::DesData_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace service_ifaces


#ifndef _WIN32
# define DEPRECATED__service_ifaces__srv__DesData_Response __attribute__((deprecated))
#else
# define DEPRECATED__service_ifaces__srv__DesData_Response __declspec(deprecated)
#endif

namespace service_ifaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct DesData_Response_
{
  using Type = DesData_Response_<ContainerAllocator>;

  explicit DesData_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->result_fser = "";
    }
  }

  explicit DesData_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result_fser(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->result_fser = "";
    }
  }

  // field types and members
  using _result_fser_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _result_fser_type result_fser;

  // setters for named parameter idiom
  Type & set__result_fser(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->result_fser = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    service_ifaces::srv::DesData_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const service_ifaces::srv::DesData_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<service_ifaces::srv::DesData_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<service_ifaces::srv::DesData_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      service_ifaces::srv::DesData_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<service_ifaces::srv::DesData_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      service_ifaces::srv::DesData_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<service_ifaces::srv::DesData_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<service_ifaces::srv::DesData_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<service_ifaces::srv::DesData_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__service_ifaces__srv__DesData_Response
    std::shared_ptr<service_ifaces::srv::DesData_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__service_ifaces__srv__DesData_Response
    std::shared_ptr<service_ifaces::srv::DesData_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DesData_Response_ & other) const
  {
    if (this->result_fser != other.result_fser) {
      return false;
    }
    return true;
  }
  bool operator!=(const DesData_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DesData_Response_

// alias to use template instance with default allocator
using DesData_Response =
  service_ifaces::srv::DesData_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace service_ifaces

namespace service_ifaces
{

namespace srv
{

struct DesData
{
  using Request = service_ifaces::srv::DesData_Request;
  using Response = service_ifaces::srv::DesData_Response;
};

}  // namespace srv

}  // namespace service_ifaces

#endif  // SERVICE_IFACES__SRV__DETAIL__DES_DATA__STRUCT_HPP_
