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


@WebServlet("/insertincart")
public class insertData extends HttpServlet {
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

            ResultSet res = stat.executeQuery("Select * from item_list where itemname = '" + name + "';");
            Items i = new Items();
            int stk = 0;
            while (res.next()) {
                i.itemID = res.getString("itemid");
                i.itemName = res.getString("itemname");
                i.pricePerItem = res.getInt("priceperitem");
                stk = res.getInt("quantity");
            }

            if (stk >= q) {
                for (Items x : cart) {
                    if (Objects.equals(x.itemID, i.itemID)) {
                        x.quantity += q;

                        System.out.println("Item ID: " + x.itemID + ", Item Name: " + x.itemName + ", Price (per item): " + x.pricePerItem + ", Quantity in cart: " + x.quantity);

                        stat.executeUpdate("UPDATE item_list set quantity=quantity-" + q + " where itemid='" + x.itemID + "';");

                        System.out.println("Item successfully added");

                        return;
                    }
                }
            }

            i.quantity = q;
            System.out.println("Item ID: " + i.itemID + ", Item Name: " + i.itemName + ", Price (per item): " + i.pricePerItem + ", Quantity in cart: " + i.quantity);

            Cart.appendData(i);
            cart.forEach((v)->{
                System.out.println(v.itemName);
            });

            stat.executeUpdate("UPDATE item_list set quantity=quantity-" + q + " where itemid='" + id + "';");

            pw.println("<script type='text/javascript'>");
            pw.println("window.alert('Item added to cart');");
            pw.println("location='index.jsp';");
            pw.println("</script>");
        }
        catch (SQLException e) {
            pw.println("Exception occured");
            throw new RuntimeException(e);
        }
    }
}
