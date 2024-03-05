package AdvJava.map.linkedhashmap;

import java.util.LinkedHashMap;
import java.util.Iterator;
import java.util.Map;

public class LinkedHashMap_Iterator {
    public static void main(String[] args) {
        System.out.println("Soham Kothari");
        Map<Integer,String> students = new LinkedHashMap<>();
        students.put(58,"Soham");
        students.put(25,"Kartikey");
        students.put(63,"Tanishq");
        students.put(31,"Zakie");
        students.put(5,"Akansha");
        Iterator records = students.entrySet().iterator();

        while (records.hasNext()){
            Map.Entry rec = (Map.Entry)records.next();
            System.out.println("Name: "+rec.getValue()+" Roll No.: "+rec.getKey());
        }
    }
}
