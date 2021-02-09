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

bool CheckingAccount::withdraw(double a) {
    a+=withdrawlFees;
    return Account::withdraw(a);
}

std::ostream& operator<<(std::ostream& os, CheckingAccount& ca) {
    os << "[ Checking Account Name: " << ca.accName << ", Balance:" << ca.accBalance << " ]" << std::endl ; 
}
