package Lec2;

public class UseStatic {
    static int a = 3;
    static int b;

    static void meth(int x){
        System.out.println("a = " + a);
        System.out.println("b = " + b);
        System.out.println("x = " + x);
    }

    static {
        System.out.println("Block used");
        b = a * 3;
    }

    public static void main(String[] args) {
        meth(40);
    }

}
