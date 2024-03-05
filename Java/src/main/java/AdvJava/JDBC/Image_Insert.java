package AdvJava.JDBC;

import javax.swing.*;
import java.io.File;
import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.io.IOException;
import java.sql.*;

public class Image_Insert {
    public static void main(String[] args) {
        System.out.println("Soham Kothari");
        Connection conn=null;
        try {
            conn= DriverManager.getConnection("jdbc:mysql://localhost:3306/Adv_Java","root","root");

            String create_table_query="create table if not exists image_table(id int,image mediumblob);";
            Statement tab_statement=conn.createStatement();
            tab_statement.executeUpdate(create_table_query);

            String query="insert into image_table values(?,?);";
            PreparedStatement stat= conn.prepareStatement(query);

//            JFileChooser jfile=new JFileChooser();
//            jfile.showOpenDialog(null);
//            File file=jfile.getSelectedFile();
            FileInputStream filestream=new FileInputStream("C:\\Users\\SOHAM\\Downloads\\supi_lol_upscaled.jpg");

            stat.setInt(1,1);
            stat.setBinaryStream(2,filestream);
            stat.executeUpdate();
            System.out.println("Image Inserted Succesfully");
        }
        catch (SQLException e) {
            System.out.println(e.getMessage());
        }

        catch (IOException e) {
            throw new RuntimeException(e);
        }

    }
}
