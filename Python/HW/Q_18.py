def fact(x):
    fact=1
    for i in range(1, x+1):
        fact*=i
    return fact

x=int(input("Enter number: "))
print(f"Factorial of number: {fact(x)}")