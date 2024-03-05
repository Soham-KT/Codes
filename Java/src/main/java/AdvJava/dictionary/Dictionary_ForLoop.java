package AdvJava.dictionary;

import java.util.*;

public class Dictionary_ForLoop
{
    public static void main(String[] args)
    {
        System.out.println("Soham Kothari");
        Dictionary<String, Integer> dict = new Hashtable<>();
        dict.put("Soham", 65);
        dict.put("Kartikey", 25);
        dict.put("Tanishq", 87);
        dict.put("Zakie", 31);
        Enumeration <String>enu1 = dict.keys();

        for (Enumeration<String> i=enu1;i.hasMoreElements();)
        {
            String key=i.nextElement();
            Integer value=dict.get(key);
            System.out.println(key+":"+value);
        }
    }

}
