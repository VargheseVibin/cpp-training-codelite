#include <iostream>

using namespace std;

int main() {
//    char middleInitial {'V'};
//    cout << "My middle initial is " << middleInitial << endl ; 


    unsigned short int examScore {65} ; 
    cout << "MY exam score is " << examScore << endl ;

    long indiaPop {1'300'000'000} ; 
    cout << "Poplulation of India is " << indiaPop << endl ;     
    
    long long worldPop {7'600'000'000} ; 
    cout << "Poplulation of World is " << worldPop << endl ; 
    
    bool gameOver {true};
    cout << "The value of GameOver is " << gameOver << endl ;
    
    short val1 {30000};
    short val2 {1000};
    short int val3 {val1*val2};
//    int val3 {val1*val2};
    
    cout << "The product of " << val1 << " and " << val2 << " is ..:" << val3 << endl ; 
} 