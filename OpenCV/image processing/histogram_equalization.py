import cv2
import numpy as np
import matplotlib.pyplot as plt


def display(img, cmap=None):
    fig = plt.figure(figsize=(10, 8))
    ax = fig.add_subplot(111)
    ax.imshow(img, cmap)
    plt.show()


# gorilla = cv2.imread("../DATA/gorilla.jpg", 0)
# display(gorilla, "gray")

# hist_vals = cv2.calcHist([gorilla], [0], None, [256], [0, 256])
# plt.plot(hist_vals)
# plt.show()

# equ_gorilla = cv2.equalizeHist(gorilla)
# display(equ_gorilla, cmap="gray")
# hist_vals = cv2.calcHist([equ_gorilla], [0], None, [256], [0, 256])
# plt.plot(hist_vals)
# plt.show()

color_gorilla = cv2.imread("../DATA/gorilla.jpg")
show_gorilla = cv2.cvtColor(color_gorilla, cv2.COLOR_BGR2RGB)
display(show_gorilla)

hsv = cv2.cvtColor(color_gorilla, cv2.COLOR_BGR2HSV)
hsv[:, :, 2] = cv2.equalizeHist(hsv[:, :, 2])
equ_color_gorilla = cv2.cvtColor(hsv, cv2.COLOR_HSV2BGR)
display(equ_color_gorilla)