--Query: QueryNo 1
--todo: List all the employee details
USE assignment;
SELECT Employ_ID,Last_Name,First_Name,Middle_Name,
Job_ID,Manager_ID,DATE_FORMAT(Hier_Date,"%d-%b-%y") as Hier_Date,
Salary,Comm,Department_ID FROM EMPLOY;

--Query: QueryNo 2
--todo: List all the department details
USE assignment;
SELECT * FROM DEPARTMENT;

--Query: QueryNo 3
--todo: List all job details
USE assignment;
SELECT * FROM JOB;

--Query: QueryNo 4
--todo: List all the locations
USE assignment;
SELECT * FROM LOCATION;

--Query: QueryNo 5
--todo: List out first name,last name,salary, commission for all employees
USE assignment;
SELECT First_Name,Last_Name,Salary,Comm FROM EMPLOY;

--Query: QueryNo 6
--todo: List out employee_id,last name,department id for all employees and rename employee id as “ID of the employee”, last name as “Name of the employee”, department id as “department ID”
USE assignment;
SELECT Employ_ID as "ID of the employee",Last_Name as "Name of employee",
    Department_ID as "Department ID" FROM EMPLOY;

--Query: QueryNo 7
--todo: List out the employees anuual salary with their names only.
USE assignment;
SELECT First_Name,Middle_Name,Last_Name,Salary*12 as Annual_Salary 
    FROM EMPLOY;

--Query: QueryNo 8
--todo: List the details about “SMITH”
USE assignment;
SELECT * FROM EMPLOY WHERE Last_Name="SMITH";

--Query: QueryNo 9
--todo: List out the employees who are working in department 20
USE assignment;
SELECT * FROM EMPLOY WHERE Department_ID=20;

--Query: QueryNo 10
--todo: List out the employees who are earning salary between 3000 and 4500
USE assignment;
SELECT * FROM EMPLOY WHERE Salary between 3000 and 4500;

--Query: QueryNo 11
--todo: List out the employees who are working in department 10 or 20
USE assignment;
SELECT *
    FROM EMPLOY WHERE Department_ID=10 or Department_ID=20;

--Query: QueryNo 12
--todo: Find out the employees who are not working in department 10 or 30
USE assignment;
SELECT *
    FROM EMPLOY WHERE not (Department_ID=10 or Department_ID=30);

--Query: QueryNo 13
--todo: List out the employees whose name starts with “S”
USE assignment;
SELECT *
    FROM EMPLOY WHERE First_Name like "S%";

--Query: QueryNo 14
--todo: List out the employees whose name start with “S” and end with “H”
USE assignment;
SELECT *
    FROM EMPLOY WHERE First_Name like "S%H";

--Query: QueryNo 15
--todo: List out the employees whose name length is 4 and start with “S”
USE assignment;
SELECT * 
    FROM EMPLOY WHERE First_Name like "S___";

--Query: QueryNo 16
--todo:  List out the employees who are working in department 10 and draw the salaries more than 3500
USE assignment;
SELECT *
    FROM EMPLOY WHERE Department_ID=10 and Salary>3500;

--Query: QueryNo 17
--todo: list out the employees who are not receiving commission
USE assignment;
SELECT * FROM EMPLOY WHERE Comm is NULL;

--Query: QueryNo 18
--todo: List out the employee id, last name in ascending order based on the employee id
USE assignment;
SELECT Employ_ID,Last_Name FROM EMPLOY 
    ORDER BY Employ_ID ASC;

--Query: QueryNo 19
--todo: List out the employee id, name in descending order based on salary column
USE assignment;
SELECT Employ_ID, First_Name, Middle_Name, Last_Name FROM EMPLOY 
    ORDER BY Salary DESC;

--Query: QueryNo 20
--todo: List out the employee details according to their last_name in ascending order and salaries in descending order 
USE assignment;
SELECT Employ_ID,Last_Name,First_Name,Middle_Name,Job_ID,Manager_ID,
    DATE_FORMAT(Hier_Date,"%d-%m-%y") as Hier_Date,Salary,Comm,
        Department_ID FROM EMPLOY 
            ORDER BY Last_Name ASC ,Salary DESC;

--Query: QueryNo 21
--todo: List out the employee details according to their last_name in ascending order and then on department_id in descending order
USE assignment;
SELECT * FROM EMPLOY ORDER BY Last_Name ASC ,Department_ID DESC;

--Query: QueryNo 22
--todo:  How many employees who are working in different departments wise in the organization
USE assignment;
SELECT Department_ID,COUNT(Employ_ID)as No_Of_Employees  FROM EMPLOY
    GROUP BY Department_ID;

