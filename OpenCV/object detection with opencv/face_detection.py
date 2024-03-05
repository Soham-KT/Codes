import cv2
import numpy as np
import matplotlib.pyplot as plt

nadia = cv2.imread("../DATA/Nadia_Murad.jpg", 0)
denis = cv2.imread("../DATA/Denis_Mukwege.jpg", 0)
solvay = cv2.imread("../DATA/solvay_conference.jpg", 0)

# --------------------------------------------------------- front face cascade

face_cascade = cv2.CascadeClassifier('../DATA/haarcascades/haarcascade_frontalface_default.xml')


# this func is for detecting a single face

def detect_face(img):
    face_img = img.copy()
    face_rects = face_cascade.detectMultiScale(face_img)

    for (x, y, w, h) in face_rects:
        cv2.rectangle(face_img, (x, y), (x + w, y + h), (255, 255, 255), 5)

    return face_img


# res = detect_face(nadia)
# plt.imshow(res, cmap="gray")
# plt.show()

# res = detect_face(denis)
# plt.imshow(res, cmap="gray")
# plt.show()

# res = detect_face(solvay)
# plt.imshow(res, cmap="gray")
# plt.show()


# this is a trade off for multiple faces to the faces who are not looking directly at the camera

def adjusted_detect_face(img):
    face_img = img.copy()
    face_rects = face_cascade.detectMultiScale(face_img, scaleFactor=1.2, minNeighbors=5)

    for (x, y, w, h) in face_rects:
        cv2.rectangle(face_img, (x, y), (x + w, y + h), (255, 255, 255), 5)

    return face_img

# res = detect_face(solvay)
# plt.imshow(res, cmap="gray")
# plt.show()


# --------------------------------------------------------- eye cascade

eye_cascade = cv2.CascadeClassifier('../DATA/haarcascades/haarcascade_eye.xml')


def detect_eyes(img):
    face_img = img.copy()
    eye_rects = eye_cascade.detectMultiScale(face_img)

    for (x, y, w, h) in eye_rects:
        cv2.rectangle(face_img, (x, y), (x + w, y + h), (255, 255, 255), 5)

    return face_img


# res = detect_eyes(nadia)
# plt.imshow(res, cmap="gray")
# plt.show()

# --------------------------------------------------------- for video

cap = cv2.VideoCapture(0)

while True:
    ret, frame = cap.read(0)
    frame = adjusted_detect_face(frame)
    cv2.imshow("Face detect", frame)

    k = cv2.waitKey(1)
    if k == 27:
        break

cap.release()
cv2.destroyAllWindows()