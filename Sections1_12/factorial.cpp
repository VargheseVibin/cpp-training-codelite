#include <iostream>

using namespace std ;

unsigned long long factorial (int num) ; 

unsigned long long factorial(int num) {
    if (num==0) 
        return 1;
    else 
        return num*factorial(num-1) ;
}

int main() {
    int num {75};
    cout << num << "!=" << factorial(num) ;
}