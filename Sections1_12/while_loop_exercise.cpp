#include <iostream>
#include <vector>
using namespace std;

int main() { 
    
    vector <int> vec {8,6,-100,8,7,-99,100,123,6};

    bool done {false} ;
    int count {0};
    //int i {0};
    unsigned i {0};
    while (!done) {
        ++i;
        if ((vec.at(i)==-99)||(i==vec.size()) )
            done=true;
    };
    count=i+1;
    
    cout << "Count of elemnts untill I hit -99 is :" << count << endl ; 


    return 0;
}