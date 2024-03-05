package AdvJava.map.linkedhashmap;

import java.util.LinkedHashMap;
import java.util.Map;

public class LinkedHashMap_ForEach {
    public static void main(String[] args) {
        System.out.println("Soham Kothari");
        Map<Integer,String> students = new LinkedHashMap<>();
        students.put(58,"Soham");
        students.put(25,"Kartikey");
        students.put(63,"Tanishq");
        students.put(31,"Zakie");
        students.put(5,"Akansha");

        for (Map.Entry<Integer,String> rec: students.entrySet()){
            System.out.println("Student: "+rec.getValue()+", Roll No.: "+rec.getKey());
        }
    }
}
