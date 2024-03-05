package Assignment.unit1;

import java.util.Scanner;

public class Q34 {
    public static void main(String[] args) {
        String s1, s2 = "";
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter string 1: ");
        s1 = scanner.nextLine();

        for(int i = (s1.length() - 1); i >= 0; i--){
            s2 += s1.charAt(i);
        }

        System.out.println("Reversed: " + s2);
    }
}
