package Assignment.unit2;

class HourlyEmployee extends ContractEmployee{
    private int hours, wages_per_hour;
    HourlyEmployee(String fname, String lname, String dep, String des, int sal, int hrs, int wage) {
        super(fname, lname, dep, des, sal);
        this.hours = hrs;
        this.wages_per_hour = wage;
    }

    int calculateWagesPerHour(){
        super.salary = hours * wages_per_hour;
        return super.salary;
    }

    @Override
    public String getDesignation() { return super.getDesignation(); }
}

class WeeklyEmployee extends ContractEmployee{
    private int hours, wages_per_hour;
    WeeklyEmployee(String fname, String lname, String dep, String des, int sal, int hrs, int wage) {
        super(fname, lname, dep, des, sal);
        this.hours = hrs;
        this.wages_per_hour = wage;
    }

    int calculateWagesPerHour(){
        super.salary = hours * wages_per_hour;
        return super.salary;
    }

    @Override
    public String getDesignation() { return super.getDesignation(); }
}

public class Q50 {
    public static void main(String[] args) {
        HourlyEmployee hr = new HourlyEmployee("Soham", "Kothari", "IT","Std", 10000, 400, 200);
        System.out.println("Deparment name: " + hr.getDesignation() + ", Salary: " + hr.calculateWagesPerHour());

        WeeklyEmployee we = new WeeklyEmployee("Soham", "Kothari", "IT","pirate", 10000, 400, 200);
        System.out.println("Deparment name: " + we.getDesignation() + ", Salary: " + we.calculateWagesPerHour());

    }
}
