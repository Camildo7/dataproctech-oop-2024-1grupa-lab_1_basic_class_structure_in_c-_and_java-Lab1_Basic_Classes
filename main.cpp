#include <iostream>
#include <string>

using namespace std;

class Car{
    //attributes
    string make;
    string model;
    int year;
    // Constructor
public:
    Car(string x, string y, int z){
        make = x;
        model = y;
        year = z;
    }
    // Method to display car information
    void displayInfo() {
        cout << make << " " << model << " " << year << endl;
    };
};

int main() {
    // Create a Car object
    Car car1("Toyota","Prius",2015);
    // Display car details
    car1.displayInfo();
    return 0;
}
