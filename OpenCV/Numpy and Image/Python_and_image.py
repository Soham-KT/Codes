import numpy as np
import matplotlib.pyplot as plt
from PIL import Image

pic = Image.open("DATA/00-puppy.jpg")
pic_array = np.asarray(pic)

# ------------------------------------------------------------To get size of picture array
# print(pic_array.shape)

# -----------------------------------------------------------------------To show the image
# plt.imshow(pic_array)
# plt.show()

pic_red = pic_array.copy()

# -----------------------------------------------------------------------------------R G B
# -------------------------RED CHANNEL VALUES, 0(no red/black)-255(full red) in gray scale
plt.imshow(pic_red[:, :, 0], cmap="gray")
plt.show()

# -----------------------GREEN CHANNEL VALUES, 0(no red/black)-255(full red) in gray scale
plt.imshow(pic_red[:, :, 1], cmap="gray")
plt.show()

# ------------------------BLUE CHANNEL VALUES, 0(no red/black)-255(full red) in gray scale
plt.imshow(pic_red[:, :, 2], cmap="gray")
plt.show()
