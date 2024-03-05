package AdvJava.set.treeset;

import java.util.TreeSet;

public class TreeSet_nonGeneric
{
    public static void main(String[] args)
    {
        System.out.println("Soham Kothari");
        TreeSet tree_set=new java.util.TreeSet();
        tree_set.add("A");
        tree_set.add("L");
        tree_set.add("C");
        tree_set.add("Y");
        tree_set.add("F");

        System.out.println(tree_set);
        System.out.println("D Ceil Element:"+tree_set.ceiling("D"));
        System.out.println("D Floor Element:"+tree_set.floor("D"));
        System.out.println("First Element:"+tree_set.first());
        System.out.println("Last Element:"+tree_set.last());
    }
}
