#include <iostream>

using namespace std;


class Base {
private:
    int val ; 
public:
    Base() 
        :val{0} {
            cout << "Default Base Constructor" << endl ; 
    }
    
    Base(int x) 
        :val{x} {
            cout << "Overloaded Base Constructor" << endl ; 
    }
    
    ~Base() {
        cout << "Base Destructor" << endl ; 
    }
    
    Base(const Base &b) 
        :val{b.val} {
            cout << "Base Copy Constructor" << endl ; 
    }
    
    Base& operator=(const Base &b) {
        cout << "Overloaded Copy Assignment Operator" << endl ; 
        if(this==&b)
            return *this ; 
        else {
            val=b.val ; 
        }
        return *this ; 
    }
};


class Derived :public Base {
private:
    int dblVal;
public: 
    Derived() 
        :Base(), dblVal{0}  {
            cout << "Default Derived Constructor" << endl ; 
    }
    
    Derived(int x) 
        :Base(x), dblVal{2*x}   {
            cout << "Overloaded Derived Constructor" << endl  ; 
    }
    
    Derived(const Derived &d) 
        :Base(d),dblVal{d.dblVal}   {
        cout << "Derived Copy Constructor" << endl ; 
    }
    
    ~Derived() {
        cout << "Derived Desctructor" << endl ; 
    }
    
    Derived& operator=(const Derived &d) {
        cout << "Derived Copy Assignment" << endl ; 
        if (this==&d) 
            return *this ; 
        else {
            Base::operator=(d);
            dblVal=d.dblVal ; 
            return *this;
        }
    }    
};


int main() {
    cout << "Hello There!" << endl;
    
//    Base b(100);
//    Base b1(b) ; 
//    b=b1 ; 

    Derived d(100) ; 
    Derived d1(d) ; 
    d=d1 ;  
    return 0;
}