package AdvJava.list.stack;

import java.util.*;

public class Q3 {
    // Soham Kothari
    public static void main(String[] args) {
        System.out.println("Soham Kothari");
        Stack<String> stk = new Stack<String>();
        stk.push("Porsche");
        stk.push("BMW");
        stk.push("Mercedes");
        stk.push("Volkswagen");
        System.out.println(stk);

        System.out.println("\nAfter popping an element");
        stk.pop();
        System.out.println(stk);
    }
}
