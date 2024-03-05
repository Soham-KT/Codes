package Assignment.unit1;

import java.util.Scanner;

public class Q4 {
    public static void main(String[] args) {
        int avg = 0, x = 0, n = 0;
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter number of int you want: ");
        n = scanner.nextInt();

        for(int i=0; i < n; i++){
            System.out.print("Enter number: ");
            x = scanner.nextInt();
            avg += x;
        }
        avg /= n;

        System.out.println("Average : " + avg);
    }
}
