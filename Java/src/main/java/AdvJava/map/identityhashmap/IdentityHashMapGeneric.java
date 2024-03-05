package AdvJava.map.identityhashmap;

import java.util.*;
public class IdentityHashMapGeneric
{
    public static void main(String args[])
    {
        System.out.println("Soham Kothari");
        Map<String,String> m=new IdentityHashMap<String,String>();
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