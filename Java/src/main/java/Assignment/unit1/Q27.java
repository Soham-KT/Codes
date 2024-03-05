package Assignment.unit1;

public class Q27 {
    public void display(int... values){
        for(int i: values){
            System.out.println(i);
        }
    }
    public static void main(String[] args) {
        Q27 q = new Q27();
        q.display(1, 2, 3, 4, 5, 6, 7);
    }
}
