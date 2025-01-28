// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from rovercon_msgs:msg/Rocon.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "rovercon_msgs/msg/detail/rocon__struct.h"
#include "rovercon_msgs/msg/detail/rocon__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool rovercon_msgs__msg__rocon__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[31];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("rovercon_msgs.msg._rocon.Rocon", full_classname_dest, 30) == 0);
  }
  rovercon_msgs__msg__Rocon * ros_message = _ros_message;
  {  // fdr_msg
    PyObject * field = PyObject_GetAttrString(_pymsg, "fdr_msg");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->fdr_msg = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // ro_ctrl_msg
    PyObject * field = PyObject_GetAttrString(_pymsg, "ro_ctrl_msg");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->ro_ctrl_msg = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // spd_msg
    PyObject * field = PyObject_GetAttrString(_pymsg, "spd_msg");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->spd_msg = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // bdr_msg
    PyObject * field = PyObject_GetAttrString(_pymsg, "bdr_msg");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->bdr_msg = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * rovercon_msgs__msg__rocon__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Rocon */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("rovercon_msgs.msg._rocon");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Rocon");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  rovercon_msgs__msg__Rocon * ros_message = (rovercon_msgs__msg__Rocon *)raw_ros_message;
  {  // fdr_msg
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->fdr_msg);
    {
      int rc = PyObject_SetAttrString(_pymessage, "fdr_msg", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ro_ctrl_msg
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->ro_ctrl_msg);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ro_ctrl_msg", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // spd_msg
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->spd_msg);
    {
      int rc = PyObject_SetAttrString(_pymessage, "spd_msg", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // bdr_msg
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->bdr_msg);
    {
      int rc = PyObject_SetAttrString(_pymessage, "bdr_msg", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
