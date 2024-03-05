package Assignment.unit3;

public class Q75 {
    void one() throws Exception {
        try{
            two();
        }
        catch(Exception e){
            System.out.println(e);
            throw new Exception("This exception was in method ONE");
        }
    }

    void two() throws Exception {
        throw new Exception("This exception was in method TWO");
    }

    public static void main(String[] args) throws Exception {
        Q75 q = new Q75();
        try{
            q.one();
        }
        catch(Exception e){
            System.out.println(e);
        }
    }
}
