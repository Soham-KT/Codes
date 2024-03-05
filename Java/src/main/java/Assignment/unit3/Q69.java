package Assignment.unit3;

public class Q69 {
    public static void main(String[] args) {
        String str = "Shanks";
        try{
            Integer num = Integer.parseInt(str);
            System.out.println(num);
        }
        catch(NumberFormatException e){
            System.out.println("Do not convert string to number");
        }
    }
}
