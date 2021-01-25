#include <iostream>



class Base {
public:
    virtual void sayHello() const {
        std::cout << "Hello - from BASE Class" << std::endl ; 
    }
    virtual ~Base() {
        std::cout << "Base Desctructor" << std::endl ; 
    }
};

class Derived: public Base {
public:
    virtual void sayHello() const override {
        std::cout << "Hello - from DERIVED Class" << std::endl ; 
    }
    virtual ~Derived() {
        std::cout << "Derived Destrcutor" << std::endl ; 
    }
};


int main() {
    Base* p1=new Base() ;
    Base* p2=new Derived();
    p1->sayHello();
    p2->sayHello();
    
    delete p1 ;
    delete p2 ; 
    
    return 0;
}