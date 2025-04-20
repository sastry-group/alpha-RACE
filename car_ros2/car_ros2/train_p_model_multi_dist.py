import numpy as np
import matplotlib.pyplot as plt
import torch
import torch.nn as nn
import pickle
import argparse
from model_arch import SimpleModel
import random
parser = argparse.ArgumentParser()

parser.add_argument('--model_name1', default='none', help='Name of the pre-trained model to represent v1 function')
parser.add_argument('--model_name2', default='none', help='Name of the pre-trained model to represent v2 function')
parser.add_argument('--model_name3', default='none', help='Name of the pre-trained model to represent v3 function')
parser.add_argument('--model_name', default='none', help='Name of the pre-trained model to represent potential function')
parser.add_argument('--data_name', default='none', help='Name of the previous dataset where potential function could be evaluated to check where it is failing')
parser.add_argument('--batch_size', default=241, help='Batch size')
parser.add_argument('--small', action='store_true', help='Whether to train on small dataset')
parser.add_argument('--rel', action='store_true', help='Whether to train on rel q models')
parser.add_argument('--mpc', action='store_true', help='Whether to run on MPC collected dataset')
parser.add_argument('--s', default=350, help='Discount factor')
parser.add_argument('--cuda', action='store_true', help='Whether to use cuda or not')
args = parser.parse_args()

if args.mpc :
    args.data_name += '_mpc'
if args.small :
    data = np.load('data/'+args.data_name+'.pkl', allow_pickle=True)[:241]
else :
    data = np.load('data/'+args.data_name+'.pkl', allow_pickle=True)[:241*9]
# data = np.concatenate((np.expand_dims(data[0],axis=0),np.array(data[1:])[:,:-1,:]),axis = 0)
S = int(args.s)
suffix = ""
fs = 128
if args.small :
    suffix = "_small"
    fs = 128
if int(args.s) < 250 :
    suffix += "_myopic"
    fs = 128
if int(args.s) < 50 :
    suffix += "_s"
    fs = 128
if args.mpc:
    suffix += "_mpc"
discount_factor = 0.98
n_iters = 100000
n_iters_out = 0
learning_rate = 0.0001


model = SimpleModel(39,[fs,fs,64],1)
model_ = SimpleModel(39,[fs,fs,64],1)
model__ = SimpleModel(39,[fs,fs,64],1)
model_p = SimpleModel(39,[3*fs,3*fs,3*64],1)


model.load_state_dict(torch.load('q_models/'+args.model_name1+suffix+'.pth'))
model_.load_state_dict(torch.load('q_models/'+args.model_name2+suffix+'.pth'))
model__.load_state_dict(torch.load('q_models/'+args.model_name3+suffix+'.pth'))
# print(args.model_name1+suffix+'.pth')
# exit(0)
model.eval()
model_.eval()
model__.eval()

if args.model_name == 'none':
    # Intialize model_p with 0 weights
    model_p.fc[0].weight.data *= 0
    model_p.fc[0].bias.data *= 0
    model_p.fc[2].weight.data *= 0
    model_p.fc[2].bias.data *= 0
    model_p.fc[4].weight.data *= 0
    model_p.fc[4].bias.data *= 0
    model_p.fc[6].weight.data *= 0
    model_p.fc[6].bias.data *= 0


    # Initialize model_p such that model_p(x) = model(x) + model_(x) + model__(x)
    # print(model_p.fc[0].weight.data[:,:fs].shape)
    model_p.fc[0].weight.data[:fs,:] = model.fc[0].weight.data
    print(model_p.fc[0].weight.data[:fs,:])
    model_p.fc[0].weight.data[fs:2*fs,:] = model_.fc[0].weight.data
    model_p.fc[0].weight.data[2*fs:,:] = model__.fc[0].weight.data
    model_p.fc[0].bias.data[:fs] = model.fc[0].bias.data 
    model_p.fc[0].bias.data[fs:2*fs] = model_.fc[0].bias.data
    model_p.fc[0].bias.data[2*fs:] = model__.fc[0].bias.data

    model_p.fc[2].weight.data[:fs,:fs] = model.fc[2].weight.data
    model_p.fc[2].weight.data[fs:2*fs,fs:2*fs] = model_.fc[2].weight.data
    model_p.fc[2].weight.data[2*fs:,2*fs:] = model__.fc[2].weight.data
    model_p.fc[2].bias.data[:fs] = model.fc[2].bias.data
    model_p.fc[2].bias.data[fs:2*fs] = model_.fc[2].bias.data
    model_p.fc[2].bias.data[2*fs:] = model__.fc[2].bias.data

    model_p.fc[4].weight.data[:64,:fs] = model.fc[4].weight.data
    model_p.fc[4].weight.data[64:2*64,fs:2*fs] = model_.fc[4].weight.data
    model_p.fc[4].weight.data[2*64:,2*fs:] = model__.fc[4].weight.data
    model_p.fc[4].bias.data[:64] = model.fc[4].bias.data
    model_p.fc[4].bias.data[64:2*64] = model_.fc[4].bias.data
    model_p.fc[4].bias.data[2*64:] = model__.fc[4].bias.data

    model_p.fc[6].weight.data[:,:64] = model.fc[6].weight.data
    model_p.fc[6].weight.data[:,64:2*64] = model_.fc[6].weight.data
    model_p.fc[6].weight.data[:,2*64:] = model__.fc[6].weight.data
    model_p.fc[6].bias.data = (model.fc[6].bias.data + model_.fc[6].bias.data + model__.fc[6].bias.data)


    model_p.batch_norm.running_mean = model.batch_norm.running_mean
    model_p.batch_norm.running_var = model.batch_norm.running_var
    model_p.batch_norm.momentum = 0.

