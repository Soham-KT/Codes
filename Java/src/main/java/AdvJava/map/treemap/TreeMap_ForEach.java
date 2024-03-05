package AdvJava.map.treemap;


import java.util.HashMap;
import java.util.Map;

public class TreeMap_ForEach {
    public static void main(String[] args) {
        System.out.println("Soham Kothari");
        Map<String,Double> salary = new HashMap<>();
        salary.put("Soham",453.789);
        salary.put("Kartikey",78000.79);
        salary.put("Tanishq",57006.94);
        salary.put("Zakie",85000.5);

        for (Map.Entry<String,Double> rec: salary.entrySet()) {
            System.out.println("Name: "+rec.getKey()+" Salary: "+rec.getValue());

        }
    }
}
