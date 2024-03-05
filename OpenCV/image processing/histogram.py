import cv2
import numpy as np
import matplotlib.pyplot as plt

dark_horse = cv2.imread('../DATA/horse.jpg')
show_horse = cv2.cvtColor(dark_horse, cv2.COLOR_BGR2RGB)

rainbow = cv2.imread('../DATA/rainbow.jpg')
show_rainbow =cv2.cvtColor(rainbow, cv2.COLOR_BGR2RGB)

blue_bricks = cv2.imread('../DATA/bricks.jpg')
show_bricks = cv2.cvtColor(blue_bricks, cv2.COLOR_BGR2RGB)

# ---------------------------------------------------------- histogram for blue values in an image
# in blue bricks
hist_values = cv2.calcHist([blue_bricks], channels=[0], mask=None, histSize=[256], ranges=[0, 256])
plt.plot(hist_values)
plt.show()

# in dark horse
hist_values = cv2.calcHist([dark_horse], channels=[0], mask=None, histSize=[256], ranges=[0, 256])
plt.plot(hist_values)
plt.show()

# ---------------------------------------------------------- 3 coloured histogram
img = blue_bricks
colour = ('b', 'g', 'r')

for i, col in enumerate(colour):
    hist_values = cv2.calcHist([img], channels=[i], mask=None, histSize=[256], ranges=[0, 256])
    plt.plot(hist_values, color=col)
    plt.xlim([0, 256])

plt.title("HISTOGRAM FOR BLUE BRICKS")
plt.show()

img = dark_horse
colour = ('b', 'g', 'r')

for i, col in enumerate(colour):
    hist_values = cv2.calcHist([img], channels=[i], mask=None, histSize=[256], ranges=[0, 256])
    plt.plot(hist_values, color=col)
    plt.xlim([0, 256])
    plt.ylim([0, 40000])

plt.title("HISTOGRAM FOR BLUE BRICKS")
plt.show()

cv2.calc