--Query: QueryNo 23
--todo: List out the department wise maximum salary, minimum salary, average salary of the employees
USE assignment;
SELECT Department_ID,MAX(Salary)as MAX_Salary,MIN(Salary)as MIN_Salary,
    AVG(Salary)as AVG_Salary FROM EMPLOY GROUP BY Department_ID;

--Query: QueryNo 24
--todo: List out the job wise maximum salary, minimum salary, average salaries of the employees
USE assignment;
SELECT Job_ID,MAX(Salary)as MAX_Salary,MIN(Salary)as MIN_Salary,
    AVG(Salary)as AVG_Salary FROM EMPLOY GROUP BY Job_ID;

--Query: QueryNo 25
--todo: List out the no.of employees joined in every month in ascending order
USE assignment;
SELECT DATE_FORMAT(Hier_Date,"%m") as Hier_Month, COUNT(Employ_ID)as No_Of_Employees FROM EMPLOY GROUP BY Hier_Month ORDER BY Hier_Month ASC;

--Query: QueryNo 26
--todo: List out the no.of employees for each month and year, in the ascending order based on the year, month
USE assignment;
SELECT DATE_FORMAT(Hier_Date,"%Y")as Year,DATE_FORMAT(Hier_Date,"%m")as Month, count(*) as No_Of_Employees FROM EMPLOY GROUP BY Year,Month ORDER BY Year ASC, Month ASC;

--Query: QueryNo 27
--todo:
USE assignment;
SELECT Department_ID,COUNT(Employ_ID)as No_Of_Employees FROM EMPLOY
    GROUP BY Department_ID HAVING No_Of_Employees >= 4;

--Query: QueryNo 28
--todo:
USE assignment;
SELECT DATE_FORMAT(Hier_Date,"%M") as Hier_Month,
    COUNT(Employ_ID)as No_Of_Employees FROM EMPLOY
        GROUP BY Hier_Month HAVING Hier_Month = "January";

--Query: QueryNo 29
--todo:
USE assignment;
SELECT DATE_FORMAT(Hier_Date,"%M") as Hier_Month,
    COUNT(Employ_ID)as No_Of_Employees FROM EMPLOY
        GROUP BY Hier_Month HAVING Hier_Month = "January" OR
            Hier_Month = "September";

--Query: QueryNo 30
--todo:
USE assignment;
SELECT DATE_FORMAT(Hier_Date,"%Y") as Hier_Year,
    COUNT(Employ_ID)as Employee_No FROM EMPLOY
        GROUP BY Hier_Year HAVING Hier_Year = "1985";

--Query: QueryNo 31 
--todo:
USE assignment;
SELECT DATE_FORMAT(Hier_Date,"%Y")as Year,DATE_FORMAT(Hier_Date,"%m")as Month,
    count(*) as No_Of_Employees FROM EMPLOY GROUP BY Year,Month HAVING Year = 1985
        ORDER BY Month ASC;

--Query: QueryNo 32
--todo:
USE assignment;
SELECT DATE_FORMAT(Hier_Date,"%M %Y")as Hier_Month,COUNT(Employ_ID)as
    No_Of_Employees FROM EMPLOY GROUP BY Hier_Month 
        HAVING Hier_Month = "March 1985";

--Query: QueryNo 33 -> ANS NO DATA
--todo:
USE assignment;
SELECT Department_ID, COUNT(Employ_ID) FROM EMPLOY WHERE DATE_FORMAT(Hier_Date, "%M %Y")="April 1985" AND COUNT(Employ_ID)>=3 GROUP BY Department_ID;

use assignment;
select Department_ID, DATE_FORMAT,COUNT(Employ_ID) as No_Of_Employees FROM EMPLOY;

use assignment;
select DATE_FORMAT(Hier_Date, "%M %Y") from EMPLOY;
--Query: QueryNo 34
--todo:
USE assignment;
SELECT * FROM EMPLOY
    WHERE Salary = (SELECT MAX(Salary)FROM EMPLOY);

--Query: QueryNo 35
--todo:
USE assignment;
SELECT * FROM EMPLOY 
    WHERE Department_ID =(SELECT Department_ID FROM DEPARTMENT WHERE 
        Name = "SALES");

--Query: QueryNo 36
USE assignment;
SELECT * FROM EMPLOY WHERE Job_ID = 
    (SELECT Job_ID FROM JOB WHERE Function_ = "CLERK");

--Query: QueryNo 37
USE assignment;
SELECT * FROM EMPLOY WHERE Department_ID =
    (SELECT Department_ID FROM DEPARTMENT WHERE Location_ID =
        (SELECT Location_ID FROM LOCATION WHERE Regional_Group = "NEW YORK"));

--Query: QueryNo 38
USE assignment;
SELECT COUNT(*) as No_Of_Employees FROM EMPLOY WHERE Department_ID = 
    (SELECT Department_ID FROM DEPARTMENT WHERE Name="SALES");

