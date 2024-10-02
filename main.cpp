// include the necessary libraries

#include <stdio.h>
#include <string>
#include <iostream>

using namespace std;

class Car {
    public:
    //attributes
    string make;
    string model;
    int year;
    // Constructor
    Car(string x, string y, int z){
        make = x;
        model = y;
        year = z;
    };
    // Method to display car information
    void displayInfo(){
        cout << make << " " << model << " " << year;
    }
};

int main() {
    // Create a Car object
    Car car1("Toyota","Prius",2020);
    // Display car details
    car1.displayInfo();
    return 0;
}

