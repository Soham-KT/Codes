package AdvJava.list.list;

import java.util.LinkedList;
import java.util.List;

public class List_NonGeneric
{
    public static void main(String[] args)
    {
        System.out.println("Soham Kothari");
        List arr=new LinkedList();
        arr.add("Hello");
        arr.add("Soham");
        arr.add(25);
        arr.add(97.58);

        System.out.println("List elements:");
        arr.forEach(System.out::println);
    }
}
