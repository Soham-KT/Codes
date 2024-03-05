package Assignment.unit3;

class myException extends Exception {
    String exception;
    myException(String exception){
        this.exception = exception;
    }
}

public class Q74 {
    public static void main(String[] args) throws myException {
        try{
            throw new myException("In my exception");
        }
        catch(myException e){
            System.out.println(e.exception);
        }
    }
}
