package AdvJava.set.hashset;

import java.util.*;

public class Q3 {
    // Soham Kothari
    public static void main(String[] args) {
        System.out.println("Soham Kothari");
        HashSet<String> hs = new HashSet<String>();
        hs.add("Porsche");
        hs.add("BMW");
        hs.add("Mercedes");
        hs.add("Volkswagen");
        System.out.println(hs);

        System.out.println("After removing element 'Mercedes': ");
        hs.remove("Mercedes");
        System.out.println(hs);

        System.out.println("Checking the size of hashset: " + hs.size());

        System.out.println("Checking if 'Porsche' is present: " + hs.contains("Porsche"));
    }
}
