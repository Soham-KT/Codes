package AdvJava.queue.blockingqueue;

import java.util.concurrent.*;

public class Q3 {
    // Soham Kothari
    public static void main(String[] args) {
        System.out.println("Soham Kothari");
        int capacity = 4;
        BlockingQueue<String> bq = new ArrayBlockingQueue<String>(capacity);
        bq.add("Porsche");
        bq.add("BMW");
        bq.add("Mercedes");
        bq.add("Volkswagen");
        System.out.println(bq);

        System.out.println("Capacity of queue: " + bq.remainingCapacity());
        bq.remove();
        bq.remove();
        System.out.println("Capacity after removing some elements: " + bq.remainingCapacity());
    }
}
