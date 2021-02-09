#ifndef _ACCOUNT_UTIL_H_
#define _ACCOUNT_UTIL_H_
#include "Account.h"
#include "CheckingAccount.h"
#include "SavingsAccount.h"
#include "TrustAccount.h"
#include "AccountUtil.h"
#include "I_Printable.h"
#include <vector>

//Utilitiy Helper Functions for Account Base Class Pointer
void display(const std::vector<Account*> accounts) ;
void withdraw(std::vector<Account*> accounts, double amount) ; 
void deposit(std::vector<Account*> accounts, double amount) ; 

#endif // _ACCOUNT_UTIL_H_
