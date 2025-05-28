
import numpy as np
import matplotlib.image as mpimg
import matplotlib.pyplot as plt
from PIL import Image


#%%

'''Loading with Pillow'''

pimg = Image.open(r"D:\Photos\cars\bmw.jpg")
print(type(pimg))  #<class 'PIL.JpegImagePlugin.JpegImageFile'>
pimg.show()

#converting PIL Image to Numpy Image
pnimg = np.asarray(pimg)
print(type(pnimg))  #<class 'numpy.ndarray'>

#%%

mimg = mpimg.imread(r"D:\Photos\valo\jett1.jpg")
print(type(mimg))  #<class 'numpy.ndarray'>
print(mimg.shape)  #(2160, 3840, 3)
plt.imshow(mimg)

#%%


