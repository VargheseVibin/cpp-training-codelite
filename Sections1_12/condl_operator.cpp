#include <iostream>

using namespace std ; 


int main() { 
    int num {};
    cout << "Enter a number to be checked for odd or even" << endl ; 
    cin >> num ;

    cout << "The number " << num << " is " << ((num%2==0)? "Even":"Odd") ;
    return 0 ;

}
