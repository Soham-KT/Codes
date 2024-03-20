package main;

import jakarta.servlet.ServletException;
import jakarta.servlet.annotation.WebServlet;
import jakarta.servlet.http.HttpServlet;
import jakarta.servlet.http.HttpServletRequest;
import jakarta.servlet.http.HttpServletResponse;

import java.io.IOException;
import java.io.PrintWriter;
import java.sql.*;
import java.util.ArrayList;
import java.util.Objects;


@WebServlet("/insertindb")
public class insertDB extends HttpServlet {
    protected void doGet(HttpServletRequest req, HttpServletResponse resp) throws ServletException, IOException{
        ArrayList<Items> cart = new ArrayList<>();
        String id = req.getParameter("id");
        String name = req.getParameter("name");
        int q = Integer.parseInt(req.getParameter("quantity"));

        PrintWriter pw = resp.getWriter();
        try {
            DriverManager.registerDriver(new com.mysql.jdbc.Driver());
            Connection conn = DriverManager.getConnection("jdbc:mysql://localhost:3306/ada_assignment", "root", "root");
            Statement stat = conn.createStatement();

            stat.executeUpdate("UPDATE item_list set quantity=quantity+" + q + " where itemid='" + id + "';");

            pw.println("<script type='text/javascript'>");
            pw.println("window.alert('Item added to shop');");
            pw.println("location='owner.jsp';");
            pw.println("</script>");
        }
        catch (SQLException e) {
            pw.println("Exception occured");
            throw new RuntimeException(e);
        }
    }
}
