#include <iostream>
#include <string>

using namespace std;

class Player {
private:
    std::string name ;
    int health;
    int xp;
    
public:
    void setName (std::string n) {
        name=n;
    }
    
    Player() {
        cout << "No args constructor called" << endl ; 
    }
    
    Player(std::string n) {
        cout << "String arg constructor called!" << endl;
    }
    
    Player(std::string n,int h,int x) {
        cout << "Three args constrctor called!" << endl ;
    }
    
    ~Player() {
        cout << "Destructor called for " << name << endl ; 
    }
};

int main() {
    {
        Player slayer ;
        slayer.setName("Slayer");
    }
    
    {
        Player vibin;
        vibin.setName("Vibin");
        Player hero;
        hero.setName("Hero");
        Player villian("Villian",100,12) ; 
        villian.setName("Villain");
        
    }
    
    Player *enemy = new Player ;  
    (*enemy).setName("Enemy") ; 
    
    Player *level_boss = new Player("Level Boss",1000,300);
    level_boss->setName("Level Boss");
    
    delete enemy;
    delete level_boss;
    return 0;
}