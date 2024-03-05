package Assignment.unit1;

import java.util.Scanner;

public class Q32 {
    public static void main(String[] args) {
        String s1, s2;
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter string 1: ");
        s1 = scanner.nextLine();

        System.out.print("Enter string 2: ");
        s2 = scanner.nextLine();

        System.out.println(s1.concat(s2));
    }
}
