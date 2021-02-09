#include <iostream>
#include "Mystring.h"

using namespace std;

int main() {
    cout << "Hello There!" << endl;
    
    Mystring larry("Larry") ; 
    Mystring moe("Moe") ; 
    Mystring curly ; 
    
    cout << "Enter the third stooge's first name:" ; 
    cin >> curly ; 
    
    cout << "The  stooges are " << larry << "," << moe << " and " << curly << endl ; 
    
    cout << "\nEnter the 3 stooges' names separated by a space:" ;
    cin >> larry >> moe >> curly ; 
    
    cout << "The  stooges are " << larry << "," << moe << " and " << curly << endl ; 
    
    
    
    return 0;
}