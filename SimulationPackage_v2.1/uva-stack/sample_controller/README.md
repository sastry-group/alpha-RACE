# Sample Controller

## Requirements
- ROS2 Humble
- Ubuntu 22.04

Can also be run using the provided dockerfile.

## Building the Dockerfile

Make sure your workspace looks like the following 

```
sample_controller
├── autoverse.sh
├── defaults.yaml
├── docker-compose.yml
├── dspace.sh
├── README.md
├── run_autoverse.sh
├── sample_controller.Dockerfile
└── src
```

From the `sample_controller` root directory, run `docker compose build iac`. 

## Controller Details
Currently the controller has been tested with Autonoma's Autoverse simulator, which uses a similar interface to TIERIV [AWSIM](https://autonomalabs.github.io/AWSIM/RacingSim/ROS2Interface/).

The current controller needs this exact interface to work correctly, including the `can_msgs/Frame` topics. However, if the raptor topics for input and output listed here are published through ROS2, the controller will work. This can be adjusted to suit the iteration of the simulator.

The raptor topics are necessary to operate the drive by wire state machine that takes the AV2X through it's actuator checks, and software checks with each team. All relevant custom messages are included in the `src` directory.

Input: Type:
- `raptor_dbw_interface/accelerator_pedal_cmd`, `raptor_dbw_msgs/msg/AcceleratorPedalCmd`
- `raptor_dbw_interface/steering_cmd`, `raptor_dbw_msgs/msg/SteeringCmd`
- `raptor_dbw_interface/gear_cmd`, `std_msgs/msg/UInt8`
- `raptor_dbw_interface/brake_cmd`, `raptor_dbw_msgs/msg/BrakeCmd`
- `raptor_dbw_interface/ct_report`, `npc_controller_msgs/msg/CtReport`

Output: Type: 
- `raptor_dbw_interface/wheel_speed_report`, `raptor_dbw_msgs/msg/WheelSpeedReport`
- `raptor_dbw_interface/pt_report`, `npc_controller_msgs/msg/PtReport`
- `raptor_dbw_interface/misc_report_do`, `npc_controller_msgs/msg/MiscReport`
- `raptor_dbw_interface/rc_to_ct`, `npc_controller_msgs/msg/RcToCt`

The following sensor topics are also required for basic functionality. A more sophisticated steering and longitudinal controller can be built using IMU's and actuator feedback, but that will require proper sensor modeling and testing of the simulators vehicle model.

Novatel Sensors:
- `novatel_bottom\bestpos`

### Drive by Wire State Machine

The code expects to start up an AV2X through receipt of system states and sending of ct states. By stepping through the following states, the drive by wire state machine within `npc_controller/include/npc_controller/dbw_state_machine.hpp` can be successfully navigated.

|System State|CT State|Action|Input Topic|
|:--|:--|:--|:--|
|6|255|Receive a red flag(`uint8 1`) from race control. |`raptor_dbw_interface/misc_report_do.track_flag_ack`|
|6|4|Receive a orange flag(`uint8 2`) from race control. |`raptor_dbw_interface/misc_report_do.track_flag_ack`|
|6|4|Send a input value of 5 to start the engine.|`ct_input.data`|
|8|6|Send a input value of 7 to enable race mode.|`ct_input.data`|
|8|7|Receive a yellow flag(`uint8 3`) from race control. |`raptor_dbw_interface/misc_report_do.track_flag_ack`|
|8|8|Receive a green flag(`uint8 4`) from race control. |`raptor_dbw_interface/misc_report_do.track_flag_ack`|


### Lap State Machine

The controller is configured to automatically leave pit lane and merge onto the track following a static trajectory. Using race control flags which it reads from `raptor_dbw_interface/ct_report`, it will respond to all flags correctly, stopping on Red Flags, moving at a slower pace on Yellow Flag, and going faster on a Green Flag. If a Black flag is received, the car will slow down and merge back onto Pit Lane, before coming to a stop near the box it left at.

If a defender or attacker flag is sent, the vehicle will follow the corresponding target speed (in MPH). However the overtake functionality is not yet included.

Waving Green Flag has no effect.

Due to these speed limits varying per track, config files have been constructed for each specific track in `npc_controller/config/*.param.yaml`. Speed up and slowdown zones are designated by approximated curvilinear coordinates. Their calculation is relatively straightforward and can be seen in `npc_controller/scripts/lap_state_locs.ipynb`


### Lateral Control
Lateral control is controlled by a pure pursuit algorithm tuned for high speed on the real car. A more sophisticated model based controller can be constructed and tested with proper sensor modeling and vehicle model validation.

### Longitudinal Control
Longitudinal control is built using a nested PID structure that computes acceleration using the first PID controller, and throttle/brake with the second PID controller. Gains can be adjusted online using ROS2 parameters. The real car is quite sensitive with throttle and brake change, so the gains may need to be adjusted for use within varying simulators.

## Run the Code
In the root directory using the docker image, run the `run_autoverse.sh` script along with the autoverse simulator. To use the dspace simulator, further testing and validation is needed in order to match the topics from `raptor_dbw_interface` with the relevant Simphera topics.