package Assignment.unit1;

import java.util.Scanner;

public class Q30 {
    public static void main(String[] args) {
        String s1 = "hello";
        String s2 = "Hello";

        // equals
        if(s1.equals(s2)){
            System.out.println("Equal equals");
        }
        else{
            System.out.println("Not Equal equals");
        }

        // equals ignore casing
        if(s1.equalsIgnoreCase(s2)){
            System.out.println("Equal equals ignore case");
        }
        else{
            System.out.println("Not Equal equals ignore case");
        }
    }
}
