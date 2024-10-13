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
    void say(int times){
        for (int i = 0; i<times; ++i){
            cout << phrase << endl;
        }
    }

    void setPhrase(string new_phrase){
        phrase = new_phrase;
    }
};

int main(){
    Parrot p("Hello!");
    p.say(1);

    p.setPhrase("Good morning");
    p.say(2);
    return 0;
}
