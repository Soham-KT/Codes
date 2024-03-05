package AdvJava.list.arraylist;

import java.util.*;

public class Q3 {
    // Soham Kothari
    public static void main(String[] args) {
        System.out.println("Soham Kothari");
        ArrayList<String> lst = new ArrayList<String>();

        lst.add("Porsche");
        lst.add("BMW");
        lst.add("Mercedes");
        lst.add("Volkswagen");
        System.out.println(lst);

        System.out.println("\nAfter removing element at index 1");
        lst.remove(1);
        System.out.println(lst);
    }
}
