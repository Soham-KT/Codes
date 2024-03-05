package AdvJava.MultiThreading;

public class VolatileKeywordExample {
    private static volatile boolean sayHello = false;

    public static void main(String[] args) throws InterruptedException {
        System.out.println("Soham Kothari");
        Thread thread = new Thread(() -> {
            while(!sayHello) {

            }

            System.out.println("Hello World!");

            while(sayHello) {

            }

            System.out.println("Good Bye!");
        });

        thread.start();

        Thread.sleep(1000);
        System.out.println("Say Hello..");
        sayHello = true;

        Thread.sleep(1000);
        System.out.println("Say Bye..");
        sayHello = false;
    }
}