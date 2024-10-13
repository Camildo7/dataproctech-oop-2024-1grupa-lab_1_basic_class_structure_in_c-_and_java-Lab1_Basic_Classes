public class Car {
    // Attributes
    String make;
    String model;
    int year;
    int currentYear;
    // Constructor
    Car(String x,String y,int z, int c){
        make=x;
        model=y;
        year=z;
        currentYear = c;
    }
    // Method to display car information
    void displayInfo(){
        System.out.println(make+" "+model+" "+year);
    }
    int getCarAge(){
        return currentYear - year;
    }
    boolean isSameCar(Car otherCar){
        return this.make.equals(otherCar.make) && this.model.equals(otherCar.model) && this.year == otherCar.year;
    }


public static void main(String[] args) {
    // Create a Car object
    Car car1 = new Car("Toyota","Prius",2015,2024);
    Car car2 = new Car("Toyota","Prius",2015,2024);
    // Display car details
    car1.displayInfo();
    car2.displayInfo();
    System.out.println(car1.getCarAge());
    System.out.println(car2.getCarAge());
    if (car1.isSameCar(car2)) {
        System.out.println("The same");
    } else{
        System.out.println("Different");
    }
}
}
