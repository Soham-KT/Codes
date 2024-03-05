package AdvJava.set.hashset;

import java.util.*;
public class Q1 {
    // Soham Kothari
    public static void main(String[] args) {
        System.out.println("Soham Kothari");
        HashSet<String> hs = new HashSet<String>();
        hs.add("Porsche");
        hs.add("BMW");
        hs.add("Mercedes");
        hs.add("Volkswagen");
        hs.add("Porsche"); // duplicate element does not get added

        System.out.println(hs);
    }
}
