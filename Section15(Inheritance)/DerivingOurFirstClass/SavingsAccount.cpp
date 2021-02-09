#include "SavingsAccount.h"
#include <iostream>

SavingsAccount::SavingsAccount()
    {

}

SavingsAccount::~SavingsAccount()
{
}


void SavingsAccount::withdraw(double amount) {
    std::cout << "Withdraw(Saving Account) invoked with amt:" << amount << std::endl ;
}

void SavingsAccount::deposit(double amount) {
    std::cout << "Deposit(Savings Account) invoked with amt:" << amount << std::endl ; 
}



