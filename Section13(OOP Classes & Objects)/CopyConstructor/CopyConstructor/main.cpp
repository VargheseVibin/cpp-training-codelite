#include <iostream>
#include <string>


using namespace std;

class Player {
private:
    std::string name; 
    int health; 
    int xp;
public:
    Player(std::string name="None", int health_val=0, int xp_val=0);
    std::string getName() {return name ;}
    int getXp() {return xp ;}
    int getHealth() {return health; }
    // Copy Constructor ProtoType
    Player(const Player &source);
    //Destrcutor
    ~Player() {
        cout << "Descrtuctor called for " << name << endl ; 
    }
};


Player::Player (std::string n, int h_val, int xp_val) 
    :name{n},
    health{h_val},
    xp{xp_val}  {
        cout <<  "All Args Constructor for:" + name << endl ; 
    }
    
Player::Player(const Player &source)
    :name{source.name},health{source.health},xp{source.xp} 
//    :Player::Player(source.name,source.health,source.xp) //Optinally use Constructor Delegation, rather than the explicit inits. 
        {
        cout << "Copy Constructor executed using source:" << source.name << endl ; 
    }

void displayPlayer(Player p) {
   cout << "Player Name:"  << p.getName() << endl ; 
   cout << "Player Health:" << p.getHealth() << endl;
   cout << "Player XP:" << p.getXp() << endl;
}


int main() {
    Player empty;
    displayPlayer(empty);
    Player vibin {"Vibin"};
    Player hero ("Hero",100);
    Player villian {"Villian",100,55};
    
    cout << "XP for player " << empty.getName() << " is :" << empty.getXp() << endl ; 
    cout << "XP for player " << vibin.getName() << " is :" << vibin.getXp() << endl ; 
    cout << "XP for player " << hero.getName() << " is :" << hero.getXp() << endl ; 
    cout << "XP for player " << villian.getName() << " is :" << villian.getXp() << endl ; 

    return 0;
}