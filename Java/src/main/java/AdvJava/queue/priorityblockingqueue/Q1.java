package AdvJava.queue.priorityblockingqueue;

import java.util.concurrent.*;

public class Q1 {
    // Soham Kothari
    public static void main(String[] args) {
        System.out.println("Soham Kothari");
        int capacity = 4;
        PriorityBlockingQueue<String> pbq = new PriorityBlockingQueue<String>(capacity);
        pbq.add("Porsche");
        pbq.add("BMW");
        pbq.add("Mercedes");
        pbq.add("Volkswagen");
        System.out.println(pbq);

        // will throw error : queue full
        /*
        pbq.add("Pagani");
        System.out.println(pbq);
         */

        pbq.remove();
        System.out.println(pbq);
        pbq.add("Pagani");
        System.out.println(pbq);
    }
}
