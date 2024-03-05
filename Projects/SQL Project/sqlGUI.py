import tkinter as tk
from tkinter import messagebox
import sqlConnector as sqc


def show_frame(f):
    f.tkraise()


def clear():
    [widget.delete(0, tk.END) for widget in fill_form.winfo_children() if isinstance(widget, tk.Entry)]


def submit_form():
    mid = mem_id.get()
    fname = first_name.get()
    lname = last_name.get()
    pno = phno.get()
    em = email.get()
    ci = city.get()
    pinn = pin.get()
    flag = True

    if len(mid) > 20:
        messagebox.showwarning("Warning", "Invalid Member ID, must be less than 20 characters")
        flag = False

    if len(fname) > 50 and fname.isalnum() and fname.isnumeric():
        messagebox.showwarning("Warning", "Invalid First Name, must be less than 50 characters")
        flag = False

    if len(lname) > 50 and lname.isalnum() and lname.isnumeric():
        messagebox.showwarning("Warning", "Invalid Last Name, must be less than 50 characters")
        flag = False

    if (len(pno) != 10) and not (pno.isnumeric()):
        messagebox.showwarning("Warning", "Invalid Phone number, must be 10 characters and must be integer")
        flag = False

    if len(em) > 50:
        messagebox.showwarning("Warning", "Invalid Email, must be less than 50 characters")
        flag = False

    if len(ci) > 50:
        messagebox.showwarning("Warning", "Invalid City length, must be less than 50 characters")
        flag = False

    if len(pinn) != 6 and not (pinn.isnumeric()):
        messagebox.showwarning("Warning", "Invalid Phone number, must be 6 characters and must be integer")
        flag = False

    _at = False
    for i in em:
        if i == "@":
            _at = True
    if not _at:
        messagebox.showwarning("Warning", "Please enter correct email")

    if flag:
        # pass the values to database
        sqc.insert_vals(mid, fname, lname, pno, em, ci, pinn)
        clear()
        pass


def fetch_all_forms():
    # from y -> 0.2 to n with += 0.1, x will be 0.2
    tk.Label(display_all, text=f"Member ID,  First Name,  Last Name,  Phone Number,  Emial,  City,  Pincode",
             fg="white",
             pady=15, bg="#222222", font=("Monoton", 17)).place(relx=0.2, rely=0.2)
    all_forms = sqc.fetch_all_queries()
    y = 0.3
    i = 1
    for form in all_forms:
        tk.Label(display_all,
                 text=f"{i})  {form[0]},  {form[1]},  {form[2]},  {form[3]},  {form[4]},  {form[5]},  {form[6]}",
                 fg="white",
                 pady=15, bg="#222222", font=("Monoton", 17)).place(relx=0.2, rely=y)
        y += 0.1
        i += 1


def fetch_one_form():
    record = sqc.fetch_one_query(mem_id_one.get())
    try:
        tk.Label(display_one, text=f"First Name :  {record[1]}", fg="white", pady=15, bg="#222222",
                 font=("Monoton", 20)).place(relx=0.2, rely=0.3)
        tk.Label(display_one, text=f"Last Name :  {record[2]}", fg="white", pady=15, bg="#222222",
                 font=("Monoton", 20)).place(relx=0.2, rely=0.4)
        tk.Label(display_one, text=f"Phone Number :  {record[3]}", fg="white", pady=15, bg="#222222",
                 font=("Monoton", 20)).place(relx=0.2, rely=0.5)
        tk.Label(display_one, text=f"Email :  {record[4]}", fg="white", pady=15, bg="#222222",
                 font=("Monoton", 20)).place(relx=0.2, rely=0.6)
        tk.Label(display_one, text=f"City :  {record[5]}", fg="white", pady=15, bg="#222222",
                 font=("Monoton", 20)).place(relx=0.2, rely=0.7)
        tk.Label(display_one, text=f"PIN :  {record[6]}", fg="white", pady=15, bg="#222222",
                 font=("Monoton", 20)).place(relx=0.2, rely=0.8)

    except:
        clear()
        messagebox.showwarning("Warning", "Invalid Member ID")


