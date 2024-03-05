import tkinter as tk


def get_vals():
    print(f"Username: {userval.get()}")
    print(f"Password: {passval.get()}")


if __name__ == "__main__":
    root = tk.Tk()
    root.geometry("700x400")

    tk.Label(root, text="Username: ").grid()
    tk.Label(root, text="Password: ").grid()

    userval = tk.StringVar()
    passval = tk.StringVar()

    tk.Entry(root, textvariable=userval).grid(row=0, column=1)
    tk.Entry(root, textvariable=passval).grid(row=1, column=1)

    tk.Button(root, text="Print hello", command=get_vals).grid()

    root.mainloop()
