package AdvJava.list.linkedlist;

import java.util.LinkedList;

public class Q2 {
    // Soham Kothari
    public static void main(String[] args) {
        System.out.println("Soham Kothari");
        // Generic
        System.out.println("Generic: ");
        LinkedList<String> llst = new LinkedList<String>();
        llst.add("Porsche");
        llst.add("BMW");
        llst.add("Mercedes");
        llst.add("Volkswagen");
        System.out.println(llst);

        // Non Generic
        System.out.println("\nNon generic: ");
        LinkedList llst_non = new LinkedList();
        llst_non.add("Mustang");
        llst_non.add("Impala");
        llst_non.add("Corvette");
        llst_non.add("Dodge");
        System.out.println(llst_non);
    }
}
