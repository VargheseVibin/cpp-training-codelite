#include <iostream>
#include "Mystring.h"

using namespace std;

int main() {
    cout << "Hello There!" << endl;
    
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
    s1.display();                 // frank
}