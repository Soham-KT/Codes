import mysql.connector
import os

print("=" * 20)
print("  Contact Us Form")
print("=" * 20)

# ----------------------------------------------------------- connecting to database

mydb = mysql.connector.connect(host='localhost', user='root', password='')
database = "Form_Database"

# Cursor objects interact with the MySQL server using a MySQLConnection object.
mycursor = mydb.cursor()

# ----------------------------------------------------------- creating database

sql = "CREATE DATABASE if not exists %s" % database
mycursor.execute(sql)

print("Database created successfully.......")
mycursor.execute("Use " + database)

# ----------------------------------------------------------- creating table

Tablename = "Form_Table"
query = "CREATE TABLE if not exists " + Tablename + "\
(member_id varchar(20) primary key,\
first_name varchar(50) not null,\
last_name varchar(50) not null,\
ph_no varchar(10) not null,\
email varchar(50) not null,\
city varchar(50) not null,\
pincode varchar(6) not null)"

print("Table", Tablename, "created successfully........")
mycursor.execute(query)

if __name__ == "__main__":
    # ----------------------------------------------------------- creating main menu
    while True:
        os.system("cls")
        print("\nMain Menu")
        print("1) Fill Form")
        print("2) Display all forms")
        print("3) Display specific form")
        print("4) Exit")
        choice = int(input("Enter choice: "))

        # ------------------------------------------------- choice 1
        if choice == 1:
            try:
                os.system("cls")
                print("\nFill Form")
                memId = input("Enter memberID: ")
                fName = input("Enter First name: ")
                lName = input("Enter Last name: ")
                phNo = input("Enter Phone number: ")
                email = input("Enter Email: ")
                city = input("Enter City: ")
                pin = input("Enter Pincode: ")

                # checking for valid credentials
                if not (len(memId) > 20 or len(fName) > 50 or len(lName) > 50 or len(phNo) > 10 or len(
                        email) > 50 or len(city) > 50 or len(pin) > 6):
                    if phNo.isnumeric() or pin.isnumeric():

                        # creating a tuple of records
                        rec = (memId, fName, lName, phNo, email, city, pin)

                        # running query
                        query = "INSERT INTO " + Tablename + " values (%s, %s, %s, %s, %s, %s, %s)"
                        mycursor.execute(query, rec)
                        mydb.commit()
                        print("Record added successfully........")

                        input("Press enter to proceed...........")
                    else:
                        print("Enter correct credentials......")
                        input("Press enter to proceed...........")


                else:
                    print("Enter correct credentials......")
                    input("Press enter to proceed...........")


            except:
                print("Something went wrong.")
                input("Press enter to proceed...........")

        # ------------------------------------------------- choice 2
        elif choice == 2:
            try:
                os.system("cls")
                print("\nDisplaying forms:")
                query = "SELECT * FROM " + Tablename
                mycursor.execute(query)

                # fetching all rows in db
                myrecords = mycursor.fetchall()
                for rec in myrecords:
                    print(rec)

                input("Press enter to proceed...........")


            except:
                print("Something went wrong.")
                input("Press enter to proceed...........")

        # ------------------------------------------------- choice 3
        elif choice == 3:
            try:
                os.system("cls")
                print("\nDisplaying form:")
                book_number = input("Enter memberID:")
                query = f"SELECT * FROM {Tablename} WHERE member_id = '{book_number}'"
                mycursor.execute(query)

                # fetching a specific row in db
                myrecord = mycursor.fetchone()
                print(
                    f"First Name: {myrecord[1]}\nLast Name: {myrecord[2]}\nPhone Number: {myrecord[3]}\nEmail: {myrecord[4]}\nCity: {myrecord[5]}\nPincode: {myrecord[6]}")
                input("Press enter to proceed...........")


            except:
                print("Something went wrong.")
                input("Press enter to proceed...........")

        # ------------------------------------------------- choice 4
        elif choice == 4:
            break

        # ------------------------------------------------- if none of the choices are entered
        else:
            print("WRONG CHOICE...............")
            input("Press enter to proceed...........")
