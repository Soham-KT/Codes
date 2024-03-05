package AdvJava.queue.priorityblockingqueue;

import java.util.*;
import java.util.concurrent.*;

public class Q4 {
    // Soham Kothari
    public static void main(String[] args) {
        System.out.println("Soham Kothari");
        int capacity = 4;
        PriorityBlockingQueue<String> pbq = new PriorityBlockingQueue<String>(capacity);
        pbq.add("Porsche");
        pbq.add("BMW");
        pbq.add("Mercedes");
        pbq.add("Volkswagen");

        // with for-each
        for(String s: pbq){
            System.out.println(s);
        }

        System.out.println();

        // with iterator
        Iterator<String> ite = pbq.iterator();
        while(ite.hasNext()){
            System.out.println(ite.next());
        }

    }
}
