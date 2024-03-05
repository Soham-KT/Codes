x=int(input("Enter a number: "))
for i in range(1, x+1):
    cnt=n=i
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

    if add==i:
        print(f"{i} is armstrong")