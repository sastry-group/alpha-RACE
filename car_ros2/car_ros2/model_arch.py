import torch
import torch.nn as nn

class SimpleModel(nn.Module):
    def __init__(self, input_size, hidden_size, output_size):
        super(SimpleModel, self).__init__()
        self.fc = []
        self.batch_norm = nn.BatchNorm1d(input_size,affine=False)
        # Add a normalization layer
        # self.fc.append()
        curr_h = input_size
        for h in hidden_size:

            self.fc.append(nn.Linear(curr_h, h))
            self.fc.append(nn.ReLU())
            curr_h = h
        self.fc.append(nn.Linear(curr_h, output_size))
        self.fc = nn.Sequential(*self.fc)
        
    def forward(self, x):
        if len(x.shape) == 2 :
            x = self.batch_norm(x)
        elif len(x.shape) == 3 :
            x1 = self.batch_norm(x.reshape((-1,x.shape[-1])))
            x = x1.reshape(x.shape)
        # print(x[0,:,-15:-10])
        out = self.fc(x)
        return out
