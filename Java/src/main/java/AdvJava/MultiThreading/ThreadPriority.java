package AdvJava.MultiThreading;

import java.lang.*;
import java.util.Scanner;

public class ThreadPriority extends Thread {
    public void run(){
        System.out.println("In run");
    }
    public static void main(String[] args) {
        System.out.println("Soham Kothari");
        Scanner scanner = new Scanner(System.in);
        int priority;
        Assignment.unit3.Q76 thread = new Assignment.unit3.Q76();

        System.out.println("Current thread priority: " + thread.getPriority());

        System.out.print("Enter new priority (1-10): ");
        priority = scanner.nextInt();

        thread.setPriority(priority);
        System.out.println("Current thread priority: " + thread.getPriority());
    }
}
