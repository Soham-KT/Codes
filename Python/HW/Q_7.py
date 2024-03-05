x=int(input("Enter a number: "))
n=x
rem=0
add=0
while n>0:
    rem=n%10
    add=add*10+rem
    n//=10
    
print(add)