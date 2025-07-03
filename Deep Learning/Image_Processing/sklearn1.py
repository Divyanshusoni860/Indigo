import matplotlib.pyplot as plt
from skimage import io
from skimage.transform import resize, rescale, downscale_local_mean

#%%

img = io.imread(r"D:\Photos\cars\lr.jpg")
print(type(img)) # <class 'numpy.ndarray'>
print(img.shape) # (3376, 6000, 3)

plt.show(args, kwargs)