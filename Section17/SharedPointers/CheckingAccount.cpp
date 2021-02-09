#include "CheckingAccount.h"
#include "Account.h"
#include <string>
#include <iostream>

CheckingAccount::CheckingAccount(std::string n, double a)
    :Account(n,a) {
}

CheckingAccount::~CheckingAccount()
{
}

bool CheckingAccount::withdraw(double a)  {
    a+=withdrawlFees;
    return Account::withdraw(a);
}

bool CheckingAccount::deposit(double a) {
    return Account::deposit(a);
}

void CheckingAccount::print(std::ostream& os) const{
    os << "[ Checking Account Name: " << this->accName << ", Balance:" << this->accBalance << " ]" << std::endl ; 
}
