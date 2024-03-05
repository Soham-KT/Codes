package AdvJava.map.weakhashmap;


import java.util.*;
public class WeakHashMapGeneric
{
    public static void main(String args[])
    {
        System.out.println("Soham Kothari");
        Map<String,String> m =new WeakHashMap<String,String>();
        m.put("ABC", "XYZ");
        m.put("abc","xyz");
        System.out.println(m.get("ABC"));
        System.out.println(m);
        m.remove("abc");
        System.out.println(m);
    }
}