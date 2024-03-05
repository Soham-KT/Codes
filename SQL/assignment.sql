create database assignment;
use assignment;

create table LOCATION (
    Location_ID int,
    Regional_Group varchar(20),
    primary key(Location_ID)
);

create table DEPARTMENT (
    Department_ID int,
    Name varchar(20),
    Location_ID int,
    primary key(Department_ID),
    foreign key(Location_ID) references LOCATION(Location_ID)
);

create table JOB (
    Job_ID int,
    Function_ varchar(20),
    primary key(Job_ID)
);

create table SALARYGRADES(
    Salary_MAX int,
    Salary_MIN int,
    Salary_Grade varchar(1)
);

create table EMPLOY (
    Employ_ID int,
    Last_Name varchar(20),
    First_Name varchar(20),
    Middle_Name varchar(20),
    Job_ID int,
    Manager_ID int,
    Hier_Date date,
    Salary int,
    Comm int default null,
    Department_ID int,
    primary key(Employ_ID),
    foreign key(Job_ID) references JOB(Job_ID),
    foreign key(Department_ID) references DEPARTMENT(Department_ID)
);

insert into LOCATION(Location_ID,Regional_Group) values
(122,"NEW YORK"),
    (123,"DALLAS"),
    (124,"CHICAGO"),
    (167,"BOSTON");

insert into DEPARTMENT(Department_ID,Name,Location_ID) values
(10,"ACCOUNTING",122),
(20,"RESEARCH",124),
(30,"SALES",123),
(40,"OPERATIONS",167);

insert into JOB(Job_ID,Function_) values
(667,"CLERK"),
(668,"STAFF"),
(669,"ANALYST"),
(670,"SALESPERSON"),
(671,"MANAGER"),
(672,"PRESIDENT");

insert into SALARYGRADES(Salary_Grade,Salary_MAX,Salary_MIN) values
("A",3000,2500),
("B",2499,2000),
("C",1999,1500),
("D",1499,1000),
("E",999,500);

insert into EMPLOY(Employ_ID,Last_Name,First_Name,Middle_Name,Job_ID,Manager_ID,Hier_Date,Salary,Comm,Department_ID)
values
(7369,"SMITH","JOHN","Q",667,7902,"1984-12-17",800,NULL,20),
(7499,"ALLEN","KEVIN","J",670,7698,"1985-02-20",1600,300,30),
(7505,"DOYLE","JEAN","K",671,7839,"1985-04-04",2850,NULL,30),
(7506,"DENNIS","LYNN","S",671,7839,"1985-05-15",2750,NULL,30),
(7507,"BAKER","LESLIE","D",671,7839,"1985-06-10",2200,NULL,40),
(7521,"WARK","CYNTHIA","D",670,7698,"1985-02-22",1250,500,30),
(7902,"McCormack","Larry","F",671,7697,"1985-04-23",1800,800,10),
(7698,"Myers","Steve","U",671,7507,"1985-04-18",1850,NULL,20),
(7697,"Cast","Mark","C",671,7506,"1985-01-18",2300,NULL,30),
(7839,"Hoffman","Hank","K",671,NULL,"1985-09-27",2150,NULL,40);

use assignment;
update EMPLOY set First_Name="shmith hell" where Employ_ID=7369;

use assignment;
select First_Name from EMPLOY where First_Name like "% ";

ALTER TABLE EMPLOY
    ADD CONSTRAINT M_E foreign key(Manager_ID) references EMPLOY(Employ_ID);

--  drop database assignment;
