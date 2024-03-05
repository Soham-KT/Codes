package AdvJava.map.identityhashmap;

import java.util.*;
public class IdentityHashMapForEach
{
    public static void main(String args[])
    {
        System.out.println("Soham Kothari");
        Map<String,String> m = new IdentityHashMap<String,String>();
        m.put("ABC","XYZ");
        m.put("abc","xyz");
        m.forEach((k,v)->
        {
            System.out.println(k+" : "+v);
        });
        for(Map.Entry<String,String> s:m.entrySet())
        {
            System.out.println(s.getKey()+" : "+s.getValue());
        }
    }
}