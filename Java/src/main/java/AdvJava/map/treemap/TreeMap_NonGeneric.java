package AdvJava.map.treemap;
import java.util.TreeMap;
import java.util.Map;

public class TreeMap_NonGeneric {
    public static void main(String[] args) {
        System.out.println("Soham Kothari");
        Map data = new TreeMap();
        data.put(58,"Soham");
        data.put(7,"days in week");
        data.put(365,"No of days in year");

        data.forEach((k,v)->{
            System.out.println(k+" => "+v);
        });
    }
}
