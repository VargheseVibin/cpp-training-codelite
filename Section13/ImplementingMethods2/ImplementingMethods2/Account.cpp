#include "Account.h"
#include <string>

void Account::setName (std::string s) {
    name=s;
}

std::string Account::getName() {
    return name; 
}

bool Account::deposit (double amt) {
    balance+=amt ; 
    return true;
}

bool Account::withdraw (double amt) {
    if (balance>=amt) {
        balance-=amt;
        return true ;
    }
    else 
        return false ; 
    
}


