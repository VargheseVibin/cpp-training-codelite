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

void Account::print(std::ostream& os) const {
    os << "[ Account Name: " << this->accName << ", Balance:" << this->accBalance << " ]" << std::endl ;     
}


Account::~Account()
{
}

