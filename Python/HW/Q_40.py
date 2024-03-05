str1 = input("Enter a statement: ")
vovels = ["a", "e", "i", "o", "u", "A", "E", "I", "O", "U"]
count = 0
for letter in range(len(str1)):
    if letter in vovels:
        count += 1

print(f"Number of vowels in sentence: {count}")