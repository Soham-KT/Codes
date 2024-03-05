package AdvJava.hashtable;

import java.util.Enumeration;
import java.util.Hashtable;

public class Hashable_foreach
{
    public static void main(String[] args) {
        System.out.println("Soham Kothari");

        Hashtable<String, Integer> hash = new Hashtable<>();
        hash.put("Soham", 65);
        hash.put("Kartikey", 25);
        hash.put("Tanishq", 82);
        hash.put("Zakie", 31);
        System.out.println(hash);
        Enumeration<String> keys = hash.keys();
        while(keys.hasMoreElements())
        {
            String key=keys.nextElement();
            System.out.println(key+":"+hash.get(key));
        }

    }
}
