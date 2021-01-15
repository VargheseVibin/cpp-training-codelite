#include <iostream>
#include "Mystring.h"

using namespace std;

int main() {
    cout << "Hello There!" << endl;
    
    Mystring a;
    Mystring b("Vibin");
    Mystring c{b} ; 
    Mystring d(Mystring("Febin"));
    d.display();
    a=Mystring("DAVID");
    a.display();
//    b=-a ; 
//    b.display() ; 

    return 0;
}