import cv2
import numpy as np
import matplotlib.pyplot as plt

def display(img, cmap="gray"):
    fig = plt.figure(figsize=(12, 10))
    ax = fig.add_subplot(111)
    ax.imshow(img, cmap="gray")
    plt.show()

# image to search 
reeses = cv2.imread("../DATA/reeses_puffs.png", 0)
display(reeses)

# to search image in
cereals = cv2.imread("../DATA/many_cereals.jpg", 0)
display(cereals)

# technique 1 : brute force with sift detectors (dosent always work 💀)

# orb = cv2.ORB_create() # detector object
# kp1, desc1 = orb.detectAndCompute(reeses, None)
# kp2, desc2 = orb.detectAndCompute(cereals, None)
# bf = cv2.BFMatcher(cv2.NORM_HAMMING, crossCheck=True)
# matches = bf.match(desc1, desc2)
# matches = sorted(matches, key = lambda x:x.distance)
# reeses_matches = cv2.drawMatches(reeses, kp1, cereals, kp2, matches[:25], None, flags=2)
# display(reeses_matches)


# technique 2: brute force with sift descriptors

sift = cv2.xfeatures2d.SIFT_create()

# find the keypoints and descriptors with SIFT
kp1, des1 = sift.detectAndCompute(reeses,None)
kp2, des2 = sift.detectAndCompute(cereals,None)

# BFMatcher with default params
bf = cv2.BFMatcher()
matches = bf.knnMatch(des1,des2, k=2)

# Apply ratio test
good = []
for match1,match2 in matches:
    if match1.distance < 0.75*match2.distance:
        good.append([match1])

# cv2.drawMatchesKnn expects list of lists as matches.
sift_matches = cv2.drawMatchesKnn(reeses,kp1,cereals,kp2,good,None,flags=2)