--Query: QueryNo 39
USE assignment;
SELECT * FROM EMPLOY WHERE Department_ID = 
    (SELECT Department_ID FROM DEPARTMENT WHERE Name = "SALES");

USE assignment;
------------------------------------------------------------------------------------do not run this
update EMPLOY set Salary=Salary/10 where Job_ID=(select Job_ID from JOB where Function_="CLERK");
-------------------------------------------------------------------------------------------run this
SELECT * FROM EMPLOY WHERE Job_ID = 
    (select Job_ID from JOB where Function_="CLERK");

--Query: QueryNo 40
-----------------------------------------------------------------------------------------dont run this
USE assignment;
DELETE FROM EMPLOY WHERE Department_ID =
    (SELECT Department_ID FROM DEPARTMENT WHERE Name = "ACCOUNTING");
----------------------------------------------------------------------------------------------run this
USE assignment;
select * FROM EMPLOY WHERE Department_ID =
    (SELECT Department_ID FROM DEPARTMENT WHERE Name = "ACCOUNTING");

--Query: QueryNo 41
USE assignment;
SELECT * FROM EMPLOY WHERE Salary = (SELECT 
    MAX(Salary)FROM EMPLOY WHERE Salary < (SELECT MAX(Salary) FROM EMPLOY));

--Query: QueryNo 42 -> Nth Here is a variable,N=Highest Salary You want to find
USE assignment;
SELECT * FROM EMPLOY as Emp1 WHERE (N-1)=(SELECT COUNT(DISTINCT(Emp2.Salary))FROM EMPLOY as Emp2 WHERE Emp2.Salary > Emp1.Salary);

--Query: QueryNo 43
USE assignment;
SELECT Employ_ID,Salary FROM EMPLOY WHERE Salary > ANY(SELECT 
    MAX(Salary)FROM EMPLOY WHERE Department_ID = 30);

--Query: QueryNo 44
USE assignment;
SELECT Employ_ID,Salary FROM EMPLOY WHERE Salary > ANY(SELECT 
    MIN(Salary)FROM EMPLOY WHERE Department_ID = 30);

-- Query: QueryNo 45
USE assignment;
SELECT Name FROM DEPARTMENT WHERE Department_ID != ALL(SELECT Department_ID 
    FROM EMPLOY );

-- Query: QueryNo 46 
USE assignment;
SELECT Name FROM DEPARTMENT as d WHERE NOT EXISTS(SELECT First_Name FROM EMPLOY as e 
    WHERE d.Department_ID=e.Department_ID);

-- Query: QueryNo 47 
USE assignment;
SELECT e.Employ_ID,e.Department_ID,e.Salary FROM EMPLOY as e WHERE Salary 
    >(SELECT AVG(Salary) FROM EMPLOY WHERE Department_ID=e.Department_ID);

--Query: QueryNo 48
USE assignment;
SELECT EMPLOY.Employ_ID,EMPLOY.Last_Name,EMPLOY.First_Name,DEPARTMENT.Department_ID,
    DEPARTMENT.Name as Department_Name 
        FROM EMPLOY INNER JOIN DEPARTMENT USING(Department_ID);

--Query: QueryNo 49 
USE assignment;
SELECT e.Employ_ID,e.First_Name,e.Last_Name,j.Job_ID,j.Function_ 
    as Designation FROM EMPLOY as e INNER JOIN JOB as j ON e.Job_ID=j.Job_ID;


-- Query: QueryNo 50
USE assignment;
SELECT e.Employ_ID,e.First_Name,e.Last_Name,d.Department_ID,
    d.Name as Department_Name,l.Location_ID,l.Regional_Group
        FROM ((EMPLOY as e INNER JOIN DEPARTMENT as d ON e.Department_ID=d.Department_ID)
            INNER JOIN LOCATION as l ON d.Location_ID=l.Location_ID);

--Query: QueryNo 51
USE assignment;
SELECT COUNT(*) as No_Of_Employees, d.Department_ID,d.Name FROM DEPARTMENT as d 
    INNER JOIN EMPLOY as e ON d.Department_ID=e.Department_ID GROUP BY d.Department_ID;

--Query: QueryNo 52
Use assignment;
SELECT COUNT(*) as No_Of_Employees, d.Department_ID ,d.Name FROM DEPARTMENT as d 
    INNER JOIN EMPLOY as e ON d.Department_ID=e.Department_ID GROUP BY d.Department_ID
        HAVING Name="SALES";

--Query: QueryNo 53
USE assignment;
SELECT d.Department_ID ,d.Name,COUNT(e.Employ_ID) as No_Of_Employees FROM DEPARTMENT as d 
    INNER JOIN EMPLOY as e ON d.Department_ID=e.Department_ID GROUP BY d.Department_ID
        HAVING COUNT(e.Employ_ID)>=5 ORDER BY d.Name ASC;

