#include <iostream>
#include "Mystring.h"

using namespace std;

int main() {
    Mystring empty ;
    Mystring myname {"Vibin"} ;
    Mystring stooge {myname} ;
    std::cout << "Str:" << empty.getStr() << "\tLength:" << empty.getLengthStr() << std::endl ;
    std::cout << "Str:" << myname.getStr() << "\tLength:" << myname.getLengthStr() << std::endl ;
    std::cout << "Str:" << stooge.getStr() << "\tLength:" << stooge.getLengthStr() << std::endl ;
    empty.displayStr();
    myname.displayStr();
    stooge.displayStr();
    
    return 0;
}