import cv2
import numpy as np


# ----------------------------------Function to connect with opencv-------------------------------------
def draw_circle(event, x, y, flags, param):
    if event == cv2.EVENT_LBUTTONDOWN:
        cv2.circle(img, (x, y), 30, (0, 255, 0), -1)

    elif event == cv2.EVENT_RBUTTONDOWN:
        cv2.circle(img, (x, y), 30, (0, 0, 255), -1)


# ------------------------------------Showing image with opencv-----------------------------------------
cv2.namedWindow(winname="Drawing_lol")
cv2.setMouseCallback("Drawing_lol", draw_circle)
img = np.zeros((512, 512, 3))
while True:
    cv2.imshow("Drawing_lol", img)

    if cv2.waitKey(10) & 0xFF == 27:
        break
cv2.destroyAllWindows()
