package main;

import jakarta.servlet.ServletException;
import jakarta.servlet.annotation.WebServlet;
import jakarta.servlet.http.HttpServlet;
import jakarta.servlet.http.HttpServletRequest;
import jakarta.servlet.http.HttpServletResponse;

import java.io.IOException;
import java.io.PrintWriter;
import java.sql.*;

@WebServlet("/advjavalab1")
public class dbInsert extends HttpServlet {
    @Override
    protected void doGet(HttpServletRequest req, HttpServletResponse resp) throws ServletException, IOException, IOException {
        String name = req.getParameter("name");
        String mail = req.getParameter("email");
        int phno = Integer.parseInt(req.getParameter("number"));
        String password = req.getParameter("password");

        PrintWriter pw = resp.getWriter();
        try {
            DriverManager.registerDriver(new com.mysql.jdbc.Driver ());
            Connection conn = DriverManager.getConnection("jdbc:mysql://localhost:3306/adv_java", "root", "root");
            Statement stat = conn.createStatement();
            stat.executeUpdate("CREATE TABLE IF NOT EXISTS servletTest(name VARCHAR(50),mail VARCHAR(50),phno INT, pass VARCHAR(50))");

            stat.executeUpdate("INSERT INTO servletTest(name,mail,phno,pass) VALUES('"+name+"','"+mail+"',"+phno+", '"+password+"');");

            pw.println("Record Inserted");
        }
        catch (SQLException e) {
            pw.println("Exception occured");
            throw new RuntimeException(e);
        }
    }
}
