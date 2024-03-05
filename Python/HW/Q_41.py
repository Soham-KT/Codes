str1 = input("Enter string 1: ")
str2 = input("Enter string 2: ")
lst1 = list(str1)
lst2 = list(str2)

for i in lst1:
    if i == " ":
        lst1.remove(i)

for i in lst2:
    if i == " ":
        lst2.remove(i)

lst1.sort()
lst2.sort()

if lst1 == lst2:
    print("The strings are anagram")
else:
    print("The strings are not anagram")

