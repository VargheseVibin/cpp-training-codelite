#include <iostream>
#include <string>

using namespace std;

class Player {
private:
    std::string name;
    int health ;
    int xp ;
public:
    std::string getName() const  { return name ; }
    void setName(std::string nameVal) { name=nameVal ;}
    Player();
    Player(std::string n);
    Player(std::string n, int h, int x);
};

Player::Player() 
    :Player("None",0,0){
        cout << "No args constructor called!"  << endl ;
}

Player::Player(std::string n) 
    :Player(n,0,0) {
    cout << "1 Arg constructor called!" << endl;
}
Player::Player(std::string n, int h, int x) 
    :name{n},health{h},xp{x} {
    cout << "3 ags constructor invoked" << endl; 
}

std::string displayPlayer(const Player &p) {
    return p.getName()  ;
}


int main() {
    
    const Player villian=Player("Villian",100,55);
    Player hero=Player("Hero",100,15);
    cout << "Player name for Villian:" << displayPlayer(villian) << endl ; 
    cout << "Player name for Hero:" << displayPlayer(hero) << endl ; 
    
    return 0;
}