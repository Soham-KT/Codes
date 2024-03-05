package Assignment.unit1;

import java.util.Scanner;

public class Q20 {
    public int[] selection_sort(int[] arr, int size){
        for(int i = 0; i < size-1; i++){
            for(int j = i+1; j < size; j++){
                if(arr[i] > arr[j]){
                    int temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
        }

        return arr;
    }
    public static void main(String[] args) {
        int size;
        Scanner scanner = new Scanner(System.in);
        Q20 q = new Q20();

        System.out.print("Enter array size: ");
        size = scanner.nextInt();

        int[] arr = new int[size];
        for(int i = 0; i < size; i++){
            System.out.print("Enter element " + (i + 1) + ": ");
            arr[i] = scanner.nextInt();
        }

        System.out.print("Sorted array : ");
        arr = q.selection_sort(arr, size);
        for(int i = 0; i < size; i++){
            System.out.print(arr[i] + " ");
        }
    }
}
