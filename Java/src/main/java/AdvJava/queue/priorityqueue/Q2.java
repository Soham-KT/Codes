package AdvJava.queue.priorityqueue;

import java.util.*;

public class Q2 {
    // Soham Kothari
    public static void main(String[] args) {
        System.out.println("Soham Kothari");
        // Generic
        System.out.println("Generic");
        PriorityQueue<String> pq = new PriorityQueue<String>();
        pq.add("Porsche");
        pq.add("BMW");
        pq.add("Mercedes");
        pq.add("Volkswagen");
        System.out.println(pq);

        // Non generic
        System.out.println("Non generic");
        PriorityQueue pq_non = new PriorityQueue();
        pq_non.add("Mustang");
        pq_non.add("Corvette");
        pq_non.add("Impala");
        pq_non.add("Dodge");
        System.out.println(pq_non);
    }
}
