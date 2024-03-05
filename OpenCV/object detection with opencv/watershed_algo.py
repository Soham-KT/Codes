import cv2
import numpy as np
import matplotlib.pyplot as plt

def display(img, cmap="gray"):
    fig = plt.figure(figsize=(12, 10))
    ax = fig.add_subplot(111)
    ax.imshow(img, cmap="gray")
    plt.show()


# ----------------------------------------------------- the shit that dosent work

# sep_coins = cv2.imread("../DATA/pennies.jpg")
# display(sep_coins)

# step 1 : median blur

# sep_blur = cv2.medianBlur(sep_coins, 25)
# display(sep_blur)

# step 2 : convert to gray scale

# gray_sep_blur = cv2.cvtColor(sep_blur, cv2.COLOR_BGR2GRAY)
# display(gray_sep_blur)

# step 3 : make a threshold

# ret, sep_thres = cv2.threshold(gray_sep_blur, 180, 255, cv2.THRESH_BINARY_INV)
# display(sep_thres)

# step 4 : find contours

# contours, hierarchy = cv2.findContours(sep_thres.copy(), cv2.RETR_CCOMP, cv2.CHAIN_APPROX_SIMPLE)
# for i in range(len(contours)):
#     if hierarchy[0][i][3] == -1:
#         cv2.drawContours(sep_coins, contours, i, (255, 0, 0), 10)
    
# display(sep_coins)

# ----------------------------------------------------- the shit that worka

# same till step 3

sep_coins = cv2.imread("../DATA/pennies.jpg")
sep_blur = cv2.medianBlur(sep_coins, 35)
gray_sep_blur = cv2.cvtColor(sep_blur, cv2.COLOR_BGR2GRAY)
ret, sep_thres = cv2.threshold(gray_sep_blur, 0, 255, cv2.THRESH_BINARY_INV+cv2.THRESH_OTSU)
display(sep_thres)

# step 4 : noise removal

kernel = np.ones((3, 3), np.uint8)
opening = cv2.morphologyEx(sep_thres, cv2.MORPH_OPEN, kernel, iterations=2)
display(opening)
sure_bg = cv2.dilate(opening, kernel, iterations=3)

# step 5 : distance transform

dist_transform = cv2.distanceTransform(opening, cv2.DIST_L2, 5)
display(dist_transform)

ret, sure_fg = cv2.threshold(dist_transform, 0.7*dist_transform.max(), 255, 0)
display(sure_fg)

# step 6 : find unknown regin (which doesnt come in both fg and bg)

sure_fg = np.uint8(sure_fg)
unknown = sure_bg - sure_fg
display(unknown)

# step 7 : applying the watershed algo
# step 7.1 : creating markers

ret, markers = cv2.connectedComponents(sure_fg)
markers += 1
markers[unknown == 255] = 0
display(markers)

# step 7.2 : apply watershed

markers = cv2.watershed(sep_coins, markers)
display(markers)

# step 7.3 : apply contours

contours, hierarchy = cv2.findContours(markers.copy(), cv2.RETR_CCOMP, cv2.CHAIN_APPROX_SIMPLE)
for i in range(len(contours)):
    if hierarchy[0][i][3] == -1:
        cv2.drawContours(sep_coins, contours, i, (255, 0, 0), 10)
display(sep_coins)