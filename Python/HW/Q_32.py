lst=list(map(int, input("Enter values in a list: ").split()))
dup=[]
for i in range(len(lst)):
    for j in range(i+1, len(lst)):
        if lst[i]==lst[j]:
            if lst[i] in dup:
                continue
            else:
                dup.append(lst[i])

if len(lst)==0:
    print("No duplicates found")
else:
    print("List of duplicates:", dup)