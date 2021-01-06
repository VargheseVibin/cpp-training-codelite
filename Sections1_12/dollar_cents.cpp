#include <iostream>

/*
1 Dollar is 100 cents
1 Quarter is 25 cents
1 Dime is 10 cents
1 Nickel is 5 cents
1 Penny is 1 cent.

*/
using namespace std; 

int main () {

    
    cout << "Enter the number of cents you've in hand.."  ;
    int noCents {0};
    cin >> noCents ; 

    int noDollar {0};
    int noQuarter {0};
    int noDime {0};
    int noNickel {0};
    int noPenny {0};

    const int dollarToCents {100};
    const int quarterToCents {25};
    const int dimeToCents {10};
    const int nickelToCents {5};
    const int pennyToCent {1};

    int leftOverCents {0};

    leftOverCents=noCents;

    noDollar=leftOverCents/dollarToCents;
    leftOverCents%=dollarToCents;

    noQuarter=leftOverCents/quarterToCents;
    leftOverCents%=quarterToCents;

    noDime=leftOverCents/dimeToCents;
    leftOverCents%=dimeToCents;

    noNickel=leftOverCents/nickelToCents;
    leftOverCents%=nickelToCents;

    noPenny=leftOverCents/pennyToCent;
    leftOverCents%=pennyToCent;

    cout << "You've deposited " << noCents << " cents" << endl ; 
    cout << "and that works out to be.... " << endl; 
    cout << "Dollars......"  << noDollar << endl ;
    cout << "Quarters....."  << noQuarter << endl ;
    cout << "Dimes........"  << noDime << endl ;
    cout << "Nickels......"  << noNickel << endl ;
    cout << "Pennies......"  << noPenny << endl;

    return 0;

}