// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from novatel_oem7_msgs:msg/INSSTDEV.idl
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
#include "novatel_oem7_msgs/msg/detail/insstdev__struct.h"
#include "novatel_oem7_msgs/msg/detail/insstdev__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);
bool novatel_oem7_msgs__msg__oem7_header__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * novatel_oem7_msgs__msg__oem7_header__convert_to_py(void * raw_ros_message);
bool novatel_oem7_msgs__msg__ins_extended_solution_status__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * novatel_oem7_msgs__msg__ins_extended_solution_status__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool novatel_oem7_msgs__msg__insstdev__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[41];
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
    assert(strncmp("novatel_oem7_msgs.msg._insstdev.INSSTDEV", full_classname_dest, 40) == 0);
  }
  novatel_oem7_msgs__msg__INSSTDEV * ros_message = _ros_message;
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
  {  // nov_header
    PyObject * field = PyObject_GetAttrString(_pymsg, "nov_header");
    if (!field) {
      return false;
    }
    if (!novatel_oem7_msgs__msg__oem7_header__convert_from_py(field, &ros_message->nov_header)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // latitude_stdev
    PyObject * field = PyObject_GetAttrString(_pymsg, "latitude_stdev");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->latitude_stdev = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // longitude_stdev
    PyObject * field = PyObject_GetAttrString(_pymsg, "longitude_stdev");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->longitude_stdev = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // height_stdev
    PyObject * field = PyObject_GetAttrString(_pymsg, "height_stdev");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->height_stdev = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // north_velocity_stdev
    PyObject * field = PyObject_GetAttrString(_pymsg, "north_velocity_stdev");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->north_velocity_stdev = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // east_velocity_stdev
    PyObject * field = PyObject_GetAttrString(_pymsg, "east_velocity_stdev");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->east_velocity_stdev = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // up_velocity_stdev
    PyObject * field = PyObject_GetAttrString(_pymsg, "up_velocity_stdev");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->up_velocity_stdev = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // roll_stdev
    PyObject * field = PyObject_GetAttrString(_pymsg, "roll_stdev");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->roll_stdev = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // pitch_stdev
    PyObject * field = PyObject_GetAttrString(_pymsg, "pitch_stdev");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->pitch_stdev = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // azimuth_stdev
    PyObject * field = PyObject_GetAttrString(_pymsg, "azimuth_stdev");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->azimuth_stdev = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // ext_sol_status
    PyObject * field = PyObject_GetAttrString(_pymsg, "ext_sol_status");
    if (!field) {
      return false;
    }
    if (!novatel_oem7_msgs__msg__ins_extended_solution_status__convert_from_py(field, &ros_message->ext_sol_status)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // time_since_last_update
    PyObject * field = PyObject_GetAttrString(_pymsg, "time_since_last_update");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->time_since_last_update = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // reserved1
    PyObject * field = PyObject_GetAttrString(_pymsg, "reserved1");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->reserved1 = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // reserved2
    PyObject * field = PyObject_GetAttrString(_pymsg, "reserved2");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->reserved2 = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // reserved3
    PyObject * field = PyObject_GetAttrString(_pymsg, "reserved3");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->reserved3 = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * novatel_oem7_msgs__msg__insstdev__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of INSSTDEV */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("novatel_oem7_msgs.msg._insstdev");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "INSSTDEV");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  novatel_oem7_msgs__msg__INSSTDEV * ros_message = (novatel_oem7_msgs__msg__INSSTDEV *)raw_ros_message;
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
  {  // nov_header
    PyObject * field = NULL;
    field = novatel_oem7_msgs__msg__oem7_header__convert_to_py(&ros_message->nov_header);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "nov_header", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // latitude_stdev
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->latitude_stdev);
    {
      int rc = PyObject_SetAttrString(_pymessage, "latitude_stdev", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // longitude_stdev
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->longitude_stdev);
    {
      int rc = PyObject_SetAttrString(_pymessage, "longitude_stdev", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // height_stdev
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->height_stdev);
    {
      int rc = PyObject_SetAttrString(_pymessage, "height_stdev", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // north_velocity_stdev
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->north_velocity_stdev);
    {
      int rc = PyObject_SetAttrString(_pymessage, "north_velocity_stdev", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // east_velocity_stdev
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->east_velocity_stdev);
    {
      int rc = PyObject_SetAttrString(_pymessage, "east_velocity_stdev", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // up_velocity_stdev
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->up_velocity_stdev);
    {
      int rc = PyObject_SetAttrString(_pymessage, "up_velocity_stdev", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // roll_stdev
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->roll_stdev);
    {
      int rc = PyObject_SetAttrString(_pymessage, "roll_stdev", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pitch_stdev
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->pitch_stdev);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pitch_stdev", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // azimuth_stdev
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->azimuth_stdev);
    {
      int rc = PyObject_SetAttrString(_pymessage, "azimuth_stdev", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ext_sol_status
    PyObject * field = NULL;
    field = novatel_oem7_msgs__msg__ins_extended_solution_status__convert_to_py(&ros_message->ext_sol_status);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "ext_sol_status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // time_since_last_update
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->time_since_last_update);
    {
      int rc = PyObject_SetAttrString(_pymessage, "time_since_last_update", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // reserved1
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->reserved1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "reserved1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // reserved2
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->reserved2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "reserved2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // reserved3
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->reserved3);
    {
      int rc = PyObject_SetAttrString(_pymessage, "reserved3", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
