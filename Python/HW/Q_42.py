str1 = input("Enter string: ")
str1 = str1.split()
words_and_count = dict()

for word in str1:
    if word in words_and_count:
        words_and_count[word] += 1
    else:
        words_and_count[word] = 1

for words, count in words_and_count.items():
    print(f"{words}: {count}")