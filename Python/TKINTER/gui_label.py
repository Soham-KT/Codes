import tkinter as tk

if __name__ == "__main__":
    root = tk.Tk()

    # To define starting size: WidthxHeight
    root.geometry("1400x500")

    # To define min size of window
    root.minsize(800, 200)

    # To define max size of window
    root.maxsize(1400, 500)

    say = tk.Label(text="Hi janta kya haal")
    say.pack()

    root.mainloop()