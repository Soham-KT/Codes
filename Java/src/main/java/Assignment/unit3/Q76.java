package Assignment.unit3;
import java.lang.*;
import java.util.Scanner;

public class Q76 extends Thread {
    public void run(){
        System.out.println("In run");
    }
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int priority;
        Q76 thread = new Q76();

        System.out.println("Current thread priority: " + thread.getPriority());

        System.out.print("Enter new priority (1-10): ");
        priority = scanner.nextInt();

        thread.setPriority(priority);
        System.out.println("Current thread priority: " + thread.getPriority());
    }
}
