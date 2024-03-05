package AdvJava.JDBC;

import java.sql.Connection;
import java.sql.DriverManager;

public class Connectivity {
    public static void main(String[] args) throws Exception {
        System.out.println("Soham Kothari");
        Connection conn = null;
        conn = DriverManager.getConnection("jdbc:mysql://localhost:3306/Adv_Java","root","root");
        if(conn != null) {
            System.out.println("Mysql Connected Successfully");
        }
        else {
            System.out.println("Connection Failed");
        }

    }
}
