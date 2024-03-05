package Assignment.unit1;

import java.util.Scanner;

class Area{
    // for rectangle
    int calcArea(int x, int y) { return x * y; }

    // for circle
    float calcArea(float r) { return 2 * 3.1415f * r; }
}

public class Q11 {
    public static void main(String[] args) {
        int a, b;
        float x;
        Area ar = new Area();
        Scanner scanner = new Scanner(System.in);

        System.out.println("For rectangle: ");
        System.out.print("Enter a: ");
        a = scanner.nextInt();
        System.out.print("Enter b: ");
        b = scanner.nextInt();

        System.out.println("For circle: ");
        System.out.print("Enter x: ");
        x = scanner.nextFloat();

        System.out.println("Area of rectangle: " + ar.calcArea(a, b));
        System.out.println("Area of circle: " + ar.calcArea(x));
    }
}
