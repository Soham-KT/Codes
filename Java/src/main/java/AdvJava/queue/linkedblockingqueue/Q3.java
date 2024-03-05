package AdvJava.queue.linkedblockingqueue;

import java.util.*;
import java.util.concurrent.*;

public class Q3 {
    // Soham Kothari
    public static void main(String[] args) {
        System.out.println("Soham Kothari");
        Vector<String> v = new Vector<String>();
        v.addElement("Porsche");
        v.addElement("BMW");
        v.addElement("Mercedes");
        v.addElement("Volkswagen");

        LinkedBlockingQueue<String> lbq = new LinkedBlockingQueue<String>(v);
        System.out.println(lbq);
        System.out.println("Top element: " + lbq.peek());
        System.out.println("After removing top element: " + lbq.poll());
        System.out.println("Top element: " + lbq.peek());
        System.out.println(lbq);
    }
}
