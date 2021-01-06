#include <iostream>
#include <vector>
#include <string>

using namespace std ;

int main () {

    cout << "Accept the string to be made a pyramid:"  ;
    string baseStr {};
    cin >> baseStr ;
    cout << "String to create a pyramid:" << baseStr ;

    
    //vector <vector<char>> pyramid {};
    //return 0 ;
    unsigned baseStrLen = baseStr.length();
    unsigned cols = (baseStrLen+baseStrLen-1);
    char pyramid [baseStrLen-1][cols-1] {};

    // for (unsigned i {baseStrLen-1};i>=0;i--) { //cols
    //     unsigned k{};
    //     for (unsigned j{baseStrLen-1-i};j<=(baseStrLen-1);j++) { //rows
    //         pyramid[j][i]=baseStr.at(k);
    //         ++k;
    //     }
    // }

    cout << "The Final Pyramid is as below" << endl ;
    for (unsigned i{};i<=baseStrLen-1;i++) {
        for (unsigned j{}; j<=cols-1;j++) {
            cout << pyramid[i][j] << " " ;
        }
        cout << endl ; 
    }


}