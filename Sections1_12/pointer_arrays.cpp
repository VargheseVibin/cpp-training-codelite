#include <iostream>
#include <vector>

using namespace std ;

int main(){
    int scores[] {98,96,98};

    cout << "Value of scores:" << scores << endl;
    int *scores_ptr {scores};
    cout << "scores_ptr:" << scores_ptr << endl ;
    
    cout << "\nArray Subscript Notation" << endl ; 
    cout << "scores[0]:" << scores[0] << endl;
    cout << "scores[1]:" << scores[1] << endl;
    cout << "scores[2]:" << scores[2] << endl;

    cout << "\nPointer Subscript Notation" << endl ; 
    cout << "scores_ptr[0]:" << scores_ptr[0] << endl ; 
    cout << "scores_ptr[1]:" << scores_ptr[1] << endl ; 
    cout << "scores_ptr[2]:" << scores_ptr[2] << endl ; 

    cout << "\nPointer Offset Notation" << endl ;
    cout << "*scores_ptr:" << *scores_ptr << endl ;
    cout << "*(scores_ptr+1):" << *(scores_ptr+1) << endl ; 
    cout << "*(scores_ptr+2):" << *(scores_ptr+2) << endl ; 

    cout << "\nArray Offset Notation" << endl ;
    cout << "*scores:" << *scores << endl ;
    cout << "*(scores+1):" << *(scores+1) << endl ;
    cout << "*(scores+2):" << *(scores+2) << endl ;

    cout << "\nPointer Address Locations" << endl ;
    cout << "scores_ptr:" << scores_ptr << endl ;
    cout << "(scores_ptr+1):" << (scores_ptr+1) << endl ; 
    cout << "(scores_ptr+2):" << (scores_ptr+2) << endl ; 

    return 0;
}