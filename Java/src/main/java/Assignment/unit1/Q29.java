package Assignment.unit1;

public class Q29 {
    public enum season{
        summer, winter
    }

    public static void main(String[] args) {
        for(season s : season.values()){
            System.out.println(s);
        }
    }

}
