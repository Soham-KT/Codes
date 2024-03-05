package Assignment.unit4;

import java.io.File;
import java.io.IOException;

public class Q89 {
    public static void main(String[] args) {
        File file = new File("Q89.txt");
        try{
            file.createNewFile();
            System.out.println("File created " + file.getName());
        }
        catch (IOException e){
            System.out.println("Cannot create the file");
        }
    }
}
