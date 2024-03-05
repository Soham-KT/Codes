package AdvJava.map.weakhashmap;


import java.util.*;
public class WeakHashMapNonGeneric
{   
    public static void main(String args[])
    {
        System.out.println("Soham Kothari");
        Map m=new WeakHashMap();
        m.put(1,"ABC");
        m.put("abc",1);
        System.out.println(m.get(1));
        System.out.println(m);
        m.remove(1);
        System.out.println(m);
    }
}
