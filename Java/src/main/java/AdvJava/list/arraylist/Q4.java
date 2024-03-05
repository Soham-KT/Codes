package AdvJava.list.arraylist;

import java.util.*;

public class Q4 {
    // Soham Kothari
    public static void main(String[] args) {
        System.out.println("Soham Kothari");
        ArrayList<String> lst = new ArrayList<String>();

        lst.add("Porsche");
        lst.add("BMW");
        lst.add("Mercedes");
        lst.add("Volkswagen");

        // with for-each
        for(String s: lst){
            System.out.println(s);
        }

        // with iterator
        Iterator<String> ite = lst.iterator();
        while(ite.hasNext()){
            System.out.println(ite.next());
        }
    }
}
