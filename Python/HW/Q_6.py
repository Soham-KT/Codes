x=int(input("Enter a number: "))
for i in range(1, x+1):
    val=0
    for j in range(2, i//2+1):
        if i%j==0:
            val=1
            break
    if val==0:
        print(f"{i} is prime")