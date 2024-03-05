package Assignment.unit4;

import java.io.File;

public class Q92 {
    public static void main(String[] args) {
        File file = new File("../Java/src");
        if(file.isDirectory()){
            System.out.println(file + " is a directory");
        }
        else{
            System.out.println(file + " is not a directory");
        }
    }
}
