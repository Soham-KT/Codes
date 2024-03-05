package Assignment.unit3;
import java.io.*;

public class Q71 {
    public static void main(String[] args) {
        try{
            FileReader fl = new FileReader("hello.txt");
            System.out.println(fl.read());
        }
        catch(IOException e){
            System.out.println("File not found");
        }
    }
}
