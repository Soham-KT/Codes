package AdvJava.set.navigatableset;

import java.util.Arrays;
import java.util.NavigableSet;
import java.util.TreeSet;

public class NavigableSet_ForEach {
    public static void main(String[] args) {
        System.out.println("Soham Kothari");
        NavigableSet<Integer> set = new TreeSet<>(Arrays.asList(1,23,45,67,89));
        System.out.println("Elements of set:");
        for (int num:set) {
            System.out.println(num);
        }

    }
}
