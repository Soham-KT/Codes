x=int(input("Enter a number: "))
p1=0
p2=1
print(p1, p2, end=" ")
for i in range(2, x):
    c=p1+p2
    print(c, end=" ")
    p1=p2
    p2=c