#include <iostream>
#include <string>


using namespace std;

class Player {
private:
    std::string name; 
    int health; 
    int xp;
public:
    //Overloaded Constructors
    Player();
    Player(std::string);
    Player(std::string, int health_val, int xp_val);
};

Player::Player() 
    :name {"None"},health{0},xp{0}  {
}

Player::Player (std::string n) 
    :name{n},health{100},xp{0} {
}

Player::Player (std::string n, int h_val, int xp_val) 
    :name{n},health{h_val},xp{xp_val} {
}


int main() {
    Player empty;
    Player vibin {"Vibin"};
    Player villian {"Villian",100,55};

    return 0;
}