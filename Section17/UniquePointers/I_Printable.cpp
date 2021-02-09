#include "I_Printable.h"
#include <iostream>

I_Printable::I_Printable()
{
}

I_Printable::~I_Printable()
{
}


std::ostream& operator<<(std::ostream& os, I_Printable& ip) {
    ip.print(os);
    return os ; 
}
