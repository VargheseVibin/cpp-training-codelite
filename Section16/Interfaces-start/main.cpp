#include <iostream>

class Account {
friend std::ostream& operator<<(std::ostream &os, Account &a) ; 
public:
    virtual void withdraw(double a) {
        std::cout << "In Account::Withdraw" << std::endl ; 
    }
    virtual ~Account() { } 
};

std::ostream& operator<<(std::ostream &os, Account &a) {
    os << "Account Display " << std::endl ; 
    return os ;
}

class SavingsAcccount:public Account {
friend std::ostream& operator<<(std::ostream &os, SavingsAcccount &a) ; 
public:
    virtual void withdraw(double a) {
        std::cout << "In SavingsAcccount::Withdraw" << std::endl ; 
    }
    virtual ~SavingsAcccount() { } 
};

std::ostream& operator<<(std::ostream &os, SavingsAcccount &a) {
    os << "SavingsAcccount Display " << std::endl ; 
    return os ;
}

class CheckingAcccount:public Account {
friend std::ostream& operator<<(std::ostream &os, CheckingAcccount &a) ; 
public:
    virtual void withdraw(double a) {
        std::cout << "In CheckingAcccount::Withdraw" << std::endl ; 
    }
    virtual ~CheckingAcccount() { } 
};

std::ostream& operator<<(std::ostream &os, CheckingAcccount &a) {
    os << "CheckingAcccount Display " << std::endl ; 
    return os ;
}

class TrustAcccount:public Account {
friend std::ostream& operator<<(std::ostream &os, TrustAcccount &a) ; 
public:
    virtual void withdraw(double a) {
        std::cout << "In TrustAcccount::Withdraw" << std::endl ; 
    }
    virtual ~TrustAcccount() { } 
};

std::ostream& operator<<(std::ostream &os, TrustAcccount &a) {
    os << "TrustAcccount Display " << std::endl  ;
    return os ; 
}

using namespace std;

int main() {
    Account a ; 
    SavingsAcccount s;
    CheckingAcccount c ; 
    TrustAcccount t ;
    std::cout << a ; 
    std::cout << s ; 
    std::cout << c ; 
    std::cout << t ; 
        
    
    return 0;
}