--Query: QueryNo 54
USE assignment;
SELECT j.Function_ as Designation,j.Job_ID,COUNT(*) as No_Of_Employees FROM
    EMPLOY as e INNER JOIN JOB as j ON e.Job_ID=j.Job_ID GROUP BY j.Job_ID;

--Query: QueryNo 55
USE assignment;
SELECT l.Location_ID,l.Regional_Group,COUNT(*) FROM ((DEPARTMENT INNER JOIN 
    EMPLOY USING(Department_ID))INNER JOIN LOCATION as l USING(Location_ID))
        GROUP BY l.Location_ID HAVING Regional_Group = "NEW YORK";

--Query: QueryNo 56 
USE assignment;
SELECT e.Employ_ID,e.First_Name,e.Salary,s.Salary_Grade FROM EMPLOY as e
    INNER JOIN SALARYGRADES as s WHERE e.Salary BETWEEN s.Salary_MIN AND s.Salary_MAX
        ORDER BY s.Salary_Grade;

--Query: QueryNo 57 
USE assignment;
SELECT count(*) as No_Of_Employees,s.Salary_Grade FROM  EMPLOY as e 
    INNER JOIN SALARYGRADES as s WHERE e.Salary BETWEEN s.Salary_MIN AND s.Salary_MAX
        GROUP BY s.Salary_Grade ORDER BY s.Salary_Grade;

--Query: QueryNo 58  
USE assignment;
SELECT s.Salary_Grade,count(e.Employ_ID) as No_Of_Employees
    FROM  EMPLOY as e INNER JOIN SALARYGRADES as s WHERE e.Salary BETWEEN 
        s.Salary_MIN and s.Salary_MAX and s.Salary_MAX<= 5000 and 
            s.Salary_MIN>= 2000 GROUP BY s.Salary_Grade ORDER BY s.Salary_Grade;

--Query: QueryNo 59
USE assignment;
SELECT e.First_Name as Employee ,e.Employ_ID,m.First_Name as Manager ,m.Employ_ID as 
    Manager_ID FROM EMPLOY as e JOIN EMPLOY as m ON e.Manager_ID= m.Employ_ID;

--Query: QueryNo 60
USE assignment;
SELECT e.First_Name as "Employee",e.Salary,m.First_Name as "Manager",m.Salary as 
    "Manager_Salary" FROM EMPLOY as e JOIN EMPLOY as m ON e.Manager_ID= m.Employ_ID WHERE
        m.Salary < e.Salary;

--Query: QueryNo 61
USE assignment;
select e.Employ_ID,e.First_Name,e.Middle_Name,e.Last_Name,e.Job_ID,e.Manager_ID,DATE_FORMAT(e.Hier_Date,"%d-%m-%y") as Hier_Date,e.Salary,e.Department_ID,d.Name as Department_Name from EMPLOY as e LEFT JOIN DEPARTMENT as d using(Department_ID);

--Query: QueryNo 62
USE assignment;
SELECT e.Employ_ID,e.First_Name,e.Job_ID, d.Department_ID,d.Name as Department_Name FROM EMPLOY as e INNER JOIN DEPARTMENT as d USING(Department_ID) having Name="SALES" OR Name="OPERATIONS";

--Query: QueryNo 63
USE assignment;
select Function_ from JOB where Job_ID in
(select Job_ID from EMPLOY where Department_ID = 
(select Department_ID from DEPARTMENT where Name="SALES")) union
select Function_ from JOB where Job_ID in 
(select Job_ID from EMPLOY where Department_ID = 
(select Department_ID from DEPARTMENT where Name = "ACCOUNTING"));

--Query: QueryNo 64
USE assignment;
select Function_ from JOB where Job_ID in
(select Job_ID from EMPLOY where Department_ID = 
(select Department_ID from DEPARTMENT where Name="SALES")) union all
select Function_ from JOB where Job_ID in 
(select Job_ID from EMPLOY where Department_ID = 
(select Department_ID from DEPARTMENT where Name = "ACCOUNTING"));

--Query: QueryNo 65
USE assignment;
select Function_ from JOB where Job_ID in (select Job_ID from EMPLOY where Department_ID = (select Department_ID from DEPARTMENT where Name = "RESEARCH")) intersect select Function_ from JOB where Job_ID in (select Job_ID from EMPLOY where Department_ID = (select Department_ID from DEPARTMENT where Name = "ACCOUNTING")) order by Function_;

---------------------------------------------------------------------------------execute this for 65
use assignment;
select Function_ from (JOB as j inner join EMPLOY as e using(Job_ID)) inner join DEPARTMENT as d using (Department_ID) where d.Name="RESEARCH" or d.Name="ACCOUNTING" order by Function_;