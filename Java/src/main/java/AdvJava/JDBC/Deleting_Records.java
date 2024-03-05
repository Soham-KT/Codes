package AdvJava.JDBC;

import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.SQLException;
import java.sql.Statement;
import java.util.Scanner;

public class Deleting_Records {
    public static void main(String[] args) {
        try {
            Connection conn= DriverManager.getConnection("jdbc:mysql://localhost:3306/Adv_Java","root","root");
            Statement stat=conn.createStatement();
            Scanner s=new Scanner(System.in);
            System.out.print("Enter VIN to be deleted: ");
            String vin=s.nextLine();
            stat.executeUpdate("delete from cars where VIN='"+vin+"';");
            System.out.println("VIN number "+ vin +" Deleted Successfully");
        }
        catch(SQLException e) {
            System.out.println(e);
        }
    }
}
