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
    
    std::string getName() {return name ;}
    int getXp() {return xp ;}
};

Player::Player() 
    :Player("None",0,0)  {
        cout <<  "No Args Constructor" << endl ; 
}

Player::Player (std::string n) 
    :Player(n,100,0) {
        cout <<  "String Arg Constructor" << endl ; 
}

Player::Player (std::string n, int h_val, int xp_val) 
    :name{n},health{h_val},xp{xp_val} {
        cout <<  "All Args Constructor" << endl ; 
}


int main() {
    Player empty;
    Player vibin {"Vibin"};
    Player villian {"Villian",100,55};
    
    cout << "XP for player " << empty.getName() << " is :" << empty.getXp() << endl ; 
    cout << "XP for player " << vibin.getName() << " is :" << vibin.getXp() << endl ; 
    cout << "XP for player " << villian.getName() << " is :" << villian.getXp() << endl ; 

    return 0;
}