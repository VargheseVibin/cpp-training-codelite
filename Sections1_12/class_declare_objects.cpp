#include <iostream>
#include <string>
#include <vector>

using namespace std ;

class Player {
    //attributes
    string name;
    int health;
    int xp;
    //methods
    void talk(string);
    bool is_dead();
};

int main() {
    Player vibin;
    Player hero;
    Player myplayer [] {vibin,hero} ;
    vector <Player> myPlayerVec {vibin};
    myPlayerVec.push_back(hero);
    Player *febin {nullptr} ;
    febin=new Player;
    delete febin;
    return 0;
}