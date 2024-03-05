x=int(input("Enter number: "))
val=0
print(x//2+1)
for i in range(2, x//2+1):
    if x%i==0:
        val=1
        break
if val==0:
    print("Number is prime")
else:
    print("Number is not prime")