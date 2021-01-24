#ifndef _SAVINGS_ACCOUNT_H_
#define _SAVINGS_ACCOUNT_H_
#include "Account.h"

class SavingsAccount: public Account
{
public:
    SavingsAccount();
    ~SavingsAccount();
    void withdraw(double amount);
    void deposit(double amount) ; 

};

#endif // _SAVINGS_ACCOUNT_H_
