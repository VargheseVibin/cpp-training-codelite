#include <iostream>

using namespace std;

class Base {
private:
    int val ;
public:
    Base() :val{0} { cout << "No Args Base COnstrcutor" << endl ; }
    Base(int x) :val{x} { cout << "Overloaded Base COnstrcutor" << endl ; }
    ~Base() {cout << "Base Destructor" << endl ; }
    void dispVal() { cout << "Val is :" << val << endl ; }
};

class Derived :public Base {
private:
    int doubleVal  ; 
public:
    Derived() :Base(),doubleVal{0} { cout << "No Args Derived Constructor" << endl ; }
    Derived(int x) :Base(x), doubleVal{2*x} { cout << "Overloaded Dervied Constrcutor" << endl ; } 
    ~Derived() { cout << "Derived Desctructor" << endl ; }
    void displayDoubleVal() { 
        dispVal();
        cout << "Double Val is:" << doubleVal << endl  ;
        
    }
};


int main() {
    cout << "Hello There!" << endl;
    
    
    Derived d(200);
    d.displayDoubleVal();
    
    return 0;
}