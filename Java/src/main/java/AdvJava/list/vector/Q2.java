package AdvJava.list.vector;

import java.util.*;

public class Q2 {
    // Soham Kothari
    public static void main(String[] args) {
        System.out.println("Soham Kothari");
        // Generic
        Vector<String> vec = new Vector<String>();
        vec.add("Porsche");
        vec.add("BMW");
        vec.add("Mercedes");
        vec.add("Volkswagen");
        System.out.println("Generic");
        System.out.println(vec);

        // Non generic
        Vector vec_non = new Vector();
        vec_non.add("Mustang");
        vec_non.add("Impala");
        vec_non.add("Corvette");
        vec_non.add("Dodge");
        System.out.println("Non generic");
        System.out.println(vec_non);
    }
}
