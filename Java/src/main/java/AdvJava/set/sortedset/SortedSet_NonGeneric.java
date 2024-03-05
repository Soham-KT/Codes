package AdvJava.set.sortedset;

import java.util.SortedSet;
import java.util.TreeSet;

public class SortedSet_NonGeneric {
    public static void main(String[] args) {
        System.out.println("Soham Kothari");
        SortedSet data = new TreeSet();
        data.add(1.56);
        data.add(5.67);
        data.add(65.54);
        data.add(54.68);

        data.forEach(System.out::println);
    }
}
