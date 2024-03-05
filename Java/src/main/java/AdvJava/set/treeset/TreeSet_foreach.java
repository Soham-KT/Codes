package AdvJava.set.treeset;
import java.util.TreeSet;
public class TreeSet_foreach
{
    public static void main(String args[])
    {
        System.out.println("Soham Kothari");
        TreeSet<String> tree_set=new TreeSet<>();
        tree_set.add("A");
        tree_set.add("L");
        tree_set.add("C");
        tree_set.add("Y");
        tree_set.add("F");
        System.out.println("For Each Loop");
        for (String s:tree_set) {
            System.out.println(s);
        }
    }
}
