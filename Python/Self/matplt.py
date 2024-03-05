import matplotlib.pyplot as plt

plt.style.use("ggplot")
time_taken = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
heat = [31, 42, 53, 64, 23, 54, 75, 64, 24, 34]

plt.plot(time_taken, heat)
plt.xlabel("Time Taken (in seconds)")
plt.ylabel("Heat Generated by CPU (in Celsius)")
plt.title("Time taken -vs- Heat generated")
plt.show()