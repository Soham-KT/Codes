package AdvJava.hashtable;


import java.util.Hashtable;
import java.util.Iterator;

public class Hashable_Iterator
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

        Iterator<String> itr=hash.keys().asIterator();
        Iterator<Integer> itr2=hash.values().iterator();
        while (itr.hasNext())
        {
            System.out.println(itr.next()+":"+itr2.next());
        }
    }
}
