#-------------------------------------------------------------check for 2 numbers
x=int(input("Enter number 1: "))
y=int(input("Enter number 2: "))
print(f"{y} is greatest") if x<y else print(f"{x} is greatest")

#-------------------------------------------------------------check for 3 numbers
x=int(input("Enter number 1: "))
y=int(input("Enter number 2: "))
z=int(input("Enter number 3: "))

if x>y and x>z:
    print(f"{x} is greatest")
elif y>x and y>z:
    print(f"{y} is greatest")
else:
    print(f"{z} is greatest")