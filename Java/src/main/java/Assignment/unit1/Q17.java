package Assignment.unit1;

import java.util.Scanner;

public class Q17 {

    public int fibb(int x){
        if(x == 0) { return 0; }
        else if(x == 1) { return 1; }
        else { return (fibb(x - 1) + fibb(x - 2)); }
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int num;
        Q17 q = new Q17();

        System.out.print("Enter number: ");
        num = scanner.nextInt();

        for(int i = 0; i < num; i++){
            System.out.print(q.fibb(i) + " ");
        }
    }
}
