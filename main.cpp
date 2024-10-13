#include <iostream>
#include <string>

using namespace std;

class Car{
    //attributes
    string make;
    string model;
    int year;
    int currentYear;
    // Constructor
public:
    Car(string x, string y, int z, int c){
        make = x;
        model = y;
        year = z;
        currentYear = c;
    }
    // Method to display car information
    void displayInfo() {
        cout << make << " " << model << " " << year << endl;
    };
    int getCarAge(){
        return currentYear - year;
    }
    bool isSameCar(Car otherCar){
        return (make == otherCar.make && model == otherCar.model && year == otherCar.year);
    }
};

int main() {
    // Create a Car object
    Car car1("Toyota","Prius",2015,2024);
    Car car2("Toyota","Prius",2015,2024);
    // Display car details
    car1.displayInfo();
    cout << car1.getCarAge() << endl;
    cout << car2.getCarAge() << endl;
    if (car1.isSameCar(car2)) {
        cout << "The same";
    } else {
        cout << "Different";
    }
    return 0;
}
