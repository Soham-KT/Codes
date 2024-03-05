package AdvJava.JDBC;

import java.sql.*;

public class Displaying_Data {
    public static void main(String[] args) {
        System.out.println("Soham Kothari");
        Connection conn=null;
        try {
            conn= DriverManager.getConnection("jdbc:mysql://localhost:3306/Adv_Java","root","root");
            Statement statement= conn.createStatement();
            ResultSet res= statement.executeQuery("Select * from cars;");
            while(res.next()) {
                System.out.println("VIN: "+res.getString("VIN")+"   Name: "+res.getString("NAME")+"  Model(year): "+res.getInt("MODEL_YEAR"));
            }
        }
        catch (SQLException e) {
            System.out.println("Exception:"+e.getMessage());
        }

    }
}
