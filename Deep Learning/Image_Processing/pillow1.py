import glob
import os
from PIL import Image

img = Image.open(r"D:\Photos\cars\bmw.jpg")
print(type(img))

# Resize

small_img = img.resize((300,300))
print(small_img.size)
small_img.save(r"D:\recycle\bmwtenp.jpg")
size = small_img.size
print(type(size))

# Thumbnail

thumb_img = img.copy()
thumb_img.thumbnail((300,300))
thumb_img.save(r"D:\recycle\temp1.jpg")
thumb_img.size
# The size of thumbnail is (300, 169) instead (300*300) cause of ratio maintainence

path = r"D:\Photos\cars\*"
for file in glob.glob(path):
    img = Image.open(file)
    resized = img.copy()
    resized.thumbnail((500,200))
    width, height = resized.size
    left = width-500
    top = height-200
    right = width
    bottom = height
    resized.crop((left, top, right, bottom)) 
    
    base_name = os.path.basename(file)
    name,ext= os.path.splitext(base_name)
    target_folder = r"D:\recycle"
    new_name = f"{name}_resized{ext}"
    save_path = os.path.join(target_folder, f"{name}_resized{ext}")

    resized.save(save_path)
    
# This loo p will ensure size atmax 200 in height and 500 @ width