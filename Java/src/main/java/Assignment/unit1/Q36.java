package Assignment.unit1;

import java.awt.desktop.SystemSleepEvent;
import java.util.Scanner;

public class Q36 {
    public static void main(String[] args) {
        String s1;
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter string: ");
        s1 = scanner.nextLine();

        System.out.println("To upper: " + s1.toUpperCase());
        System.out.println("To lower: " + s1.toLowerCase());
    }
}
