package AdvJava.MultiThreading;

public class DaemonThreadExample extends Thread{

    public void run(){

        if(Thread.currentThread().isDaemon()){
            System.out.println("Daemon thread");
        }
        else{
            System.out.println("user thread");
        }
    }
    public static void main(String[] args){
        System.out.println("Soham Kothari");
        DaemonThreadExample t1=new DaemonThreadExample();
        DaemonThreadExample t2=new DaemonThreadExample();

        t1.setDaemon(true);

        t1.start();
        t2.start();
    }
}
