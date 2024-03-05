package Assignment.unit1;

public class Q6 {
    public static void main(String[] args) {
        int prod = 1;

        for(int i = 1; i <= 15; i += 2){
            prod *= i;
        }

        System.out.println("Product: " + prod);
    }
}
