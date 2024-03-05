package Assignment.unit2;

import java.util.Scanner;

class vehicle{
    int vehicle_number, insurance_number;
    double consumption;
    String colour;

    vehicle(int v_no, int ins_no, String col){
        vehicle_number = v_no;
        insurance_number = ins_no;
        colour = col;
    }

    void setConsumption(double consumption){ this.consumption = consumption; }
    void displayConsumption(){ System.out.println("Consumption: " + consumption); }
}

class twoWheeler extends vehicle{
    twoWheeler(int v_no, int ins_no, String col) {
        super(v_no, ins_no, col);
    }

    void maintenance(){
        System.out.println("Vehicle Number: " + super.vehicle_number);
        System.out.println("Insurance Number: " + super.insurance_number);
        System.out.println("Vehicle Colour: " + super.colour);
    }

    void average(float dist, float fuel){ System.out.println("Average of vehicle: " + (dist / fuel)); }
}

class fourWheeler extends vehicle{
    fourWheeler(int v_no, int ins_no, String col) {
        super(v_no, ins_no, col);
    }

    void maintenance(){
        System.out.println("Vehicle Number: " + super.vehicle_number);
        System.out.println("Insurance Number: " + super.insurance_number);
        System.out.println("Vehicle Colour: " + super.colour);
    }

    void average(float dist, float fuel){ System.out.println("Average of vehicle: " + (dist / fuel)); }
}

public class Q51 {
    public static void main(String[] args){
        Scanner scanner = new Scanner(System.in);
        // code the main if necessary
    }
}
