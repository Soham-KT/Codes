package AdvJava.set.set;

import java.util.HashSet;
import java.util.Iterator;
import java.util.Set;

public class Set_foreach
{
    public static void main(String[] args)
    {
        System.out.println("Soham Kothari");
        Set<String> hs=new HashSet<>();
        hs.add("Python");
        hs.add("Java");
        hs.add("MTech IT");
        hs.add("58");
        for(String i:hs)
        {
            System.out.println("Element:"+i);
        }

        Iterator<String> itr=hs.iterator();
        while (itr.hasNext())
        {
            System.out.println("Element:"+itr.next());
        }
    }
}