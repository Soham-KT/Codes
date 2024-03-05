package AdvJava.map.navigatablemap;

import java.util.*;
public class NavigableMapNonGeneric
{
    public static void main(String args[])
    {
        System.out.println("Soham Kothari");
        NavigableMap m = new TreeMap();
        m.put(1,"ABC");
        m.put(2,"XYZ");
        System.out.println(m);
        if(m.containsKey(1))
        {
            System.out.println(m.get(1));
        }
        m.remove(1);
        System.out.println(m);
    }
}
