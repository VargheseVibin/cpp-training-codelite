#include <iostream>
#include "Mystring.h"

using namespace std ; 


int main() {
    Mystring a {"Hello"} ;          //Overloaded Assignment Constructor
    Mystring b;                     //No Args Constructor
    a.display() ; 
    b.display() ; 
    b=a ;                           //Copy Assignment
                                    //b.operator=(a);
    b.display() ;
    b="This is a Test";             //b.operator=("This is a Test")
    b.display();
    
    return 0;
}