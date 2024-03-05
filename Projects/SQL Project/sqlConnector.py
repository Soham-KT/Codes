import mysql.connector

# ----------------------------------------------------------- connecting to database

mydb = mysql.connector.connect(host='localhost', user='root', password='')
database = "Form_Database"

# Cursor objects interact with the MySQL server using a MySQLConnection object.
mycursor = mydb.cursor()

# ----------------------------------------------------------- creating database

sql = "CREATE DATABASE if not exists %s" % database
mycursor.execute(sql)

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
pincode varchar(10) not null)"

mycursor.execute(query)


def insert_vals(mid, fname, lname, pno, em, ci, pinn):
    rec = (mid, fname, lname, pno, em, ci, pinn)

    # running query
    query = "INSERT INTO " + Tablename + " values (%s, %s, %s, %s, %s, %s, %s)"
    mycursor.execute(query, rec)
    mydb.commit()


def fetch_all_queries():
    query = "SELECT * FROM " + Tablename
    mycursor.execute(query)

    # fetching all rows in db
    myrecords = mycursor.fetchall()

    return myrecords


def fetch_one_query(mid):
    query = f"SELECT * FROM {Tablename} WHERE member_id = '{mid}'"

    mycursor.execute(query)

    # fetching a specific row in db
    myrecord = mycursor.fetchone()

    return myrecord
