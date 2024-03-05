package AdvJava.MultiThreading;

import java.util.concurrent.Semaphore;

public class DiningPhilosopher {

    static int philosopher = 8;
    static int chances = 20;
    static philosopher[] ph = new philosopher[philosopher];
    static chopstick[] ch = new chopstick[philosopher];

    static class chopstick {

        public Semaphore mutex = new Semaphore(1);

        void grab() {
            try {
                mutex.acquire();
            }
            catch (Exception e) {
                e.printStackTrace(System.out);
            }
        }

        void release() {
            mutex.release();
        }

        boolean isFree() {
            return mutex.availablePermits() > 0;
        }

    }

    static class philosopher extends Thread {

        public int number;
        public chopstick leftC;
        public chopstick rightC;

        philosopher(int num, chopstick left, chopstick right) {
            number = num;
            leftC = left;
            rightC = right;
        }

        public void run(){

            while (true) {
                leftC.grab();
                rightC.grab();
                eat();
                leftC.release();
                rightC.release();
            }
        }

        void eat() {
            try {
                int sleepTime = 1000;
                System.out.println("philosopher " + (number+1) + " eats for " + ((double)sleepTime/1000)+" sec");
                chances -=1;
                if(chances<=0){
                    System.exit(0);
                }
                Thread.sleep(sleepTime);
            }
            catch (Exception e) {
                System.out.println(e);
            }
        }

    }

    public static void main(String[] argv) {
        System.out.println("Soham Kothari");
        int no_of_philosophers =8;
        for (int i = 0; i < no_of_philosophers; i++){
            ch[i] = new chopstick();
        }
        for (int i = 0; i < no_of_philosophers; i++){
            if( i % 2 == 0)
                ph[i] = new philosopher(i, ch[(i + 1) % no_of_philosophers], ch[i] );
            else
                ph[i] = new philosopher(i, ch[i], ch[(i + 1) % no_of_philosophers] );

            ph[i].start();
        }
    }

}
