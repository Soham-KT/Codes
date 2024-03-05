package AdvJava.set.navigatableset;

import java.util.NavigableSet;
import java.util.TreeSet;

public class NavigableSet_Generic {
    public static void main(String[] args) {
        System.out.println("Soham Kothari");
        NavigableSet<String> names = new TreeSet<>();
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
