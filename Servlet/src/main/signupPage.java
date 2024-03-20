package main;

import jakarta.servlet.ServletException;
import jakarta.servlet.annotation.WebServlet;
import jakarta.servlet.http.HttpServlet;
import jakarta.servlet.http.HttpServletRequest;
import jakarta.servlet.http.HttpServletResponse;

import java.io.IOException;
import java.io.PrintWriter;
import java.sql.*;
import java.util.Objects;

@WebServlet("/signup")
public class signupPage extends HttpServlet {
    @Override
    protected void doGet(HttpServletRequest req, HttpServletResponse resp) throws ServletException, IOException {
        String name = req.getParameter("name");
        String password = req.getParameter("password");

        PrintWriter out =  resp.getWriter();
        try {
            DriverManager.registerDriver(new com.mysql.jdbc.Driver ());
            Connection conn = DriverManager.getConnection("jdbc:mysql://localhost:3306/ada_assignment", "root", "root");
            Statement stat = conn.createStatement();

            ResultSet res = stat.executeQuery("select username from login_info where username = '"+name+"';");

            String usrname = "";
            while(res.next()){
                usrname = res.getString("username");
            }
            if(name.equals(usrname)){
                System.out.println("Username already exists");

                out.println("<script type='text/javascript'>");
                out.println("window.alert('username already exists');");
                out.println("location='signuppage.html';");
                out.println("</script>");
            }

            else{
                stat.executeUpdate("insert into login_info(username, password) values('" + name + "', '" + password + "');");

                out.println("<script type='text/javascript'>");
                out.println("window.alert('Signup successful, redirecting to login page');");
                out.println("location='loginPage.html';");
                out.println("</script>");
            }

        }
        catch (SQLException e) {
            out.println("Exception occured");
            throw new RuntimeException(e);
        }
    }
}


