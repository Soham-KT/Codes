package AdvJava.set.hashset;

import java.util.*;

public class Q4 {
    // Soham Kothari
    public static void main(String[] args) {
        System.out.println("Soham Kothari");
        HashSet<String> hs = new HashSet<String>();
        hs.add("Porsche");
        hs.add("BMW");
        hs.add("Mercedes");
        hs.add("Volkswagen");

        // with for-each
        for(String s: hs){
            System.out.println(s);
        }

        System.out.println();
        // with iterator
        Iterator<String> ite = hs.iterator();
        while(ite.hasNext()){
            System.out.println(ite.next());
        }

    }
}
