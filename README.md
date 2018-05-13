# Python, Numpy, C comparison
```bash
time python compute_simple.py # python 3.5 via conda

real 0m0.273s
user 0m0.244s
sys 0m0.028s

time python compute_numpy.py # python 3.5 with numpy via conda-forge

real 0m0.207s
user 0m0.192s
sys 0m0.176s

gcc -o compute_c compute_c.c -std=c99 -lm
time ./compute_c

real 0m0.080s
user 0m0.076s
sys 0m0.000s
```

