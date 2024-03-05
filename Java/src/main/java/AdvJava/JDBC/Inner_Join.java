package AdvJava.JDBC;

import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.ResultSet;
import java.sql.Statement;

public class Inner_Join
{
    public static void main(String[] args)
    {
        System.out.println("Soham Kothari");
        try
        {
            Connection conn= DriverManager.getConnection("jdbc:mysql://localhost:3306/Adv_Java","root","root");
            Statement stat=conn.createStatement();
            String query="select * from cars as c inner join showroom as s where c.VIN=s.VIN;";
            ResultSet res=stat.executeQuery(query);
            while (res.next())
            {
                System.out.println("VIN: "+res.getString("VIN")+"  Name: "+res.getString("NAME")+"  Model :"+res.getInt("MODEL_YEAR")+"  Showroom :"+res.getString("showroom_name"));
            }
        }
        catch (Exception e)
        {
            System.out.println(e);
        }
    }
}
