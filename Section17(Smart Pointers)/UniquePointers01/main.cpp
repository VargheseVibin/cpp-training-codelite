#include <iostream>
#include <memory>
#include <Vector>


class Test {
private:
    int data ; 
public:
    Test() 
        :data{0} {
            std::cout << "Test Consuctor with data(" << data << ")" << std::endl ; 
    }

    Test(int d) 
        :data{d} {
            std::cout << "Test Consuctor with data(" << data << ")" << std::endl ; 
    }

    int getData() const {
        return data ; 
    }

    ~Test() {
        std::cout << "Test Destrcutor with data(" << data << ")" << std::endl ; 
    }
    
    
};

//using namespace std;

int main() {

//    Test* t=new Test(10);
//    delete t ; 
//    
    std::cout << "Unique Pointers Examples" << std::endl ; 
//    std::cin.get() ; 
    std::unique_ptr<Test> t1 {new Test(20)} ; // Constrcutor & Destrcutor called without the Delete!
    std::unique_ptr<Test> t2 = std::make_unique<Test>(30);
    std::unique_ptr<Test> t3 ; 
//    t3=t1 ; // This copy not permitted, since this is Unique Ptr
    t3=std::move(t2);
    if(!t2)
        std::cout << "t2 now set as nullptr and t3 is:" << t3->getData()  << std::endl ; 
    return 0 ; 

}