#include <iostream>
#include "Mystring.h"

using namespace std;

int main() {
    Mystring empty ;
    Mystring myname {"Vibin"} ;
    Mystring stooge {myname} ;
    std::cout << "Str:" << empty.getStr() << "\tLength:" << empty.getLength() << std::endl ;
    std::cout << "Str:" << myname.getStr() << "\tLength:" << myname.getLength() << std::endl ;
    std::cout << "Str:" << stooge.getStr() << "\tLength:" << stooge.getLength() << std::endl ;
    empty.display();
    myname.display();
    stooge.display();
    
    return 0;
}