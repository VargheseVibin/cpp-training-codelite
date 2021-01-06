#include <iostream>
#include <vector>

using namespace std;

int main() {
    int num {10};
    cout << "The value of num is:" << num << endl ;
    cout << "Address Location of num is:" << &num << endl ; 
    cout << "Szie of num is:" << sizeof(num) << endl ; 


    int *p;
    cout << "The Value of p is:" << p << endl;
    cout << "Address Location of p is:" << &p << endl ;
    cout << "Size of p is:" << sizeof p << endl ;
    p=nullptr;
    cout << "The Value of p is:" << p << endl;


    int *p1 {nullptr};
    double *p2 {nullptr};
    unsigned long long *p3 {nullptr};
    vector <string> *p4 {nullptr};
    string *p5 {nullptr};
    cout << "Size of p1 is:" << sizeof p1 << endl ; 
    cout << "Size of p2 is:" << sizeof p2 << endl ; 
    cout << "Size of p3 is:" << sizeof p3 << endl ; 
    cout << "Size of p4 is:" << sizeof p4 << endl ; 
    cout << "Size of p5 is:" << sizeof p5 << endl ; 

    int score {90};
    double temp {100.5};

    int *score_ptr {nullptr};
    score_ptr=&score;
    cout << "Value of score is :" << score << endl ; 
    cout << "Address of score is:" << &score << endl ;
    cout << "Value of score ptr is:" << score_ptr ;

    // score_ptr=&temp;    //Compiler Error - Type Mismatch 
    return 0 ;
}
