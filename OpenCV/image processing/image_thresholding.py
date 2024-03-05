import cv2
import matplotlib.pyplot as plt

# to read the image in grayscale, add an attribute 0 after image path
img = cv2.imread("../DATA/rainbow.jpg", 0)
plt.imshow(img, cmap="gray")
plt.show()

# in threshold (mid value (in this case it is 127.5/ 127)), the value below it becomes 0 and value above it becomes max
# ret, thresh1 = cv2.threshold(img, 127, 255, cv2.THRESH_BINARY)
# print(ret)
# plt.imshow(thresh1, cmap="gray")
# plt.show()

# ret, thresh1 = cv2.threshold(img, 127, 255, cv2.THRESH_BINARY_INV)
# print(ret)
# plt.imshow(thresh1, cmap="gray")
# plt.show()

# ret, thresh1 = cv2.threshold(img, 127, 255, cv2.THRESH_TRUNC)
# print(ret)
# plt.imshow(thresh1, cmap="gray")
# plt.show()

# ret, thresh1 = cv2.threshold(img, 127, 255, cv2.THRESH_TOZERO)
# print(ret)
# plt.imshow(thresh1, cmap="gray")
# plt.show()

# ret, thresh1 = cv2.threshold(img, 127, 255, cv2.THRESH_TOZERO_INV)
# print(ret)
# plt.imshow(thresh1, cmap="gray")
# plt.show()

img = cv2.imread("../DATA/crossword.jpg", 0)
plt.imshow(img, cmap="gray")
plt.show()


def show_img(img):
    fig = plt.figure(figsize=(15, 15))
    ax = fig.add_subplot(111)
    rec, th1 = cv2.threshold(img, 190, 255, cv2.THRESH_BINARY)
    ax.imshow(th1, cmap="gray")
    plt.show()

show_img(img)
