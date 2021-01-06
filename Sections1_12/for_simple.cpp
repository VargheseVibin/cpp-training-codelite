#include <iostream>
#include <vector>
using namespace std;

int main () {
    // for (int i{0};i <= 20;i++) {
    //     if (i%2 == 0) {
    //         cout << i << " is an even number" << endl ;
    //     }
    //     else {
    //         cout << i << " is an odd number " << endl ;
    //     }
    // }

    // for (int i{1},j{5}; i<11 ; ++i,++j ) {
    //     cout << i << '*' << j << " is:" << i*j <<endl ; 
    // }

    // for (int i{0};i<101;i+=10) {
    //     cout << "Incerements at 10 steps.. " << i << endl;
    // }

    // for (int i{1};i<101;++i) {
    //     cout << i ; 
    //     if (i%10 == 0) 
    //         cout << "\n";
    //     else 
    //         cout << "\t";
    // };

    // for (int i{1};i<101;++i) {
    //     // cout << i ; 
    //     // cout << ((i%10==0) ? "\n":"\t");
    //     cout << i << ((i%10==0) ? "\n":"\t");
    // };

    vector <int> nums {10,20,30,40,50} ;
    for (unsigned i{0};i<nums.size();++i) {
        cout << nums.at(i) << endl ;
    }



    return 0 ;

}