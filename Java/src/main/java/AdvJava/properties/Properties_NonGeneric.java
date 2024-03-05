package AdvJava.properties;

import java.util.Properties;

public class Properties_NonGeneric {
    public static void main(String[] args) {
        System.out.println("Soham Kothari");
        Properties data = new Properties();
        data.setProperty("name", "Soham Kothari");
        data.setProperty("email", "sohamkothari@gmail.com");
        data.setProperty("Roll No.", "IT-2k21-58");

        System.out.println(data);
    }
}
