package AdvJava.MultiThreading;

class runnableExample implements Runnable{
    @Override
    public void run() {
        for(int i=0; i<5; i++){
            System.out.println("Thread " + Thread.currentThread().getName() + ", i: " + i);
        }
    }
}

public class runnableInterface {
    public static void main(String[] args) {
        System.out.println("Soham Kothari");
        Thread t1 = new Thread(new runnableExample());
        Thread t2 = new Thread(new runnableExample());
        t1.start();
        t2.start();
    }
}
