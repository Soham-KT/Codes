import cv2
import numpy as np

# --------------------------------------------Variables-------------------------------------------------
# This variable is used for detection if mouse has been pressed down
drawing = False
ix, iy = -1, -1


# ----------------------------------Function to connect with opencv-------------------------------------
def draw_rect(event, x, y, flags, param):
    global drawing, ix, iy
    if event == cv2.EVENT_LBUTTONDOWN:
        drawing = True
        ix, iy = x, y

    elif event == cv2.EVENT_MOUSEMOVE:
        if drawing:
            cv2.rectangle(img, (ix, iy), (x, y), (0, 0, 255), -1)

    elif event == cv2.EVENT_LBUTTONUP:
        drawing = False
        cv2.rectangle(img, (ix, iy), (x, y), (0, 0, 255), -1)


# ----------------------------------------Showing the image---------------------------------------------
cv2.namedWindow(winname="Drawing_lol")
cv2.setMouseCallback("Drawing_lol", draw_rect)
img = np.zeros((512, 512, 3))
while True:
    cv2.imshow("Drawing_lol", img)

    if cv2.waitKey(1) & 0xFF == 27:
        break
cv2.destroyAllWindows()
