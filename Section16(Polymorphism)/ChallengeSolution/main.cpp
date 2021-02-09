#include <iostream>
#include "Account.h"
#include "SavingsAccount.h"
#include "CheckingAccount.h"
#include "TrustAccount.h"
#include "AccountUtil.h"
#include <vector>

using namespace std;

int main() {

//    std::vector<Account> accounts;
//    accounts.push_back(Account{});
//    accounts.push_back(Account{"Larry"});
//    accounts.push_back(Account{"Moe",2500});
//    accounts.push_back(Account{"Curly",6500});
//    
//    display(accounts);
//    deposit(accounts,2500);
//    display(accounts);
//    withdraw(accounts,5500);
//    display(accounts);
//    
//    std::vector<SavingsAccount> sAccounts;
//    sAccounts.push_back(SavingsAccount{});
//    sAccounts.push_back(SavingsAccount{"Jon Stewart"});
//    sAccounts.push_back(SavingsAccount{"John Oliver",1500}"John Oliver",1500};; 
//    sAccounts.push_back(SavingsAccount{"Stephen Colbert",4000,2.6});
//
//    display(sAccounts);
//    deposit(sAccounts,1500);
//    display(sAccounts);
//    withdraw(sAccounts,3200);
//    display(sAccounts);
//    
//    std::vector<CheckingAccount> cAccounts ; 
//    cAccounts.push_back(CheckingAccount{});
//    cAccounts.push_back(CheckingAccount{"Chris Nolan"});
//    cAccounts.push_back(CheckingAccount{"Quentin Tarantino",200});
//    cAccounts.push_back(CheckingAccount{"Peter Jackson",600});
//    
//    display(cAccounts);
//    deposit(cAccounts,100);
//    display(cAccounts);
//    withdraw(cAccounts,50);
//    display(cAccounts);    
//    withdraw(cAccounts,250);
//    display(cAccounts);
//    
//    std::vector<TrustAccount> tAccounts;
//    tAccounts.push_back(TrustAccount{});
//    tAccounts.push_back(TrustAccount{"Hart"});
//    tAccounts.push_back(TrustAccount{"Chappelle",240});
//    tAccounts.push_back(TrustAccount{"Seinfeld",800});
//    
//    display(tAccounts);
//    deposit(tAccounts,150);
//    display(tAccounts);
//    withdraw(tAccounts,250);
//    display(tAccounts);
//    withdraw(tAccounts,20);
//    withdraw(tAccounts,20);
//    withdraw(tAccounts,20);
//    withdraw(tAccounts,20);
//    display(tAccounts);
//    deposit(tAccounts,5500);
//    display(tAccounts);
//    CheckingAccount a=CheckingAccount("Vibin",100);
//    a.withdraw(20);
//    a.deposit(200);
//    std::cout << a << std::endl ; 
//    
    
    Account* p1=new CheckingAccount("Larry",200 ); 
    Account* p2=new SavingsAccount("John Oliver",1500);
    Account* p3=new TrustAccount("Chappelle",6540);
    Account* p4=new TrustAccount("Seinfeld",2500);
    Account* p5=new SavingsAccount("Seth Meyers",1800); 
    
    std::vector<Account*> accounts {p1,p2,p3,p4,p5} ; 
    
    display(accounts);
    deposit(accounts,200);
    display(accounts);
    withdraw(accounts,500);
    display(accounts);
    withdraw(accounts,400);
    display(accounts);
    withdraw(accounts,300);
    display(accounts);    
    withdraw(accounts,200);
    display(accounts);
    
    delete p1 ; 
    delete p2 ; 
    delete p3 ; 
    delete p4 ; 
    delete p5 ; 
    
    return 0;
}