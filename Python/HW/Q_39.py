str1 = input("Enter a string: ")
lst_str = list(str1)
lst_str.sort()
str3 = ""
for letter in lst_str:
    str3 += letter
print(str3)