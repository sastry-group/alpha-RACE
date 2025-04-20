// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from my_custom_msgs:msg/PolicyParams.idl
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
#include "my_custom_msgs/msg/detail/policy_params__struct.h"
#include "my_custom_msgs/msg/detail/policy_params__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool my_custom_msgs__msg__policy_params__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[47];
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
    assert(strncmp("my_custom_msgs.msg._policy_params.PolicyParams", full_classname_dest, 46) == 0);
  }
  my_custom_msgs__msg__PolicyParams * ros_message = _ros_message;
  {  // sf1
    PyObject * field = PyObject_GetAttrString(_pymsg, "sf1");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->sf1 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // sf2
    PyObject * field = PyObject_GetAttrString(_pymsg, "sf2");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->sf2 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // speed_factor
    PyObject * field = PyObject_GetAttrString(_pymsg, "speed_factor");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->speed_factor = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // lookahead_factor
    PyObject * field = PyObject_GetAttrString(_pymsg, "lookahead_factor");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->lookahead_factor = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // blocking_factor
    PyObject * field = PyObject_GetAttrString(_pymsg, "blocking_factor");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->blocking_factor = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * my_custom_msgs__msg__policy_params__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of PolicyParams */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("my_custom_msgs.msg._policy_params");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "PolicyParams");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  my_custom_msgs__msg__PolicyParams * ros_message = (my_custom_msgs__msg__PolicyParams *)raw_ros_message;
  {  // sf1
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->sf1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "sf1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // sf2
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->sf2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "sf2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // speed_factor
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->speed_factor);
    {
      int rc = PyObject_SetAttrString(_pymessage, "speed_factor", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lookahead_factor
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->lookahead_factor);
    {
      int rc = PyObject_SetAttrString(_pymessage, "lookahead_factor", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // blocking_factor
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->blocking_factor);
    {
      int rc = PyObject_SetAttrString(_pymessage, "blocking_factor", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
