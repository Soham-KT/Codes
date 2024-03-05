package Assignment.unit1;
import java.util.Scanner;

public class Q15{
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int p, t = 10, n = 2;
        float r, ci = 1;

        System.out.print("Enter principle amount: ");
        p = scanner.nextInt();

        for(r = 0.05f; r <= 0.1f; r += 0.01f){
            for(int i = 1; i <= n*t; i++){
                ci *= (1 + r/n);
            }
            ci = p * ci - p;
            
            System.out.println("Compound interest: " + ci + "\nFor rate: " + r);
        }
    }
}