# This message contains debugging information for the NPC Controller

# Long Control Vehicle States
float64 desired_acceleration
float64 desired_velocity
float64 current_acceleration
float64 current_velocity
float64 error_acceleration
float64 error_velocity


float64 output_throttle
float64 output_brake

# PID Terms for Acc, Throttle, and Brake
float64 vel_p
float64 vel_i
float64 vel_d
float64 thr_p
float64 thr_i
float64 thr_d
float64 brk_p
float64 brk_i
float64 brk_d

# Deadband Terms
float64 throttle_deadband
float64 brake_deadband
float64 max_throttle

# Lap State Machine
uint8 ct_state
uint8 vehicle_flag
uint8 track_flag
uint8 lap_state
uint8 track_loc
float64 center_s
float64 pit_s

# Drive by Wire State Machine
uint8 sys_state