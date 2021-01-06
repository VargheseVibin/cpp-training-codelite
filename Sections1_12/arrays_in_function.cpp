#include <iostream>

using namespace std ; 

void print_array (const int arr[],size_t size);
void set_array (int arr[], size_t size); 


void print_array (const int arr[],size_t size) {
    cout << "Elements in the array are.. " << endl ;
    // arr[0]=101; //bug ; cant do this, iis array is passes as const
    for (size_t i{0} ; i < size ; ++i) {
        cout << arr[i] << "\t" ;
    }
    cout << endl ; 
}

void set_array (int arr[], size_t size, int val) {
    for (size_t i{0} ; i < size ; i++) {
        arr[i]=val;
    }
}


int main () {
    int myScores [] { 100,98,91,82,97 };

    print_array(myScores,5) ;
    set_array(myScores,5,100) ;
    print_array(myScores,5) ;

    cout << endl;

    return 0 ;

}