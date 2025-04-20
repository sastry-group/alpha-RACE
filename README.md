# Multi car racing with alpha-potential functions

## SSH into 337 cory lab machine

```bash 
ssh dvij@10.41.45.23
```

passwd: dvij123

## Installation on local machine

1. Clone the repo

    ```bash
   git clone https://github.com/dvij542/multi-car-racing
    ```

2. Install dependencies

    ```bash
   pip install -r requirements.txt
    ```

3. Install ROS2 Humble for ubuntu 22.04/ compatible ROS2 version based on your system: [Link](https://docs.ros.org/en/humble/Installation/Ubuntu-Install-Debs.html)

4. Install ROS2 dependencies

```bash
sudo apt update
sudo apt install ros-humble-rclpy ros-humble-geometry-msgs ros-humble-nav-msgs ros-humble-visualization-msgs ros-humble-std-msgs ros-humble-ackermann-msgs ros-humble-tf-transformations
```

## Setting up

1. Colcon build your workspace

```bash
cd ros2_ws/
colcon build
```

2. Source your ros2 workspace. You may add this to your .bashrc. Replace 'humble' with your installed ROS2 distro

```bash
source /opt/ros/humble/setup.bash
source /home/dvij/multi-car-racing/ros2_ws/install/setup.bash
```

3. Install car_collect and car_dynamics

```bash
cd car_collect/
pip install -e .
cd ../car_dynamics
pip install -e .
cd ..
```


4. Install jax (Replace cuda11 with whatever version you have)

```bash
pip install -U "jax[cuda11]"
```

5. Install foxglove bridge to visualize. Replace 'humble' with your ROS distro. Install foxglove software from here: [Link](https://docs.foxglove.dev/docs/connecting-to-data/)ros-foxglove-bridge/

```bash
sudo apt install ros-humble-foxglove-bridge
```

## Data collection

1. Run:-

    ```bash
    cd car_ros2/car_ros2
    bash collect_data.bash 
    ```
    
    This will open 10 new parallel processes for data collection that saves data to data/ folder. Wait for about 4 hrs for the data collection to finish and later merge with 
    
    ```bash
    python3 merge_data.py
    ```


2. (Optional) To visualize training, open a new terminal and run foxglove bridge. For visualizing you also need to set VIS=True in multi_car_blocking.py which is set to False by default 

    ```bash
    ros2 run foxglove_bridge foxglove_bridge
    ```

3. (Optional) Open foxglove software and open the connection 'localhost'. Import layout from foxglove_multi_car.json. You should see a multi-car racing environment now

## Training

1. First, we need to train the value function estimators from the collected data as a function of joint state and policy parameters. For this, we first need to run:-

```bash
cd car_ros2/car_ros2
python3 train_q_model_multi.py --data_name data_large_multi --mpc [--cuda] 
```

Add --cuda if you have a GPU. This will take around 2-3 mins to train the value function estimator. The trained model will be saved in the q_models folder. Later you also need to run train_q_model_multi_rel.py with the same settings. Running the first step with train_q_model.py was required for smooth initialization of p-value estimator for better convergence. This step will train the value function estimators with the relative utility

```bash
python3 train_q_model_multi_rel.py --data_name data_large_multi --mpc [--cuda] 
```

Now, we can train the potential value estimator with the following command:-

```bash
python3 train_p_model_multi.py --data_name data_large_multi --model_name1 model_multi0 --model_name2 model_multi1 --model_name3 model_multi2 --mpc [--cuda] --rel
```


## Evaluating

1. To run races with random policy params of opponent, run:-

    ```bash
    cd car_ros2/car_ros2
    python3 multi_car_comp_blocking.py --opp1 mpc --opp2 mpc --mpc --rel 
    ```
    
    To run races with baseline IBR (Iterated Best Response), run:-

    ```bash
    cd car_ros2/car_ros2
    python3 head_to_head_comp.py --opp1 ibr --opp2 ibr --mpc --rel
    ```

    To run races with RL, run:-

    ```bash
    cd car_ros2/car_ros2
    python3 head_to_head_comp.py --opp1 rl --opp2 rl --mpc --rel
    ```

    To run races with our baseline trained with low training data, run:-

    ```bash
    cd car_ros2/car_ros2
    python3 head_to_head_comp.py --opp1 ours-low_data --opp2 ours-low_data --mpc --rel
    ```

    To run races with our baseline trained with low gamma, run:-

    ```bash
    cd car_ros2/car_ros2
    python3 head_to_head_comp.py --opp1 ours-low_p --opp2 ours-low_p --mpc --rel
    ```

    To run races with our baseline trained with high gamma, run:-

    ```bash
    cd car_ros2/car_ros2
    python3 head_to_head_comp.py --opp1 ours-high_p --opp2 ours-high_p --mpc --rel
    ```

    This will also save the races under recorded_races/ directory for you to later visualize
     
2. (Optional) To visualize races, open a new terminal and run foxglove bridge

    ```bash
    ros2 run foxglove_bridge foxglove_bridge
    ```

3. (Optional) Open foxglove software and open the connection 'localhost'. Import layout from foxglove_head_to_head.json. You should see a head to head racing environment now

## Visualizing races in Foxglove

You can rerun races saved in recorded_races folder by running the following command. Modify the filename in rerun_races.py header

```bash
cd car_ros2/car_ros2
python3 rerun_races.py
```

## Visualizing races in Unity

You can rerun races saved in recorded_races folder rendered in Unity by running the following command. Modify the filename in rerun_unity.py header. Change UNITY_BUILD_PATH in header to env-v0.x86_64 for linux. By default, it is set to run on MacOS

```bash
cd simulators
chmod +x env-v0.x86_64 # for linux
```

Then run the following command

```bash
python3 rerun_unity.py
```

## Running on dspace local setup

1. Go to SimulationPackage_v2.1

```bash
cd SimulationPackage_v2.1
```

2. Open 2 terminals here, in one of the terminal, run :-

```bash
bash run_vehicle_sim.sh
```

3. Wait for about a minute for the simulation to start, then in the new terminal, run :-

```bash
docker exec -it driving_stack bash
```

4. In the driving_stack container, run :-

```bash
python3 controller.py
```

## TODO:-

1. Organize code further for public release