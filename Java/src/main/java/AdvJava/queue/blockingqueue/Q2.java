package AdvJava.queue.blockingqueue;

import java.util.concurrent.*;

public class Q2 {
    // Soham Kothari
    public static void main(String[] args) {
        System.out.println("Soham Kothari");
        int capacity = 4;

        // Generic
        System.out.println("Generic");
        BlockingQueue<String> bq = new ArrayBlockingQueue<String>(capacity);
        bq.add("Porsche");
        bq.add("BMW");
        bq.add("Mercedes");
        bq.add("Volkswagen");
        System.out.println(bq);

        // Non generic
        System.out.println("Non generic");
        BlockingQueue bq_non = new ArrayBlockingQueue(capacity);
        bq_non.add("Mustang");
        bq_non.add("Impala");
        bq_non.add("Corvette");
        bq_non.add("Dodge");
        System.out.println(bq_non);
    }
}
