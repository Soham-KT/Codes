package AdvJava.queue.blockingqueue;

import java.util.concurrent.*;


public class Q1 {
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

        // will throw error : queue full
        /*
        bq.add("Pagani");
        System.out.println(bq);
         */

        bq.remove();
        System.out.println(bq);
        bq.add("Pagani");
        System.out.println(bq);
    }
}
