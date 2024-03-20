package main;

import jakarta.servlet.ServletException;
import jakarta.servlet.annotation.WebServlet;
import jakarta.servlet.http.HttpServlet;
import jakarta.servlet.http.HttpServletRequest;
import jakarta.servlet.http.HttpServletResponse;

import java.io.IOException;
import java.io.PrintWriter;
import java.sql.*;

@WebServlet("/loginpage")
public class loginPage extends HttpServlet {
    @Override
    protected void doGet(HttpServletRequest req, HttpServletResponse resp) throws ServletException, IOException, IOException {
        Cart c = new Cart();
        String name = req.getParameter("name");
        String password = req.getParameter("password");

        PrintWriter out =  resp.getWriter();
        try {
            DriverManager.registerDriver(new com.mysql.jdbc.Driver ());
            Connection conn = DriverManager.getConnection("jdbc:mysql://localhost:3306/ada_assignment", "root", "root");
            Statement stat = conn.createStatement();

            ResultSet res = stat.executeQuery("select password from login_info where username = '"+name+"';");

            if(!res.isBeforeFirst() && res.getRow() == 0){
                System.out.println("Login Fail");

                out.println("<script type='text/javascript'>");
                out.println("window.alert('username or password is incorrect');");
                out.println("location='loginPage.html';");
                out.println("</script>");
            }

            else{
                while (res.next()){
                    if(password.equals(res.getString("password"))){
                        loginStatus.setIsLogin(true);
                        System.out.println("Login Successful");

                        out.println("<script type='text/javascript'>");
                        out.println("window.alert('Login Successful');");
                        out.println("location='index.jsp';");
                        out.println("</script>");
                    }
                }
                System.out.println("Login Fail");

                out.println("<script type='text/javascript'>");
                out.println("window.alert('Entered password is incorrect');");
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

