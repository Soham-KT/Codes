import cv2
import numpy as np
import matplotlib.pyplot as plt
road = cv2.imread("../DATA/road_image.jpg")
road_cpy = np.copy(road)

marker_image = np.zeros(road.shape[:2], dtype=np.int32)
segments = np.zeros(road.shape, dtype=np.uint8)

from matplotlib import cm
x = np.array(cm.tab10(0))[:3]*255

def create_rgb(i):
    x = np.array(cm.tab10(i))[:3]*255
    return tuple(x)


colours = []
for i in range(10):
    colours.append(create_rgb(i))

# ------------------------------------------------------------------ main prog starts
# --------------------------------------------- global variables
# number of markers
n_markers = 10  # 0-9
# colour choice 
current_marker = 1
# check if the marker has been updated
marker_update = False


# --------------------------------------------- callback function
def mouse_callback(event, x, y, flags, param):
    global marker_update

    if event == cv2.EVENT_LBUTTONDOWN:
        # marker passed to watershed algo
        cv2.circle(marker_image, (x, y), 5, (current_marker), -1)

        # what the user sees
        cv2.circle(road_cpy, (x, y), 5, colours[current_marker], -1)

        marker_update = True


# --------------------------------------------- while loop
cv2.namedWindow("Road image")
cv2.setMouseCallback("Road image", mouse_callback)

while True:
    cv2.imshow("Watershed segments", segments)
    cv2.imshow("Road image", road_cpy)

    # ----------------------- close all windows
    k = cv2.waitKey(1)

    if k == 27:
        break

    # ----------------------- update colour choice
    # clearing all the colours when user presses "c" key
    elif k == ord('c'):
        road_cpy = road.copy()
        marker_image = np.zeros(road.shape[0:2], dtype=np.int32)
        segments = np.zeros(road.shape, dtype=np.uint8)

    # update colour
    elif k > 0 and chr(k).isdigit():
        current_marker = int(chr(k))

    # ----------------------- update the windows
    if marker_update:
        
        marker_image_copy = marker_image.copy()
        cv2.watershed(road, marker_image_copy)
        
        segments = np.zeros(road.shape,dtype=np.uint8)
        
        for color_ind in range(n_markers):
            segments[marker_image_copy == (color_ind)] = colours[color_ind]
        
        marks_updated = False

cv2.destroyAllWindows()
