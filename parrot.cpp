#include <iostream>
#include <string>

using namespace std;

class Parrot {
private:
    string phrase;

public:
    // Constructor
    Parrot(){
        phrase = "Hello";
    }

    // Method
    void say(){
        cout << phrase << endl;
    }
};

int main(){
    Parrot p;
    p.say();
    return 0;
}
