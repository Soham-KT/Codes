from math import *

t = [-0.93246951, -0.66120939, -0.23861919, 0.23861919, 0.66120939, 0.93246951]
w = [0.17132449, 0.36076157, 0.46791394, 0.46791394, 0.36076157, 0.17132449]

input("This integration calculator is for single variable only\nPress enter to continue")
func = input("\nEnter function with variable as x: ")

a = float(input("Enter lower limit: "))
b = float(input("Enter upper limit: "))
phi = 0

for i in range(6):
    x = (((b - a) / 2) * t[i] + ((b + a) / 2))
    phi += w[i] * eval(func)

ans = ((b - a) / 2) * phi

print(f"The integration is: {ans}")
