package AdvJava.map.identityhashmap;

import java.util.*;
public class IdentityHashMapNonGeneric
{
    public static void main(String args[])
    {
        System.out.println("Soham Kothari");
        Map m = new IdentityHashMap();
        m.put(1,"ABC");
        m.put("ABC",1);
        System.out.println(m);
        if(m.containsKey("ABC"))
        {
            System.out.println(m.get("ABC"));
        }
        m.remove("ABC");
        System.out.println(m);
    }
}