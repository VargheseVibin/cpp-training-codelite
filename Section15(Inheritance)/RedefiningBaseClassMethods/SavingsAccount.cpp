#include "SavingsAccount.h"
#include "Account.h"
#include <iostream>


SavingsAccount::SavingsAccount() 
    :Account(0.0), intRate{0.0} {
//        std::cout << "Savings Acc (No Args) Default Constructor" << std::endl ; 
}

SavingsAccount::SavingsAccount(double b, double i) 
    :Account(b) , intRate{i}    {
//        std::cout << "Savings Acc Overloaded Constructor" << std::endl ; 
}

void SavingsAccount::deposit(double a) {
    a=a+(a*(intRate/100));
    Account::deposit(a);
}
SavingsAccount::~SavingsAccount()   {
//    std::cout << "Savings Account Desctructor" << std::endl ; 
}

std::ostream& operator<<(std::ostream& os, SavingsAccount &sa) {
    os << "Savings Account Balance:" << sa.balance  << ", Interest Rate:" << sa.intRate << std::endl ; 
    return os ; 
}

