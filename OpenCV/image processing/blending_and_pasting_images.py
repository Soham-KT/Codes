import cv2
import matplotlib.pyplot as plt

img1 = cv2.imread("../DATA/dog_backpack.png")
img1 = cv2.cvtColor(img1, cv2.COLOR_BGR2RGB)
img2 = cv2.imread("../DATA/watermark_no_copy.png")
img2 = cv2.cvtColor(img2, cv2.COLOR_BGR2RGB)

plt.imshow(img1)
plt.show()

plt.imshow(img2)
plt.show()

# ----------------------------------------------------------- Blending images of same size
img1 = cv2.resize(img1, (1200, 1200))
img2 = cv2.resize(img2, (1200, 1200))
plt.imshow(img1)
plt.show()

plt.imshow(img2)
plt.show()

# addWeighted works only for same sized images
blended = cv2.addWeighted(src1=img1, alpha=0.8, src2=img2, beta=0.15, gamma=0)
plt.imshow(blended)
plt.show()

# ------------------------------------------ Overlay small image on large image (no blending)
img1 = cv2.imread("../DATA/dog_backpack.png")
img1 = cv2.cvtColor(img1, cv2.COLOR_BGR2RGB)
img2 = cv2.imread("../DATA/watermark_no_copy.png")
img2 = cv2.cvtColor(img2, cv2.COLOR_BGR2RGB)

img2 = cv2.resize(img2, (600, 600))
plt.imshow(img2)
plt.show()

large_img = img1
small_img = img2

x_offset = 0
y_offset = 0
x_pos = x_offset + small_img.shape[1]
y_pos = y_offset + small_img.shape[0]
large_img[y_offset: y_pos, x_offset: x_pos] = small_img
plt.imshow(large_img)
plt.show()