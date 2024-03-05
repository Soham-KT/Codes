package AdvJava.MultiThreading;

import java.util.Scanner;

public class factorial extends Thread {
    public void run()
    {
        try
        {
            int fact = 1, num;
            Scanner sc = new Scanner(System.in);

            System.out.print("Enter number: ");
            num = sc.nextInt();

            for(int i=1; i<=num; i++){
                fact *= i;
            }

            System.out.println("Factorial of " + num + " is: " + fact);
        }
        catch (Exception ex)
        {
            ex.printStackTrace(System.out);
        }
    }
    public static void main(String[] args)
    {
        System.out.println("Soham Kothari");
        try
        {
            factorial fact = new factorial();
            fact.start();
        }
        catch (Exception ex)
        {
            ex.printStackTrace(System.out);
        }
    }
}
