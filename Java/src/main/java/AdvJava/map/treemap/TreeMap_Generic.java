package AdvJava.map.treemap;

import java.util.Map;
import java.util.TreeMap;

public class TreeMap_Generic {
    public static void main(String[] args) {
        System.out.println("Soham Kothari");
        Map<Integer,String> Employee = new TreeMap<>();
        Employee.put(146,"Soham");
        Employee.put(101,"Kartikey");
        Employee.put(157,"Tanishq");
        Employee.put(132,"Zakie");

        Employee.forEach((key,val)->{
            System.out.println("Employ Name: "+val+" Id: "+key);
        });
    }
}
