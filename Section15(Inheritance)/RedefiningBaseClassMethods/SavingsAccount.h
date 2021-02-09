#ifndef _SAVINGS_ACCOUNT_H_
#define _SAVINGS_ACCOUNT_H_
#include <iostream>
#include "Account.h"

class SavingsAccount :public Account
{
friend std::ostream& operator<<(std::ostream& os, SavingsAccount& sa) ; 

protected:
    double intRate ; 
public:
    SavingsAccount();
    SavingsAccount(double balance, double intRate);
    void deposit(double a) ; 
    //Withdraw inhertied from Account
    ~SavingsAccount();

};

#endif // _SAVINGS_ACCOUNT_H_
