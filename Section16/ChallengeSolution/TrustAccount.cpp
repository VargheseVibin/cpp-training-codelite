#include "TrustAccount.h"
#include "Account.h"
#include <string>
#include <iostream>

TrustAccount::TrustAccount(std::string n, double a)
    :Account(n,a),withdrawlCount{0}   {
}


bool TrustAccount::withdraw(double a)  {
    if (withdrawlCount>=withdrawlLimit)
        return false;
    if (a<=(0.2*accBalance)) {
        if (Account::withdraw(a)) {
            ++withdrawlCount;
            return true ; 
        }
        else
            return false ; 
    }
    else
        return false ; 
}

bool TrustAccount::deposit(double a)  {
    if(a>=bonusThreshold)
        a+=bonusAmount ;
    return Account::deposit(a);
}

void TrustAccount::print(std::ostream& os) const {
    os << "[ Trust Account Name: " << this->accName << ", Balance:" << this->accBalance << ", Withdrawl-Count: "<< this->withdrawlCount << " ]" << std::endl ; 
}