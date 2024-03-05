package AdvJava.dictionary;

import java.util.Dictionary;
import java.util.Hashtable;

public class Dictionary_Generic {
    public static void main(String[] args) {
        System.out.println("Soham Kothari");

        Dictionary<Integer,String> dict = new Hashtable<>();
        dict.put(101, "Sydney");
        dict.put(102, "Brisbane");
        dict.put(103, "Melbourne");

        System.out.println(dict);
    }
}
