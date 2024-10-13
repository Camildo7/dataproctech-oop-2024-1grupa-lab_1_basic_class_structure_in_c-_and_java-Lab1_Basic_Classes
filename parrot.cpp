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

    void setPhrase(string new_phrase){
        phrase = new_phrase;
    }
};

int main(){
    Parrot p("Hello!");
    p.say();

    p.setPhrase("Good morning");
    p.say();
    return 0;
}
