import numpy as np
import pickle
# Mere data from files data1.pkl to data5.pkl along dim=0 and save it into data_large.pkl
datas = []
for i in [1,2,3,4,5,6,7,8,9] :
    
    data = np.load('data/data'+str(i)+'_multi_mpc.pkl', allow_pickle=True)[:241,:,:]
    print(data.shape)
    # data = np.concatenate((np.expand_dims(data[0],axis=0),np.array(data[1:])[:,:-1,:]),axis = 0)
    datas.append(data)
data_large = np.concatenate(datas,axis=0)
print(data_large.shape)
pickle.dump(data_large, open('data/data_large_multi_mpc.pkl', 'wb'))