// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from raptor_dbw_msgs:msg/OtherActuatorsReport.idl
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
#include "raptor_dbw_msgs/msg/detail/other_actuators_report__struct.h"
#include "raptor_dbw_msgs/msg/detail/other_actuators_report__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);
bool raptor_dbw_msgs__msg__turn_signal__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * raptor_dbw_msgs__msg__turn_signal__convert_to_py(void * raw_ros_message);
bool raptor_dbw_msgs__msg__door_state__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * raptor_dbw_msgs__msg__door_state__convert_to_py(void * raw_ros_message);
bool raptor_dbw_msgs__msg__high_beam_state__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * raptor_dbw_msgs__msg__high_beam_state__convert_to_py(void * raw_ros_message);
bool raptor_dbw_msgs__msg__wiper_front__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * raptor_dbw_msgs__msg__wiper_front__convert_to_py(void * raw_ros_message);
bool raptor_dbw_msgs__msg__wiper_rear__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * raptor_dbw_msgs__msg__wiper_rear__convert_to_py(void * raw_ros_message);
bool raptor_dbw_msgs__msg__ignition__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * raptor_dbw_msgs__msg__ignition__convert_to_py(void * raw_ros_message);
bool raptor_dbw_msgs__msg__door_state__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * raptor_dbw_msgs__msg__door_state__convert_to_py(void * raw_ros_message);
bool raptor_dbw_msgs__msg__door_state__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * raptor_dbw_msgs__msg__door_state__convert_to_py(void * raw_ros_message);
bool raptor_dbw_msgs__msg__horn_state__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * raptor_dbw_msgs__msg__horn_state__convert_to_py(void * raw_ros_message);
bool raptor_dbw_msgs__msg__low_beam__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * raptor_dbw_msgs__msg__low_beam__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool raptor_dbw_msgs__msg__other_actuators_report__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[65];
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
    assert(strncmp("raptor_dbw_msgs.msg._other_actuators_report.OtherActuatorsReport", full_classname_dest, 64) == 0);
  }
  raptor_dbw_msgs__msg__OtherActuatorsReport * ros_message = _ros_message;
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
  {  // turn_signal_state
    PyObject * field = PyObject_GetAttrString(_pymsg, "turn_signal_state");
    if (!field) {
      return false;
    }
    if (!raptor_dbw_msgs__msg__turn_signal__convert_from_py(field, &ros_message->turn_signal_state)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // right_rear_door_state
    PyObject * field = PyObject_GetAttrString(_pymsg, "right_rear_door_state");
    if (!field) {
      return false;
    }
    if (!raptor_dbw_msgs__msg__door_state__convert_from_py(field, &ros_message->right_rear_door_state)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // high_beam_state
    PyObject * field = PyObject_GetAttrString(_pymsg, "high_beam_state");
    if (!field) {
      return false;
    }
    if (!raptor_dbw_msgs__msg__high_beam_state__convert_from_py(field, &ros_message->high_beam_state)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // front_wiper_state
    PyObject * field = PyObject_GetAttrString(_pymsg, "front_wiper_state");
    if (!field) {
      return false;
    }
    if (!raptor_dbw_msgs__msg__wiper_front__convert_from_py(field, &ros_message->front_wiper_state)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // rear_wiper_state
    PyObject * field = PyObject_GetAttrString(_pymsg, "rear_wiper_state");
    if (!field) {
      return false;
    }
    if (!raptor_dbw_msgs__msg__wiper_rear__convert_from_py(field, &ros_message->rear_wiper_state)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // ignition_state
    PyObject * field = PyObject_GetAttrString(_pymsg, "ignition_state");
    if (!field) {
      return false;
    }
    if (!raptor_dbw_msgs__msg__ignition__convert_from_py(field, &ros_message->ignition_state)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // left_rear_door_state
    PyObject * field = PyObject_GetAttrString(_pymsg, "left_rear_door_state");
    if (!field) {
      return false;
    }
    if (!raptor_dbw_msgs__msg__door_state__convert_from_py(field, &ros_message->left_rear_door_state)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // liftgate_door_state
    PyObject * field = PyObject_GetAttrString(_pymsg, "liftgate_door_state");
    if (!field) {
      return false;
    }
    if (!raptor_dbw_msgs__msg__door_state__convert_from_py(field, &ros_message->liftgate_door_state)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // horn_state
    PyObject * field = PyObject_GetAttrString(_pymsg, "horn_state");
    if (!field) {
      return false;
    }
    if (!raptor_dbw_msgs__msg__horn_state__convert_from_py(field, &ros_message->horn_state)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // low_beam_state
    PyObject * field = PyObject_GetAttrString(_pymsg, "low_beam_state");
    if (!field) {
      return false;
    }
    if (!raptor_dbw_msgs__msg__low_beam__convert_from_py(field, &ros_message->low_beam_state)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // rolling_counter
    PyObject * field = PyObject_GetAttrString(_pymsg, "rolling_counter");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->rolling_counter = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * raptor_dbw_msgs__msg__other_actuators_report__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of OtherActuatorsReport */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("raptor_dbw_msgs.msg._other_actuators_report");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "OtherActuatorsReport");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  raptor_dbw_msgs__msg__OtherActuatorsReport * ros_message = (raptor_dbw_msgs__msg__OtherActuatorsReport *)raw_ros_message;
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
  {  // turn_signal_state
    PyObject * field = NULL;
    field = raptor_dbw_msgs__msg__turn_signal__convert_to_py(&ros_message->turn_signal_state);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "turn_signal_state", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // right_rear_door_state
    PyObject * field = NULL;
    field = raptor_dbw_msgs__msg__door_state__convert_to_py(&ros_message->right_rear_door_state);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "right_rear_door_state", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // high_beam_state
    PyObject * field = NULL;
    field = raptor_dbw_msgs__msg__high_beam_state__convert_to_py(&ros_message->high_beam_state);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "high_beam_state", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // front_wiper_state
    PyObject * field = NULL;
    field = raptor_dbw_msgs__msg__wiper_front__convert_to_py(&ros_message->front_wiper_state);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "front_wiper_state", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rear_wiper_state
    PyObject * field = NULL;
    field = raptor_dbw_msgs__msg__wiper_rear__convert_to_py(&ros_message->rear_wiper_state);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "rear_wiper_state", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ignition_state
    PyObject * field = NULL;
    field = raptor_dbw_msgs__msg__ignition__convert_to_py(&ros_message->ignition_state);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "ignition_state", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // left_rear_door_state
    PyObject * field = NULL;
    field = raptor_dbw_msgs__msg__door_state__convert_to_py(&ros_message->left_rear_door_state);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "left_rear_door_state", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // liftgate_door_state
    PyObject * field = NULL;
    field = raptor_dbw_msgs__msg__door_state__convert_to_py(&ros_message->liftgate_door_state);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "liftgate_door_state", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // horn_state
    PyObject * field = NULL;
    field = raptor_dbw_msgs__msg__horn_state__convert_to_py(&ros_message->horn_state);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "horn_state", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // low_beam_state
    PyObject * field = NULL;
    field = raptor_dbw_msgs__msg__low_beam__convert_to_py(&ros_message->low_beam_state);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "low_beam_state", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rolling_counter
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->rolling_counter);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rolling_counter", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
