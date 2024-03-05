def summation(x):
    if x==0:
        return 0
    else:
        return (x+summation(x-1))

x=int(input("Enter number: "))
print(f"Summation of number: {summation(x)}")