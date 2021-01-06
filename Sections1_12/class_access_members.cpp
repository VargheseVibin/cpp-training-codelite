#include <iostream>
#include <vector>
#include <string>

using namespace std ;

class Player {
public:
    //attributes
    string name;
    int health;
    int xp ;

    //methods
    void talk(string textToSay) {
        cout << name << " says :" << textToSay << endl ; 
    }
    bool is_dead();
};

class Account {
public: 
    //attributes
    string name;
    long double balance ;

    //methods
    bool deposit(double amt) {
        balance+=amt;
        cout << "Balance in account of " << name << " after DEP is:" << balance << endl;
        return true;
    }
    bool withdraw(double amt) {
        balance-=amt;
        cout << "Balance in account of " << name << " after WDR is:" << balance << endl;
        return true;
    }
};


int main () {
    Player vibin;
    vibin.name="Vibin Varghese";
    vibin.health=84;
    vibin.xp=20;
    vibin.talk("Hi There!");

    Player *febin =new Player;
    (*febin).name="Febin Varghese";
    (*febin).health=90;
    (*febin).xp=19;
    febin->talk("Hi, Canada!");

    Account acc_febin ;
    acc_febin.name="Febin V Varghese";
    acc_febin.balance=101000.52;

    Account *acc_vibin=new Account;
    (*acc_vibin).name="Vibin V Varghese";
    (*acc_vibin).balance=52130.25;

    if (acc_febin.deposit(10000)) 
        cout << "deposit Successful\n";
    if (acc_febin.withdraw(8000))
        cout << "withdraw Successful\n";


    if (acc_vibin->deposit(2000))
        cout << "deposit Successful\n";
    if((*acc_vibin).withdraw(600))
        cout << "withdraw Successful\n";


    return 0 ;

}