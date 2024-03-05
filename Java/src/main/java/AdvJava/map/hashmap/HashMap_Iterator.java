package AdvJava.map.hashmap;

import java.util.HashMap;
import java.util.Iterator;
import java.util.Map;

public class HashMap_Iterator {
    public static void main(String[] args) {
        System.out.println("Soham Kothari");
        Map<Integer,String> students = new HashMap<>();
        students.put(25,"Kartikey");
        students.put(31,"Zakie");
        students.put(58,"Soham");
        students.put(5,"Akansha");
        students.put(33,"Namaskruti");
        Iterator records = students.entrySet().iterator();

        while (records.hasNext()){
            Map.Entry rec = (Map.Entry)records.next();
            System.out.println("Roll No.: "+rec.getKey()+", Name: "+rec.getValue());
        }
    }
}
