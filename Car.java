public class Car {
    // Attributes
    String make;
    String model;
    int year;
    // Constructor
    Car(String x,String y,int z){
        make=x;
        model=y;
        year=z;
    }
    // Method to display car information
    void displayInfo(){
        System.out.println(make+" "+model+" "+year);
    }


public static void main(String[] args) {
    // Create a Car object
    Car car1 = new Car("Toyota","Prius",2015);
    // Display car details
    car1.displayInfo();
}
}
