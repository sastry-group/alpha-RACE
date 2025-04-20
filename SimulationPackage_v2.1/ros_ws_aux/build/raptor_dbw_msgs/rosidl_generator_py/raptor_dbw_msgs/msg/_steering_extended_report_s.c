// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from raptor_dbw_msgs:msg/SteeringExtendedReport.idl
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
#include "raptor_dbw_msgs/msg/detail/steering_extended_report__struct.h"
#include "raptor_dbw_msgs/msg/detail/steering_extended_report__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool raptor_dbw_msgs__msg__steering_extended_report__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[69];
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
    assert(strncmp("raptor_dbw_msgs.msg._steering_extended_report.SteeringExtendedReport", full_classname_dest, 68) == 0);
  }
  raptor_dbw_msgs__msg__SteeringExtendedReport * ros_message = _ros_message;
  {  // header
    PyObject * field = PyObject_GetAttrString(_pymsg, "header");
    if (!field) {
      return false;
    }
    if (!std_msgs__msg__header__convert_from_py(field, &ros_message->header)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // steering_motor_ang_1
    PyObject * field = PyObject_GetAttrString(_pymsg, "steering_motor_ang_1");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->steering_motor_ang_1 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // steering_motor_ang_2
    PyObject * field = PyObject_GetAttrString(_pymsg, "steering_motor_ang_2");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->steering_motor_ang_2 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // steering_motor_ang_3
    PyObject * field = PyObject_GetAttrString(_pymsg, "steering_motor_ang_3");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->steering_motor_ang_3 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * raptor_dbw_msgs__msg__steering_extended_report__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of SteeringExtendedReport */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("raptor_dbw_msgs.msg._steering_extended_report");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "SteeringExtendedReport");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  raptor_dbw_msgs__msg__SteeringExtendedReport * ros_message = (raptor_dbw_msgs__msg__SteeringExtendedReport *)raw_ros_message;
  {  // header
    PyObject * field = NULL;
    field = std_msgs__msg__header__convert_to_py(&ros_message->header);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "header", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // steering_motor_ang_1
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->steering_motor_ang_1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "steering_motor_ang_1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // steering_motor_ang_2
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->steering_motor_ang_2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "steering_motor_ang_2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // steering_motor_ang_3
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->steering_motor_ang_3);
    {
      int rc = PyObject_SetAttrString(_pymessage, "steering_motor_ang_3", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
