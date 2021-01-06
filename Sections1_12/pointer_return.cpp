#include <iostream>

using namespace std ;

int *createArray(size_t size,int defVal) {
    int *storage_area {nullptr};
    storage_area = new int [size] ;
    for (size_t i=0 ; i<size ; ++i) {
        *(storage_area+i)=defVal;
    }
    return storage_area ;
}

void displayArray(const int* const myArray, size_t size) {
    cout << "Elements of the array are:" << endl;
    for (size_t i{0}; i<size;i++) 
        cout << myArray[i] << endl;
}
int main () {
    int *myArray {nullptr};
    size_t arraySize {0};
    int defaultValue;

    cout << "Size of array you wish to create:" ;
    cin >> arraySize ;
    cout << "\nDefault value for the array :" ;
    cin >> defaultValue ;

    myArray=createArray(arraySize,defaultValue);
    cout << "New storage area allocated at " << myArray << endl ; 

    for (size_t i=0 ; i<arraySize ; ++i) {
        cout << "At mem location " << (myArray+i) << " value is :" << *(myArray+i) << endl ;
    }
    
    displayArray(myArray,arraySize);
    delete [] myArray ; 


    return 0 ;
}