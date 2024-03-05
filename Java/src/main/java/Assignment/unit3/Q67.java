package Assignment.unit3;

public class Q67 {
    public static void main(String[] args) {
        int[] arr = {1, 2, 3, 4, 5};
        try{
            for(int i = 0; i <= 5; i++){
                System.out.println(arr[i]);
            }
        }

        catch(ArrayIndexOutOfBoundsException e){ System.out.println("Out of bounds exception"); }

        finally{ System.out.println("No more exceptions"); }
    }
}
