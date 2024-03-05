package AdvJava.queue.linkedblockingqueue;

import java.util.concurrent.*;

public class Q1 {
    // Soham Kothari
    public static void main(String[] args) {
        System.out.println("Soham Kothari");
        // Bounded
        System.out.println("Bounded linked blocking queue");
        int capacity = 3;
        LinkedBlockingQueue<String> lbq_b = new LinkedBlockingQueue<String>(capacity);
        lbq_b.add("Porsche");
        lbq_b.add("BMW");
        lbq_b.add("Mercedes");
        System.out.println(lbq_b);
        System.out.println("Capacity: " + lbq_b.remainingCapacity());

        // Unbounded
        System.out.println("Unbounded linked blocking queue");
        LinkedBlockingQueue<String> lbq = new LinkedBlockingQueue<String>();
        lbq.add("Ferrari");
        lbq.add("Lamborgini");
        lbq.add("Pagani");
        System.out.println(lbq);
        System.out.println("Capacity: " + lbq.remainingCapacity());
    }
}
