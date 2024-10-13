#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

class Parrot {
private:
    vector<string> phrases;

public:
    // Constructor
    Parrot(string init_phrase){
        phrases.push_back(init_phrase);
        srand(time(0));
    }

    void addPhrase(string new_phrase) {
        phrases.push_back(new_phrase);
    }


    // Method
    void say() {
        if (!phrases.empty()) {
            int randomIndex = rand() % phrases.size();
            cout << phrases[randomIndex] << endl;
        }
    }
};

int main(){
    Parrot p("Hello!");
    p.addPhrase("Good morning");
    p.addPhrase("How are you?");

    p.say();

    return 0;
}
