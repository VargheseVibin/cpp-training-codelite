#include <iostream>

using namespace std;

class Shallow {
private:
    int *data ;
public: 
    void setData (int d) { *data = d ;}
    int getData () { return *data ; }
    //Constructor
    Shallow(int d) ;
    //Copy Constructor
    Shallow(const Shallow &source);
    //Destrcutor
    ~Shallow();
};


Shallow::Shallow(int d) {
    data = new int ; 
    *data = d ; 
    cout << "Constructor Called!" << endl ; 
}

Shallow::Shallow(const Shallow &source) 
    :data(source.data) { //just copying the address ptr points to hence "Shallow"
        cout << "Copy Constructor -- (Shallow Copy) called!" << endl ;;
    }

Shallow::~Shallow() {
    delete data ;
    cout << "Destructor Called!" << endl ; 
}

void displayShallow (Shallow s) {
    cout << "Data in Shallow:" << s.getData() << endl ; 
}


int main() {
    Shallow obj1 {100};
//    Shallow obj1 = Shallow(100);
    displayShallow(obj1);
    
    Shallow obj2 {obj1};
//    Shallow obj2 = Shallow(obj1);
    obj2.setData(200);
    
    
    return 0;
}


