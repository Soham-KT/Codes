package Assignment.unit2;

class Employee_49{
     private final String f_name, l_name;
     Employee_49(String fname, String lname){
         this.f_name = fname;
         this.l_name = lname;
     }

    String getF_name(){ return f_name; }
    String getL_name(){ return l_name; }
}

class ContractEmployee extends Employee_49{
    private final String dep_name, designation;
    int salary;
    ContractEmployee(String fname, String lname, String dep, String des, int salary){
        super(fname, lname);
        dep_name = dep;
        designation = des;
    }

    void displayFullName() {
        System.out.println("Name of employee: " + super.getF_name() + " " + super.getL_name());
    }

    public String getDep_name(){ return dep_name; }

    public String getDesignation(){ return designation; }
}

class RegularEmployee extends Employee_49{
    private final String dep_name, designation;
    int salary;
    RegularEmployee(String fname, String lname, String dep, String des, int salary){
        super(fname, lname);
        dep_name = dep;
        designation = des;
    }

    void displayFullName() {
        System.out.println("Name of employee: " + super.getF_name() + " " + super.getL_name());
    }

    public String getDep_name(){ return dep_name; }

    public String getDesignation(){ return designation; }
}

public class Q49 {
    public static void main(String[] args) {
        RegularEmployee reg = new RegularEmployee("Soham", "Kothari", "IT", "Std", 15000);
        reg.displayFullName();
        System.out.println("Department name: " + reg.getDep_name() + ", Designation: " + reg.getDesignation());

        ContractEmployee cont = new ContractEmployee("Akagami", "Shanks", "Yonko", "Pirate", 15000000);
        cont.displayFullName();
        System.out.println("Department name: " + cont.getDep_name() + ", Designation: " + cont.getDesignation());
    }
}
