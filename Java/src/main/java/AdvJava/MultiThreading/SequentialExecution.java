package AdvJava.MultiThreading;

import java.util.concurrent.Semaphore;

public class SequentialExecution {
    static Semaphore LockClassB = new Semaphore(1);
    static Semaphore LockClassC = new Semaphore(1);

    static class A implements Runnable{
        @Override
        public void run() {
            try{
                for (int i = 0; i < 5; i++) {
                    System.out.println("Thread A: "+i);
                }
            } catch (Exception e) {
                throw new RuntimeException(e);
            }
            finally {
                LockClassB.release();
            }
        }
    }

    static class B implements Runnable{
        @Override
        public void run() {
            try{
                LockClassB.acquire();
                for (int i = 0; i < 5; i++) {
                    System.out.println("Thread B: "+i);
                }
            } catch (Exception e) {
                throw new RuntimeException(e);
            }
            finally {
                LockClassC.release();
            }
        }
    }

    static class C implements Runnable{
        @Override
        public void run() {
            try{
                LockClassC.acquire();
                for (int i = 0; i < 5; i++) {
                    System.out.println("Thread C: "+i);
                }
            } catch (Exception e) {
                throw new RuntimeException(e);
            }
        }
    }

    public static void main(String[] args) throws InterruptedException {
        System.out.println("Soham Kothari");
        LockClassB.acquire();
        LockClassC.acquire();
        A f = new A();
        Thread first = new Thread(f);
        B s = new B();
        Thread second = new Thread(s);
        C t = new C();
        Thread third = new Thread(t);
        first.start();
        second.start();
        third.start();
    }
}
