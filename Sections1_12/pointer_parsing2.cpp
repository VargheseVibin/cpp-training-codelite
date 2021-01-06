#include <iostream>

using namespace std ;

void swapNumbers(int *a, int *b) {
    int c {*a};
    *a=*b;
    *b=c;

}

int main () {
    int a {100} ;
    int b {200} ;
    cout << "a=" << a << "; b=" << b << endl ; 
    swapNumbers(&a,&b);
    cout << "a=" << a << "; b=" << b << endl ; 
    return 0;
}