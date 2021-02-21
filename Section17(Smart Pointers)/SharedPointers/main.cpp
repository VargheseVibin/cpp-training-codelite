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

void func(std::shared_ptr<Test> p) {
    std::cout << "Use Count:" << p.use_count() << std::endl ; 
}

int main() {
    
    // use_count – the number of shared_ptr objects
    // managing the heap object
   

   
//    std::shared_ptr<int> p1 {new int {100} };
//    std::cout << "Use count: "<< p1.use_count () << std::endl; 		// 1
//   
//    std::shared_ptr<int> p2 { p1 };			// shared ownwership
//    std::cout << "Use count: "<< p1.use_count () << std::endl; 		// 2
//
//    p1.reset();	// decrement the use_count; p1 is nulled out
//    std::cout << "Use count: "<< p1.use_count() << std::endl; 		// 0 
//    std::cout << "Use count: "<< p2.use_count() << std::endl; 		// 1
    
//    std::cout << "\n==========================================" << std::endl;
//    std::shared_ptr<Test> ptr = std::make_shared<Test>(100);
//    func(ptr);
//    std::cout << "(1) Use count: " << ptr.use_count() << std::endl;
//    {
//        std::shared_ptr<Test> ptr1 = ptr;
//        std::cout << "(2) Use count: " << ptr.use_count() << std::endl;
//        {
//            std::shared_ptr<Test> ptr2 = ptr;
//            std::cout << "(3) Use count: " << ptr.use_count() << std::endl;      
//            ptr.reset();
//        }
//        std::cout << "(4) Use count: " << ptr.use_count() << std::endl;      
//        std::cout << "(4a) Use count: " << ptr1.use_count() << std::endl;      
//
//    }
//    std::cout << "(5) Use count: " << ptr.use_count() <<std:: endl;

    std::cout << "\n==========================================" << std::endl;
    std::shared_ptr<Account> acc1 = std::make_shared<TrustAccount>("Larry", 10000);
    std::shared_ptr<Account> acc2 = std::make_shared<CheckingAccount>("Moe", 5000);
    std::shared_ptr<Account> acc3 = std::make_shared<SavingsAccount>("Curly", 6000);
    
    std::vector<std::shared_ptr<Account>> accounts;
    accounts.push_back(acc1);
    accounts.push_back(acc2);
    accounts.push_back(acc3);
    
    for (const auto &acc: accounts) {
        std::cout << *acc << std::endl;
        std::cout << "Use count: " << acc.use_count() << std::endl;
    }
    
    std::cout << "==========================================" << std::endl;

    return 0 ; 
}