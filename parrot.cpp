#include <iostream>

using namespace std;

class Parrot {
private:
    string phrase;

public:
    // Constructor
    Parrot(string init_phrase){
        phrase = init_phrase;
    }

    // Method
    void say(){
        cout << phrase << endl;
    }
};

int main(){
    Parrot p("Hello!");
    p.say();
    return 0;
}
