package AdvJava.set.navigatableset;

import java.util.*;

public class NavigableSet_Iterator {
    public static void main(String[] args) {
        System.out.println("Soham Kothari");
        NavigableSet<Integer> set = new TreeSet<>(Arrays.asList(1,23,45,67,89));
        System.out.println("Elements of set:");
        Iterator<Integer> itr = set.iterator();
        while (itr.hasNext()){
            System.out.println(itr.next());
        }
    }
}
