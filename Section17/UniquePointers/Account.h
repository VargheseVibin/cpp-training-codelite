#ifndef _ACCOUNT_H_
#define _ACCOUNT_H_
#include <iostream>
#include <string>
#include "I_Printable.h"

class Account:public I_Printable
{
private:
    static constexpr char* defaultName="UnNamed Account";
    static constexpr double defaultBal=0.0;
protected:
    std::string accName ; 
    double accBalance ; 
public:
    Account(std::string n=defaultName,double b=defaultBal);
    virtual bool deposit(double a)= 0;
    virtual bool withdraw(double a) = 0;
    virtual void print(std::ostream& os) const = 0 ; 
    virtual ~Account();

};

#endif // _ACCOUNT_H_
