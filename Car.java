public class Car {
    // Attributes
    String make;
    String model;
    int year;
    // Constructor
    public Car(String x, String y, int z){
        make = x;
        model = y;
        year = z;
    }
    // Method to display car information
    public void displayInfo(){
        System.out.println(make + " " + model + " " + year);
    }
    

    public static void main(String[] args) {
        // Create a Car object
        Car car1 = new Car("Toyota","Prius",2020);
        // Display car details
        car1.displayInfo();
    }
}
