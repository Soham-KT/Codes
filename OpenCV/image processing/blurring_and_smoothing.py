import numpy as np
import cv2
import matplotlib.pyplot as plt


def load_img():
    img = cv2.imread("../DATA/bricks.jpg").astype(np.float32) / 255
    img = cv2.cvtColor(img, cv2.COLOR_BGR2RGB)
    return img


def disp_img(img):
    fig = plt.figure(figsize=(12, 10))
    ax = fig.add_subplot(111)
    ax.imshow(img)
    plt.show()


i = load_img()
disp_img(i)

# -------------------------------- Gamma values are used to increase or decrease the brightness of an image
# if gamma value less than 1 then image is brighter
gamma = 1/4
res = np.power(i, gamma)
disp_img(res)

# if gamma value greater than 1 then image is brighter
gamma = 2
res = np.power(i, gamma)
disp_img(res)

# --------------------------------------------------------------------blurring and smoothing
img = load_img()
font = cv2.FONT_HERSHEY_COMPLEX
cv2.putText(img, text="Bricks", org=(10, 600), fontFace=font, fontScale=10, color=(255, 0, 0), thickness=4)
disp_img(img)

kernel = np.ones(shape=(5, 5), dtype=np.float32) / 25
dst = cv2.filter2D(img, -1, kernel)
disp_img(dst)

# resetting the image
img = load_img()
font = cv2.FONT_HERSHEY_COMPLEX
cv2.putText(img, text="Bricks", org=(10, 600), fontFace=font, fontScale=10, color=(255, 0, 0), thickness=4)
blur = cv2.blur(img, ksize=(5, 5))
disp_img(blur)