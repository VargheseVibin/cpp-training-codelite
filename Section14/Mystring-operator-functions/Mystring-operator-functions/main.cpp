#include <iostream>
#include "Mystring.h"

using namespace std;

int main() {
    cout << "Hello There!" << endl;
    
    Mystring larry("Larry");
    larry.display();
    
    larry=-larry;
    larry.display() ; 
    
    cout << boolalpha  ; 
    Mystring moe("Moe") ; 
    Mystring stooge=larry ; 
    stooge.display() ; 
    
    cout << "(larry==moe):" << (larry==moe) << endl ; 
    cout << "(larry==stooge):" << (larry==stooge) << endl ; 
    
    Mystring stooges="Larry"+moe ; 
    stooges.display() ; 
    Mystring threeStooges=moe+" "+larry+" "+"Curly";
    threeStooges.display() ; 
    return 0;
}