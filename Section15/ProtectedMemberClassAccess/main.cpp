#include <iostream>

using namespace std;

class Base {
public:
    int a;
    void displayAll()  {
        cout << "A,B,C are:" << a << "," << b << "," << c << std::endl ; 
    }
protected:
    int b;
private:
    int c;
    
};

class Derived: public Base {
public:
    void accessBaseMems() {
        a=100;      //ok
        b=200;      //ok
//        c=300;      //error;
    }
    
};

int main() {
    Base base ; 
    base.a=100;     //ok
//    base.b=200;     //error
//    base.c=200;     //error
    base.displayAll();
    
    Derived d;
    d.a=100;        //ok
    d.accessBaseMems();
    d.displayAll();
//    d.b=200;        //error
//    d.c=300;        //error
    
    return 0;
}