package AdvJava.list.list;

import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;

public class List_iterator
{
    public static void main(String[] args)
    {
        System.out.println("Soham Kothari");
        List<String> arr=new ArrayList<>();
        arr.add("Soham");
        arr.add("IT-2k21-58");
        arr.add("Advance Java");
        arr.add("6th sem");
        Iterator itr=arr.iterator();
        while (itr.hasNext())
        {
            System.out.println(itr.next());
        }
    }
}
