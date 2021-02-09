#ifndef _ACCOUNT_UTIL_H_
#define _ACCOUNT_UTIL_H_
#include "AccountUtil.h"
#include "Account.h"
#include "SavingsAccount.h"
#include "CheckingAccount.h"
#include "TrustAccount.h"
#include <vector>

//Utilitiy Helper Functions for Account class
void display(const std::vector<Account> &accounts);
void withdraw(std::vector<Account> &accounts, double amount) ; 
void deposit(std::vector<Account> &accounts, double amount) ; 


//Utilitiy Helper Functions for SavingsAccount class
void display(const std::vector<SavingsAccount> &accounts);
void withdraw(std::vector<SavingsAccount> &accounts, double amount) ; 
void deposit(std::vector<SavingsAccount> &accounts, double amount) ; 


//Utilitiy Helper Functions for CheckingAccount class
void display(const std::vector<CheckingAccount> &accounts);
void withdraw(std::vector<CheckingAccount> &accounts, double amount) ; 
void deposit(std::vector<CheckingAccount> &accounts, double amount) ; 

//Utilitiy Helper Functions for TrustAccount class
void display(const std::vector<TrustAccount> &accounts);
void withdraw(std::vector<TrustAccount> &accounts, double amount) ; 
void deposit(std::vector<TrustAccount> &accounts, double amount) ; 


#endif // _ACCOUNT_UTIL_H_
