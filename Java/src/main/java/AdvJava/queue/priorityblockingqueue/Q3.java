package AdvJava.queue.priorityblockingqueue;

import java.util.concurrent.*;

public class Q3 {
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

        System.out.println("Element at top: " + pbq.peek());
        System.out.println("Removing element at top: " + pbq.poll());
        System.out.println("Element at top: " + pbq.peek());
        System.out.println(pbq);
    }
}
