#include <iostream>

class IPrintable {
friend std::ostream& operator<<(std::ostream& os, IPrintable& ip) ; 
public:
    virtual void print(std::ostream& os) const = 0 ;
    virtual ~IPrintable() { } 
};

std::ostream& operator<<(std::ostream& os, IPrintable& ip)  {
    ip.print(os);
    return os ; 
}

class Account:public IPrintable {
public:
    virtual void withdraw(double a) {
        std::cout << "In Account::Withdraw" << std::endl ; 
    }
    virtual void print(std::ostream &os) const override {
        os << "Account::Display" << std::endl ; 
    }
    virtual ~Account() { } 
};

class SavingsAcccount:public Account {
public:
    virtual void withdraw(double a) {
        std::cout << "In SavingsAcccount::Withdraw" << std::endl ; 
    }
    virtual void print(std::ostream &os) const override {
        os << "SavingsAcccount::Display" << std::endl ; 
    }
    virtual ~SavingsAcccount() { } 
};

class CheckingAcccount:public Account {
public:
    virtual void withdraw(double a) {
        std::cout << "In CheckingAcccount::Withdraw" << std::endl ; 
    }
    virtual void print(std::ostream &os) const override {
        os << "CheckingAcccount::Display" << std::endl ; 
    }
    virtual ~CheckingAcccount() { } 
};

class TrustAcccount:public Account {
public:
    virtual void withdraw(double a) {
        std::cout << "In TrustAcccount::Withdraw" << std::endl ; 
    }
    virtual void print(std::ostream &os) const override {
        os << "TrustAcccount::Display" << std::endl ; 
    }
    virtual ~TrustAcccount() { } 
};


class Dog: public IPrintable {
public:
    virtual void print(std::ostream& os) const override {
        os << "Woof Woof!!" << std::endl ; 
    }
    virtual ~Dog() { } 
};


void display(const IPrintable& ip) {
    std::cout << ip << std::endl ; 
}

using namespace std;

int main() {
    Account a ; 
    SavingsAcccount s;
    CheckingAcccount c ; 
    TrustAcccount t ;
    Dog d;
    std::cout << a ; 
    std::cout << s ; 
    std::cout << c ; 
    std::cout << t ; 
    std::cout << d ; 
    Dog* d1=new Dog();
    display(*d1);

    
    return 0;
}