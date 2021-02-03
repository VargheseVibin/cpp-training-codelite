#ifndef _SAVINGS_ACCOUNT_H_
#define _SAVINGS_ACCOUNT_H_
#include <iostream>
#include "Account.h"

class SavingsAccount :public Account
{
friend std::ostream& operator<<(std::ostream& os, const SavingsAccount &s);
protected:
    double savingsAccInterestRate ; 
private:
    static constexpr char* defaultName="Unnamed Savings Account";
    static constexpr double defaultBal=0.0;    
    static constexpr double defaultSavingsAccInterestRate = 0.0; 
public:
    SavingsAccount(std::string s=defaultName,double b=defaultBal,double i=defaultSavingsAccInterestRate);
    virtual bool deposit(double a);
    ~SavingsAccount();

};

#endif // _SAVINGS_ACCOUNT_H_
