#include <iostream>
#include <memory>
#include <Vector>
#include "Account.h"
#include "SavingsAccount.h"
#include "CheckingAccount.h"
#include "TrustAccount.h"
#include "I_Printable.h"

class Test {
private:
    int data ; 
public:
    Test() 
        :data{0} {
            std::cout << "Test Consuctor with data(" << data << ")" << std::endl ; 
    }

    Test(int d) 
        :data{d} {
            std::cout << "Test Consuctor with data(" << data << ")" << std::endl ; 
    }

    int getData() const {
        return data ; 
    }

    ~Test() {
        std::cout << "Test Destrcutor with data(" << data << ")" << std::endl ; 
    }
    
    
};

using namespace std;

int main() {

//    Test* t=new Test(10);
//    delete t ; 
//    
    std::cout << "Unique Pointers Examples" << std::endl ; 
//    std::unique_ptr<Test> t1 {new Test(20)} ; // Constrcutor & Destrcutor called without the Delete!
//    std::unique_ptr<Test> t2 = std::make_unique<Test>(30);
//    std::unique_ptr<Test> t3 ; 
////    t3=t1 ;  //This copy not permitted, since this is Unique Ptr
//    t3=std::move(t2);
//    if(!t2)
//        std::cout << "t2 now set as nullptr and t3 is:" << t3->getData()  << std::endl ; 

    std::unique_ptr<Account> a1= std::make_unique<CheckingAccount>("Martin Luther King", 2500.0);
    std::cout << *a1 << std::endl ; 
    a1->deposit(500.0);
    std::cout << *a1 << std::endl ; 
    
    std::vector<std::unique_ptr<Account>> accounts; 
    accounts.push_back(std::make_unique<CheckingAccount>("Oliver, J", 15000.0));
    accounts.push_back(std::make_unique<CheckingAccount>("Stewart, J", 20000.0));
    accounts.push_back(std::make_unique<CheckingAccount>("O'Brien, C", 18000.0));

//    for(auto acc:accounts) == won't work, since this involves a copy - Hence needs to be by reference.
    for(const auto &acc:accounts)
        std::cout << *acc  ; 

//    std::unique_ptr<Account> a1=make_unique<CheckingAccount>("Martin Luther King", 1500.0);
//    std::cout << *a1  ; 
//    a1->deposit(2000);
//    std::cout << *a1  ; 
//    
//    std::vector<std::unique_ptr<Account>> accounts ; 
//    accounts.push_back(make_unique<TrustAccount>("Don Lemon",5800));
//    accounts.push_back(make_unique<CheckingAccount>("Abbey Phillip",25000));
//    accounts.push_back(make_unique<SavingsAccount>("Anderson Cooper",28000));
//    
//    for (const auto &acc:accounts) 
//        std::cout << *acc ; 
//    
    return 0 ; 

}