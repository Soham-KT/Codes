import tkinter as tk


def show_frame(f):
    f.tkraise()


if __name__ == "__main__":
    root = tk.Tk()
    root.state("zoomed")
    root.rowconfigure(0, weight=1)
    root.columnconfigure(0, weight=1)

    f1 = tk.Frame(root)
    f2 = tk.Frame(root)
    f3 = tk.Frame(root)

    for frame in (f1, f2, f3):
        frame.grid(row=0, column=0, sticky="nsew")

    # ------------------------------------------------------------ Frame 1 code
    tk.Label(f1, text="This is frame 1").pack(fill="x")
    frame1_butt = tk.Button(f1, text="Enter", command=lambda: show_frame(f2))
    frame1_butt.pack()

    # ------------------------------------------------------------ Frame 2 code
    tk.Label(f2, text="This is frame 2").pack(fill="x")
    frame2_butt = tk.Button(f2, text="Enter", command=lambda: show_frame(f3))
    frame2_butt.pack()
    # ------------------------------------------------------------ Frame 3 code
    tk.Label(f3, text="This is frame 3").pack(fill="x")
    frame3_butt = tk.Button(f3, text="Enter", command=lambda: show_frame(f1))
    frame3_butt.pack()
    
    show_frame(f1)

    root.mainloop()
