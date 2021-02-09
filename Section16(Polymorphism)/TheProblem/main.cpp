#include <iostream>

using namespace std;

class Base {
public:
    void sayHello() {
        std::cout << "Hello - This is from Base Class" << std::endl ; 
    }
};

class Derived : public Base {
public:
    void sayHello() {
        std::cout << "Hello - This is from Derived Class" << std::endl ; 
    }
};

void greet(Base b) {
    std::cout << "Greetings..." ; 
    b.sayHello();
}

int main() {

    Base b;
    b.sayHello();
    
    Derived d;
    d.sayHello();
    
    greet(b);
    greet(d);
    
    Base* ptr=new Derived();
    ptr->sayHello();
    
    delete ptr ; 
    
    return 0;
}