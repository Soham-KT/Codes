package AdvJava.queue.blockingqueue;

import java.util.*;
import java.util.concurrent.*;

public class Q4 {
    // Soham Kothari
    public static void main(String[] args) {
        System.out.println("Soham Kothari");
        int capacity = 4;
        BlockingQueue<String> bq = new ArrayBlockingQueue<String>(capacity);
        bq.add("Porsche");
        bq.add("BMW");
        bq.add("Mercedes");
        bq.add("Volkswagen");

        // with for-each
        for(String s: bq){
            System.out.println(s);
        }

        System.out.println();

        // with iterator
        Iterator<String> ite = bq.iterator();
        while(ite.hasNext()){
            System.out.println(ite.next());
        }
    }
}
