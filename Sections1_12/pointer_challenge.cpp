#include <iostream>

using namespace std ;

void printArray(const int* const myArray, size_t size) {
    for (size_t i{0};i<size;++i) 
        cout << *(myArray+i) << "\t" ;
    cout << endl ; 
}

int * applyAll(const int* const array1, size_t arr1_size, const int* const array2, size_t arr2_size) {
    int *mergedArray = new int [arr1_size*arr2_size];
    size_t k{0};
    for (size_t j{0}; j<arr2_size;++j) {
        for (size_t i{0}; i<arr1_size;++i) {
            *(mergedArray+k)=array1[i]*array2[j];
            k++;
        }
    }
    return mergedArray;
}

int main() {

    // size_t arr1Size {0}, arr2Size {0} ; 
    int array1[] {1,2,3,4,5,6} ;
    int array2[] {10,20,30} ;

    cout << "Array1:" << endl ; 
    printArray(array1,6) ;
    cout << "Array1:" << endl ; 
    printArray(array2,3);

    int *mergedArray{applyAll(array1,6,array2,3)};
    cout << "Merged Array:" << endl ; 
    printArray(mergedArray,18);
    delete [] mergedArray ; 



        
    return 0 ; 
}