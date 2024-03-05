package Assignment.unit3;

public class Q68 {
    public static void main(String[] args) {
        String str = null;
        try{
            if(str.equals("hello")){
                System.out.println("Same");
            }
            else{
                System.out.println("Not same");
            }
        }
        catch(NullPointerException e){
            System.out.println("Null pointer exception");
        }
    }
}
