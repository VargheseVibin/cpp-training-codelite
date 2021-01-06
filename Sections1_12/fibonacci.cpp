#include <iostream>

using namespace std ;

unsigned long fibonacci (unsigned int num) ;

unsigned long fibonacci (unsigned int num) {
    if (num == 0 )
        return 0;
    else if (num==1)
        return 1;
    else
        return fibonacci(num-1)+fibonacci(num-2);
    }


int main () {
    int num {45};
    cout << "Fibonacci value for number " << num << " is " << fibonacci(num)  << endl ; 
    return 0;
}