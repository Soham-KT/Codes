package AdvJava.queue.linkedblockingqueue;

import java.util.*;
import java.util.concurrent.*;

public class Q4 {
    // Soham Kothari
    public static void main(String[] args) {
        System.out.println("Soham Kothari");
        LinkedBlockingQueue<String> lbq = new LinkedBlockingQueue<String>();
        lbq.add("Porsche");
        lbq.add("BMW");
        lbq.add("Mercedes");
        lbq.add("Volkswagen");

        // with for-each
        for(String s: lbq){
            System.out.println(s);
        }

        System.out.println();

        // with iterator
        Iterator<String> ite = lbq.iterator();
        while(ite.hasNext()){
            System.out.println(ite.next());
        }

    }
}
