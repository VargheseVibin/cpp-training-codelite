#include <iostream>
#include "Mystring.h"

using namespace std;

int main() {
    Mystring a {"Hello"} ;         
    a=Mystring{"Hola"}    ;        
    a="Bonjour" ;
    cout  << "Mystring b=a ; here" << endl ; 
    Mystring b=a;
    b.display();
    
    return 0 ; 
}