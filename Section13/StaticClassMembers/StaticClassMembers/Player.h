#ifndef _PLAYER_H_
#define _PLAYER_H_
#include <string>

class Player
{
private:
    std::string name ; 
    int health ;
    int xp ;
    static int numPlayers  ;
public:
    std::string getName() { return name ;}
    int getHealth() { return health ;}
    int getXp() { return xp ;}
    //Constructors
    Player(std::string n, int h, int x);
    Player(std::string n);
    //Copy Constructor
    Player(const Player &p);
    //Destrcutor
    ~Player();
    
    static int getNumPlayers(); 
};


#endif // _PLAYER_H_
