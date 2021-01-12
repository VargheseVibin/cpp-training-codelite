#include <iostream>
#include "Mystring.h"

using namespace std;

int main() {
    cout << "Hello There!" << endl;
    
//    Mystring a;
//    Mystring b("Vibin");
//    Mystring c(b) ; 
//    Mystring d{Mystring("Febin")};
//    a=Mystring("DAVID");
//    a.display();
//    b=-a ; 
//    b.display() ; 

    cout << boolalpha << endl;
    Mystring a {"frank"};
    Mystring b {"frank"};
    cout << (a==b) << endl;             // true
    cout << (a!=b) << endl;             // false
    
    b = "george";
    cout << (a==b) << endl;             // false
    cout << (a!=b) << endl;             // true
    cout << (a<b) << endl;              // true
    cout << (a>b) << endl;              // false
    Mystring s1 {"FRANK"};
    s1 = -s1;       
    cout << s1 << endl;                 // frank              

    s1 = s1 + "*****";
    cout << s1 << endl;                 // frank*****       
//    
//    s1 += "-----";                      // frank*****-----
//    cout << s1 << endl;
    
    return 0;
}