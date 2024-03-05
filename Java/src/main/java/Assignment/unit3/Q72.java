package Assignment.unit3;

public class Q72 {
    public static void main(String[] args) {
        int[] arr = {1, 2, 3, 4, 5};
        try{
            for(int i = 0; i <= 5; i++){
                System.out.println(arr[i]);
            }
        }
        // This will generate an error if uncommented
//         catch(Exception e){ System.out.println(e); }

        catch(ArrayIndexOutOfBoundsException e){ System.out.println("Out of bounds exception"); }

        // The correct order
        catch(Exception e){ System.out.println(e); }

        finally{ System.out.println("No more exceptions"); }
    }
}
