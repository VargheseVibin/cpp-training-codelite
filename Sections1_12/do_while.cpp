#include <iostream>
using namespace std;

int main () {
    char sel {};

    do {
            cout << "Welcome to the Menu of Options" << endl ; 
            cout << "==============================" << endl ; 
            cout << "1) Movies" << endl ;
            cout << "2) Series" << endl ;
            cout << "3) Sports" << endl ;
            cout << "4) News" << endl ;
            cout << "Q) Quit" << endl ;
            cout << endl ; 
            cout << "Your selection: " ;
            cin >> sel ;

            if (sel=='1') 
                cout << "You chose Movies.." << endl ;
            else if (sel=='2') 
                cout << "You chose Series.." << endl ;
            else if (sel=='3') 
                cout << "You chose Sports.." << endl ;
            else if (sel=='4') 
                cout << "You chose News.." << endl ;
            else if (sel=='q'||sel=='Q') 
                cout << "Thanks for using the App!.." << endl ;
            else 
                cout << " You chose an invalid Option, Try again please.. " << endl ;

    } while(sel != 'q' && sel !='Q') ;


    return 01; 
}