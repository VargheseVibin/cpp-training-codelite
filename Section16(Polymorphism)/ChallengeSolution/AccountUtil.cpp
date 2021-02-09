#include "AccountUtil.h"

#include "Account.h"
#include "CheckingAccount.h"
#include "SavingsAccount.h"
#include "TrustAccount.h"
#include "AccountUtil.h"
#include "I_Printable.h"

//Utilitiy Helper Functions for Account Base Class Pointer
void display(const std::vector<Account*> accounts)  {
    std::cout << "\n---------------------Display Accounts---------------------------" << std::endl ; 
    for (auto &acc:accounts) 
        std::cout << *acc ;
}
void withdraw(std::vector<Account*> accounts, double amount)  {
    std::cout << "\n---------------------Withdraw From Accounts---------------------------" << std::endl ; 
    for (auto &acc:accounts)
        acc->withdraw(amount);
}
void deposit(std::vector<Account*> accounts, double amount) {
    std::cout << "\n---------------------Deposit Into Accounts---------------------------" << std::endl ; 
    for (auto &acc:accounts) 
        acc->deposit(amount);
}




