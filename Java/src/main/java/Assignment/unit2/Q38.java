package Assignment.unit2;

class Kilass{
    int a, b, c;

    Kilass(){
        a = 10;
        b = 20;
        c = 30;
    }

    public int getA() {
        return a;
    }

    public int getB() {
        return b;
    }

    public int getC() {
        return c;
    }
}

public class Q38 {
    public static void main(String[] args) {
        Kilass k = new Kilass();
        System.out.println("A = " + k.getA());
        System.out.println("B = " + k.getB());
        System.out.println("C = " + k.getC());
    }
}
