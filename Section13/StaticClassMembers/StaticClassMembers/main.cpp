#include <iostream>
#include "Player.h"

using namespace std;

void displayActivePlayers() {
    cout << "Active Players Count:" << Player::getNumPlayers() << endl ; 
}

int main() {
    displayActivePlayers() ; 
    Player vibin=Player("Vibin",100,15);
    {
        Player nemesis=Player("Nemesis");
        displayActivePlayers();
    }
    
    displayActivePlayers();
    Player *enemy= new Player("Enemy",100,55);
    displayActivePlayers();
    delete enemy;
    
    return 0;
}