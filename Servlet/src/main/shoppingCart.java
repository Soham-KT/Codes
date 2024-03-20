package main;

import javax.xml.transform.Result;
import java.sql.*;
import java.util.*;

public class shoppingCart {
    static Scanner sc = new Scanner(System.in);
    class Items{
        String itemID, itemName;
        int pricePerItem, quantity;

        public Items(){
            itemID = "";
            itemName = "";
            pricePerItem = 0;
            quantity = 0;
        }
    }

    void viewStock(Statement s){
        try{
            ResultSet i = s.executeQuery("select * from shop;");
            while(i.next()){
                System.out.println("Item ID: " + i.getString("itemID") + ", Item Name: " + i.getString("itemName") + ", Price (per item): " + i.getInt("pricePerItem") + ", Stock: " + i.getInt("stock"));
            }
        }
        catch(Exception e){
            System.out.println(e);
        }
    }

    void insertInCart(Statement s, String name, int q, ArrayList<Items> cart) {
        try {
            ResultSet res = s.executeQuery("Select * from shop where ItemName = '" + name + "';");
            Items i = new Items();
            int stk = 0;
            while(res.next()){
                i.itemID = res.getString("ItemID");
                i.itemName = res.getString("ItemName");
                i.pricePerItem = res.getInt("PricePerItem");
                stk = res.getInt("stock");
            }


            if(stk >= q){
                for(Items x: cart){
                    if(Objects.equals(x.itemID, i.itemID)){
                        x.quantity += q;

                        System.out.println("Item ID: " + x.itemID + ", Item Name: " + x.itemName + ", Price (per item): " + x.pricePerItem + ", Quantity in cart: " + x.quantity);

                        s.executeUpdate("UPDATE shop set stock=stock-"+q+" where ItemID='"+x.itemID+"';");

                        System.out.println("Item successfully added");

                        return;
                    }
                }

                i.quantity = q;
                System.out.println("Item ID: " + i.itemID + ", Item Name: " + i.itemName + ", Price (per item): " + i.pricePerItem + ", Quantity in cart: " + i.quantity);
                cart.add(i);
                s.executeUpdate("UPDATE shop set stock=stock-"+q+" where ItemID='"+i.itemID+"';");
                System.out.println("Item successfully added");
            }
            else{
                System.out.println("Not enough stock, please reduce the amount of items to add in cart");
            }
        } catch (Exception e) {
            System.out.println(e);
        }
    }
    void removeFromCart(Statement s, String name, int q, ArrayList<Items> cart) {
        try {
            Items i = null;

            for(Items x: cart){
                if(Objects.equals(x.itemName, name)){
                    if(q > x.quantity){
                        System.out.println("Not enough items in cart to remove, please enter amount less than current");
                        break;
                    }

                    else if(q < x.quantity){
                        x.quantity -= q;
                        s.executeUpdate("UPDATE shop set stock=stock+"+q+" where ItemID='"+x.itemID+"';");
                        break;
                    }

                    else{
                        cart.remove(x);
                        s.executeUpdate("UPDATE shop set stock=stock+"+q+" where ItemID='"+x.itemID+"';");
                        System.out.println("Item removed");
                    }
                }
            }

        } catch (Exception e) {
            System.out.println(e);
        }
    }

    void displayCart(ArrayList<Items> cart){
        for(Items i: cart){
            System.out.println("Item ID: " + i.itemID + ", Item Name: " + i.itemName + ", Price (per item): " + i.pricePerItem + ", Quantity: " + i.quantity);
        }
    }

    public static void main(String[] args) {
        shoppingCart sk = new shoppingCart();
        String itemName;
        try {
            Scanner s = new Scanner(System.in);
            Connection conn = DriverManager.getConnection("jdbc:mysql://localhost:3306/Adv_Java", "root", "root");
            Statement stat = conn.createStatement();

            ArrayList<Items> cart = new ArrayList<>();

            while (true) {
                System.out.println("\n0.View stock");
                System.out.println("1.Insert items in cart");
                System.out.println("2.Remove items from cart");
                System.out.println("3.Display items in cart");
                System.out.println("4.Exit");
                System.out.print("Enter your Choice: ");
                int choice = s.nextInt();

                if(choice == 0){
                    sk.viewStock(stat);
                }
                else if (choice == 1) {
                    s.nextLine();
                    System.out.print("Enter item name: ");
                    itemName = s.nextLine();

                    System.out.print("Enter quantity: ");
                    int quantity = s.nextInt();
                    sk.insertInCart(stat, itemName, quantity, cart);
                }
                else if (choice == 2) {
                    s.nextLine();
                    System.out.print("Enter enter item name to remove: ");
                    itemName = sc.nextLine();

                    System.out.print("Enter quantity of item to remove: ");
                    int quantity = sc.nextInt();

                    sk.removeFromCart(stat, itemName, quantity, cart);
                }
                else if (choice == 3) {
                    sk.displayCart(cart);
                }
                else {
                    break;
                }
            }

        } catch (Exception e) {
            System.out.println(e.getMessage());
        }
    }
}

