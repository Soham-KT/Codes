package Assignment.unit1;
import java.util.Scanner;

public class Q16 {
    public int fact(int x){
        if(x == 1){
            return 1;
        }

        return (x * fact(x - 1));
    }
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        Q16 q = new Q16();
        int num;
        System.out.print("Enter number: ");
        num = scanner.nextInt();

        System.out.println("The factorial of " + num + " is: " + q.fact(num));
    }
}
