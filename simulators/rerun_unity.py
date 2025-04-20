import os
from mlagents_envs.environment import UnityEnvironment
from mlagents_envs.base_env import ActionTuple
import pickle
import time
import numpy as np
from mlagents_envs.side_channel.engine_configuration_channel import EngineConfigurationChannel

# Define the path to your Unity build
UNITY_BUILD_PATH = "env-v0.app" # Uncomment this for MacOS
# UNITY_BUILD_PATH = "env-v0.x86_64" # Uncomment this for Linux
# EP_START = 6 # ours-high_p
# EP_START = 1
EP_START = 23
# EP_START = 15
# EP_START = 5
EP_END = 34
FPS = 50
START_WAIT = 5.
FILENAME = '../car_ros2/car_ros2/recorded_races/racedata_ours_vs_ours-low_data_vs_ours-low_data_grad_rel.pkl'
DT = 0.1
DT = DT*10./FPS
race_data = np.array(pickle.load(open(FILENAME,'rb')))
dx = race_data[:,1:] - race_data[:,:-1]
dists1 = np.linalg.norm(dx[:,:,:2],axis=2)
dists2 = np.linalg.norm(dx[:,:,3:5],axis=2)
dists3 = np.linalg.norm(dx[:,:,6:8],axis=2)
a1 = np.sum(dists1,axis=1)
a2 = np.sum(dists2,axis=1)
a3 = np.sum(dists3,axis=1)

for k in range(34):
    print(k, a1[k], a2[k], a3[k])
        
def main():
    # Check if Unity build exists
    if not os.path.exists(UNITY_BUILD_PATH):
        raise FileNotFoundError(f"Unity build not found at {UNITY_BUILD_PATH}")
    
    engineConfigChannel = EngineConfigurationChannel()
    # Start Unity Environment
    print("Starting Unity Environment...")
    env = UnityEnvironment(file_name=UNITY_BUILD_PATH, seed=1,worker_id=0,log_folder='logs/', side_channels=[engineConfigChannel])
    engineConfigChannel.set_configuration_parameters(quality_level=1, target_frame_rate=-1, capture_frame_rate=60)
    env.reset()

    # Get behavior name from the Unity environment
    behavior_name = list(env.behavior_specs.keys())[0]
    print(f"Behavior name: {behavior_name}")

    # Get behavior specifications
    spec = env.behavior_specs[behavior_name]
    print(f"Observation shape: {spec.observation_specs}")
    print(f"Action shape: {spec.action_spec}")

    # Step through the environment
    for EP_NO in range(EP_START, EP_END):
        for step in range(int(START_WAIT/DT)):
            # Create an action for the agent
            num_agents = 1
            ac = np.random.randn(num_agents, spec.action_spec.continuous_size)
            ac[0,:9] = race_data[EP_NO,0,:9]
            # ac[0,6:8] -= np.array([np.cos(ac[0,8]),np.sin(ac[0,8])])*0.18
            ac[0,3:5] += np.array([np.cos(ac[0,5]),np.sin(ac[0,5])])*0.08
            ac[0,:2] /= 2.
            ac[0,3:5] /= 2.
            ac[0,6:8] /= 2.
            # print(ac)
            action = ActionTuple(continuous=ac)
            
            # Send the action to Unity and step the simulation
            env.set_actions(behavior_name, action)
            env.step()
            time.sleep(DT/2.) 
        
        for step in np.arange(0.,500.,10./FPS):
            # Create an action for the agent
            num_agents = 1
            ac = np.random.randn(num_agents, spec.action_spec.continuous_size)
            factor = (step - int(step))
            ac[0,:9] = race_data[EP_NO,int(step)+1,:9]*factor + race_data[EP_NO,int(step),:9]*(1.-factor) 
            ac[0,6:8] -= np.array([np.cos(ac[0,8]),np.sin(ac[0,8])])*0.21
            # ac[0,3:5] += np.array([np.cos(ac[0,5]),np.sin(ac[0,5])])*0.08
            # ac[0,6:8] -= np.array([np.cos(ac[0,8]+np.pi/2.),np.sin(ac[0,8]+np.pi/2.)])*0.11

            ac[0,:2] /= 2.
            ac[0,3:5] /= 2.
            ac[0,6:8] /= 2.
            action = ActionTuple(continuous=ac)
            
            # Send the action to Unity and step the simulation
            env.set_actions(behavior_name, action)
            env.step()
            time.sleep(DT*0.71) 
            # print(step)
            

    print("Finished simulation!")
    env.close()

if __name__ == "__main__":
    import numpy as np  # Ensure numpy is installed
    main()
