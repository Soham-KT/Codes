package AdvJava.set.linkedhashset;

import java.util.*;

public class Q1 {
    // Soham Kothari
    public static void main(String[] args) {
        System.out.println("Soham Kothari");
        LinkedHashSet<String> lsh = new LinkedHashSet<String>();
        lsh.add("Porsche");
        lsh.add("BMW");
        lsh.add("Mercedes");
        lsh.add("Volkswagen");
        lsh.add("Porsche"); // duplicate element will not be added
        System.out.println(lsh);
    }
}
