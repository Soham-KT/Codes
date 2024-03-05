package Assignment.unit3;

import java.util.Scanner;

public class Q66 {
    public static void main(String[] args) {
        int num1, num2, num;
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter number 1: ");
        num1 = scanner.nextInt();
        System.out.print("Enter number 2: ");
        num2 = scanner.nextInt();

        try{
            num = num1 / num2;
            System.out.println("The division is: " + num);
        }

        catch(ArithmeticException e){ System.out.println("Division by zero"); }

        finally{ System.out.println("Exceptions ended"); }
    }
}
