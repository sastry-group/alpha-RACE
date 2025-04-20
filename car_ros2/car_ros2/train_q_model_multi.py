import numpy as np
import matplotlib.pyplot as plt
import torch
import torch.nn as nn
import pickle
import argparse
from model_arch import SimpleModel

parser = argparse.ArgumentParser()

parser.add_argument('--model_name', default='none', help='Name of the pre-trained model to represent potential function')
parser.add_argument('--data_name', default='none', help='Name of the previous dataset where potential function could be evaluated to check where it is failing')
parser.add_argument('--cuda', action='store_true', help='Whether to use cuda or not')
parser.add_argument('--small', action='store_true', help='Whether to train on small dataset')
parser.add_argument('--mpc', action='store_true', help='Whether to run on MPC collected dataset')
parser.add_argument('--s', default=350, help='Discount factor')

args = parser.parse_args()

suffix = ""
if args.mpc :
    suffix = "_mpc"

if args.small :
    data = np.load('data/'+args.data_name+suffix+'.pkl', allow_pickle=True)[:241]
else :
    data = np.load('data/'+args.data_name+suffix+'.pkl', allow_pickle=True)
# data = np.concatenate((np.expand_dims(data[0],axis=0),np.array(data[1:])[:,:-1,:]),axis = 0)

discount_factor = 1.
n_iters = 50000
learning_rate = 0.001
S = int(args.s)
suffix = ""
fs = 128
if args.small :
    suffix = "_small"
    fs = 128
if S < 250 :
    suffix += "_myopic"
    fs = 128
if S < 50 :
    suffix += "_s"
    fs = 128
if args.mpc:
    suffix += "_mpc"

model = SimpleModel(39,[fs,fs,64],1)
model_ = SimpleModel(39,[fs,fs,64],1)
model__ = SimpleModel(39,[fs,fs,64],1)

if args.model_name != 'none' :
    model.load_state_dict(torch.load(args.model_name+'.pth'))
    # model_.load_state_dict(torch.load('model_newq2_3000.pth'))

if args.cuda :
    model = model.cuda()
    model_ = model_.cuda()
    model__ = model__.cuda()
loss_fn = nn.MSELoss()
optimizer = torch.optim.Adam(model.parameters(), lr=learning_rate)
optimizer_ = torch.optim.Adam(model_.parameters(), lr=learning_rate)
optimizer__ = torch.optim.Adam(model__.parameters(), lr=learning_rate)

print(data.shape)
# dist_opp = np.sqrt((data[:,:-1,1]-data[:,:-1,0])**2 + (data[:,:-1,3]-data[:,:-1,2])**2)
Y = data[:,1:,0] - data[:,:-1,0] #- 2.*(np.abs(data[:,:-1,2])>0.5)*(np.abs(data[:,:-1,2])-0.5) #- 0.3*(dist_opp<0.25)
Y_ = data[:,1:,1] - data[:,:-1,1] #- 2.*(np.abs(data[:,:-1,3])>0.5)*(np.abs(data[:,:-1,3])-0.5) #- 0.3*(dist_opp<0.25)
Y__ = data[:,1:,2] - data[:,:-1,2] #- 2.*(np.abs(data[:,:-1,3])>0.5)*(np.abs(data[:,:-1,3])-0.5) #- 0.3*(dist_opp<0.25)

X = data[:,:,:].copy()
X[:,:,0] = data[:,:,2] - data[:,:,1]
X[:,:,1] -= data[:,:,0]
X[:,:,2] -= data[:,:,0]
X[:,:,0] = (X[:,:,0]>75.)*(X[:,:,0]-150.087) + (X[:,:,0]<-75.)*(X[:,:,0]+150.087) + (X[:,:,0]<=75.)*(X[:,:,0]>=-75.)*X[:,:,0]
X[:,:,1] = (X[:,:,1]>75.)*(X[:,:,1]-150.087) + (X[:,:,1]<-75.)*(X[:,:,1]+150.087) + (X[:,:,1]<=75.)*(X[:,:,1]>=-75.)*X[:,:,1]
X[:,:,2] = (X[:,:,2]>75.)*(X[:,:,2]-150.087) + (X[:,:,2]<-75.)*(X[:,:,2]+150.087) + (X[:,:,2]<=75.)*(X[:,:,2]>=-75.)*X[:,:,2]
Y = (Y>75.)*(Y-150.087) + (Y<-75.)*(Y+150.087) + (Y<=75.)*(Y>=-75.)*Y
Y_ = (Y_>75.)*(Y_-150.087) + (Y_<-75.)*(Y_+150.087) + (Y_<=75.)*(Y_>=-75.)*Y_
Y__ = (Y__>75.)*(Y__-150.087) + (Y__<-75.)*(Y__+150.087) + (Y__<=75.)*(Y__>=-75.)*Y__
print(Y.shape,Y_.shape,Y__.shape)
print((Y__[16,:]))
print(np.max(Y))
print(np.min(Y))
# exit(0)
_Y = torch.tensor(Y).float().clone()
_Y_ = torch.tensor(Y_).float().clone()
_Y__ = torch.tensor(Y__).float().clone()
Y = _Y.clone()[:,:-S]
Y_ = _Y_.clone()[:,:-S]
Y__ = _Y__.clone()[:,:-S]
for i in range(1,S) :
    # print(_Y[:10,100])
    Y += (discount_factor**i)*_Y[:,i:-S+i]
    Y_ += (discount_factor**i)*_Y_[:,i:-S+i]
    Y__ += (discount_factor**i)*_Y__[:,i:-S+i]
