#include <iostream>

using namespace std;

class Base {
private:
    int value ; 
public:
    Base() :value{0} {cout << "No Args Base Constructor" << endl ;}
    Base(int x) :value{x} {cout << "Overloaded Base Constructor" << endl ;}
    ~Base() {cout << "Base Destructor" << endl ; }
};

class Derived: public Base {
    using Base::Base;       //inhetis the Base Constructor upon a match
private:
    int doubleVal ; 
public:
    Derived() :doubleVal{0} { cout << "No Args Derived Constrcutor" << endl ; }
    Derived(int x) :doubleVal{2*x} { cout << "Derived Overloaded Constructor" << endl ; }
    ~Derived() { cout << "Derived Destructor" << endl ; }
    void displayVal() { cout << "Dervied Val is :" << doubleVal << endl ; }
};




int main() {
//    Base b ; 
    Base b(100) ; 
    Derived d(25);
    d.displayVal();



    return 0;
}