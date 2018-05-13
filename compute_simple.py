import math

N = int(1e6)
xs = [1+i/N for i in range(N)]
def compute_simple(x):
    return sum(math.log(item) for item in x)
# print(compute_simple(xs))
