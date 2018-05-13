import numpy as np

N = int(1e6)
xs_numpy = np.arange(N, 2*N)/N

def compute_numpy(x):
    return np.sum(np.log(x))
# print(compute_numpy(xs_numpy))
