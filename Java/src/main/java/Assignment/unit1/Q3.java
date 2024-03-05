package Assignment.unit1;
import java.util.Scanner;

public class Q3 {
    public static void main(String[] args) {
        int min = 0, max = 0, x = 0, n = 0;
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter number of int you want: ");
        n = scanner.nextInt();

        for(int i=0; i < n; i++){
            System.out.print("Enter number: ");
            x = scanner.nextInt();

            if(i == 0){
                min = max = x;
            }
            else if(x < min){
                min = x;
            }
            else if(x > max) {
                max = x;
            }
        }

        System.out.println("Minimum : " + min + ", Maximum : " + max);
    }
}
