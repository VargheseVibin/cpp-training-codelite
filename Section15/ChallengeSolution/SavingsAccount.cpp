#include "SavingsAccount.h"
#include "Account.h"
#include <string>
#include <iostream>

SavingsAccount::SavingsAccount(std::string s, double b, double i)
    :Account(s,b), savingsAccInterestRate{i}   {
//        std::cout << "Savings Account for " << s << " created!" << std::endl ; 
}

bool SavingsAccount::deposit(double a) {
    a=(a+(a*(savingsAccInterestRate/100)));
    return Account::deposit(a);
        
}


std::ostream& operator<<(std::ostream& os, const SavingsAccount& sa) {
    os << "[ Savings Account Name: " << sa.accName << ", Balance:" << sa.accBalance << ", Interest Rate:" << sa.savingsAccInterestRate <<"% ]" << std::endl ; 
}

SavingsAccount::~SavingsAccount()
{
}

