package AdvJava.list.linkedlist;

import java.util.LinkedList;

public class Q3 {
    // Soham Kothari
    public static void main(String[] args) {
        System.out.println("Soham Kothari");
        LinkedList<String> llst = new LinkedList<String>();

        llst.add("Porsche");
        llst.add("BMW");
        llst.add("Mercedes");
        llst.add("Volkswagen");
        System.out.println(llst);


        System.out.println("\nAfter removing element at index 1");
        llst.remove(1);
        System.out.println(llst);
    }
}
