import mysql.connector

print("*/" * 60)
print("\t\t\t\t\tLibrary Management")
print("*/" * 60)

database = input("\t\t\tEnter name of your database:")

mydb = mysql.connector.connect(host='localhost', user='root', password='')

mycursor = mydb.cursor()

sql = "CREATE DATABASE if not exists %s" % database

mycursor.execute(sql)

print("Database created successfully.......")
mycursor.execute("Use " + database)
Tablename = input("\t\t\tName of table to be created(use '_' for spaces):")
query = "CREATE TABLE if not exists " + Tablename + "\
(Book_Number int primary key,\
Title varchar(20) not null,\
Publisher_or_Author varchar(20) not null,\
Subject varchar(10) not null,\
Genre varchar(10))"

print("\t\t\tTable", Tablename, "created successfully.....")
mycursor.execute(query)

query = "CREATE TABLE if not exists Issued_Books \
(Student_Number int primary key,\
Student_Name varchar(20) not null,\
Book_Number int )"

mycursor.execute(query)

while True:
    print("*/" * 60)
    print("\t\t\t\tMain Menu")
    print("*/" * 60)
    print("\t\t\t1) Add a book record")
    print("\t\t\t2) Displaying all the book records")
    print("\t\t\t3) Display a particular book record")
    print("\t\t\t4) To issue a book")
    print("\t\t\t5) To return a book")
    print("\t\t\t6) To see issued books ")
    print("\t\t\t7) Exit")
    choice = input("Enter your choice:")
    if choice == "1":
        try:
            print("\tEnter book information:")
            book_number = int(input("Enter book number:"))
            title = input("Enter book's title:")
            author = input("Enter author's name/publisher:")
            sub = input("Enter subject related to book:")
            genre = input("Enter genre(if subject is literature, else null):")
            rec = (book_number, title, author, sub, genre)
            query = "INSERT INTO " + Tablename + " values (%s,%s,%s,%s,%s)"
            mycursor.execute(query, rec)
            mydb.commit()
            print("Record added successfully....")
        except:
            print("Something went wrong.")

    elif choice == "2":
        try:
            query = "SELECT * FROM " + Tablename
            mycursor.execute(query)
            myrecords = mycursor.fetchall()
            for rec in myrecords:
                print(rec)
        except:
            print("Something went wrong.")
    elif choice == "3":
        try:
            book_number = input("Enter book number of book:")
            query = "SELECT * FROM " + Tablename + " WHERE Book_Number=" + book_number
            mycursor.execute(query)
            myrecord = mycursor.fetchone()
            print(myrecord)
        except:
            print("Something went wrong.")

    elif choice == "4":
        try:
            studno = int(input("Enter student Number:"))
            name = input("Enter student's name:")
            ch = input("Enter Book Number of book to be issued:")
            rec = (studno, name, ch)
            query = "INSERT INTO Issued_Books values(%s,%s,%s)"
            mycursor.execute(query, rec)
            mydb.commit()
            print("Entry inserted successfully..........")
        except:
            print("Something went wrong.")
    elif choice == "5":
        try:
            book_number = input("Enter book number:")
            name = input("Student's name:")
            query = "DELETE FROM Issued_books WHERE Book_number=" + book_number
            mycursor.execute(query)
            mydb.commit()
            print("Thank you for returning the book.")
        except:
            print("Something went wrong.")
    elif choice == "6":
        try:
            query = "SELECT * FROM Issued_Books"
            mycursor.execute(query)
            records = mycursor.fetchall()
            for rec in records:
                print(rec)
        except:
            print("Something went wrong.")
    elif choice == "7":
        break
    else:
        print("WRONG CHOICE...............")
