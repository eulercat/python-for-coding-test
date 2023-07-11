import numpy as np
    
tmp_b,tmp_w = np.meshgrid(np.linspace(-200, 200, 10), np.linspace(-100, 600, 10))
U = np.zeros_like(tmp_w)
V = np.zeros_like(tmp_b)

print(tmp_b.shape)
# print(U)

# print(np.linspace(-200, 200, 10))
# print(np.linspace(-100, 600, 10))