package AdvJava.set.sortedset;

import java.util.SortedSet;
import java.util.TreeSet;

public class SortedSet_Generic {
    public static void main(String[] args) {
        System.out.println("Soham Kothari");
        SortedSet<String> names = new TreeSet<>();
        names.add("Kartikey");
        names.add("Zakie");
        names.add("Tanishq");
        names.add("Soham");
        names.add("Akansha");
        names.add("Namaskruti");
        names.forEach((v)->{
            System.out.println("Name: "+v);
        });
    }
}

