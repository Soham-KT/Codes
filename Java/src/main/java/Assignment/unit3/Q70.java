package Assignment.unit3;

public class Q70 {
    public static void main(String[] args) {
        try{
            Class.forName("Shanks");
        }
        catch (ClassNotFoundException e) {
            System.out.println("Class not found");
        }
    }
}
