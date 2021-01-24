#include "Account.h"
#include <iostream>

Account::Account()
    :balance{0.0}   {
        std::cout << "Acc (No Args) Default Constructor" << std::endl ; 
}

Account::Account(double b) 
    :balance{b}     {
        std::cout << "Acc Overloaded Constructor" << std::endl ; 
}

Account::~Account() {
    std::cout << "Account Destrcutor" <<std::endl ; 
}

void Account::deposit(double a) {
    balance+=a;
}

void Account::withdraw(double a) {
    if(balance-a>=0.0) 
        balance-=a;
    else 
        std::cout  << "Sorry! Insufficient Funds in your account" << std::endl ;
}

std::ostream& operator <<(std::ostream& os, const Account &a) {
    os << "Account Balance is :" << a.balance << std::endl ; 
    return os ; 
}

