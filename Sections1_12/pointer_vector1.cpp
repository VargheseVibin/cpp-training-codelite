#include <iostream>
#include <vector>

using namespace std ; 

void printVector (const vector <string> *const vec_ptr) {
    cout << "My car compamies are below:\n" ;
    for (auto carco:*vec_ptr) {
        cout << carco << endl ;
    }


}

int main () {
    vector <string> myCarCos {"BMW", "Porsche", "Tesla", "Ford", "Toyota"} ; 
    //vector <string> *vec_ptr {&myCarCos} ;

    printVector(&myCarCos) ;


    return 0 ;
}