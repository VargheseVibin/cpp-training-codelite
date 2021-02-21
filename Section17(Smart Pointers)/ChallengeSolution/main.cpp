#include <iostream>
#include <memory>
#include <vector>

class Test {
private:
    int data ; 
public:
    Test() :data{0} {
        std::cout << "\tTest Constrcuctor(" << data << ")" << std::endl ; 
    }
    Test(int d) :data{d} {
        std::cout << "\tTest Constrcuctor(" << data << ")" << std::endl ; 
    }
    int get_data() const {
        return data ; 
    }
    ~Test() {
        std::cout << "\tTest Destructor(" << data << ")" << std::endl ; 
    }
};

std::unique_ptr<std::vector<std::shared_ptr<Test>>> make() {
    std::unique_ptr u_p = std::make_unique<std::vector<std::shared_ptr<Test>>>() ; 
    return u_p ; 
}

void fill (std::vector<std::shared_ptr<Test>>& vec_sp, int num) {
    int d ; 
    for (int i=0 ; i < num ; ++i ) {
        std::cout << "Enter Test Data Item[" << i << "]:" ; 
        std::cin >> d ; 
        std::shared_ptr<Test> t=std::make_shared<Test>(d) ;
        vec_sp.push_back(t) ; 
//        delete *t ; 
    }
}

void display(const std::vector<std::shared_ptr<Test>>& vec_sp) {
    int i = 1 ; 
    for (const auto &sp:vec_sp) {
        std::cout << "Test Data for item[" << i << "]:" << sp->get_data() << std::endl ; 
        ++i; 
    }
}

using namespace std;

int main() {
    std::unique_ptr<std::vector<std::shared_ptr<Test>>> vec_ptr ; 
    vec_ptr = make() ; 
    std::cout << "Enter the number of data points you want to enter:" ; 
    int num ;
    std::cin >> num ; 
    fill(*vec_ptr,num);
    display(*vec_ptr); 
    return 0;
}