package AdvJava.map.weakhashmap;


import java.util.*;
public class WeakHashMapIterator
{
    public static void main(String args[])
    {
        System.out.println("Soham Kothari");
        Map<String,String> m=new WeakHashMap<String,String>();
        m.put("ABC","XYZ");
        m.put("abc","xyz");
        Iterator<Map.Entry<String,String>> itr = m.entrySet().iterator();
        while(itr.hasNext())
        {
            System.out.println(itr.next());
        }
    }
}