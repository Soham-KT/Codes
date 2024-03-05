# ------------------------------------------ Overlay small image on large image (blending)
import cv2
import matplotlib.pyplot as plt
import numpy as np

img1 = cv2.imread("../DATA/dog_backpack.png")
img1 = cv2.cvtColor(img1, cv2.COLOR_BGR2RGB)
img2 = cv2.imread("../DATA/watermark_no_copy.png")
img2 = cv2.cvtColor(img2, cv2.COLOR_BGR2RGB)

img2 = cv2.resize(img2, (600, 600))
rows, cols, channels = img2.shape

x_offset = 934 - 600
y_offset = 1401 - 600


roi = img1[y_offset:1401, x_offset:943]
plt.imshow(roi)
plt.show()

# ------------------------------------------ Creating mask
img2gray = cv2.cvtColor(img2, cv2.COLOR_RGB2GRAY)
plt.imshow(img2gray, cmap="gray")
plt.show()

mask_inv = cv2.bitwise_not(img2gray)
plt.imshow(mask_inv, cmap="gray")
plt.show()

white_bg = np.full(img2.shape, 255, dtype=np.uint8)
print(white_bg.shape)

bg = cv2.bitwise_or(white_bg, white_bg, mask=mask_inv)
plt.imshow(bg)
plt.show()
print(bg.shape)

fg = cv2.bitwise_or(img2, img2, mask=mask_inv)
plt.imshow(fg)
plt.show()

final_roi = cv2.bitwise_or(roi, fg)
plt.imshow(final_roi)
plt.show()

# ------------------------------------------ Combining mask and final image
large_img = img1
small_img = final_roi
x_pos = x_offset + small_img.shape[1]
y_pos = y_offset + small_img.shape[0]
large_img[y_offset: y_pos, x_offset: x_pos] = small_img
plt.imshow(large_img)
plt.show()
