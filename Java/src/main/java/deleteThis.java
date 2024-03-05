import java.util.ArrayList;

class Example extends Thread{
    int[] arr = {1,2,3,4,5,6,7,8,9,10};
    int low = 0, high = 0, target = 0;
    Example(int low, int high, int target){
        this.low = low;
        this.high = high;
        this.target = target;
    }

    public void run() {
        for(int i = low; i <= high; i++){
            if(arr[i] == target){
                System.out.println(this.getName() + " thread: " + i);
                System.out.println("Element found");
                System.exit(0);
            }
        }
    }
}

public class deleteThis{
    public static void main(String[] args) {
        Example ex1 = new Example(0, 5, 7);
        Example ex2 = new Example(6, 10, 7);
        Thread t1 = new Thread(ex1);
        Thread t2 = new Thread(ex2);

        t1.start();
        t2.start();
    }
}
