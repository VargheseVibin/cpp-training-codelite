#include <iostream>
#include <vector>

using namespace std;

int main () {
    int *int_ptr{nullptr};
    int_ptr = new int;
    cout << "int_ptr:" << int_ptr << endl ; 
    cout << "*int_ptr:" << *int_ptr << endl ; 
    delete int_ptr;

    double *double_ptr{nullptr};
    size_t size ;
    cout << "Enter the # of doubles you need to create memory for:" ;
    cin >>  size ;
    double_ptr=new double[size];
    cout << "double_ptr:"  << double_ptr << endl ;
    cout << "*double_ptr:"  << *double_ptr << endl << endl;
    delete double_ptr;



    return 0;

}