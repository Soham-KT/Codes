import cv2
import numpy as np
import matplotlib.pyplot as plt

blank_img = np.zeros(shape=(512, 512, 3), dtype=np.int16)
plt.imshow(blank_img)
plt.show()


# to put custom text in image
font = cv2.FONT_HERSHEY_COMPLEX
cv2.putText(img=blank_img, text="Hello", org=(10, 100), fontFace=font, fontScale=4, color=(255, 255, 255), thickness=5)
plt.imshow(blank_img)
plt.show()


# to put custom polygon in image
blank_img = np.zeros(shape=(512, 512, 3), dtype=np.int16)
plt.imshow(blank_img)
plt.show()

vertices = np.array([[100, 300], [200, 200], [400, 300], [200, 400]], dtype=np.int32)
pts = vertices.reshape(-1, 1, 2)
cv2.polylines(blank_img, [pts], isClosed=True, color=(255, 0, 0), thickness=2)
plt.imshow(blank_img)
plt.show()
