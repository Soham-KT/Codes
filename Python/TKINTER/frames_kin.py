import tkinter as tk

if __name__ == "__main__":
    root = tk.Tk()
    root.geometry("700x400")

    f1 = tk.Frame(root, background="grey", borderwidth=4)
    f1.pack(side=tk.LEFT, fill="y")

    f2 = tk.Frame(root, background="grey", borderwidth=4)
    f2.pack(side=tk.TOP, fill="x")

    l1 = tk.Label(f1, text="Menu here", padx=12)
    l1.pack()

    tk.Label(f2, text="Title here", pady=12).pack()

    root.mainloop()
