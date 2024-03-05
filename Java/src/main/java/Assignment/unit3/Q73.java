package Assignment.unit3;

public class Q73 {
    public static void main(String[] args) throws Exception {
        try{
            throw new Exception("I was the exception");
        }
        catch(Exception e){
            System.out.println(e);
        }
        finally{
            System.out.println("In finally block");
        }
    }
}
