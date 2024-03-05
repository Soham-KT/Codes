def prin_factor(num):
    for i in range(2, num):
        if num%i==0:
            print(f"{i} is a factor")

x=int(input("Enter a number: "))
prin_factor(x)