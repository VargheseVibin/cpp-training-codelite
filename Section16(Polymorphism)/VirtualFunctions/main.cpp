#include <iostream>
#include <vector>

class Account {
public:
    virtual void withdraw() {
        std::cout << "In Account class - Withdraw" << std::endl ; 
    }
    virtual ~Account() {
        
    }
};

class SavingsAcccount: public Account {
public:
    virtual void withdraw() {
        std::cout << "In SavingsAcccount class - Withdraw" << std::endl ; 
    }
    virtual ~SavingsAcccount() {
        
    }
};

class CheckingAccount: public Account {
public:
    virtual void withdraw() {
        std::cout << "In CheckingAccount class - Withdraw" << std::endl ; 
    }
    virtual ~CheckingAccount() {
        
    }
};

class TrustAccount: public Account {
public:
    virtual void withdraw() {
        std::cout << "In TrustAccount class - Withdraw" << std::endl ; 
    }
    virtual ~TrustAccount() {
        
    }
};




int main() {
    
    std::cout << "\n--------------Pointers------------------\n";
    Account* p1=new Account();
    Account* p2=new SavingsAcccount();
    Account* p3=new CheckingAccount();
    Account* p4=new TrustAccount();
    
    p1->withdraw();
    p2->withdraw();
    p3->withdraw();
    p4->withdraw();
    
    std::cout << "\n--------------Arrays------------------\n";
    Account* array[]  {p1,p2,p3,p4};
    for (size_t i {0};i<4;++i)
        array[i]->withdraw();
        
    
    std::cout << "\n--------------Vectors------------------\n";
    std::vector <Account*> accounts {p1,p2,p3,p4};
    for (auto acc_ptr:accounts) 
        acc_ptr->withdraw();
        
    std::cout << "\n--------------Vectors (1)----------------\n";
    accounts.push_back(p4);
    accounts.push_back(p4);
    accounts.push_back(p4);
    accounts.push_back(p4);
    for (auto acc_ptr:accounts) 
        acc_ptr->withdraw();
        
        
    delete p1;
    delete p2;
    delete p3;
    delete p4;
        
    return 0;
}