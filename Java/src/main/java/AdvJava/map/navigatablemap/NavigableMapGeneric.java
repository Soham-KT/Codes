package AdvJava.map.navigatablemap;

import java.util.*;
public class NavigableMapGeneric
{   
    public static void main(String args[])
    {
        System.out.println("Soham Kothari");
        NavigableMap<String,String> m = new TreeMap<String,String>();
        m.put("ABC","abc");
        m.put("XYZ","xyz");
        System.out.println(m);
        if(m.containsKey("ABC"))
        {
            System.out.println(m.get("ABC"));
        }
        m.remove("ABC");
        System.out.println(m);
    }
}