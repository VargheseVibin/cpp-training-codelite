#include <iostream>
#include <vector>

using namespace std ;

int main () {

    int num {};
    vector <int> dataCart;
    cout << "How many data items do you wish to enter..:"  ;
    cin >> num ; 

    for (int i{1} ; i<=num ; i++ ) {
        int dataItem {};
        cout << "Enter your item..:"; 
        cin >> dataItem;
        dataCart.push_back(dataItem);
    }

    // for (auto data:dataCart) {
    //     cout << data << endl ; 
    // }
    cout << "Histogram of your data " << endl ; 
    for (auto data:dataCart) {
        for (int i{1}; i <= data; ++i) {
            cout << ((i%5==0)?"+":"-");
        };
        cout << endl ;
    }
}
