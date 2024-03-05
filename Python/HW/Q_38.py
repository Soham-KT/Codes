str1 = input("Enter string: ")
str2 = ""
punc = [",", "'", "-", ".", "!", "?", '"', "(", ")", "[", "]", "{", "}", ":", ";"]
for i in range(len(str1)):
    if str1[i] in punc:
        str2 += ""
    else:
        str2 += str1[i]

print(str2)