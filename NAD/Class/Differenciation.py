from math import *

input("This differenciation calculator is for single variable only\nPress enter to continue")
h=0.0000000001
func=input("Enter function with variable as x: ")
x_=int(input("Enter x: "))
x=x_+h
a=eval(func)
x=x_
b=eval(func)
diff=(a-b)/h
print(f"Differenciation is: {diff}")