import cv2
import time

cap = cv2.VideoCapture('../video basics with open cv/videos/student_capture.mp4')
if cap.isOpened() == False:
    print("ERROR, FILE NOT FOUND OR WRONG CODEC USED")

while cap.isOpened():
    ret, frame = cap.read()
    if ret == True:
        time.sleep(1/20)
        cv2.imshow("Frame", frame)
        if cv2.waitKey(10) & 0xFF == 27:
            break
    else:
        break

cap.release()
cv2.destroyAllWindows()