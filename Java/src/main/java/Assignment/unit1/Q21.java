package Assignment.unit1;

import java.util.Scanner;

public class Q21 {
    public int[] bubble_sort(int[] arr, int size){
        for(int i = 0; i < size; i++){
            for(int j = 1; j < size - i; j++){
                if(arr[j-1] > arr[j]){
                    int temp = arr[j-1];
                    arr[j-1] = arr[j];
                    arr[j] = temp;
                }
            }
        }

        return arr;
    }
    public static void main(String[] args) {
        int size;
        Scanner scanner = new Scanner(System.in);
        Q21 q = new Q21();

        System.out.print("Enter array size: ");
        size = scanner.nextInt();

        int[] arr = new int[size];
        for(int i = 0; i < size; i++){
            System.out.print("Enter element " + (i + 1) + ": ");
            arr[i] = scanner.nextInt();
        }

        System.out.print("Sorted array : ");
        arr = q.bubble_sort(arr, size);
        for(int i = 0; i < size; i++){
            System.out.print(arr[i] + " ");
        }
    }
}
