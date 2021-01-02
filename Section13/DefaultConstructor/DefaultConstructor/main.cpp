#include <iostream>
#include <string>


using namespace std;

class Player {
private:
    std::string name; 
    int health; 
    int xp;
public:
    void setName (std::string n) { name=n; }
    std::string getName () { return name; }
    Player() {
        name="None";
        health=100;
        xp=0;
    }
    Player (std::string n, int h_val, int xp_val) {
        name=n;
        health=h_val;
        xp=xp_val;
    }
};
int main() {
    Player vibin("Vibin",98,52) ;
    vibin.setName("Vibin");
    Player hero;
    cout << "Player Name:" << vibin.getName() << endl ; 
    cout << "Player Name:" << hero.getName() << endl ; 
    
    
    return 0;
}