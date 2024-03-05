package Assignment.unit1;

import java.util.Random;

public class Q26 {
    public static void main(String[] args) {
        int[][][] arr = new int[3][4][6];
        int max = 0;
        Random rand = new Random();

        for(int i = 0; i < 3; i++){
            for(int j = 0; j < 4; j++){
                for(int k = 0; k < 6; k++){
                    arr[i][j][k] = rand.nextInt();
                }
            }
        }

        max = arr[0][0][0];
        for(int i = 0; i < 3; i++){
            for(int j = 0; j < 4; j++){
                for(int k = 0; k < 6; k++){
                    if(max < arr[i][j][k]){
                        max = arr[i][j][k];
                    }
                }
            }
        }
        System.out.println("Max in random array: " + max);
    }
}
