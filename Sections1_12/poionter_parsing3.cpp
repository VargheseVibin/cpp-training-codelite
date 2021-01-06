#include <iostream>
#include <vector>

using namespace std ;


void display(const vector <string> *const names) {
    // (*names).at(0) = "Funny";  //compiler error is vector is constant
    for (auto name:*names) {
        cout << "Names in List: " << name << endl ; 
    }
    // names=nullptr; //Compiler error when pointer is constant.
}

void display(int *array, int sentinel) {
    while(*array!=sentinel) {
        cout << "At " << array << "is:" << *array << "\t" ;
        array++;
    }
}

int main() {
    vector <string> myNames {"Larry", "Moe", "Curly"} ;
    display(&myNames);

    int scores[] {100,98,65,78,95,100,84,-1};
    display(scores,-1);
    
    return 0 ;
}