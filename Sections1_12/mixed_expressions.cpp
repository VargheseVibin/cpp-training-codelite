#include <iostream>

using namespace  std;

int main() {
    int total {} ;
    double average {0.0} ;
    int num1 {}, num2 {}, num3 {} ;
    const int count {3};

    cout << "Enter the thre number3 4 19s.." ;

    cin >> num1 ; 
    cin >> num2 ; 
    cin >> num3 ; 

    total = num1+num2+num3; 
    average=static_cast<double>(total)/count;
    cout << "The 3 numbers were " << num1 << ',' << num2 << ',' << num3 << endl;
    cout << "Sum of the 3 numbers is " << total << " ; and their average is " << average << endl; 
    cout << endl ;
}
