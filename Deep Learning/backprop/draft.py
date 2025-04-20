import cv2 as cv

img_path = "D:/indigo py/data/photos/cars/bmw1.jpg"
img = cv.imread(img_path)

if img is None:
    print("Error: Unable to load image. Check the file path and integrity.")
else:
    print("Image loaded successfully!")
    cv.imshow("Hello", img)
    cv.waitKey(0)
    cv.destroyAllWindows()

