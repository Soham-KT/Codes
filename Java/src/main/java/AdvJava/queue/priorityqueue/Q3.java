package AdvJava.queue.priorityqueue;

import java.util.*;

public class Q3 {
    // Soham Kothari
    public static void main(String[] args) {
        System.out.println("Soham Kothari");
        PriorityQueue<String> pq = new PriorityQueue<String>();
        pq.add("Porsche");
        pq.add("BMW");
        pq.add("Mercedes");
        pq.add("Volkswagen");
        System.out.println(pq);

        System.out.println("Element at top: " + pq.peek());
        System.out.println("Removing element at top: " + pq.poll());
        System.out.println("Element at top: " + pq.peek());
        System.out.println(pq);
    }
}
