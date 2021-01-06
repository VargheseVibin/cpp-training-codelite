#include <iostream>

using namespace std ;

int main () {
    const double eurToUsd {1.19} ;
    cout << "Welcome to EUR to USD Converter" << endl ; 
    cout << "Enter value in EUR : " << endl ;

    double eur {0.0};
    double dollars {0.0};
    cin >> eur ;

    dollars=eur*eurToUsd;
    cout << eur << " euros equivalent in USD is " << dollars << " dollars" << endl ; 
    


    return 0 ; 
}