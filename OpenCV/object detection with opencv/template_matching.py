import cv2
import numpy as np
import matplotlib.pyplot as plt

full = cv2.imread("../DATA/sammy.jpg")
full = cv2.cvtColor(full, cv2.COLOR_BGR2RGB)
plt.imshow(full)
plt.show()

face = cv2.imread("../DATA/sammy_face.jpg")
face = cv2.cvtColor(face, cv2.COLOR_BGR2RGB)
plt.imshow(face)
plt.show()