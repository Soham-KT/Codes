package AdvJava.JDBC;

import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.PreparedStatement;
import java.sql.SQLException;
import java.util.Scanner;

public class Prepared_Statements {
    public static void main(String[] args) {
        System.out.println("Soham Kothari");
        Connection conn = null;

        String vin, name, nationality;
        Scanner s = new Scanner(System.in);
        int model;

        try {
            conn = DriverManager.getConnection("jdbc:mysql://localhost:3306/Adv_Java", "root", "root");
            String query = "insert into cars values(?, ?, ?, ?);";
            PreparedStatement stat = conn.prepareStatement(query);
            System.out.print("Enter VIN: ");
            vin = s.nextLine();

            System.out.print("Enter Name: ");
            name = s.nextLine();

            System.out.print("Enter Model year: ");
            model = s.nextInt();

            System.out.print("Enter Nationality: ");
            s.nextLine();
            nationality = s.nextLine();

            stat.setString(1, vin);
            stat.setString(2, name);
            stat.setInt(3, model);
            stat.setString(4, nationality);
            stat.executeUpdate();

            System.out.println("Data Inserted Successfully");
        } catch (SQLException e) {
            System.out.println(e.getMessage());
        }
    }
}