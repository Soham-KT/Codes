package Assignment.unit1;

import java.util.Scanner;

public class Q5 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int a, b;

        System.out.print("Enter num 1: ");
        a = scanner.nextInt();
        System.out.print("Enter num 2: ");
        b = scanner.nextInt();

        if(b % a == 0){
            System.out.println(b + " is multiple of " + a);
        }
        else{
            System.out.println(b + " is not a multiple of " + a);
        }
    }
}
