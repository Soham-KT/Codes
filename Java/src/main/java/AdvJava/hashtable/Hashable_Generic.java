package AdvJava.hashtable;


import java.util.Hashtable;

public class Hashable_Generic
{
    public static void main(String[] args)
    {
        System.out.println("Soham Kothari");

        Hashtable<String,Integer> hash =new Hashtable<>();
        hash.put("Soham",65);
        hash.put("Kartikey",25);
        hash.put("Tanishq",87);
        hash.put("Zakie",31);
        System.out.println(hash);
    }
}
