package AdvJava.map.sortedmap;


import java.util.*;
public class SortedMapNonGeneric
{
    public static void main(String args[])
    {
        System.out.println("Soham Kothari");
        SortedMap m = new TreeMap();
        m.put(1,"ABC");
        m.put(2,"xyz");
        System.out.println(m);
        if(m.containsKey(1))
        {
            System.out.println(m.get(1));
        }
        m.remove(1);
        System.out.println(m);
    }
}