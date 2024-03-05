package Assignment.unit1;

import java.util.Scanner;

class Stk{
    int pointer = 0, size;
    int[] stk;
    Scanner scanner = new Scanner(System.in);
    Stk(){
        System.out.print("Enter size of stack: ");
        size = scanner.nextInt();
        stk = new int[size];
    }

    public void insert(int num){
        if(pointer == size){
            System.out.println("Stack overflow");
        }
        else{
            stk[pointer] = num;
            pointer++;
        }
    }

    public void remove(){
        if(pointer == -1){
            System.out.println("Stack underflow");
        }
        else{
            System.out.println("Removed element: " + stk[pointer - 1]);
            pointer--;
        }
    }

    public void display(){
        if(pointer == -1){
            System.out.println("Stack empty");
        }
        else{
            System.out.print("Stack: ");
            for(int i = 0; i < pointer; i++){
                System.out.print(stk[i] + " ");
            }
            System.out.println();
        }
    }
}

public class Q23 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        Stk s = new Stk();

        s.insert(1);
        s.insert(2);
        s.insert(3);
        s.insert(4);
        s.insert(5);
        s.display();
        s.remove();
        s.remove();
        s.display();
    }
}
