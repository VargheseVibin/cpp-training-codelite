#include <iostream>
#include <vector>

using namespace std;

int main () {

    int i{200};
    int &j{i};

    cout << "\ni=" << i ;
    cout << "\n&i=" << &i;
    cout << "\nj=" << j;
    cout << "\n&j=" << &j ;

    j=300;
    cout << "\n\nAfter j=300" ;
    cout << "\ni=" << i ;
    cout << "\n&i=" << &i;
    cout << "\nj=" << j;
    cout << "\n&j=" << &j ;

    vector <string> myNames {"Larry", "Moe" ,"Curly"} ;

    for (auto name:myNames) 
        name="Funny";
    cout << "\n\nWithout reference" << endl ;
    for (auto name:myNames) 
        cout << name << "\t" ;
    cout << "\n" ; 
    for (auto &name:myNames)
        name="Funny";
    cout << "\n\nWith reference" << endl ;
    for (auto const &name:myNames) 
        cout << name << "\t";

    return 0 ;
}