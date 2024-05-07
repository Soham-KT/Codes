import java.util.ArrayList;
import java.util.HashMap;
import java.util.Scanner;

public class deleteThis{
    public static void main(String[] args) {
        HashMap<String, String> emp = new HashMap<>();

        emp.put("1", "s");
        emp.put("2", "a");

        System.out.println("val : " + emp.get("1"));

//        Scanner sc = new Scanner(System.in);
//        System.out.println("Enter key to search: ");
//        String key = sc.nextLine();
//
//        String val = emp.get(key);
//        System.out.println("Value for key: " + val);
    }
}
