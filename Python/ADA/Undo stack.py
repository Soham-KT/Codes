class TextEditor:
    def __init__(self):
        self.text = ""
        self.history = []

    def insert(self, text, position):
        self.text = self.text[:position] + text + self.text[position:]
        self.history.append(("insert", text, position))

    def delete(self, start, end):
        deleted_text = self.text[start:end]
        self.text = self.text[:start] + self.text[end:]
        self.history.append(("delete", deleted_text, start))

    def replace(self, new_text, start, end):
        replaced_text = self.text[start:end]
        self.text = self.text[:start] + new_text + self.text[end:]
        self.history.append(("replace", replaced_text, new_text, start))

    def undo(self):
        if not self.history:
            print("Nothing to undo.")
            return

        action = self.history.pop()
        if action[0] == "insert":
            _, inserted_text, position = action
            self.text = self.text[:position] + self.text[position + len(inserted_text):]
        elif action[0] == "delete":
            _, deleted_text, position = action
            self.text = self.text[:position] + deleted_text + self.text[position:]
        elif action[0] == "replace":
            _, original_text, new_text, position = action
            self.text = self.text[:position] + original_text + self.text[position + len(new_text):]

    def get_text(self):
        return self.text


if __name__ == '__main__':
    editor = TextEditor()

    print("Inserted 'Ha janta'")
    editor.insert("Ha janta", 0)
    print("Inserted ', kya haal'")
    editor.insert(", kya haal", 8)
    print("Text:", editor.get_text())
    print()

    print("Deleted 'Ha janta'")
    editor.delete(0, 8)
    print("Text:", editor.get_text())
    print()

    print("Replaced ', kya haal' with 'Maushi chi gand'")
    editor.replace("Maushi chi gand", 0, 16)
    print("Text:", editor.get_text())
    print()

    print("Undid replace, ie: replaced 'Maushi chi gand' with ', kya haal'")
    editor.undo()
    print("Text:", editor.get_text())
    print()

    print("Undid delete, ie: inserted 'Ha janta'")
    editor.undo()
    print("Text:", editor.get_text())
    print()
