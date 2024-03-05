import cv2
import numpy as np
import matplotlib.pyplot as plt


def load_img():
    blank_img = np.zeros((600,600))
    font = cv2.FONT_HERSHEY_SIMPLEX
    cv2.putText(blank_img,text='ABCDE',org=(50,300), fontFace=font,fontScale= 5,color=(255,255,255),thickness=25,lineType=cv2.LINE_AA)
    return blank_img


def display_img(img):
    fig = plt.figure(figsize=(12,10))
    ax = fig.add_subplot(111)
    ax.imshow(img,cmap='gray')
    plt.show()

# ---------------------------------------------------------Erosion
img = load_img()
display_img(img)
kernel = np.ones((5, 5), dtype=np.uint8)
res = cv2.erode(img,kernel,iterations = 1)
display_img(res)

# opening: erosion followed by dialation
img = load_img()
white_img = np.random.randint(0, 2, (600, 600))
white_img *= 255
noise_img = white_img + img
display_img(noise_img)
opening = cv2.morphologyEx(noise_img, cv2.MORPH_OPEN, kernel)
display_img(opening)
closing = cv2.morphologyEx(noise_img, cv2.MORPH_CLOSE, kernel)
display_img(closing)
gradient = cv2.morphologyEx(noise_img, cv2.MORPH_GRADIENT, kernel)
display_img(gradient)