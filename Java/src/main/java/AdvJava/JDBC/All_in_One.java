package AdvJava.JDBC;

import java.sql.*;
import java.util.Scanner;

public class All_in_One {
    static void insert(Statement s, String vin, String name, int model, String nat) {
        try {
            s.executeUpdate("INSERT INTO cars(VIN,NAME,MODEL_YEAR, NATIONALITY) VALUES('" + vin + "','" + name + "','" + model + "', '" + nat + "');");
            System.out.println("Record Inserted");
        } catch (Exception e) {
            System.out.println(e);
        }
    }

    static void delete(Statement s, String vin) {
        try {
            String query = "delete from cars where VIN='" + vin + "';";
            s.executeUpdate(query);
            System.out.println("VIN number " + vin + " Deleted Successfully");
        } catch (Exception e) {
            System.out.println(e);
        }
    }

    static void display(Statement s) {
        try {

            ResultSet res = s.executeQuery("Select * from cars;");
            while (res.next()) {
                System.out.println("VIN: " + res.getString("VIN") + "   Name: " + res.getString("NAME") + "   Model: " + res.getInt("MODEL_YEAR") + "  Nationality: "+res.getString("NATIONALITY"));
            }
        } catch (SQLException e) {
            System.out.println("Exception:" + e.getMessage());
        }
    }

    public static void main(String[] args) {
        System.out.println("Soham Kothari");
        String vin1;
        try {
            Scanner s = new Scanner(System.in);
            Connection conn = DriverManager.getConnection("jdbc:mysql://localhost:3306/Adv_Java", "root", "root");
            Statement stat = conn.createStatement();

            while (true) {
                System.out.println("1.Insert");
                System.out.println("2.Delete");
                System.out.println("3.Display");
                System.out.println("4.Exit");
                System.out.print("Enter your Choice: ");
                int choice = s.nextInt();
                if (choice == 1) {
                    s.nextLine();
                    System.out.print("Enter VIN: ");
                    vin1 = s.nextLine();

                    System.out.print("Enter Name: ");
                    String name = s.nextLine();

                    System.out.print("Enter Model: ");
                    int model = s.nextInt();

                    System.out.print("Enter Nationality: ");
                    s.nextLine();
                    String nat = s.nextLine();

                    insert(stat, vin1, name, model, nat);
                } else if (choice == 2) {
                    s.nextLine();
                    System.out.print("Enter VIN to be Deleted:");
                    vin1 = s.nextLine();
                    delete(stat, vin1);
                } else if (choice == 3) {
                    display(stat);
                } else {
                    break;
                }
            }

        } catch (Exception e) {
            System.out.println(e.getMessage());
        }
    }
}
