package Assignment.unit1;
import java.util.Scanner;

public class Q18 {
    public static void main(String[] args) {
        int num, check = 0, num_;
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter number: ");
        num = scanner.nextInt();
        num_ = num;
        while(num_ != 0 ){
            check += Math.pow(num_ % 10, 3);
            num_ /= 10;
        }

        if(check == num) {
            System.out.println(num + " is an armstrong number");
        }
        else{
            System.out.println(num + " is not an armstrong number");
        }
    }
}
