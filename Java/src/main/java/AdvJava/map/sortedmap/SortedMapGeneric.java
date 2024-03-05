package AdvJava.map.sortedmap;


import java.util.*;
public class SortedMapGeneric
{
    public static void main(String args[])
    {
        System.out.println("Soham Kothari");
        SortedMap<String,String> m = new TreeMap<String,String>();
        m.put("ABC", "XYZ");
        m.put("abc","xyz");
        System.out.println(m);
        if(m.containsKey("ABC"))
        {
            System.out.println(m.get("ABC"));
        }
        m.remove("ABC");
        System.out.println(m);
    }
}
