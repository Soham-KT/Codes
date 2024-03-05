import numpy as np
import matplotlib.pyplot as plt
import cv2

img = cv2.imread("../DATA/00-puppy.jpg")

plt.imshow(img)
plt.show()

# cv2 displays image array in order : BLUE GREEN RED
# matplotlib reads the image array in order : RED GREEN BLUE
# to fix this we do
fix_img = cv2.cvtColor(img, cv2.COLOR_BGR2RGB)
plt.imshow(fix_img)
plt.show()

# to read things in a gray scale
img_gray = cv2.imread("../DATA/00-puppy.jpg", cv2.IMREAD_GRAYSCALE)
plt.imshow(img_gray, cmap="gray")
plt.show()

# to resize the image
new_img = cv2.resize(fix_img, (800, 400))
plt.imshow(new_img)
plt.show()

# to resize the image by ratio
new_h = 0.5
new_w = 0.5
new_img = cv2.resize(fix_img, (0, 0), fix_img, new_w, new_h)
plt.imshow(new_img)
plt.show()

# to flip image horizontally and vertically
new_img = cv2.flip(fix_img, 0) # 0: horizontal flip, 1: vertical flip, -1: both flip
plt.imshow(new_img)
plt.show()

cv2.imwrite("HEYBOI.jpg", fix_img)
