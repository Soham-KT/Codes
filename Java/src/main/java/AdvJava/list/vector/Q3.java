package AdvJava.list.vector;

import java.util.*;

public class Q3 {
    // Soham Kothari
    public static void main(String[] args) {
        System.out.println("Soham Kothari");
        Vector<String> vec = new Vector<String>();
        vec.add("Porsche");
        vec.add("BMW");
        vec.add("Mercedes");
        vec.add("Volkswagen");
        System.out.println(vec);

        System.out.println("\nAfter removing element at index 1");
        vec.remove(1);
        System.out.println(vec);
    }
}
