package AdvJava.list.linkedlist;

import java.util.Iterator;
import java.util.LinkedList;

public class Q4 {
    // Soham Kothari
    public static void main(String[] args) {
        System.out.println("Soham Kothari");
        LinkedList<String> llst = new LinkedList<String>();
        llst.add("Porsche");
        llst.add("BMW");
        llst.add("Mercedes");
        llst.add("Volkswagen");

        // with for-each
        for(String s: llst){
            System.out.println(s);
        }

        // with iterator
        Iterator<String> ite = llst.iterator();
        while(ite.hasNext()){
            System.out.println(ite.next());
        }
    }
}
