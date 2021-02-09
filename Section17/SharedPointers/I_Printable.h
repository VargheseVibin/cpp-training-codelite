#ifndef _I_PRINTABLE_H_
#define _I_PRINTABLE_H_
#include <iostream>

class I_Printable
{
    friend std::ostream& operator<<(std::ostream& os, I_Printable& ip);
public:
    virtual void print(std::ostream& os) const=0 ; 
    I_Printable();
    ~I_Printable();

};

#endif // _I_PRINTABLE_H_
