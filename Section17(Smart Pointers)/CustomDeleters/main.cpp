#include <iostream>
#include <memory>

class Test {
private:
    int data ; 
public:
    Test(): data{0} { std::cout << "\t Test Constrcuctor(" << data << ")" << std::endl ;  } 
    Test(int d): data{d} { std::cout << "\t Test Constrcuctor(" << data << ")" << std::endl ; } 
    int get_data() const { return data ; } 
    ~Test() { std::cout << "\t Test Destrcutor(" << data << ")" << std::endl  ; } 
};

void my_deleter(Test* ptr) {
    std::cout << "\t Using my custom deleter Function" << std::endl ; 
    delete ptr ; 
}

using namespace std;

int main() {
    cout << "Hello There!" << endl;
    
    {
        //Using a Fucntion
        std::shared_ptr<Test> ptr1 { new Test{100} , my_deleter } ; 
    }
    
    std::cout  << "=========================================" << std::endl ;
    //Using a Lambda Function
    std::shared_ptr<Test> ptr2 (new Test {200} , 
        [] (Test* ptr) {
            std::cout << "\t Using my custom Lamda Function Deleter" << std::endl ; 
            delete ptr ; 
        }
    );
    
    return 0;
}