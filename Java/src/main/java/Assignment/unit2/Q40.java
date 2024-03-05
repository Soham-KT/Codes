package Assignment.unit2;

import java.util.Scanner;

public class Q40 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        Employee q1 = new Employee();
        Employee q2 = new Employee();

        System.out.print("Enter first name of emp 1: ");
        q1.name = scanner.next();
        System.out.print("Enter last name of emp 1: ");
        q1.l_name = scanner.next();
        System.out.print("Enter salary of emp 1: ");
        q1.salary = scanner.nextInt();

        System.out.print("Enter first name of emp 2: ");
        q2.name = scanner.next();
        System.out.print("Enter last name of emp 2: ");
        q2.l_name = scanner.next();
        System.out.print("Enter salary of emp 2: ");
        q2.salary = scanner.nextInt();

        System.out.println("Name of employee 1: " + q1.name + " " + q1.l_name + ", Salary: " + q1.salary + ", new salary: " + (q1.salary + q1.salary * 0.1));
        System.out.println("Name of employee 2: " + q2.name + " " + q2.l_name + ", Salary: " + q2.salary + ", new salary: " + (q2.salary + q2.salary * 0.1));
    }
}
