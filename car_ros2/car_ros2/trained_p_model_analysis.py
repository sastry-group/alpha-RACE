import numpy as np
import matplotlib.pyplot as plt
import torch
import torch.nn as nn
import pickle

data = np.load('dataset_new2_.pkl', allow_pickle=True)
data = np.concatenate((np.expand_dims(data[0],axis=0),np.array(data[1:])[:,:-1,:]),axis = 0)
print(data.shape)
data1 = data[::2,:,:]
data2 = data[1::2,:,:]
discount_factor = 0.98
n_iters = 1000
learning_rate = 0.001

class SimpleModel(nn.Module):
    def __init__(self, input_size, hidden_size, output_size):
        super(SimpleModel, self).__init__()
        self.fc = []
        curr_h = input_size
        for h in hidden_size:
            self.fc.append(nn.Linear(curr_h, h))
            self.fc.append(nn.ReLU())
            curr_h = h
        self.fc.append(nn.Linear(curr_h, output_size))
        self.fc = nn.Sequential(*self.fc)
        
    def forward(self, x):        
        out = self.fc(x)
        return out

model = SimpleModel(21,[128,128,64],1)
model_ = SimpleModel(21,[128,128,64],1)
model_p = SimpleModel(21,[128,128,64],1)
model_p.load_state_dict(torch.load('model_p.pth'))
model.load_state_dict(torch.load('model_q1_2.pth'))

model_.load_state_dict(torch.load('model_q2_2.pth'))
model.eval()
model_.eval()
model_p.eval()
loss_fn = nn.MSELoss()
optimizer = torch.optim.Adam(model_p.parameters(), lr=learning_rate)


X = data[:,:,[1,2,3,5,6,7,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23]]
X[:,:,0] -= data[:,:,0]
X[:,:,2] -= data[:,:,2]
X[:,:,0] = (X[:,:,0]>75.)*(X[:,:,0]-150.087) + (X[:,:,0]<-75.)*(X[:,:,0]+150.087) + (X[:,:,0]<=75.)*(X[:,:,0]>=-75.)*X[:,:,0]
print(X[:10,0,-1])    
Y = model_p(torch.tensor(X,dtype=torch.float32))
X[:,:,-1] = 1.25
X[:,:,-5] = 1.25
Y1 = model_p(torch.tensor(X,dtype=torch.float32))
X[:,:,-1] = 1.1
X[:,:,-5] = 1.1
Y2 = model_p(torch.tensor(X,dtype=torch.float32))
print(Y[:10,100,0])
print(Y1[:10,100,0])
print(Y2[:10,100,0])
# print(X[:10,0,-5])    
