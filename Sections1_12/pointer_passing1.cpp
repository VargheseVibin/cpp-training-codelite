#include <iostream>

using namespace std ;

void double_val(int *num_ptr) {
    *num_ptr*=2;
}

int main (){
    int num {5};
    int *num_ptr {&num} ;

    double_val(num_ptr);
    cout << "Num after doubling:" << *num_ptr << endl; 
    double_val(&num);
    cout << "Num after doubling:" << *num_ptr << endl ; 

}