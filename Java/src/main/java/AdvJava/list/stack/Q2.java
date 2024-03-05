package AdvJava.list.stack;

import java.util.*;

public class Q2 {
    // Soham Kothari
    public static void main(String[] args) {
        System.out.println("Soham Kothari");
        // Generic
        System.out.println("Generic:");
        Stack<String> stk = new Stack<String>();
        stk.push("Porsche");
        stk.push("BMW");
        stk.push("Mercedes");
        stk.push("Volkswagen");
        System.out.println(stk);

        // Non generic
        System.out.println("\nNon generic:");
        Stack stk_non = new Stack();
        stk_non.push("Porsche");
        stk_non.push("BMW");
        stk_non.push("Mercedes");
        stk_non.push("Volkswagen");
        System.out.println(stk_non);
    }
}
