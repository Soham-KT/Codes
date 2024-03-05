package AdvJava.list.arraylist;

import java.util.ArrayList;

public class Q2 {
    // Soham Kothari
    public static void main(String[] args) {
        System.out.println("Soham Kothari");
        // generic
        ArrayList<String> lst = new ArrayList<String>();

        lst.add("Porsche");
        lst.add("BMW");
        lst.add("Mercedes");
        lst.add("Volkswagen");

        System.out.println("Generic: ");
        System.out.println(lst);

        // non generic
        ArrayList lst_non = new ArrayList();

        lst_non.add("Mustang");
        lst_non.add("Impala");
        lst_non.add("Corvette");
        lst_non.add("Dodge");
        lst_non.add(1);

        System.out.println("Non generic: ");
        System.out.println(lst_non);
    }
}
