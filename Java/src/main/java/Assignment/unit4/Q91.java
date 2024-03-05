package Assignment.unit4;

import java.io.File;

public class Q91 {
    public static void main(String[] args) {
        File file = new File("Q89.txt");
        if(file.exists()){
            System.out.println(file + " exists");
        }
        else{
            System.out.println(file + " does not exist");
        }
    }
}
