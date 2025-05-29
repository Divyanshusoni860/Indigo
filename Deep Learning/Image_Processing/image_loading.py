
import numpy as np
import matplotlib.image as mpimg
import matplotlib.pyplot as plt
import cv2 as cv
import czifile as czi
from PIL import Image
from skimage import io, img_as_float


#%%

'''Loading with Pillow'''

pimg = Image.open(r"D:\Photos\cars\bmw.jpg")
print(type(pimg))  #<class 'PIL.JpegImagePlugin.JpegImageFile'>
pimg.show()

#converting PIL Image to Numpy Image
pnimg = np.asarray(pimg)
print(type(pnimg))  #<class 'numpy.ndarray'>

#%%

'''Loading with Matplotlib using img'''

mimg = mpimg.imread(r"D:\Photos\valo\jett1.jpg")
print(type(mimg))  #<class 'numpy.ndarray'>
print(mimg.shape)  #(2160, 3840, 3)
plt.imshow(mimg)

#%%

'''Loading using SKimage'''

skimg = io.imread(r"D:\Photos\valo\kayo.jpg")
print(type(skimg)) #<class 'numpy.ndarray'>
floatimg = img_as_float(skimg)
print(floatimg)  # Basically, skimg/255


plt.imshow(floatimg)
plt.axis('off')
plt.show()

#%%

'''LOading using OpenCV'''

cvimg = cv.imread(r"D:\Photos\valo\omen.jpg")
width = int(cvimg.shape[1] * 20 / 100)
height = int(cvimg.shape[0] * 20 / 100)
resized = cv.resize(cvimg, (width, height))

# Opening  through OpenCV
cv.imshow("Omen",resized)
cv.waitKey(0)
cv.destroyAllWindows()

# Plotting in Matplotlib 
plt.imshow(cv.cvtColor(cvimg,cv.COLOR_BGR2RGB)) # Converting BGR to RGB
plt.axis('off')
plt.show()

#%%

'''Loading using CZI File'''

czifile = czi.imread(r"D:\Photos\CZI\test1.czi")
print(czifile)
print(type(czifile))
print(czifile.shape)

img_2d = np.squeeze(czifile) 
print(img_2d.shape) 
plt.imshow(img_2d, cmap='gray')
plt.axis('off')
plt.show()

# No idea of CZI working ...