if __name__ == "__main__":
    root = tk.Tk()
    root.state("zoomed")
    root.title("SQL Connector")
    root.rowconfigure(0, weight=1)
    root.columnconfigure(0, weight=1)

    fill_form = tk.Frame(root, bg="#222222")
    display_all = tk.Frame(root, bg="#222222")
    display_one = tk.Frame(root, bg="#222222")

    for frame in (fill_form, display_all, display_one):
        frame.grid(row=0, column=0, sticky="nsew")

    # ------------------------------------------------------------ Fill Form code
    # Code for title and menu -----------------------------------------------------------------------------------------
    frame_top = tk.Frame(fill_form, bg="#1fd761")
    frame_top.pack(side=tk.TOP, fill="x")
    frame_side = tk.Frame(fill_form, bg="#131213")
    frame_side.pack(side=tk.LEFT, fill="y")

    tk.Label(frame_side, text="Menu", fg="white", pady=15, bg="#131213", font=("Monoton", 25)).pack(padx=20, pady=15)
    tk.Label(frame_top, text="Fill Form", pady=12, bg="#1fd761", font=("Monoton", 25)).pack()

    disp_fill_form_butt = tk.Button(frame_side, text="Fill Form", height=2, width=20, font=("Monoton", 15), fg="white",
                                    padx=5, pady=5, bg="#131213", command=lambda: show_frame(fill_form))
    disp_fill_form_butt.pack(padx=15, pady=15)

    disp_fill_form_butt = tk.Button(frame_side, text="Display all Forms", height=2, width=20, font=("Monoton", 15),
                                    fg="white", padx=5, pady=5, bg="#131213", command=lambda: show_frame(display_all))
    disp_fill_form_butt.pack(padx=5, pady=15)
    disp_fill_form_butt = tk.Button(frame_side, text="Display Single Form", height=2, width=20, font=("Monoton", 15),
                                    fg="white", padx=5, pady=5, bg="#131213", command=lambda: show_frame(display_one))
    disp_fill_form_butt.pack(padx=5, pady=15)
    # -----------------------------------------------------------------------------------------------------------------
    mem_id = tk.StringVar()
    first_name = tk.StringVar()
    last_name = tk.StringVar()
    phno = tk.StringVar()
    email = tk.StringVar()
    city = tk.StringVar()
    pin = tk.StringVar()

    # For Member id
    tk.Label(fill_form, text="Member Id : ", fg="white", pady=15, bg="#222222", font=("Monoton", 20)).place(relx=0.2,
                                                                                                            rely=0.1)
    tk.Entry(fill_form, textvariable=mem_id, font=("Monoton", 20), bg="#303238", fg="white").place(relx=0.4, rely=0.111)

    # For First name
    tk.Label(fill_form, text="First Name : ", fg="white", pady=15, bg="#222222", font=("Monoton", 20)).place(relx=0.2,
                                                                                                             rely=0.2)
    tk.Entry(fill_form, textvariable=first_name, font=("Monoton", 20), bg="#303238", fg="white").place(relx=0.4,
                                                                                                       rely=0.211)

    # For Last name
    tk.Label(fill_form, text="Last Name : ", fg="white", pady=15, bg="#222222", font=("Monoton", 20)).place(relx=0.2,
                                                                                                            rely=0.3)
    tk.Entry(fill_form, textvariable=last_name, font=("Monoton", 20), bg="#303238", fg="white").place(relx=0.4,
                                                                                                      rely=0.311)

    # For Phone number
    tk.Label(fill_form, text="Phone Number : ", fg="white", pady=15, bg="#222222", font=("Monoton", 20)).place(relx=0.2,
                                                                                                               rely=0.4)
    tk.Entry(fill_form, textvariable=phno, font=("Monoton", 20), bg="#303238", fg="white").place(relx=0.4, rely=0.411)

    # For Email
    tk.Label(fill_form, text="Email : ", fg="white", pady=15, bg="#222222", font=("Monoton", 20)).place(relx=0.2,
                                                                                                        rely=0.5)
    tk.Entry(fill_form, textvariable=email, font=("Monoton", 20), bg="#303238", fg="white").place(relx=0.4, rely=0.511)

    # For City
    tk.Label(fill_form, text="City : ", fg="white", pady=15, bg="#222222", font=("Monoton", 20)).place(relx=0.2,
                                                                                                       rely=0.6)
    tk.Entry(fill_form, textvariable=city, font=("Monoton", 20), bg="#303238", fg="white").place(relx=0.4, rely=0.611)

    # For pin
    tk.Label(fill_form, text="PIN : ", fg="white", pady=15, bg="#222222", font=("Monoton", 20)).place(relx=0.2,
                                                                                                      rely=0.7)
    tk.Entry(fill_form, textvariable=pin, font=("Monoton", 20), bg="#303238", fg="white").place(relx=0.4, rely=0.711)

    # Submit Button
    tk.Button(fill_form, text="Submit Form", fg="#f0a966", pady=15, bg="#24292e", font=("Monoton", 15), height=1,
              width=20, command=submit_form).place(relx=0.45, rely=0.85)

    # Clear Form
    tk.Button(fill_form, text="Clear Form", fg="#f0a966", pady=15, bg="#24292e", font=("Monoton", 15), height=1,
              width=20, command=clear).place(relx=0.2, rely=0.85)

    # ------------------------------------------------------------ Display all forms code
    # Code for title and menu-----------------------------------------------------------------------------------------
    frame_top = tk.Frame(display_all, bg="#1fd761")
    frame_top.pack(side=tk.TOP, fill="x")
    frame_side = tk.Frame(display_all, bg="#131213")
    frame_side.pack(side=tk.LEFT, fill="y")

    tk.Label(frame_side, text="Menu", fg="white", pady=15, bg="#131213", font=("Monoton", 25)).pack(padx=20, pady=15)
    tk.Label(frame_top, text="Displaying all forms", pady=12, bg="#1fd761", font=("Monoton", 25)).pack()

    disp_fill_form_butt = tk.Button(frame_side, text="Fill Form", height=2, width=20, font=("Monoton", 15), fg="white",
                                    padx=5, pady=5, bg="#131213", command=lambda: show_frame(fill_form))
    # , command=lambda: show_frame(display_all)
    disp_fill_form_butt.pack(padx=15, pady=15)

    disp_fill_form_butt = tk.Button(frame_side, text="Display all Forms", height=2, width=20, font=("Monoton", 15),
                                    fg="white", padx=5, pady=5, bg="#131213", command=lambda: show_frame(display_all))
    # , command=lambda: show_frame(display_all)
    disp_fill_form_butt.pack(padx=5, pady=15)
    disp_fill_form_butt = tk.Button(frame_side, text="Display Single Form", height=2, width=20, font=("Monoton", 15),
                                    fg="white", padx=5, pady=5, bg="#131213", command=lambda: show_frame(display_one))
    # , command=lambda: show_frame(display_all)
    disp_fill_form_butt.pack(padx=5, pady=15)
    # -----------------------------------------------------------------------------------------------------------------
    # button to display all forms
    tk.Button(display_all, text="Display Forms", fg="#f0a966", pady=15, bg="#24292e", font=("Monoton", 15), height=1,
              width=20, command=fetch_all_forms).place(relx=0.2, rely=0.1)

    # ------------------------------------------------------------ Display one form code
    # Code for title and menu ------------------------------------------------------------------------------------------
    frame_top = tk.Frame(display_one, bg="#1fd761")
    frame_top.pack(side=tk.TOP, fill="x")
    frame_side = tk.Frame(display_one, bg="#131213")
    frame_side.pack(side=tk.LEFT, fill="y")

    tk.Label(frame_side, text="Menu", fg="white", pady=15, bg="#131213", font=("Monoton", 25)).pack(padx=20, pady=15)
    tk.Label(frame_top, text="Displaing form", pady=12, bg="#1fd761", font=("Monoton", 25)).pack()

    disp_fill_form_butt = tk.Button(frame_side, text="Fill Form", height=2, width=20, font=("Monoton", 15), fg="white",
                                    padx=5, pady=5, bg="#131213", command=lambda: show_frame(fill_form))
    # , command=lambda: show_frame(display_all)
    disp_fill_form_butt.pack(padx=15, pady=15)

    disp_fill_form_butt = tk.Button(frame_side, text="Display all Forms", height=2, width=20, font=("Monoton", 15),
                                    fg="white", padx=5, pady=5, bg="#131213", command=lambda: show_frame(display_all))
    # , command=lambda: show_frame(display_all)
    disp_fill_form_butt.pack(padx=5, pady=15)
    disp_fill_form_butt = tk.Button(frame_side, text="Display Single Form", height=2, width=20, font=("Monoton", 15),
                                    fg="white", padx=5, pady=5, bg="#131213", command=lambda: show_frame(display_one))
    # , command=lambda: show_frame(display_all)
    disp_fill_form_butt.pack(padx=5, pady=15)
    # -----------------------------------------------------------------------------------------------------------------
    mem_id_one = tk.StringVar()

    tk.Label(display_one, text="Member Id : ", fg="white", pady=15, bg="#222222", font=("Monoton", 20)).place(relx=0.2,
                                                                                                              rely=0.1)
    tk.Entry(display_one, textvariable=mem_id_one, font=("Monoton", 20), bg="#303238", fg="white").place(relx=0.4,
                                                                                                     rely=0.111)

    tk.Button(display_one, text="Display Form", fg="#f0a966", pady=15, bg="#24292e", font=("Monoton", 15), height=1,
              width=20, command=fetch_one_form).place(relx=0.2, rely=0.2)

    show_frame(fill_form)

    root.mainloop()
