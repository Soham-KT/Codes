package AdvJava.map.sortedmap;

import java.util.*;
public class SortedMapForEach
{
    public static void main(String args[])
    {
        System.out.println("Soham Kothari");
        SortedMap<String,String> m = new TreeMap<String,String>();
        m.put("ABC","abc");
        m.put("XYZ","xyz");
        m.forEach((k,v)->
        {
            System.out.println(k+" : "+v);
        });
        for(SortedMap.Entry<String,String> s:m.entrySet())
        {
            System.out.println(s.getKey()+" : "+s.getValue());
        }
    }
}