#include <iostream>
#include <vector>

using namespace std ;

void printArray (const int *const arr, int sentinel) {
    cout << "Elements in the array are: ["  ; 
    size_t i{0};
    while (arr[i]!=sentinel) 
        cout << arr[i++] << " ";
    cout << "]" << endl ; 
}

int * createIntArr(const size_t sz, const int iv) {
    int *newArr = new int [sz] ;
    for (size_t i {0};i<sz;++i) {
        newArr[i]=iv;
        *(newArr+i)=iv;
    }
    return newArr;
}

int main () {

    int array [] {1,2,3,4,5,6,7,8,-1};
    printArray(array,-1);

    size_t arrSize {0};
    int arrInitVal {};
    cout << "Enter the size of integer array you need:" ; 
    cin >> arrSize ;
    cout << "Enter the value, you wish to initialize the array with:" ;
    cin >> arrInitVal ;
    int *myArray=createIntArr(arrSize,arrInitVal);
    cout << "Array elements after init" << endl ; 
    for (size_t i{0};i<arrSize;++i) 
        cout << "Value at address " << (myArray+i) << " is:" << myArray[i] << endl;

    delete[] myArray ;
    cout << "Array elements after DELETE" << endl ; 
    for (size_t i{0};i<arrSize;++i) 
        cout << "Value at address " << (myArray+i) << " is:" << myArray[i] << endl;
    return  0 ; 


}