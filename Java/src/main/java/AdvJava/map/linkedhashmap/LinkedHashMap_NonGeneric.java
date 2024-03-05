package AdvJava.map.linkedhashmap;
import java.util.LinkedHashMap;
import java.util.Map;

public class LinkedHashMap_NonGeneric {
    public static void main(String[] args) {
        System.out.println("Soham Kothari");
        Map Days = new LinkedHashMap();
        Days.put("Monday","mon");
        Days.put(2,"tuesday");
        Days.put("Wed",3);
        Days.put("thursady","thurs");
        Days.put("frid",696.66);
        Days.put("Sat","sun");
        System.out.println("Non Generic Linked Hash Map Records: ");
        Days.forEach((key, val)->{
            System.out.println(key+" => "+val);
        });
    }
}
