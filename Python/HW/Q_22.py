def dec_to_bin(x):
    if x>=1:
        dec_to_bin(x//2)
    print(x%2, end="")

x=int(input("Enter a number: "))
dec_to_bin(x)