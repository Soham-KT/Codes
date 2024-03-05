package AdvJava.JDBC;

import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.SQLException;
import java.sql.Statement;

public class Update_Records {
    public static void main(String []args) {
        System.out.println("Soham Kothari");
        Connection conn=null;
        try {
            conn= DriverManager.getConnection("jdbc:mysql://localhost:3306/Adv_Java","root","root");
            Statement stat=conn.createStatement();
            stat.executeUpdate("UPDATE cars set NAME='Mustang' where VIN='FHAIE54D';");
            System.out.println("Record Updated");
        }
        catch (SQLException e) {
            System.out.println("Exception:"+e);
        }
    }
}
