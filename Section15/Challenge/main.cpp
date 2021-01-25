#include <iostream>
#include "Account.h"
#include "SavingsAccount.h"
#include "AcccountUtil.h"
#include <vector>

using namespace std;

int main() {
//    cout << "\n============Account Class================" << endl ; 
//    Account a1(1000.0);
//    cout << a1 << endl ; 
//    
//    a1.deposit(500);
//    cout << a1 << endl ; 
//    
//    a1.withdraw(1200);
//    cout << a1 << endl ; 
//    
//    a1.withdraw(5000);
//    cout << a1 << endl ; 
//    
//    
//    cout << "\n============Savings Account Class================" << endl ; 
//    SavingsAccount s1(1000.0,5.0);
//    cout << s1 << endl ; 
//    
//    s1.deposit(500);
//    cout << s1 << endl ; 
//    
//    s1.withdraw(1500);
//    cout << s1 << endl ; 
//    
//    s1.withdraw(15000);
//    cout << s1 << endl ;

    std::vector<Account> accounts;
    accounts.push_back(Account{});
    accounts.push_back(Account{"Larry"});
    accounts.push_back(Account{"Moe",2500});
    accounts.push_back(Account{"Curly",6500});
    
    display(accounts);
    deposit(accounts,2500);
    display(accounts);
    withdraw(accounts,5500);
    display(accounts);
    
    std::vector<SavingsAccount> sAccounts;
    sAccounts.push_back(SavingsAccount{});
    sAccounts.push_back(SavingsAccount{"Jon Stewart"});
    sAccounts.push_back(SavingsAccount{"John Oliver",1500});
    sAccounts.push_back(SavingsAccount{"Stephen Colbert",4000,2.6});

    display(sAccounts);
    deposit(sAccounts,1500);
    display(sAccounts);
    withdraw(sAccounts,3200);
    display(sAccounts);
    
    return 0;
}