package Assignment.unit3;

import java.util.LinkedList;

public class Q77 {
    public static class producerConsumer{
        LinkedList<Integer> buffer = new LinkedList<>();
        int max_size = 2;

        public void producer() throws InterruptedException {
            int val = 0;
            while(true) {
                synchronized (this) {
                    while(buffer.size() == max_size) wait();
                    System.out.println("Producer produced: " + val);
                    buffer.add(val++);
                    notify();
                    Thread.sleep(1000);
                }
            }
        }
        public void consumer() throws InterruptedException {
            while(true) {
                synchronized (this) {
                    while(buffer.isEmpty()) wait();
                    int val = buffer.removeFirst();
                    System.out.println("Consumer consumed: " + val);
                    notify();
                    Thread.sleep(1000);
                }
            }
        }
    }

    public static void main(String[] args) throws InterruptedException {
        final producerConsumer pc = new producerConsumer();
        Thread thread1 = new Thread(new Runnable() {
            @Override
            public void run() {
                try {
                    pc.producer();
                } catch (InterruptedException e) { System.out.println(e); }
            }
        });
        Thread thread2 = new Thread(new Runnable() {
            @Override
            public void run() {
                try{
                    pc.consumer();
                } catch (InterruptedException e) { System.out.println(e); }
            }
        });

        thread1.start();
        thread2.start();

        thread1.join();
        thread2.join();
    }
}
