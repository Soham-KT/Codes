package AdvJava.map.hashmap;

import java.util.HashMap;
import java.util.Map;

public class HashMap_Methods {
    public static void main(String[] args) {
        System.out.println("Soham Kothari");
        Map<String, Integer> Salary = new HashMap<>();
        
        Salary.put("Joe", 20000);
        Salary.put("Ben", 30000);
        Salary.put("Zack", 15000);
        Salary.put("Ryan", 19000);
        System.out.println("HashMap: " + Salary);

        Salary.compute("Zack", (key, value) -> value + value * 30/100);
        System.out.println("Zack's new Salary: " + Salary.getOrDefault("Zack",0));
        
        System.out.println("Updated HashMap: " + Salary);
    }

}
