package AdvJava.list.stack;

import java.util.*;

public class Q4 {
    // Soham Kothari
    public static void main(String[] args) {
        System.out.println("Soham Kothari");
        Stack<String> stk = new Stack<String>();
        stk.push("Porsche");
        stk.push("BMW");
        stk.push("Mercedes");
        stk.push("Volkswagen");

        // with for-each
        for(String s: stk){
            System.out.println(s);
        }

        System.out.println();
        // with iterator
        Iterator<String> ite = stk.iterator();
        while(ite.hasNext()){
            System.out.println(ite.next());
        }
    }
}
