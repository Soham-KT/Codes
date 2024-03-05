package AdvJava.JDBC;

import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.Statement;

public class Alter_Table
{
    public static void main(String[] args)
    {
        System.out.println("Soham Kothari");
        try
        {
            Connection conn= DriverManager.getConnection("jdbc:mysql://localhost:3306/Adv_Java","root","root");
            Statement stat= conn.createStatement();
            stat.executeUpdate("alter table cars add column NATIONALITY varchar(50)");
            System.out.println("Added column Successfully");
        }
        catch (Exception e)
        {
            System.out.println(e.getMessage());
        }
    }
}
