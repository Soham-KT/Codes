package Assignment.unit2;

import java.util.Scanner;

class Account{
    Scanner scanner = new Scanner(System.in);
    double balance;

    Account(double bal){
        if(bal > 0.0){
            balance = bal;
        }
        else{
            while(true){
                System.out.print("Enter balance: ");
                balance = scanner.nextDouble();
                if(balance > 0.0){
                    break;
                }
                else{
                    System.out.println("Enter initial balance greater than 0.0");
                }
            }
        }
    }

    void display(){
        System.out.println("Account balance: " + balance);
    }

    void credit(double bal) { balance = bal; }

    double getBalance() { return balance; }
}

class AccountTest{
    Account obj;

    void setObj(double bal) { obj = new Account(bal); }
    void credit(double bal) { obj.balance = bal; }
    double getObj() { return obj.balance; }

    void debit(double score){
        if(obj.balance - score >= 0){
            obj.balance -= score;
            System.out.println("Debited amount: " + score);
            System.out.println("Current Balance: " + obj.balance);
        }
        else{
            System.out.println("Debit amount exceeded account balance");
        }
    }
}

public class Q41ToQ44 {
    public static void main(String[] args) {
        Account acc = new Account(100.0);
        acc.display();
        acc.credit(100000);
        System.out.println("New salary: " + acc.getBalance());
    }
}
