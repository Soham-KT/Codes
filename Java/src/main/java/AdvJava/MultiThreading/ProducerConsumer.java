package AdvJava.MultiThreading;

import java.util.ArrayList;
import java.util.List;
import java.util.concurrent.Semaphore;

public class ProducerConsumer {
    static Semaphore Lock = new Semaphore(1);
    static List<Integer> buffer = new ArrayList<>();
    static int productCount;

    public static class producer implements Runnable{

        int products;

        public producer(int products) {
            this.products = products;
            productCount += products;
        }

        @Override
        public void run() {
            try{
                while (products>0){
                    Lock.acquire();
                    buffer.add((int) (Math.random()*100));
                    System.out.println(Thread.currentThread().getName()+" Produced product: "+buffer.getLast());
                    products-=1;

                    Lock.release();
                    Thread.sleep(1000);
                }

            } catch (InterruptedException e) {
                throw new RuntimeException(e);
            }
        }
    }

    static class consumer implements Runnable{
        @Override
        public void run(){
            try{
                while (true){
                    if (buffer.isEmpty()) {
                        continue;
                    }
                    Lock.acquire();
                    System.out.println(Thread.currentThread().getName()+" Consumes product: "+buffer.getFirst());
                    buffer.removeFirst();
                    productCount--;
                    if(productCount <=0){
                        return;
                    }
                    Lock.release();
                    Thread.sleep(1000);
                }

            } catch (InterruptedException e) {
                throw new RuntimeException(e);
            }
        }
    }

    public static void main(String[] args) {
        System.out.println("Soham Kothari");
        producer product = new producer(5);
        Thread producer = new Thread(product);
        producer.setName("Producer");
        consumer consumption = new consumer();
        Thread consumer = new Thread(consumption);
        consumer.setName("Consumer");
        producer.start();
        consumer.start();

    }
}
