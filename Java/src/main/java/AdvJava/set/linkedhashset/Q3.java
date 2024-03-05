package AdvJava.set.linkedhashset;

import java.util.*;

public class Q3 {
    // Soham Kothari
    public static void main(String[] args) {
        System.out.println("Soham Kothari");
        LinkedHashSet<String> lsh = new LinkedHashSet<String>();
        lsh.add("Porsche");
        lsh.add("BMW");
        lsh.add("Mercedes");
        lsh.add("Volkswagen");
        System.out.println(lsh);

        System.out.println("After removing 'Mercedes' from linkedhashset: ");
        lsh.remove("Mercedes");
        System.out.println(lsh);

        System.out.println("Size of linkedhashset: " + lsh.size());

        System.out.println("Checking if 'Porsche' is present: " + lsh.contains("Porsche"));

    }
}
