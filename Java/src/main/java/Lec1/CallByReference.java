package Lec1;

import java.util.Scanner;

class Ref{
    int a, b;
    Ref(int x, int y){
        a = x;
        b = y;
    }

    Ref(){
        a = 0;
        b = 0;
    }

    void objsLesGooooooooooo(Ref obj){
        obj.a = obj.a * 2;
        obj.b = obj.b / 2;
    }

    public int getA() {
        return a;
    }

    public int getB() {
        return b;
    }
}

public class CallByReference {
    public static void main(String[] args){
        int a, b;
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter value of a: ");
        a = sc.nextInt();
        System.out.print("Enter value of b: ");
        b = sc.nextInt();
        Ref gae = new Ref(a, b);

        System.out.println("Previous vals of a and b: " + a + " " + b);
        gae.objsLesGooooooooooo(gae);
        System.out.println("new vals of a and b: " + gae.a + " " + gae.b);
    }
}