if args.rel :
    model.load_state_dict(torch.load('q_models_rel/'+args.model_name1+suffix+'.pth'))
    model_.load_state_dict(torch.load('q_models_rel/'+args.model_name2+suffix+'.pth'))
    model__.load_state_dict(torch.load('q_models_rel/'+args.model_name3+suffix+'.pth'))

print(args.model_name1+suffix+'.pth')
print(model_p.fc[0].weight.data[:fs,:])
print(model.fc[0].weight.data)
# exit(0)
model.eval()
model_.eval()
model__.eval()

X_eg = torch.tensor([[ 6.2830,  5.7749, 12.0579, -0.3827, -0.3814, -0.0952,  0.0330,  1.4586,
        -0.0798, -0.4122, -0.0144,  1.4569, -0.0832, -0.4455,  0.2935,  1.4543,
         0.0778,  0.5303,  0.0260,  0.0270,  0.0533,  0.0273,  0.0262,  0.0536,
         0.1000,  0.4071,  0.1532,  0.8500,  0.,  0.1000,  0.1525,  0.3020,
         1.0000,  0.7273,  0.2374,  0.4838,  0.2773,  1.0545,  0.7273]]*100)
print(X_eg.shape)
X_eg[:,-12]  = torch.tensor(np.linspace(0.85,1.1,100))

if args.model_name != 'none' :
    model_p.load_state_dict(torch.load(args.model_name+'.pth'))
model_p.eval()
# Print parameter values of batch_norm layer (for debugging)
# print(model.batch_norm.weight)
# print(model_.batch_norm.weight)
# print(model__.batch_norm.weight)
# print(model.batch_norm.bias)
# print(model_.batch_norm.bias)
# print(model__.batch_norm.bias)
# print(model.batch_norm.running_mean) 
# print(model_.batch_norm.running_mean)
# print(model__.batch_norm.running_mean)
# print(model_p.batch_norm.weight)
# print(model_p.batch_norm.bias)
# print(model_p.batch_norm.running_mean)
print(model(X_eg)+model_(X_eg)+model__(X_eg))
print(model_p(X_eg))
# exit(0)
if args.cuda :
    model = model.cuda()
    model_ = model_.cuda()
    model__ = model__.cuda()
    model_p = model_p.cuda()
X_eg = X_eg.cuda()

# print(model(X_eg))
# print(model_p(X_eg))
# exit(0)
loss_fn = nn.MSELoss()
# print(model_p.parameters())
# Copy batch_norm layer of model to model_p
# model_p.batch_norm = model.batch_norm

# Only optimize the last layer of model_p

optimizer = torch.optim.Adam(model_p.fc.parameters(), lr=learning_rate)
optimizer1 = torch.optim.Adam(model_p.parameters(), lr=learning_rate)
# exit(0)


X = data[:,:,:].copy()
X[:,:,0] = data[:,:,2] - data[:,:,1]
X[:,:,1] -= data[:,:,0]
X[:,:,2] -= data[:,:,0]
X[:,:,0] = (X[:,:,0]>75.)*(X[:,:,0]-150.087) + (X[:,:,0]<-75.)*(X[:,:,0]+150.087) + (X[:,:,0]<=75.)*(X[:,:,0]>=-75.)*X[:,:,0]
X[:,:,1] = (X[:,:,1]>75.)*(X[:,:,1]-150.087) + (X[:,:,1]<-75.)*(X[:,:,1]+150.087) + (X[:,:,1]<=75.)*(X[:,:,1]>=-75.)*X[:,:,1]
X[:,:,2] = (X[:,:,2]>75.)*(X[:,:,2]-150.087) + (X[:,:,2]<-75.)*(X[:,:,2]+150.087) + (X[:,:,2]<=75.)*(X[:,:,2]>=-75.)*X[:,:,2]
# print(Y)
# print(np.argmax(Y))
# print(np.argmin(Y))
# exit(0)
X = torch.tensor(X).float()

if args.cuda :
    X = X.cuda()

X[torch.isnan(X)] = 0.

X_ = X.clone()
X_[1:,:,:-15] = X[:-1,:,:-15]


print(X.shape)
print(X[:5,100,-15:])
# print(Y[:10,100])

