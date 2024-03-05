package Assignment.unit1;

public class Q7 {
    public static void main(String[] args) {
        int fact = 1;

        for(int i = 1; i <= 5; i++){
           fact *= i;
           System.out.println("Factorial of " + i + " is : " + fact);
        }
    }
}
