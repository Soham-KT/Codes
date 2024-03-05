package AdvJava.JDBC;

import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.Statement;
import java.util.Scanner;

public class Inserting_Records {
    public static void main(String[] args) {
        System.out.println("Soham Kothari");
        try {
            String vin,name;
            Scanner s=new Scanner(System.in);
            int model;

            Connection conn = DriverManager.getConnection("jdbc:mysql://localhost:3306/Adv_Java", "root", "root");
            Statement stat = conn.createStatement();

            System.out.print("Enter VIN: ");
            vin=s.nextLine();

            System.out.print("Enter Name: ");
            name=s.nextLine();

            System.out.print("Enter model(year): ");
            model=s.nextInt();

            stat.executeUpdate("INSERT INTO cars(VIN,NAME,MODEL_YEAR) VALUES('"+vin+"','"+name+"',"+model+");");

            System.out.println("Record Inserted");
        }
        catch(Exception e)
        {
            System.out.println("Error :"+e);
        }
    }
}
