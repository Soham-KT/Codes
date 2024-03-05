import tkinter as tk


def hello():
    print("Hello world")


if __name__ == "__main__":
    root = tk.Tk()
    root.geometry("700x400")

    f1 = tk.Frame(root, background="grey", borderwidth=4)
    f1.pack(side=tk.LEFT, fill="y")

    butt = tk.Button(f1, text="Print hello", command=hello)
    butt.pack(side=tk.LEFT)

    root.mainloop()