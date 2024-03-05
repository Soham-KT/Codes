package Assignment.unit1;

import java.util.Scanner;

public class Q19 {
    public static void main(String[] args) {
        float num;
        Scanner scanner = new Scanner(System.in);
        int flag = 0;

        System.out.print("Enter number: ");
        num = scanner.nextInt();

        for(float i = 2; i <= Math.ceil(num / 2); i++){
            if (num % i == 0){
                flag = 1;
                break;
            }
        }

        if(flag == 0){
            System.out.println(num + " is a prime number");
        }
        else{
            System.out.println(num + " is not a prime number");
        }
    }
}
