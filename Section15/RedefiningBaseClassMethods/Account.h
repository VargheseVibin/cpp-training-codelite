#ifndef _ACCOUNT_H_
#define _ACCOUNT_H_
#include <iostream> 

class Account
{

friend std::ostream& operator<<(std::ostream& os, const Account &a) ;
protected:
    double balance ; 
public:
    Account();
    Account(double b);
    void deposit(double a);
    void withdraw(double a);
    ~Account();

};

#endif // _ACCOUNT_H_
