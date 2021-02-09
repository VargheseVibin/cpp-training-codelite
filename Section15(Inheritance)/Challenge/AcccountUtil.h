#ifndef _ACCOUNT_UTIL_H_
#define _ACCOUNT_UTIL_H_
#include "AcccountUtil.h"
#include "Account.h"
#include "SavingsAccount.h"
#include <vector>

//Utilitiy Helper Functions for Account class
void display(const std::vector<Account> &accounts);
void withdraw(std::vector<Account> &accounts, double amount) ; 
void deposit(std::vector<Account> &accounts, double amount) ; 


//Utilitiy Helper Functions for SavingsAccount class
void display(const std::vector<SavingsAccount> &accounts);
void withdraw(std::vector<SavingsAccount> &accounts, double amount) ; 
void deposit(std::vector<SavingsAccount> &accounts, double amount) ; 

#endif // _ACCOUNT_UTIL_H_
