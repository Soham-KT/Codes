package AdvJava.queue.linkedblockingqueue;

import java.util.concurrent.*;

public class Q2 {
    // Soham Kothari
    public static void main(String[] args) {
        System.out.println("Soham Kothari");
        // Generic
        System.out.println("Generic");
        LinkedBlockingQueue<String> lbq = new LinkedBlockingQueue<String>();
        lbq.add("Porsche");
        lbq.add("BMW");
        lbq.add("Mercedes");
        lbq.add("Volkswagen");
        System.out.println(lbq);

        // Non generic
        System.out.println("Non generic");
        LinkedBlockingQueue lbq_non = new LinkedBlockingQueue();
        lbq_non.add("Mustang");
        lbq_non.add("Impala");
        lbq_non.add("Corvette");
        lbq_non.add("Dodge");
        System.out.println(lbq_non);
    }
}
