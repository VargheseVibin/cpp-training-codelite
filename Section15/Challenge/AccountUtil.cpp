#include "AcccountUtil.h"
#include "Account.h"
#include "SavingsAccount.h"
#include <vector>
#include <string>


//Utilitiy Helper Functions for Account class
void display(const std::vector<Account> &accounts) {
    std::cout << "\n-------------------------Display Accounts--------------------------------" << std::endl ; 
    for (const auto &acc:accounts) 
        std::cout << acc ;
}
void withdraw(std::vector<Account> &accounts, double amount) {
    std::cout << "\n-------------------------Withdraw Accounts-------------------------------" << std::endl ; 
    for (auto &acc:accounts) {
        if (acc.withdraw(amount)) 
            std::cout << "Withdrew " << amount << " from " << acc ;
        else
            std::cout << "Failed Withdrawing " << amount << " from " << acc ;
    } 
}
void deposit(std::vector<Account> &accounts, double amount)  {
    std::cout << "\n-------------------------Deposit Accounts-------------------------------" << std::endl ; 
    for (auto &acc:accounts) {
        if (acc.deposit(amount)) 
            std::cout << "Deposited " << amount << "into " << acc ;
        else
            std::cout << "Failed depositing " << amount << "into " << acc ;
    }
}


//Utilitiy Helper Functions for SavingsAccount class
void display(const std::vector<SavingsAccount> &accounts) {
    std::cout << "\n---------------------Display Savings Accounts---------------------------" << std::endl ; 
    for (const auto &acc:accounts) 
        std::cout << acc ;
}

void withdraw(std::vector<SavingsAccount> &accounts, double amount) {
    std::cout << "\n--------------------Withdraw Savings Accounts---------------------------" << std::endl ; 
    for (auto &acc:accounts) {
        if (acc.withdraw(amount)) 
            std::cout << "Withdrew " << amount << " from " << acc ;
        else
            std::cout << "Failed Withdrawing " << amount << " from " << acc ;
    }
} 
void deposit(std::vector<SavingsAccount> &accounts, double amount) {
    std::cout << "\n--------------------Deposit Savings Accounts---------------------------" << std::endl ; 
    for (auto &acc:accounts) {
        if (acc.deposit(amount)) 
            std::cout << "Deposited " << amount << " into " << acc ;
        else
            std::cout << "Failed depositing " << amount <<  "into " << acc ;
    }
}
