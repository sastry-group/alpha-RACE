import numpy as np
import time
import casadi as ca



# IBR params
N = 10
dt = 0.1
# Dynamics equations (Bicycle model)
def vehicle_dynamics(xk, uk, L=0.34,  Sa=0.34, Ta = 20./4.65, fr=1.):
    x = xk[0]
    y = xk[1]
    psi = xk[2]
    v = xk[3]
    a = uk[0]
    delta = uk[1]
    
    x_next = ca.vertcat(
        x + v * ca.cos(psi) * dt,
        y + v * ca.sin(psi) * dt,
        psi + (v / L) * ca.tan(Sa*delta) * dt,
        v + (Ta * a - fr) * dt
    )
    return x_next

qr_ratio = ca.MX.sym('qr_ratio', 1)
# Weight matrices for objective
Q = np.diag([1, 1]) / qr_ratio[0]   # Penalize lateral error (e) and heading error (psi)
R = np.diag([1, 1])  # Penalize control inputs (a, delta)

# MPC definition
x = ca.MX.sym('x', 4, N+1)  # State variables [s, e, psi, v]
u = ca.MX.sym('u', 2, N)    # Control inputs [a, delta]
# Define parameters (initial state and target state)
x0_ = ca.MX.sym('x0', 4)         # Initial state
# ck = ca.MX.sym('ck', N+1)         # Initial state

target_state = ca.MX.sym('target states', N*2)  # Reference state: [x, y]

cost = 0
g = [] # constraints list
g.append(x[:,0] - x0_[:4])
for k in range(N):
    x_next = vehicle_dynamics(x[:, k], u[:, k], L=0.3)
    g.append(x[:, k+1] - x_next)  # Dynamics constraints
    # Calculate cost function: state deviation and control effort
    state_error = x[:2, k] 
    state_error[0] -= target_state[k]
    state_error[1] -= target_state[N+k]
    cost += ca.mtimes([state_error.T, Q, state_error])  # State cost
    cost += ca.mtimes([u[:, k].T, R, u[:, k]])  # Control cost
    # if k>0:
    #     cost -= ca.cos(x[2, k]-ca.atan2(target_state[N+k]-target_state[N+k-1], target_state[k]-target_state[k-1]))
    # else :
    #     cost -= ca.cos(x[2, k]-ca.atan2(target_state[N+k+1]-target_state[N+k], target_state[k+1]-target_state[k]))

for k in range(N):
    g.append((x[3,k]**2)*ca.tan(u[1,k]))
for k in range(N):
    g.append(x[3,k+1])
# Define optimization variables and constraints
opt_variables = ca.vertcat(ca.reshape(x, -1, 1), ca.reshape(u, -1, 1))
opt_constraints = ca.vertcat(*g)

# Create NLP problem
nlp_prob = {'f': cost, 'x': opt_variables, 'g': opt_constraints, 'p': ca.vertcat(x0_, target_state, qr_ratio)}

# Solver options
opts = {'ipopt.print_level': 0, 'print_time': 0, 'ipopt.max_iter': 500}

# Create the solver
solver = ca.nlpsol('solver', 'ipopt', nlp_prob, opts)

# Set up bounds (for simplicity, no bounds on states and controls here)
lbg = np.zeros((4 * (N + 1) + 2*N, 1))  # Equality constraint on dynamics
ubg = np.zeros((4 * (N + 1) + 2*N, 1))  # Equality constraint on dynamics


# target_state = np.array([0, 0, 0, 10])
def mpc(x0,traj,mu=1.6, g=9.81, L=0.34, lookahead_factor=1.0): 
    # print(len(x0))
    # print(x0,traj)
    # print(lookahead_factor)
    params = np.concatenate((x0, traj.T.flatten(),np.array([lookahead_factor])))
    x_init = np.tile(x0, (N+1, 1)).T
    u_init = np.zeros((2, N))
    initial_guess = ca.vertcat(ca.reshape(x_init[:4], -1, 1), ca.reshape(u_init, -1, 1))

    ubg[-2*N:-N] = mu*g*L
    lbg[-2*N:-N] = -mu*g*L
    ubg[-N:] = 5.
    
    # Solve the NLP problem
    solution = solver(x0=initial_guess, lbg=lbg, ubg=ubg, p=params)

    # Extract the solution
    optimal_solution = solution['x']
    optimal_x = ca.reshape(optimal_solution[:4*(N+1)], 4, N+1).full()
    optimal_u = ca.reshape(optimal_solution[4*(N+1):], 2, N).full()
    u = optimal_u[:, 0]
    return float(u[0]), float(u[1])
