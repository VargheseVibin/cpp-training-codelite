#include <iostream>
#include <string>

using namespace std ;

class Player {
private:
    //attributes
    string name {"Default Player"};
    int health ;
    int xp ;
public:
    //methods
    void talk(string textToSay) {
        cout << name << " says :" << textToSay ;
    }
    bool isDead() ;

};

int main() {
    Player vibin ;
    // vibin.name="Vibin Varghese";   //Compiler Error
    // vibin.health = 100 ; //Compiler Error 
    // cout << "My Health:" << vibin.health ;  //Compiler Error 
    vibin.talk("Hello There!");
    return 0;
}