#include <iostream>

using namespace std ; 

int main () { 
    enum Direction {
        left, right, up, down
    };
    Direction heading {left};

    switch (heading) {
        case left:
            cout << "Going Left" << endl ; 
            break ; 
        case right:
            cout << "Going Right" << endl ; 
            break; 
        default:
            cout << "GOing Up or Down!";
            break ; 
    }

    return 0 ;
}