print(torch.max(Y))
print(torch.min(Y))
# exit(0)
print(X.shape)
print(X[:10,100,-6:-4])
print(Y[:10,100])
# print(model(torch.tensor(X).float())[:10,100])
mask = torch.tensor((Y<600.)*(Y>=-100.))
mask_ = torch.tensor((Y_<600.)*(Y_>=-100.))
mask__ = torch.tensor((Y__<600.)*(Y__>=-100.))
X = torch.tensor(X).float()
X[torch.isnan(X)] = 0.

if args.cuda :
    Y = Y.cuda()
    Y_ = Y_.cuda()
    Y__ = Y__.cuda()
    mask = mask.cuda()
    mask_ = mask_.cuda()
    mask__ = mask__.cuda()
    X = X.cuda()

# Ys = []
# model.eval()
# for k in np.arange(0.15,0.6,0.05) :
#     X[:,:,-6] = k
#     Ys.append(model(torch.tensor(X[:10]).float())[:,100])
# Ys = torch.stack(Ys,dim=1)
# print(Ys[:,:,0])
# print(Y_[:10,100])
# exit(0)
model.train()
model_.train()
model__.train()



batch_size = 4096

for i in range(n_iters) :
    total_loss = 0.
    total_loss_ = 0.
    total_loss__ = 0.
    for j in range(0,X.shape[0],batch_size) :
        # print(X.shape)
        preds = model(X[j:(j+batch_size),:-S-1]) #- (discount_factor**S) * model(X[j:(j+batch_size),S:-1])
        preds_ = model_(X[j:(j+batch_size),:-S-1]) #- (discount_factor**S) * model_(X[j:(j+batch_size),S:-1])
        preds__ = model__(X[j:(j+batch_size),:-S-1]) #- (discount_factor**S) * model__(X[j:(j+batch_size),S:-1])
        loss = loss_fn(preds.squeeze()*mask[j:(j+batch_size)], torch.tensor(torch.tensor(Y[j:(j+batch_size)])*mask[j:(j+batch_size)]).float())
        loss_ = loss_fn(preds_.squeeze()*mask_[j:(j+batch_size)], torch.tensor(torch.tensor(Y_[j:(j+batch_size)])*mask_[j:(j+batch_size)]).float())
        loss__ = loss_fn(preds__.squeeze()*mask__[j:(j+batch_size)], torch.tensor(torch.tensor(Y__[j:(j+batch_size)])*mask__[j:(j+batch_size)]).float())
        optimizer.zero_grad()
        optimizer_.zero_grad()
        optimizer__.zero_grad()
        loss.backward()
        loss_.backward()
        loss__.backward()
        optimizer.step()
        optimizer_.step()
        optimizer__.step()
        # print(loss.item())
        total_loss += loss.item()
        total_loss_ += loss_.item()
        total_loss__ += loss__.item()
    print("Iteration: ", i, " Loss: ", total_loss, total_loss_, total_loss__)
    # print(model.batch_norm.running_mean)
    
    if i%1000 == 0 :
        torch.save(model.state_dict(), 'q_models/model_multi0'+str(suffix)+'.pth')
        torch.save(model_.state_dict(), 'q_models/model_multi1'+str(suffix)+'.pth')
        torch.save(model__.state_dict(), 'q_models/model_multi2'+str(suffix)+'.pth')
        # torch.save(model_.state_dict(), 'model_newq2_1.pth')

# torch.save(model.state_dict(), args.model_name[:-1]+str(int(args.model_name[-1])+1)+'.pth')
torch.save(model.state_dict(), 'q_models/model_multi0'+str(suffix)+'.pth')
torch.save(model_.state_dict(), 'q_models/model_multi1'+str(suffix)+'.pth')
torch.save(model__.state_dict(), 'q_models/model_multi2'+str(suffix)+'.pth')
# torch.save(model_.state_dict(), 'model_newq2_1.pth')
