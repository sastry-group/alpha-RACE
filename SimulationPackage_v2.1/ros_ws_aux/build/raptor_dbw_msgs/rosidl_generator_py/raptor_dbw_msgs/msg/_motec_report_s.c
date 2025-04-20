// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from raptor_dbw_msgs:msg/MotecReport.idl
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
#include "raptor_dbw_msgs/msg/detail/motec_report__struct.h"
#include "raptor_dbw_msgs/msg/detail/motec_report__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool raptor_dbw_msgs__msg__motec_report__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[46];
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
    assert(strncmp("raptor_dbw_msgs.msg._motec_report.MotecReport", full_classname_dest, 45) == 0);
  }
  raptor_dbw_msgs__msg__MotecReport * ros_message = _ros_message;
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
  {  // engine_speed
    PyObject * field = PyObject_GetAttrString(_pymsg, "engine_speed");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->engine_speed = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // inlet_manifold_pressure
    PyObject * field = PyObject_GetAttrString(_pymsg, "inlet_manifold_pressure");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->inlet_manifold_pressure = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // inlet_air_temperature
    PyObject * field = PyObject_GetAttrString(_pymsg, "inlet_air_temperature");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->inlet_air_temperature = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // throttle_position
    PyObject * field = PyObject_GetAttrString(_pymsg, "throttle_position");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->throttle_position = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // fuel_pressure_sensor
    PyObject * field = PyObject_GetAttrString(_pymsg, "fuel_pressure_sensor");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->fuel_pressure_sensor = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // engine_efficiency
    PyObject * field = PyObject_GetAttrString(_pymsg, "engine_efficiency");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->engine_efficiency = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // throttle_pedal
    PyObject * field = PyObject_GetAttrString(_pymsg, "throttle_pedal");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->throttle_pedal = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // engine_load
    PyObject * field = PyObject_GetAttrString(_pymsg, "engine_load");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->engine_load = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // engine_oil_temperature
    PyObject * field = PyObject_GetAttrString(_pymsg, "engine_oil_temperature");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->engine_oil_temperature = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // ambient_temperature
    PyObject * field = PyObject_GetAttrString(_pymsg, "ambient_temperature");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->ambient_temperature = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // engine_oil_pressure
    PyObject * field = PyObject_GetAttrString(_pymsg, "engine_oil_pressure");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->engine_oil_pressure = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // boost_pressure
    PyObject * field = PyObject_GetAttrString(_pymsg, "boost_pressure");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->boost_pressure = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // boost_aim
    PyObject * field = PyObject_GetAttrString(_pymsg, "boost_aim");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->boost_aim = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // wheel_speed_front_left
    PyObject * field = PyObject_GetAttrString(_pymsg, "wheel_speed_front_left");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->wheel_speed_front_left = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // wheel_speed_front_right
    PyObject * field = PyObject_GetAttrString(_pymsg, "wheel_speed_front_right");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->wheel_speed_front_right = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // wheel_speed_rear_left
    PyObject * field = PyObject_GetAttrString(_pymsg, "wheel_speed_rear_left");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->wheel_speed_rear_left = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // wheel_speed_rear_right
    PyObject * field = PyObject_GetAttrString(_pymsg, "wheel_speed_rear_right");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->wheel_speed_rear_right = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // engine_run_time
    PyObject * field = PyObject_GetAttrString(_pymsg, "engine_run_time");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->engine_run_time = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // ecu_up_time
    PyObject * field = PyObject_GetAttrString(_pymsg, "ecu_up_time");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->ecu_up_time = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // ecu_battery_voltage
    PyObject * field = PyObject_GetAttrString(_pymsg, "ecu_battery_voltage");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->ecu_battery_voltage = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // warning_source
    PyObject * field = PyObject_GetAttrString(_pymsg, "warning_source");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->warning_source = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // coolant_temperature
    PyObject * field = PyObject_GetAttrString(_pymsg, "coolant_temperature");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->coolant_temperature = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // coolant_temperature_warning
    PyObject * field = PyObject_GetAttrString(_pymsg, "coolant_temperature_warning");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->coolant_temperature_warning = (Py_True == field);
    Py_DECREF(field);
  }
  {  // coolant_pressure_warning
    PyObject * field = PyObject_GetAttrString(_pymsg, "coolant_pressure_warning");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->coolant_pressure_warning = (Py_True == field);
    Py_DECREF(field);
  }
  {  // engine_speed_warning
    PyObject * field = PyObject_GetAttrString(_pymsg, "engine_speed_warning");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->engine_speed_warning = (Py_True == field);
    Py_DECREF(field);
  }
  {  // engine_oil_temperature_warning
    PyObject * field = PyObject_GetAttrString(_pymsg, "engine_oil_temperature_warning");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->engine_oil_temperature_warning = (Py_True == field);
    Py_DECREF(field);
  }
  {  // engine_oil_pressure_warning
    PyObject * field = PyObject_GetAttrString(_pymsg, "engine_oil_pressure_warning");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->engine_oil_pressure_warning = (Py_True == field);
    Py_DECREF(field);
  }
  {  // crankcase_pressure_warning
    PyObject * field = PyObject_GetAttrString(_pymsg, "crankcase_pressure_warning");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->crankcase_pressure_warning = (Py_True == field);
    Py_DECREF(field);
  }
  {  // fuel_pressure_warning
    PyObject * field = PyObject_GetAttrString(_pymsg, "fuel_pressure_warning");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->fuel_pressure_warning = (Py_True == field);
    Py_DECREF(field);
  }
  {  // fuel_used
    PyObject * field = PyObject_GetAttrString(_pymsg, "fuel_used");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->fuel_used = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // knock_warning
    PyObject * field = PyObject_GetAttrString(_pymsg, "knock_warning");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->knock_warning = (Py_True == field);
    Py_DECREF(field);
  }
  {  // engine_state
    PyObject * field = PyObject_GetAttrString(_pymsg, "engine_state");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->engine_state = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // fuel_pump_state
    PyObject * field = PyObject_GetAttrString(_pymsg, "fuel_pump_state");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->fuel_pump_state = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // launch_state
    PyObject * field = PyObject_GetAttrString(_pymsg, "launch_state");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->launch_state = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // boost_aim_state
    PyObject * field = PyObject_GetAttrString(_pymsg, "boost_aim_state");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->boost_aim_state = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // knock_state
    PyObject * field = PyObject_GetAttrString(_pymsg, "knock_state");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->knock_state = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // throttle_aim_state
    PyObject * field = PyObject_GetAttrString(_pymsg, "throttle_aim_state");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->throttle_aim_state = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // engine_speed_reference_state
    PyObject * field = PyObject_GetAttrString(_pymsg, "engine_speed_reference_state");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->engine_speed_reference_state = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // gear
    PyObject * field = PyObject_GetAttrString(_pymsg, "gear");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->gear = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // engine_speed_limit_state
    PyObject * field = PyObject_GetAttrString(_pymsg, "engine_speed_limit_state");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->engine_speed_limit_state = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // engine_run_time_total
    PyObject * field = PyObject_GetAttrString(_pymsg, "engine_run_time_total");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->engine_run_time_total = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // driver_switch_1
    PyObject * field = PyObject_GetAttrString(_pymsg, "driver_switch_1");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->driver_switch_1 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // driver_switch_2
    PyObject * field = PyObject_GetAttrString(_pymsg, "driver_switch_2");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->driver_switch_2 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // driver_switch_3
    PyObject * field = PyObject_GetAttrString(_pymsg, "driver_switch_3");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->driver_switch_3 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // exhaust_lambda
    PyObject * field = PyObject_GetAttrString(_pymsg, "exhaust_lambda");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->exhaust_lambda = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // fuel_pressure_direct_b1
    PyObject * field = PyObject_GetAttrString(_pymsg, "fuel_pressure_direct_b1");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->fuel_pressure_direct_b1 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // fuel_pressure_direct_b1_aim
    PyObject * field = PyObject_GetAttrString(_pymsg, "fuel_pressure_direct_b1_aim");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->fuel_pressure_direct_b1_aim = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // fuel_pressure_direct_b1_control
    PyObject * field = PyObject_GetAttrString(_pymsg, "fuel_pressure_direct_b1_control");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->fuel_pressure_direct_b1_control = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // vehicle_speed
    PyObject * field = PyObject_GetAttrString(_pymsg, "vehicle_speed");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->vehicle_speed = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // gearratio
    PyObject * field = PyObject_GetAttrString(_pymsg, "gearratio");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->gearratio = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // gear_100hz
    PyObject * field = PyObject_GetAttrString(_pymsg, "gear_100hz");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->gear_100hz = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // gear_shift
    PyObject * field = PyObject_GetAttrString(_pymsg, "gear_shift");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->gear_shift = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // gear_shift_req
    PyObject * field = PyObject_GetAttrString(_pymsg, "gear_shift_req");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->gear_shift_req = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // torque_wheels
    PyObject * field = PyObject_GetAttrString(_pymsg, "torque_wheels");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->torque_wheels = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // fr_wheel_speed_sensor_fault
    PyObject * field = PyObject_GetAttrString(_pymsg, "fr_wheel_speed_sensor_fault");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->fr_wheel_speed_sensor_fault = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // fl_wheel_speed_sensor_fault
    PyObject * field = PyObject_GetAttrString(_pymsg, "fl_wheel_speed_sensor_fault");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->fl_wheel_speed_sensor_fault = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // rr_wheel_speed_sensor_fault
    PyObject * field = PyObject_GetAttrString(_pymsg, "rr_wheel_speed_sensor_fault");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->rr_wheel_speed_sensor_fault = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // rl_wheel_speed_sensor_fault
    PyObject * field = PyObject_GetAttrString(_pymsg, "rl_wheel_speed_sensor_fault");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->rl_wheel_speed_sensor_fault = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * raptor_dbw_msgs__msg__motec_report__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of MotecReport */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("raptor_dbw_msgs.msg._motec_report");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "MotecReport");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  raptor_dbw_msgs__msg__MotecReport * ros_message = (raptor_dbw_msgs__msg__MotecReport *)raw_ros_message;
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
  {  // engine_speed
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->engine_speed);
    {
      int rc = PyObject_SetAttrString(_pymessage, "engine_speed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // inlet_manifold_pressure
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->inlet_manifold_pressure);
    {
      int rc = PyObject_SetAttrString(_pymessage, "inlet_manifold_pressure", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // inlet_air_temperature
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->inlet_air_temperature);
    {
      int rc = PyObject_SetAttrString(_pymessage, "inlet_air_temperature", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // throttle_position
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->throttle_position);
    {
      int rc = PyObject_SetAttrString(_pymessage, "throttle_position", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // fuel_pressure_sensor
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->fuel_pressure_sensor);
    {
      int rc = PyObject_SetAttrString(_pymessage, "fuel_pressure_sensor", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // engine_efficiency
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->engine_efficiency);
    {
      int rc = PyObject_SetAttrString(_pymessage, "engine_efficiency", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // throttle_pedal
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->throttle_pedal);
    {
      int rc = PyObject_SetAttrString(_pymessage, "throttle_pedal", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // engine_load
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->engine_load);
    {
      int rc = PyObject_SetAttrString(_pymessage, "engine_load", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // engine_oil_temperature
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->engine_oil_temperature);
    {
      int rc = PyObject_SetAttrString(_pymessage, "engine_oil_temperature", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ambient_temperature
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->ambient_temperature);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ambient_temperature", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // engine_oil_pressure
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->engine_oil_pressure);
    {
      int rc = PyObject_SetAttrString(_pymessage, "engine_oil_pressure", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // boost_pressure
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->boost_pressure);
    {
      int rc = PyObject_SetAttrString(_pymessage, "boost_pressure", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // boost_aim
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->boost_aim);
    {
      int rc = PyObject_SetAttrString(_pymessage, "boost_aim", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // wheel_speed_front_left
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->wheel_speed_front_left);
    {
      int rc = PyObject_SetAttrString(_pymessage, "wheel_speed_front_left", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // wheel_speed_front_right
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->wheel_speed_front_right);
    {
      int rc = PyObject_SetAttrString(_pymessage, "wheel_speed_front_right", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // wheel_speed_rear_left
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->wheel_speed_rear_left);
    {
      int rc = PyObject_SetAttrString(_pymessage, "wheel_speed_rear_left", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // wheel_speed_rear_right
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->wheel_speed_rear_right);
    {
      int rc = PyObject_SetAttrString(_pymessage, "wheel_speed_rear_right", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // engine_run_time
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->engine_run_time);
    {
      int rc = PyObject_SetAttrString(_pymessage, "engine_run_time", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ecu_up_time
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->ecu_up_time);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ecu_up_time", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ecu_battery_voltage
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->ecu_battery_voltage);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ecu_battery_voltage", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // warning_source
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->warning_source);
    {
      int rc = PyObject_SetAttrString(_pymessage, "warning_source", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // coolant_temperature
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->coolant_temperature);
    {
      int rc = PyObject_SetAttrString(_pymessage, "coolant_temperature", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // coolant_temperature_warning
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->coolant_temperature_warning ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "coolant_temperature_warning", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // coolant_pressure_warning
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->coolant_pressure_warning ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "coolant_pressure_warning", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // engine_speed_warning
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->engine_speed_warning ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "engine_speed_warning", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // engine_oil_temperature_warning
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->engine_oil_temperature_warning ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "engine_oil_temperature_warning", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // engine_oil_pressure_warning
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->engine_oil_pressure_warning ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "engine_oil_pressure_warning", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // crankcase_pressure_warning
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->crankcase_pressure_warning ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "crankcase_pressure_warning", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // fuel_pressure_warning
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->fuel_pressure_warning ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "fuel_pressure_warning", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // fuel_used
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->fuel_used);
    {
      int rc = PyObject_SetAttrString(_pymessage, "fuel_used", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // knock_warning
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->knock_warning ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "knock_warning", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // engine_state
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->engine_state);
    {
      int rc = PyObject_SetAttrString(_pymessage, "engine_state", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // fuel_pump_state
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->fuel_pump_state);
    {
      int rc = PyObject_SetAttrString(_pymessage, "fuel_pump_state", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // launch_state
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->launch_state);
    {
      int rc = PyObject_SetAttrString(_pymessage, "launch_state", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // boost_aim_state
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->boost_aim_state);
    {
      int rc = PyObject_SetAttrString(_pymessage, "boost_aim_state", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // knock_state
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->knock_state);
    {
      int rc = PyObject_SetAttrString(_pymessage, "knock_state", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // throttle_aim_state
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->throttle_aim_state);
    {
      int rc = PyObject_SetAttrString(_pymessage, "throttle_aim_state", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // engine_speed_reference_state
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->engine_speed_reference_state);
    {
      int rc = PyObject_SetAttrString(_pymessage, "engine_speed_reference_state", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gear
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->gear);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gear", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // engine_speed_limit_state
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->engine_speed_limit_state);
    {
      int rc = PyObject_SetAttrString(_pymessage, "engine_speed_limit_state", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // engine_run_time_total
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->engine_run_time_total);
    {
      int rc = PyObject_SetAttrString(_pymessage, "engine_run_time_total", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // driver_switch_1
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->driver_switch_1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "driver_switch_1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // driver_switch_2
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->driver_switch_2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "driver_switch_2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // driver_switch_3
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->driver_switch_3);
    {
      int rc = PyObject_SetAttrString(_pymessage, "driver_switch_3", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // exhaust_lambda
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->exhaust_lambda);
    {
      int rc = PyObject_SetAttrString(_pymessage, "exhaust_lambda", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // fuel_pressure_direct_b1
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->fuel_pressure_direct_b1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "fuel_pressure_direct_b1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // fuel_pressure_direct_b1_aim
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->fuel_pressure_direct_b1_aim);
    {
      int rc = PyObject_SetAttrString(_pymessage, "fuel_pressure_direct_b1_aim", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // fuel_pressure_direct_b1_control
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->fuel_pressure_direct_b1_control);
    {
      int rc = PyObject_SetAttrString(_pymessage, "fuel_pressure_direct_b1_control", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vehicle_speed
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->vehicle_speed);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vehicle_speed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gearratio
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->gearratio);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gearratio", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gear_100hz
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->gear_100hz);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gear_100hz", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gear_shift
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->gear_shift);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gear_shift", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gear_shift_req
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->gear_shift_req);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gear_shift_req", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // torque_wheels
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->torque_wheels);
    {
      int rc = PyObject_SetAttrString(_pymessage, "torque_wheels", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // fr_wheel_speed_sensor_fault
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->fr_wheel_speed_sensor_fault);
    {
      int rc = PyObject_SetAttrString(_pymessage, "fr_wheel_speed_sensor_fault", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // fl_wheel_speed_sensor_fault
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->fl_wheel_speed_sensor_fault);
    {
      int rc = PyObject_SetAttrString(_pymessage, "fl_wheel_speed_sensor_fault", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rr_wheel_speed_sensor_fault
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->rr_wheel_speed_sensor_fault);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rr_wheel_speed_sensor_fault", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rl_wheel_speed_sensor_fault
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->rl_wheel_speed_sensor_fault);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rl_wheel_speed_sensor_fault", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
