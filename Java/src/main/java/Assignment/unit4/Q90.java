package Assignment.unit4;

import java.io.File;

public class Q90 {
    public static void main(String[] args) {
        File file = new File("Q89.txt");
        if(file.delete()){
            System.out.println("File deleted: " + file.getName());
        }
        else{
            System.out.println("File " + file.getName() + " could not be deleted");
        }
    }
}
