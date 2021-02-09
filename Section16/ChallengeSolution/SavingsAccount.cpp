#include "SavingsAccount.h"
#include "Account.h"
#include <string>
#include <iostream>

SavingsAccount::SavingsAccount(std::string s, double b, double i)
    :Account(s,b), savingsAccInterestRate{i}   {
//        std::cout << "Savings Account for " << s << " created!" << std::endl ; 
}

bool SavingsAccount::deposit(double a)  {
    a=(a+(a*(savingsAccInterestRate/100)));
    return Account::deposit(a);
}

bool SavingsAccount::withdraw(double a) {
    return Account::withdraw(a) ; 
}


void SavingsAccount::print(std::ostream& os) const {
    os << "[ Savings Account Name: " << this->accName << ", Balance:" << this->accBalance << ", Interest Rate:" << this->savingsAccInterestRate <<"% ]" << std::endl ; 
}


SavingsAccount::~SavingsAccount()
{
}

