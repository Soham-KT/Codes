package AdvJava.set.sortedset;

import java.util.Arrays;
import java.util.Iterator;
import java.util.SortedSet;
import java.util.TreeSet;

public class SortedSet_Iterator {
    public static void main(String[] args) {
        System.out.println("Soham Kothari");
        SortedSet<Integer> set = new TreeSet<>(Arrays.asList(1,25,45,67,89));
        System.out.println("Elements of set:");
        Iterator<Integer> itr = set.iterator();
        while (itr.hasNext()){
            System.out.println(itr.next());
        }
    }
}

