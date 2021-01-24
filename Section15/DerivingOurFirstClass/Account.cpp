#include "Account.h"
#include <iostream>

Account::Account()
    :balance{100.0}, name{"An Account"} {
        std::cout << "An account created!" << std::endl ; 
}

Account::~Account()
{
}

void Account::withdraw(double amount) {
    std::cout << "Withdraw invoked with amt:" << amount << std::endl ;
}

void Account::deposit(double amount) {
    std::cout << "Deposit invoked with amt:" << amount << std::endl ; 
}

