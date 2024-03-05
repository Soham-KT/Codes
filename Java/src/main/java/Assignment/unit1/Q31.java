package Assignment.unit1;

import java.util.Scanner;

public class Q31 {
    public static void main(String[] args) {
        String s1, s2;
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter string: ");
        s1 = scanner.nextLine();

        System.out.print("Enter string you want to find: ");
        s2 = scanner.next();

        System.out.println(s1.indexOf(s2));

    }
}
