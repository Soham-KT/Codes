package Assignment.unit1;

import java.util.Scanner;

public class Q12 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int p, t = 10, n = 2;
        float r = 0.05f, ci = 1;

        System.out.print("Enter principle amount: ");
        p = scanner.nextInt();

        for(int i = 1; i <= n*t; i++){
            ci *= (1 + r/n);
        }

        ci = p * ci - p;

        System.out.println("Compound interest: " + ci);
    }
}
