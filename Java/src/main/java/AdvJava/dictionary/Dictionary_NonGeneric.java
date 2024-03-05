package AdvJava.dictionary;

import java.util.Dictionary;
import java.util.Enumeration;
import java.util.Hashtable;

public class Dictionary_NonGeneric
{
    public static void main(String[] args)
    {
        System.out.println("Soham Kothari");

        Dictionary dict =new Hashtable();
        dict.put("Soham","65");
        dict.put("Kartikey",25);
        dict.put("Tanishq","87");
        dict.put("Zakie",31);

        if(dict.isEmpty())
        {
            System.out.println("Empty Dictionary");
        }
        else
        {
            Enumeration e = dict.elements();
            while(e.hasMoreElements())
            {
                System.out.println(e.nextElement());
            }
        }
    }
}
