package AdvJava.set.linkedhashset;

import java.util.*;

public class Q2 {
    // Soham Kothari
    public static void main(String[] args) {
        // Generic
        System.out.println("Soham Kothari");
        System.out.println("Generic");
        LinkedHashSet<String> lsh = new LinkedHashSet<String>();
        lsh.add("Porsche");
        lsh.add("BMW");
        lsh.add("Mercedes");
        lsh.add("Volkswagen");
        System.out.println(lsh);

        // Non generic
        System.out.println("Non generic");
        LinkedHashSet lsh_non = new LinkedHashSet();
        lsh_non.add("Mustang");
        lsh_non.add("Corvette");
        lsh_non.add("Impala");
        lsh_non.add("Dodge");
        System.out.println(lsh_non);

    }
}
