package AdvJava.list.vector;

import java.util.*;

public class Q4 {
    // Soham Kothari
    public static void main(String[] args) {
        System.out.println("Soham Kothari");
        Vector<String> vec = new Vector<String>();
        vec.add("Porsche");
        vec.add("BMW");
        vec.add("Mercedes");
        vec.add("Volkswagen");

        // with for-each
        for(String s: vec){
            System.out.println(s);
        }

        System.out.println();
        // with iterator
        Iterator<String> ite = vec.iterator();
        while(ite.hasNext()){
            System.out.println(ite.next());
        }
    }
}
