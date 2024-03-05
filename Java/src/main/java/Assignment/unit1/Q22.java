package Assignment.unit1;

import java.util.Scanner;

// [1, 2, 3, 4, 5, 6, 7]

public class Q22 {
    public int binary_search(int[] arr, int num, int low, int high){
        int mid = (low + high) / 2;
        if(low != high){
            if(arr[mid] < num){
                mid = binary_search(arr, num, mid + 1, high);
            }
            else if(arr[mid] > num){
                mid = binary_search(arr, num, low, mid - 1);
            }
            else if(arr[mid] == num){
                return mid + 1;
            }
        }
        return mid;
    }

    public static void main(String[] args) {
        int size, num, pos;
        Scanner scanner = new Scanner(System.in);
        Q22 q1 = new Q22();
        Assignment.unit1.Q20 q2 = new Assignment.unit1.Q20();

        System.out.print("Enter array size: ");
        size = scanner.nextInt();

        int[] arr = new int[size];
        for(int i = 0; i < size; i++){
            System.out.print("Enter element " + (i + 1) + ": ");
            arr[i] = scanner.nextInt();
        }

        System.out.print("Enter number to search: ");
        num = scanner.nextInt();

        arr = q2.selection_sort(arr, size);

        pos = q1.binary_search(arr, num, 0, size - 1);
        System.out.println("The position of " + num + " is : " + pos);
    }
}
