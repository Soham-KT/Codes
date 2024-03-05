package Lec2;

class StaticClass{
    static int a = 3;
    static int b = 10;

    static void meth(int x){
        System.out.println("a = " + a);
        System.out.println("b = " + b);
        System.out.println("x = " + x);
    }
}

public class UseStaticClass {
    public static void main(String[] args) {
        StaticClass.meth(40);
    }
}
