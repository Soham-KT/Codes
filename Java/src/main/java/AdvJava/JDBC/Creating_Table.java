package AdvJava.JDBC;

import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.Statement;

public class Creating_Table {
    public static void main(String [] args) {
        System.out.println("Soham Kothari");
        try {
            Connection conn = DriverManager.getConnection("jdbc:mysql://localhost:3306/Adv_Java", "root", "root");
            Statement stat = conn.createStatement();
            stat.executeUpdate("CREATE TABLE IF NOT EXISTS cars(VIN VARCHAR(50),NAME VARCHAR(50),MODEL_YEAR INT)");
            System.out.println("Table Created");
        }
        catch(Exception e) {
            System.out.println("Exception: "+e);
        }
    }
}

// executeUpdate -> create, alter, drop, insert, update
// executeQuery -> select
