package AdvJava.list.list;

import java.util.ArrayList;
import java.util.List;

public class List_foreach
{
    public static void main(String[] args)
    {
        System.out.println("Soham Kothari");
        List<String> arr=new ArrayList<>();
        arr.add("Advance Java");
        arr.add("Soham");
        arr.add("29 Jan");
        arr.add("6th sem");
        for (String i:arr) {
            System.out.println("Elements : "+i);
        }
    }
}
