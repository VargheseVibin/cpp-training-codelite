#include <iostream>

class Account {
public:
    virtual void withdraw() {
        std::cout << "Account - Withdraw" << std::endl ; 
    }
    virtual ~Account() { } 
};

class SavingsAccount:public Account {
public:
    virtual void withdraw() override {
        std::cout << "SavingsAccount - Withdraw" << std::endl ; 
    }
    virtual ~SavingsAccount() { } 
};

class CheckingAccount:public Account {
public:
    virtual void withdraw() override {
        std::cout << "CheckingAccount - Withdraw" << std::endl ; 
    }
    virtual ~CheckingAccount() { } 
};

class TrustAccount:public Account {
public:
    virtual void withdraw() override {
        std::cout << "TrustAccount - Withdraw" << std::endl ; 
    }
    virtual ~TrustAccount() { } 
};

void doWithdraw (Account& a) {
    a.withdraw();
}
using namespace std;

int main() {
    
    Account a;
    Account& ref1=a;
    ref1.withdraw();
    
    SavingsAccount s;
    Account& ref2=s;
    ref2.withdraw();
    
    Account a1;
    SavingsAccount s1;
    CheckingAccount c1;
    TrustAccount t1 ; 
    
    doWithdraw(a1);
    doWithdraw(s1);
    doWithdraw(c1);
    doWithdraw(t1);
    
    return 0;
}