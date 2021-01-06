#include <iostream>
 
using namespace std ; 

int main ()  {
    int num {} ; 

    cout << "Enter a number and I'll compare it to 10 " << endl ; 
    cin >> num ; 

    if (num>10) {
        int diff {num-10};
        cout << "\n************IF S#1*******************************\n";
        cout << num << " is " << diff << " greater  than 10 " << endl ; 

    }
    else {
        int diff {10-num};
        cout << "\n************IF S#2*******************************\n";
        cout << num << " is " << diff << " less  than 10 " << endl ; 
    }
    return 0 ;
}