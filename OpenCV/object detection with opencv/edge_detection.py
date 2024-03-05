import cv2
import numpy as np
import matplotlib.pyplot as plt

img = cv2.imread("../DATA/sammy_face.jpg")
med_val = np.median(img)


# sets the lower to 0 or 70% of median value, whichever is greater
lower = int(max(0, 0.7*med_val))
# sets the upper to 255 or 130% of median value, whichever is smaller
upper = int(min(255, 1.3*med_val))

blurred_img = cv2.blur(img, ksize=(5, 5))
edges = cv2.Canny(blurred_img, threshold1=lower, threshold2=upper)
plt.imshow(edges)
plt.show()