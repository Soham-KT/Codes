str1 = input("Enter string: ")
str2 = ""
words = str1.split()
for i in words:
    str2 += i[::-1]+" "

print(str2)
