package Assignment.unit2;
import java.util.Scanner;

class Employee{
    Scanner sc = new Scanner(System.in);
    String name, l_name;
    double salary;

    void disp(){
        System.out.println("Name: " + name + " " + l_name);
        System.out.println("Salary: " + salary);
    }

    void entry(){
        System.out.print("Enter name: ");
        name = sc.next();
        System.out.print("Enter last name: ");
        l_name = sc.next();
        System.out.print("Enter salary: ");
        salary = sc.nextDouble();
    }

}
public class Q37 {
    public static void main(String[] args) {
        Employee emp = new Employee();
        emp.entry();
        emp.disp();
    }
}
