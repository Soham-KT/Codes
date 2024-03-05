package AdvJava.map.weakhashmap;

import java.util.*;
public class WeakHashMapForEach
{
    public static void main(String[] args)
    {
        System.out.println("Soham Kothari");
        Map<String,String> m=new WeakHashMap<String,String>();
        m.put("ABC","xyz");
        m.put("abc","XYZ");
        m.forEach((key,value) -> 
        {
            System.out.println(key+" : "+value);
        });
        for(Map.Entry<String,String> s:m.entrySet())
        {
            System.out.println(s.getKey()+" : "+s.getValue());
        }
    }
}