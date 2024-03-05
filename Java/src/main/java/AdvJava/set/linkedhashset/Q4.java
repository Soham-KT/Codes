package AdvJava.set.linkedhashset;

import java.util.*;

public class Q4 {
    // Soham Kothari
    public static void main(String[] args) {
        System.out.println("Soham Kothari");
        LinkedHashSet<String> lsh = new LinkedHashSet<String>();
        lsh.add("Porsche");
        lsh.add("BMW");
        lsh.add("Mercedes");
        lsh.add("Volkswagen");

        // with for-each
        for(String s: lsh) System.out.println(s);

        System.out.println();

        // with iterator
        Iterator<String> ite = lsh.iterator();
        while(ite.hasNext()) System.out.println(ite.next());
    }
}
