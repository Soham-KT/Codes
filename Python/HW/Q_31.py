lst=list(map(int, input("Enter values in a list: ").split()))
ele=int(input("Enter element: "))
occ=0
print("Element found at indices:", end=" ")
for i in range(len(lst)):
    if lst[i]==ele:
        print(i+1, end=" ")
        occ+=1

print("\nNumber of occurences:", occ)