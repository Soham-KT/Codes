import cv2
import numpy as np
import matplotlib.pyplot as plt

blank_img = np.zeros(shape=(512, 512, 3), dtype=np.int16)
plt.imshow(blank_img)
plt.show()

# to draw a rectangle : permanent
cv2.rectangle(img=blank_img, pt1=(100, 100), pt2=(400, 400), color=(255, 0, 0), thickness=2)
plt.imshow(blank_img)
plt.show()

# to draw a circle : permanent
cv2.circle(img=blank_img, center=(250, 250), radius=150, color=(0, 255, 0), thickness=2)
plt.imshow(blank_img)
plt.show()

# to draw a filled in rectangle : permanent, thickness = -1
cv2.rectangle(img=blank_img, pt1=(100, 100), pt2=(400, 400), color=(255, 0, 0), thickness=-1)
plt.imshow(blank_img)
plt.show()

# to draw a filled in circle : permanent
cv2.circle(img=blank_img, center=(250, 250), radius=150, color=(0, 255, 0), thickness=-1)
plt.imshow(blank_img)
plt.show()

# to draw a line : permanent
cv2.line(img=blank_img, pt1=(0, 0), pt2=(512, 512), color=(105, 255, 255), thickness=5)
plt.imshow(blank_img)
plt.show()
