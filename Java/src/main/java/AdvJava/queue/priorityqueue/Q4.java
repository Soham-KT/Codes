package AdvJava.queue.priorityqueue;

import java.util.*;

public class Q4 {
    // Soham Kothari
    public static void main(String[] args) {
        System.out.println("Soham Kothari");
        PriorityQueue<String> pq = new PriorityQueue<String>();
        pq.add("Porsche");
        pq.add("BMW");
        pq.add("Mercedes");
        pq.add("Volkswagen");

        // with for-each
        for(String s: pq){
            System.out.println(s);
        }

        System.out.println();

        // with iterator
        Iterator<String> ite = pq.iterator();
        while(ite.hasNext()){
            System.out.println(ite.next());
        }
    }
}