# Initial phase
model_p.eval()
batch_size = int(args.batch_size)*4
for i in range(0) :
    total_loss = 0.
    for j in range(0,X.shape[0],batch_size) :
        # print(model_p.batch_norm.running_mean)
        v1 = model(torch.tensor(X[j:j+batch_size]).float())
        v2 = model_(torch.tensor(X[j:j+batch_size]).float())
        v3 = model__(torch.tensor(X[j:j+batch_size]).float())
        y = v1 + v2 + v3

        preds = model_p(torch.tensor(X[j:j+batch_size]).float())
        # print(y.shape,preds.shape)
        loss = loss_fn(preds, torch.tensor(y).float())     
        optimizer1.zero_grad()
        if i>0:
            loss.backward()
            optimizer1.step()
        total_loss += loss.item()
    print("Iteration: ", i, " Loss: ", total_loss)
if args.rel :
    torch.save(model_p.state_dict(), 'p_models_rel/model_multi'+suffix+'.pth')
else :
    torch.save(model_p.state_dict(), 'p_models/model_multi'+suffix+'.pth')

batch_size = int(args.batch_size)
S_ = 500 - S
losses1 = []
losses2 = []
losses3 = []
max_gt1 = 0.
max_gt2 = 0.
max_gt3 = 0.
min_loss = 334.
for i in range(n_iters) :
    total_loss = 0.
    for j in range(0,X.shape[0],batch_size) :
        # print(i,X.shape[0])
        haha = (X[j+2:j+batch_size-1:3]-X_[j+3:j+batch_size:3])
        # print(haha[:5,100,-15:-9])
        if j + batch_size > X.shape[0]:
            break
        v1 = model(torch.tensor(X[j+2:j+batch_size-1:3]).float())
        v2 = model_(torch.tensor(X[j:j+batch_size-1:3]).float())
        v3 = model__(torch.tensor(X[j+1:j+batch_size-1:3]).float())

        v1_ = model(torch.tensor(X_[j+3:j+batch_size:3]).float())
        v2_ = model_(torch.tensor(X_[j+1:j+batch_size:3]).float())
        v3_ = model__(torch.tensor(X_[j+2:j+batch_size:3]).float())
        
        # Calculate loss
        gt = v2 - v2_
        gt_ = v3 - v3_
        gt__ = v1 - v1_
        
        preds = model_p(torch.tensor(X[j:j+batch_size-1:3]).float()) - model_p(torch.tensor(X_[j+1:j+batch_size:3]).float())
        loss = loss_fn(preds[:,:S_].squeeze(), torch.tensor(torch.tensor(gt[:,:S_]).squeeze()).float())
        # print(loss)
        if i == n_iters - 1 :
            losses1.append(preds[:,:S_].squeeze()- torch.tensor(gt[:,:S_]).squeeze().float())
            max_gt1 = max(max_gt1,torch.max(torch.abs(torch.tensor(gt[:,:S_]))))
        optimizer.zero_grad()
        loss.backward()
        if i>0:
            optimizer.step()
        
        preds_ = model_p(torch.tensor(X[j+1:j+batch_size-1:3]).float()) - model_p(torch.tensor(X_[j+2:j+batch_size:3]).float())
        if i == n_iters - 1 :
            losses2.append(preds_[:,:S_].squeeze()- torch.tensor(gt_[:,:S_]).squeeze().float())
            max_gt2 = max(max_gt2,torch.max(torch.abs(torch.tensor(gt_[:,:S_]))))
        loss_ = loss_fn(preds_[:,:S_].squeeze(), torch.tensor(torch.tensor(gt_[:,:S_]).squeeze()).float())
        optimizer.zero_grad()
        loss_.backward()
        if i>0 :
            optimizer.step()
        # print(loss_)
        preds__ = model_p(torch.tensor(X[j+2:j+batch_size-1:3]).float()) - model_p(torch.tensor(X_[j+3:j+batch_size:3]).float())
        # diff = (X[j+2:j+batch_size-1:3]-X[j+3:j+batch_size:3])
        # print(diff[:5,100,-12:])
        # print(preds__[0,50:60],gt__[0,50:60])

        if i == n_iters - 1 :
            losses3.append(preds__[:,:S_].squeeze()- torch.tensor(gt__[:,:S_]).squeeze().float())
            max_gt3 = max(max_gt3,torch.max(torch.abs(torch.tensor(gt__[:,:S_]))))
        loss__ = loss_fn(preds__[:,:S_].squeeze(), torch.tensor(torch.tensor(gt__[:,:S_]).squeeze()).float())
        # print(loss__)
        optimizer.zero_grad()
        loss__.backward()
        if i >0 :
            optimizer.step()
        
        total_loss += loss.item() + loss_.item() + loss__.item()
    print("Iteration: ", i, " Loss: ", total_loss)
    if total_loss < min_loss :
        min_loss = total_loss
        if args.rel :
            torch.save(model_p.state_dict(), 'p_models_rel/model_multi'+suffix+'.pth')
        else :
            torch.save(model_p.state_dict(), 'p_models/model_multi'+suffix+'.pth')
        print("Saved model")

regret_info = {'losses1':losses1,'losses2':losses2,'losses3':losses3,'max_gt1':max_gt1,'max_gt2':max_gt2,'max_gt3':max_gt3}
with open('regret_info_multi1'+suffix+'.pkl','wb') as f:
    pickle.dump(regret_info,f)


