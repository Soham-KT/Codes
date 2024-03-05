dic={}
n=int(input("Enter range: "))
for i in range(n):
    ki, val=input("Enter key, value: ").split()
    dic[ki]=val

# ---------------------------------------------------- without inbuilt
# keys
for i in dic:
    print(i)
print("\n")

# values
for i in dic:
    print(dic[i])
print("\n")

# items
for i in dic:
    print(i, dic[i])
print("\n")

# ---------------------------------------------------- with inbuilt
print(dic.keys())
print(dic.values())
print(dic.items())