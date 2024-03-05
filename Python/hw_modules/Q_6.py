if __name__ == "__main__":
    with open("python_definition.txt", "r") as file:
        text = file.read()
        count = 0
        for words in text.split():
            count += 1

        print(f"Number of words in file: {count}")
