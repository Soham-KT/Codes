package AdvJava.list.list;

import java.util.ArrayList;
import java.util.List;

public class List_Generic
{
    public static void main(String [] args)
    {
        System.out.println("Soham Kothari");
        List <String>arr=new ArrayList<>();
        arr.add("Advance Java");
        arr.add("Soham");
        arr.add("IT-2k21-58");
        arr.add("MTech IT 6th sem");
        System.out.println(arr.getLast());
        System.out.println(arr.getFirst());
        System.out.println(arr.contains("Advance Java"));
        System.out.println(arr.remove("MTech IT 6th sem"));
        System.out.println(arr);
    }
}
