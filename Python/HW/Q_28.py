lst=list(map(int, input("Enter values in a list: ").split()))
add=0;
for i in lst:
    add+=i
print(f"Average is: {add/len(lst)}")