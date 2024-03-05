# --------------------------------------------- without mouse

# import cv2

# cap = cv2.VideoCapture(0)

# width = int(cap.get(cv2.CAP_PROP_FRAME_WIDTH))
# height = int(cap.get(cv2.CAP_PROP_FRAME_HEIGHT))

# x = width//2
# y = height//2

# w = width//4
# h = height//4

# while True:
#     ret, frame = cap.read()

#     cv2.rectangle(frame, (x, y), (x+w, y+w), (0, 255, 0), 2)

#     cv2.imshow("Frame", frame)  

#     if cv2.waitKey(1) & 0xFF == 27:
#         break

# cap.release()
# cv2.destroyAllWindows()

# --------------------------------------------- with mouse

import cv2

cap = cv2.VideoCapture(0)


# callback function
def draw_rect(event, x, y, flags, param):
    global pt1, pt2, topLeft_clicked, btmRight_clicked

    if event == cv2.EVENT_LBUTTONDOWN:
        # reset condition : resets all the points and erases the rectangle
        if topLeft_clicked and btmRight_clicked:
            pt1 = (0, 0)
            pt2 = (0, 0)
            topLeft_clicked = False
            btmRight_clicked = False

        if topLeft_clicked == False:
            pt1 = (x, y)
            topLeft_clicked = True

        elif btmRight_clicked == False:
            pt2 = (x, y)
            btmRight_clicked = True


# global variables
pt1 = (0, 0)
pt2 = (0, 0)
topLeft_clicked = False
btmRight_clicked = False

# connect to callback
cv2.namedWindow("Test")
cv2.setMouseCallback("Test", draw_rect)

while True:
    ret, frame = cap.read()

    # drawing on the frame based on global variables
    if topLeft_clicked:
        cv2.circle(frame, pt1, 2, (0, 255, 0), -1)

    if topLeft_clicked and btmRight_clicked:
        cv2.rectangle(frame, pt1, pt2, (0, 255, 0), 2)

    cv2.imshow("Test", frame)

    if cv2.waitKey(1) & 0xFF == 27:
        break

cap.release()
cv2.destroyAllWindows()
