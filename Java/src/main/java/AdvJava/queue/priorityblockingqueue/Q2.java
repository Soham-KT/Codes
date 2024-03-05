package AdvJava.queue.priorityblockingqueue;

import java.util.concurrent.*;

public class Q2 {
    // Soham Kothari
    public static void main(String[] args) {
        System.out.println("Soham Kothari");
        int capacity = 4;

        // Generic
        System.out.println("Generic");
        PriorityBlockingQueue<String> pbq = new PriorityBlockingQueue<String>(capacity);
        pbq.add("Porsche");
        pbq.add("BMW");
        pbq.add("Mercedes");
        pbq.add("Volkswagen");
        System.out.println(pbq);

        // Non generic
        System.out.println("Non generic");
        PriorityBlockingQueue pbq_non = new PriorityBlockingQueue(capacity);
        pbq_non.add("Mustang");
        pbq_non.add("Impala");
        pbq_non.add("Corvette");
        pbq_non.add("Dodge");
        System.out.println(pbq_non);


    }
}
