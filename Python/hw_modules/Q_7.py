if __name__ == "__main__":
    with open("python_definition.txt", "r") as file:
        text = file.read()
        words_and_count = dict()
        text_2 = ""
        for word in text:
            if word == "." or word == ",":
                text_2 += ""
            else:
                text_2 += word

        for word in text_2.split():
            if word in words_and_count:
                words_and_count[word] += 1
            else:
                words_and_count[word] = 1

        for words, count in words_and_count.items():
            print(f"{words}: {count}")
