#include <iostream>

using namespace std;

int main () {
    int num {0};
    do {
        cout << "Enter a number less than 100:"  ;
        cin >> num ; 
    } while(num > 100) ;
}