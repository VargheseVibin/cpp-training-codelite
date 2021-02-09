#include "Account.h"
#include <iostream>
#include <string>

Account::Account(std::string n, double b)  
    :accName{n},accBalance{b}  {
//        std::cout << "Account for " << n << " creaeted!" << std::endl ; 
}

bool Account::deposit(double a) {
    if  (a>=0) 
        accBalance+=a ; 
    else
        return false ;
    return true ; 
}

bool Account::withdraw(double a) {
    if ((accBalance-a)>=0) {
        accBalance-=a ; 
        return true ; 
    }
    else {
//        std::cout << "Sorry! No sufficient funds in your account..." << std::endl ; 
        return false ; 
    }
}

std::ostream& operator<<(std::ostream& os, const Account& a) {
    os << "[ Account Name: " << a.accName << ", Balance:" << a.accBalance << " ]" << std::endl ; 
}
Account::~Account()
{
}

