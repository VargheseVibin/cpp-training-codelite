#include <iostream>
#include "Mystring.h"

using namespace std;

int main() {
    cout << "Hello There!" << endl;
//    cout << boolapha << endl ; 
    
    Mystring larry("Larry");
    Mystring moe("Moe") ; 
    
    Mystring stooge=larry;
//    Mystring stooge=larry;
//    Mystring stooge{larry};
//    Mystring stooge("Larry");
    larry.display() ; 
    moe.display(); 
    
    cout << "larry==moe:" << (larry==moe) << endl ; 
    cout << "larry==stooge:" << (larry==stooge) << endl ; 
    
    larry.display();
    Mystring larry2=-larry;    //larry.operattor-() ;
    larry2.display() ; 
    
    Mystring stooges=larry+"Moe";       //ok with member function
//    Mystring stooges="Larry"+moe        //Compiler error - LHS of the operator not a Mysting obj
    
    Mystring twoStooges=moe+" "+"Larry";
    twoStooges.display();
    
    Mystring threeStooges=moe + " " + larry + " " + "Curly" ;
    threeStooges.display() ; 
    
    
    return 0;
}