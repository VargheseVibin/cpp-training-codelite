#include <iostream>

using namespace std;

class Deep {
private:
    int *data ; 
public:
    int getData() { return *data ; }
    void setData(int d) { *data=d ; }
    Deep(int d);
    Deep(const Deep &source); 
    ~Deep();
};

Deep::Deep(int d) {
    data=new int;
    *data=d;
    cout << "Constructor Invoked!" << endl ; 
    
}

//Deep::Deep(const Deep &source) {
//    data=new int;
//    *data=*(source.data);
//    cout << "Copy Constructor --(DEEP COPY)-- Invoked" << endl ; 
//}

Deep::Deep(const Deep &source) 
    :Deep(*source.data) {   //copy the content the ptr address points to. Hence "Deep"
    cout << "Copy Constructor --(DEEP COPY)-- Invoked" << endl ; 
}

Deep::~Deep() {
    delete data ; 
    cout << "Deconstrctor invoked." << endl ; 
}

void displayData(Deep d) {
    cout << "Data for Deep:" << d.getData() << endl ; 
}

int main() {
    
    Deep obj1=Deep(100);
    displayData(obj1);
    
    Deep obj2=Deep(obj1);
    displayData(obj2);
    
    obj2.setData(200);
    displayData(obj2);
    displayData(obj1);
    
    return 0;
}