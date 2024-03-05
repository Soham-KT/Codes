x=int(input("Enter a number: "))
cnt=n=x
rem=0
add=0
length=0

while cnt>0:
    length+=1
    cnt//=10

while n>0:
    rem=n%10
    add+=(rem**length)
    n//=10

if add==x:
    print("Is armstrong")
else:
    print("Is not armstrong")