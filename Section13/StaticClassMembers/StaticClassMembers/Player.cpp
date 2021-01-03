#include "Player.h"
#include <string>
#include <iostream>


using namespace std ; 

int Player::numPlayers {0} ; 

Player::Player(std::string n, int h, int x)
    :name{n},health{h},xp{x}    {
        ++numPlayers;
        cout << "Constructor called for player:" << name << endl ; 
}

Player::Player(std::string n) 
    :Player(n,0,0) {
    cout << "One-arg constructor called for player:" << name << endl ; 
}

Player::Player(const Player &p) 
    :Player(p.name, p.health, p.xp) {
        cout << "Copy Constructor called for player:" << p.name << endl ; 
}

Player::~Player() {
    --numPlayers;
    cout << "Destructor called for player:" << name << endl; 
}

int Player::getNumPlayers() {
    return numPlayers;
}

