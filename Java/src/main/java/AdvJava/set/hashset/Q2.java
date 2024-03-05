package AdvJava.set.hashset;

import java.util.*;

public class Q2 {
    // Soham Kothari
    public static void main(String[] args) {
        System.out.println("Soham Kothari");
        // Generic
        System.out.println("Generic:");
        HashSet<String> hs = new HashSet<String>();
        hs.add("Porsche");
        hs.add("BMW");
        hs.add("Mercedes");
        hs.add("Volkswagen");
        System.out.println(hs);

        // Non generic
        System.out.println("Non generic:");
        HashSet hs_non = new HashSet();
        hs_non.add("Mustang");
        hs_non.add("Corvette");
        hs_non.add("Dodge");
        hs_non.add("Camaro");
        System.out.println(hs_non);
    }
}
